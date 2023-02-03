within HVAC.AirSideSystem;
model RoomWithFCU "A room with a FCU/RCU"
  parameter Modelica.SIunits.Time TimeZone(
    displayUnit="h")
                    "Time zone; e.g., Beijing is +8*3600"
                    annotation (Dialog(group="Location"));
  parameter Modelica.SIunits.Angle Lat(
    displayUnit="deg")
                      "Latitude"
                      annotation (Dialog(group="Location"));
  parameter Modelica.SIunits.Angle Lon(
    displayUnit="deg")
                      "Longitude"
                      annotation (Dialog(group="Location"));
  parameter Modelica.SIunits.Angle UpperAzi(
    displayUnit="deg")
    "Surface azimuth angle (north is zero, clockwise) of the upper surface"
    annotation (Dialog(group="Room geometry"));
  parameter Modelica.SIunits.Length RoomHeight
  "Room height"
  annotation (Dialog(group="Room geometry"));
  parameter Modelica.SIunits.Length HorizontalLength
  "Length of the upper and lower surface"
  annotation (Dialog(group="Room geometry"));
  parameter Modelica.SIunits.Length VerticalLength
  "Length of the left and right surface"
  annotation (Dialog(group="Room geometry"));
  parameter Boolean UpperFaceOutside
    "Does the upper surface face outside environment"
     annotation (Dialog(group="Room geometry"));
  parameter Boolean LowerFaceOutside
    "Does lower surface face outside environment"
     annotation (Dialog(group="Room geometry"));
  parameter Boolean LeftFaceOutside
    "Does left surface face outside environment"
     annotation (Dialog(group="Room geometry"));
  parameter Boolean RightFaceOutside
    "Does right surface face outside environment"
     annotation (Dialog(group="Room geometry"));
  parameter Real UpperSurfaceWWR=0.3
  "Upper surface window to wall ratio (WWR)"
  annotation (Dialog(group="Thermal property"));
  parameter Real LowerSurfaceWWR=0.3
  "Lower surface window to wall ratio (WWR)"
  annotation (Dialog(group="Thermal property"));
  parameter Real LeftSurfaceWWR=0.3
  "Left surface window to wall ratio (WWR)"
  annotation (Dialog(group="Thermal property"));
  parameter Real RightSurfaceWWR=0.3
  "Right surface window to wall ratio (WWR)"
  annotation (Dialog(group="Thermal property"));
  parameter Real UWin(unit="W/m2.K")
  "Thermal transmittance (U-value) of window"
  annotation (Dialog(group="Thermal property"));
  parameter Real UWall(unit="W/m2.K")
  "Thermal transmittance (U-value) of wall"
  annotation (Dialog(group="Thermal property"));
  parameter Modelica.SIunits.TransmissionCoefficient GWin
  "Total energy transmittance coefficient of window"
  annotation (Dialog(group="Thermal property"));
  parameter Real CWallPerArea(unit="J/K.m2")
  "Heat capacity of wall per unit wall area"
  annotation (Dialog(group="Thermal property"));
  parameter Modelica.SIunits.ThermodynamicTemperature InitTDryBulb(displayUnit="degC")
  "Initial indoor dry bulb air temperature"
  annotation (Dialog(group="Initial condition"));
  parameter Real InitRH(unit="1")
  "Initial indoor relative humidity"
  annotation (Dialog(group="Initial condition"));

  parameter Real FCU_nominal_air_m(displayUnit="kg/s")   "FCU nominal air mass flow rate"
  annotation (Dialog(group="FCU/RCU parameter"));
  parameter Real FCU_nominal_wat_m(displayUnit="kg/s")   "FCU nominal water mass flow rate"
  annotation (Dialog(group="FCU/RCU parameter"));
  parameter Modelica.SIunits.ThermalConductance  FCU_nominal_UA(displayUnit="W/K") "FCU nominal UA"
  annotation (Dialog(group="FCU/RCU parameter"));
  parameter Boolean UsePIControl=true "Use automatic PID control to control the water mass flow rate"
  annotation(Evaluate=true, HideResult=true, Dialog(group="FCU/RCU parameter"));
  parameter Real KpTi[2]={1,0.01}
    "Kp and Ti for the PI controller if UsePIControl is true"
  annotation (Dialog(enable=UsePIControl,  group="FCU/RCU parameter"));
  parameter Boolean IsHeating  "true is heating mode, false is cooling mode"
  annotation (Dialog(enable=UsePIControl, group="FCU/RCU parameter"));
  parameter Boolean EnableWatPort=false "Enable water port; if enabled, FCU coil water will be from external connected port"
  annotation(Evaluate=true, HideResult=true, Dialog(group="Model configuration"));
  parameter Boolean allowFlowReversal = true if EnableWatPort
    "= false to simplify equations, assuming, but not enforcing, no flow reversal for medium"
    annotation(Dialog(tab="Assumptions", enable=EnableWatPort), Evaluate=true);
  Room.RectangleRoom1EleRC rectangleRoom1EleRC(
    TimeZone=TimeZone,
    Lat=Lat,
    Lon=Lon,
    UpperAzi=UpperAzi,
    RoomHeight=RoomHeight,
    HorizontalLength=HorizontalLength,
    VerticalLength=VerticalLength,
    UpperFaceOutside=UpperFaceOutside,
    LowerFaceOutside=LowerFaceOutside,
    LeftFaceOutside=LeftFaceOutside,
    RightFaceOutside=RightFaceOutside,
    UpperSurfaceWWR=UpperSurfaceWWR,
    LowerSurfaceWWR=LowerSurfaceWWR,
    LeftSurfaceWWR=LeftSurfaceWWR,
    RightSurfaceWWR=RightSurfaceWWR,
    UWin=UWin,
    UWall=UWall,
    GWin=GWin,
    CWallPerArea=CWallPerArea,
    InitTDryBulb=InitTDryBulb,
    InitRH=InitRH,                             UseInputInfiltrationRate=true,
                                               nPorts=2)
    annotation (Placement(transformation(extent={{-42,24},{2,58}})));
  AirSideEquipment.FCU.FCUSingleCoil_m fCUSingleCoil_m(
    redeclare package Medium1 = Buildings.Media.Water,
    redeclare package Medium2 = Buildings.Media.Air,
    m1_flow_nominal=FCU_nominal_wat_m,
    m2_flow_nominal=FCU_nominal_air_m,
    dp_nominal_1=10000,
    dp_nominal_2=500,
    fcu_UA_nominal=FCU_nominal_UA,
    add_mover_power_to_medium=false)
    annotation (Placement(transformation(extent={{8,-38},{28,-18}})));

  Modelica.Blocks.Interfaces.RealInput FCU_airflow_ratio(
    final quantity="1",
    final unit="1") "FCU air flow ratio, 0-1"
    annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-90,110}),               iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-80,108})));

  Modelica.Blocks.Math.Gain gain_airflow1(k=FCU_nominal_air_m)
    annotation (Placement(transformation(extent={{-78,74},{-68,84}})));
  Modelica.Blocks.Interfaces.RealInput FCU_watflow_ratio(final quantity="1",
      final unit="1") if UsePIControl==false "FCU water flow ratio, 0-1" annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-76,110}), iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-60,108})));
  Modelica.Blocks.Math.Gain gain_watflow1(k=FCU_nominal_wat_m)
    if UsePIControl == false annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=270,
        origin={-60,90})));
  Buildings.Controls.Continuous.LimPID conPID(controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=KpTi[1],
    Ti=KpTi[2],
    reverseActing=IsHeating) if UsePIControl
    annotation (Placement(transformation(extent={{-66,-86},{-54,-74}})));
  Modelica.Blocks.Interfaces.RealInput IAT_SP(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") if UsePIControl
                        "Indoor air temperature setpoint" annotation (Placement(
        transformation(extent={{-10,-10},{10,10}}, origin={-62,110},
        rotation=270),
        iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-40,108})));
  Modelica.Blocks.Math.Gain gain_watflow2(k=FCU_nominal_wat_m) if UsePIControl
    annotation (Placement(transformation(extent={{-4,-4},{4,4}},
        rotation=0,
        origin={-38,-80})));
  Modelica.Blocks.Interfaces.RealInput WatTIn(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") if EnableWatPort == false
                        "Coil inlet water temperature" annotation (Placement(
        transformation(extent={{-10,-10},{10,10}}, origin={-48,110},
        rotation=270),
        iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-20,108})));
  Buildings.Fluid.Sources.Boundary_pT WatSou(
    redeclare package Medium = Buildings.Media.Water,
    use_T_in=true,
    nPorts=1) if EnableWatPort == false
    annotation (Placement(transformation(extent={{-86,-48},{-74,-36}})));
  Buildings.Fluid.Sources.Boundary_pT WatSin(redeclare package Medium =
        Buildings.Media.Water, nPorts=1) if EnableWatPort == false
                                         annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={62,-22})));
  Modelica.Fluid.Interfaces.FluidPort_a wat_port_a(
    redeclare final package Medium =
        Buildings.Media.Water,
    m_flow(min=if allowFlowReversal then -Modelica.Constants.inf else 0),
    h_outflow(start=Buildings.Media.Water.h_default, nominal=Buildings.Media.Water.h_default))
    if EnableWatPort
    "Fluid connector a (positive design flow direction is from port_a to port_b)"
    annotation (Placement(transformation(extent={{-110,-10},{-90,10}}),
        iconTransformation(extent={{-110,-10},{-90,10}})));
  Modelica.Fluid.Interfaces.FluidPort_b wat_port_b(
    redeclare final package Medium =
        Buildings.Media.Water,
    m_flow(max=if allowFlowReversal then +Modelica.Constants.inf else 0),
    h_outflow(start=Buildings.Media.Water.h_default, nominal=Buildings.Media.Water.h_default))
    if EnableWatPort
    "Fluid connector b (positive design flow direction is from port_a to port_b)"
    annotation (Placement(transformation(extent={{110,-10},{90,10}}),
        iconTransformation(extent={{110,-10},{90,10}})));
  Modelica.Blocks.Interfaces.RealInput OAT(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Outdoor air dry bulb temperature"
                                       annotation (Placement(transformation(
          extent={{-13,-13},{13,13}}, origin={-113,99}),
                                         iconTransformation(extent={{-115,93},{-100,
            108}})));
  Modelica.Blocks.Interfaces.RealInput OARH(
    min=0,
    max=1,
    unit="1")
    "Outdoor air relative humidity"         annotation (Placement(
        transformation(extent={{-13,-13},{13,13}}, origin={-113,81}),
                                                      iconTransformation(extent={{-115,73},
            {-100,88}})));
  Modelica.Blocks.Interfaces.RealInput SkyCoverTenths(min=0, max=10)
    "Opaque sky cover in tenths (0-10, 0 is clear sky, 10 is completely overcast)"
    annotation (Placement(transformation(extent={{-13,-13},{13,13}}, origin={-113,63}),
        iconTransformation(extent={{-115,53},{-100,68}})));
  Modelica.Blocks.Interfaces.RealInput SolDirNorm(final quantity="RadiantEnergyFluenceRate",
      final unit="W/m2")
    "Direct normal solar radiation per unit area" annotation (Placement(
        visible = true,transformation(origin={-113,45},    extent={{-13,-13},{
            13,13}},                                                                   rotation = 0),
                                                     iconTransformation(extent={{-115,33},
            {-100,48}},                                                                                       rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput nPeople
    "The number of people in the room, used to calculate sensible and latent heat gain"
    annotation (Placement(transformation(extent={{-12,-12},{12,12}}, origin={-112,-24}),
        iconTransformation(extent={{-115,-27},{-100,-12}})));
  Modelica.Blocks.Interfaces.RealInput EquipGain(final quantity="Power", final
      unit="W")     "Internal heat gain from equipment"
                                        annotation (Placement(
        transformation(extent={{-13,-13},{13,13}}, origin={-113,-45}),
                                                       iconTransformation(
          extent={{-115,-47},{-100,-32}})));
  Modelica.Blocks.Interfaces.RealInput SolDifHori(quantity="RadiantEnergyFluenceRate",
      unit="W/m2")
      "Diffuse horizontal solar radiation per unit area"
      annotation (
    Placement(visible = true,
    transformation(origin={-113,25},
    extent={{-13,-13},
            {13,13}},
            rotation = 0), iconTransformation(extent={{-115,13},
            {-100,28}},
            rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput InputInfiltration(final quantity="ACH",
      final unit="1")                             "Input infiltration rate"
      annotation (
    Placement(visible = true,
    transformation(origin={-113,-67},
    extent={{-13,-13},
            {13,13}},
            rotation = 0), iconTransformation(extent={{-115,-69},{-100,-54}},
            rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput IAT(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Indoor air dry bulb temperature"
    annotation (Placement(transformation(extent={{100,60},{120,80}}),
        iconTransformation(extent={{100,60},{120,80}})));
  Modelica.Blocks.Interfaces.RealOutput IARH(
    final quantity="1",
    final unit="1",
    displayUnit="1") "Indoor air relative humidity"
    annotation (Placement(transformation(extent={{100,30},{120,50}}),
        iconTransformation(extent={{100,40},{120,60}})));
  Modelica.Blocks.Interfaces.RealOutput FCU_WatMassFlow(
    final quantity="MassFlowRate",
    final unit="kg/s",
    displayUnit="kg/s") "FCU water mass flow rate" annotation (Placement(
        transformation(extent={{100,-30},{120,-10}}), iconTransformation(extent=
           {{100,-60},{120,-40}})));
  Modelica.Blocks.Interfaces.RealOutput FCU_WatTOut(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "FCU outlet water temperature" annotation (Placement(
        transformation(extent={{100,-50},{120,-30}}), iconTransformation(extent=
           {{100,-80},{120,-60}})));
  Modelica.Blocks.Sources.RealExpression fcu_wat_m(y=fCUSingleCoil_m.sen_medium1_m.m_flow)
    annotation (Placement(transformation(extent={{76,-26},{88,-12}})));
  Modelica.Blocks.Sources.RealExpression fcu_wat_Tout(y=fCUSingleCoil_m.sen_T_portb1.T)
    annotation (Placement(transformation(extent={{76,-46},{88,-32}})));
equation
  connect(gain_airflow1.y, fCUSingleCoil_m.m_flow_2) annotation (Line(points={{-67.5,
          79},{-14,79},{-14,-46},{18.2,-46},{18.2,-40}}, color={0,0,127}));
  connect(FCU_airflow_ratio, gain_airflow1.u)
    annotation (Line(points={{-90,110},{-90,79},{-79,79}}, color={0,0,127}));
  if UsePIControl==false then
    connect(FCU_watflow_ratio, gain_watflow1.u)
      annotation (Line(points={{-76,110},{-76,94.8},{-60,94.8}},
                                                      color={0,0,127}));
    connect(gain_watflow1.y, fCUSingleCoil_m.m_flow_1) annotation (Line(points={
            {-60,85.6},{-56,85.6},{-56,-4},{18.2,-4},{18.2,-16}}, color={0,0,127}));
  else
    connect(IAT_SP, conPID.u_s)
    annotation (Line(points={{-62,110},{-62,74},{-60,74},{-60,-70},{-74,-70},{-74,
          -80},{-67.2,-80}},                          color={0,0,127}));
    connect(rectangleRoom1EleRC.IAT, conPID.u_m) annotation (Line(points={{3,55},{
          8,55},{8,-10},{-16,-10},{-16,-92},{-60,-92},{-60,-87.2}},  color={0,0,
          127}));
    connect(conPID.y, gain_watflow2.u)
    annotation (Line(points={{-53.4,-80},{-42.8,-80}}, color={0,0,127}));
    connect(gain_watflow2.y, fCUSingleCoil_m.m_flow_1) annotation (Line(points={{-33.6,
          -80},{-28,-80},{-28,-48},{-30,-48},{-30,-4},{18.2,-4},{18.2,-16}},
        color={0,0,127}));
  end if;

  connect(fCUSingleCoil_m.port_b2, rectangleRoom1EleRC.RoomPorts[1])
    annotation (Line(points={{8,-34},{-4,-34},{-4,-12},{10,-12},{10,-6},{16,-6},
          {16,-2},{-16,-2},{-16,18},{-20.325,18},{-20.325,24.05}},
                          color={0,127,255}));
  connect(fCUSingleCoil_m.port_a2, rectangleRoom1EleRC.RoomPorts[2])
    annotation (Line(points={{28,-34},{32,-34},{32,-2},{-16,-2},{-16,18},{-17.275,
          18},{-17.275,24.05}},
                              color={0,127,255}));

  if EnableWatPort then
    connect(wat_port_a, fCUSingleCoil_m.port_a1) annotation (Line(points={{-100,0},
          {-58,0},{-58,-42},{-2,-42},{-2,-22},{8,-22}}, color={0,127,255}));
    connect(wat_port_b, fCUSingleCoil_m.port_b1) annotation (Line(points={{100,0},
          {48,0},{48,-22},{28,-22}}, color={0,127,255}));
  else
    connect(WatTIn, WatSou.T_in)
    annotation (Line(points={{-48,110},{-48,-6},{-84,-6},{-84,-32},{-86,-32},{-86,
          -36},{-87.2,-36},{-87.2,-39.6}},              color={0,0,127}));
    connect(WatSou.ports[1], fCUSingleCoil_m.port_a1) annotation (Line(points={{-74,
          -42},{-2,-42},{-2,-22},{8,-22}}, color={0,127,255}));
    connect(fCUSingleCoil_m.port_b1, WatSin.ports[1])
    annotation (Line(points={{28,-22},{56,-22}}, color={0,127,255}));
  end if;
  connect(OAT, rectangleRoom1EleRC.OAT) annotation (Line(points={{-113,99},{-78.5,
          99},{-78.5,56.8},{-43.4,56.8}}, color={0,0,127}));
  connect(OARH, rectangleRoom1EleRC.OARH) annotation (Line(points={{-113,81},{-92,
          81},{-92,54},{-50,54},{-50,51.6},{-43.4,51.6}}, color={0,0,127}));
  connect(SkyCoverTenths, rectangleRoom1EleRC.SkyCoverTenths) annotation (Line(
        points={{-113,63},{-54,63},{-54,46.6},{-43.4,46.6}}, color={0,0,127}));
  connect(SolDirNorm, rectangleRoom1EleRC.SolDirNorm) annotation (Line(points={{
          -113,45},{-50,45},{-50,41.4},{-43.4,41.4}}, color={0,0,127}));
  connect(SolDifHori, rectangleRoom1EleRC.SolDifHori) annotation (Line(points={{
          -113,25},{-50,25},{-50,36.2},{-43.4,36.2}}, color={0,0,127}));
  connect(nPeople, rectangleRoom1EleRC.nPeople) annotation (Line(points={{-112,-24},
          {-44,-24},{-44,20},{-42,20},{-42,28},{-43.4,28},{-43.4,31.2}}, color={
          0,0,127}));
  connect(EquipGain, rectangleRoom1EleRC.EquipGain) annotation (Line(points={{-113,
          -45},{-94,-45},{-94,-22},{-46,-22},{-46,22},{-43.4,22},{-43.4,25.8}},
        color={0,0,127}));
  connect(InputInfiltration, rectangleRoom1EleRC.InputInfiltration) annotation (
     Line(points={{-113,-67},{-62,-67},{-62,22},{-40,22},{-40,18},{-35.2,18},{
          -35.2,22.8}},                                 color={0,0,127}));
  connect(rectangleRoom1EleRC.IAT, IAT) annotation (Line(points={{3,55},{94,55},
          {94,70},{110,70}}, color={0,0,127}));
  connect(rectangleRoom1EleRC.IRH, IARH) annotation (Line(points={{3,49},{94,49},
          {94,40},{110,40}}, color={0,0,127}));
  connect(fcu_wat_m.y, FCU_WatMassFlow) annotation (Line(points={{88.6,-19},{96,
          -19},{96,-20},{110,-20}}, color={0,0,127}));
  connect(fcu_wat_Tout.y, FCU_WatTOut) annotation (Line(points={{88.6,-39},{96,-39},
          {96,-40},{110,-40}}, color={0,0,127}));
    annotation (
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics={  Rectangle(lineColor = {0, 0, 127}, fillColor = {255, 255, 255},
            fillPattern =                                                                                                                                                              FillPattern.Solid,
            lineThickness =                                                                                                                                                                                               1, extent = {{-100, 100}, {100, -100}}), Rectangle(lineColor = {0, 0, 127},
            lineThickness =                                                                                                                                                                                                        1, extent = {{-90, 80}, {90, -80}}), Rectangle(lineColor = {28, 108, 200}, fillColor = {0, 128, 255},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid,
            lineThickness =                                                                                                                                                                                                        1, extent = {{-60, 80}, {60, 48}}), Line(points = {{-90, 0}, {-72, 0}}, color = {0, 0, 255}, thickness = 1), Line(points = {{-72, 0}, {-72, 68}}, color = {0, 0, 255}, thickness = 1), Line(points = {{-72, 68}, {-60, 68}}, color = {0, 0, 255}, thickness = 1), Line(points = {{72, 0}, {90, 0}}, color = {85, 170, 255}, thickness = 1), Line(points = {{72, 0}, {72, 68}}, color = {85, 170, 255}, thickness = 1), Line(points = {{60, 68}, {72, 68}}, color = {85, 170, 255}, thickness = 1), Line(points = {{-40, 48}, {-40, 16}}, color = {0, 140, 72}, thickness = 1, arrow = {Arrow.None, Arrow.Filled}), Line(points = {{-20, 48}, {-20, 16}}, color = {0, 140, 72}, thickness = 1, arrow = {Arrow.None, Arrow.Filled}), Line(points = {{0, 48}, {0, 16}}, color = {0, 140, 72}, thickness = 1, arrow = {Arrow.None, Arrow.Filled}), Line(points = {{20, 48}, {20, 16}}, color = {0, 140, 72}, thickness = 1, arrow = {Arrow.None, Arrow.Filled}), Line(points = {{40, 48}, {40, 16}}, color = {0, 140, 72}, thickness = 1, arrow = {Arrow.None, Arrow.Filled}), Text(lineColor = {255, 255, 255}, extent = {{-32, 72}, {30, 56}}, textString = "FCU/RCU"), Rectangle(lineColor = {28, 108, 200}, fillColor = {175, 175, 175},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid,
            lineThickness =                                                                                                                                                                                                        1, extent = {{-70, -48}, {-50, -80}}), Rectangle(lineColor = {28, 108, 200}, fillColor = {175, 175, 175},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid,
            lineThickness =                                                                                                                                                                                                        1, extent = {{-30, -48}, {-10, -80}}), Rectangle(lineColor = {28, 108, 200}, fillColor = {175, 175, 175},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid,
            lineThickness =                                                                                                                                                                                                        1, extent = {{10, -48}, {30, -80}}), Rectangle(lineColor = {28, 108, 200}, fillColor = {175, 175, 175},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid,
            lineThickness =                                                                                                                                                                                                        1, extent = {{50, -48}, {70, -80}})}),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}})));
end RoomWithFCU;
