within HVAC.ChilledWaterSystem;
model PrimaryPumpChw
  "Chilled water system model with primary pump configuration"
  Buildings.Fluid.Chillers.ElectricReformulatedEIR chr_01(
    redeclare package Medium1 = Buildings.Media.Water,
    redeclare package Medium2 = Buildings.Media.Water,
    m1_flow_nominal=CondWatMassFlowNorm,
    m2_flow_nominal=EvapWatMassFlowNorm,
    dp1_nominal=CondWatPresDropNorm,
    dp2_nominal=EvapWatPresDropNorm,
    per=chiller_per)
    annotation (Placement(transformation(extent={{-42,-28},{-22,-8}})));
  Buildings.Fluid.Movers.SpeedControlled_y cwp_01(
    redeclare package Medium = Buildings.Media.Water,
    per=cwp_per,
    addPowerToMedium=true)
    annotation (Placement(visible = true, transformation(origin={-61,-79},    extent={{5,-5},{
            -5,5}},                                                                                        rotation=180)));

  Buildings.Fluid.Movers.SpeedControlled_y cdp_01(
    redeclare package Medium = Buildings.Media.Water,
    per=cdp_per,
    addPowerToMedium=true)
    annotation (Placement(transformation(extent={{36,-6},{46,4}})));
  Buildings.Fluid.HeatExchangers.CoolingTowers.Merkel clt_01(redeclare package
      Medium = Buildings.Media.Water,
    m_flow_nominal=CondWatMassFlowNorm,
    dp_nominal=CondWatPresDropNorm,
    TAirInWB_nominal=28 + 273.15,
    TWatIn_nominal=37 + 273.15,
    TWatOut_nominal=32 + 273.15)
    annotation (Placement(visible = true, transformation(extent={{-26,42},{-46,
            62}},                                                                         rotation = 0)));
  Buildings.Utilities.Psychrometrics.TWetBul_TDryBulPhi wetBul(redeclare
      package Medium = Modelica.Media.Air.MoistAir)
    annotation (Placement(transformation(extent={{-38,72},{-28,82}})));
  Modelica.Blocks.Sources.Constant OAP(k=101325) annotation (Placement(visible=
          true, transformation(
        origin={-78,88},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Buildings.Fluid.Sources.Boundary_pT chw_ret(
    redeclare package Medium = Buildings.Media.Water,
    use_T_in=true,
    nPorts= 1) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={42,-24})));
  Buildings.Fluid.Sources.Boundary_pT chw_sup_sink(redeclare package Medium =
        Buildings.Media.Water,                                                                       use_p_in = false, use_T_in = false,
    nPorts=1)                                                                                                                                        annotation (
    Placement(transformation(extent = {{-6, -6}, {6, 6}}, rotation = 180, origin={52,-80})));
  Buildings.Fluid.Storage.ExpansionVessel exp1(redeclare package Medium =
        Buildings.Media.Water, V_start=1)
    annotation (Placement(transformation(extent={{-10,-4},{10,16}})));
  Modelica.Fluid.Valves.ValveLinear terminal_resistance(
    redeclare package Medium =
        Buildings.Media.Specialized.Water.TemperatureDependentDensity,
    dp_nominal=TermPresDropNorm,
    m_flow_nominal=EvapWatMassFlowNorm)
    annotation (Placement(transformation(extent={{-24,-72},{-12,-84}})));
  Buildings.Fluid.Sensors.RelativePressure chw_dP_sen(redeclare package Medium =
        Buildings.Media.Water)
    annotation (Placement(transformation(extent={{-26,-106},{-12,-92}})));
  Buildings.Controls.Continuous.LimPID cwp_ctrl(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=CwpPIParams[1],
    Ti=CwpPIParams[2]) if CwpAutoCtrl
    annotation (Placement(transformation(extent={{-76,-108},{-68,-100}})));
  Buildings.Controls.Continuous.LimPID term_resis_ctrl(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=0.01,
    Ti=100) annotation (Placement(transformation(extent={{10,-106},{2,-98}})));
  Buildings.Fluid.Sensors.MassFlowRate chw_m_sen(redeclare package Medium =
        Buildings.Media.Water)
    annotation (Placement(transformation(extent={{10,-74},{22,-86}})));

  parameter Boolean CdpAutoCtrl "Automatic speed control of the condensed water pump"
  annotation (Evaluate=true, HideResult=true, Dialog(group="Control"));
  parameter Real CdpPIParams[2] if CdpAutoCtrl "PI control parameters {Kp, Ti} if CdpAutoCtrl is true"
  annotation (Dialog(enable=CdpAutoCtrl, group="Control"));
  parameter Boolean CwpAutoCtrl "Automatic speed control of the supply water pump"
  annotation (Evaluate=true, HideResult=true, Dialog(group="Control"));
  parameter Real CwpPIParams[2] if CwpAutoCtrl "PI control parameters {Kp, Ti} if CwpAutoCtrl is true"
  annotation (Dialog(enable=CwpAutoCtrl, group="Control"));
  parameter Modelica.SIunits.MassFlowRate CondWatMassFlowNorm(displayUnit="kg/s") "Condenser water nominal mass flow rate"
  annotation (Dialog(group="Nominal Parameter"));
  parameter Modelica.SIunits.MassFlowRate EvapWatMassFlowNorm(displayUnit="kg/s") "Evaporator water nominal mass flow rate"
  annotation (Dialog(group="Nominal Parameter"));
  parameter Modelica.SIunits.Pressure CondWatPresDropNorm(displayUnit="Pa") "Condenser water nominal pressure drop"
  annotation (Dialog(group="Nominal Parameter"));
  parameter Modelica.SIunits.Pressure EvapWatPresDropNorm(displayUnit="Pa") "Evaporator water nominal pressure drop"
  annotation (Dialog(group="Nominal Parameter"));
  parameter Modelica.SIunits.Pressure TermPresDropNorm(displayUnit="Pa") "Terminal norminal pressure drop"
  annotation (Dialog(group="Nominal Parameter"));

  parameter Buildings.Fluid.Chillers.Data.ElectricReformulatedEIR.Generic chiller_per
    "Chiller model performance data"
    annotation (choicesAllMatching = true,
                Placement(transformation(extent={{76,80},{96,100}})),
                Dialog(group="Performance Curve"));
  parameter HVAC.Data.Pump.Generic cwp_per=
      HVAC.Data.Pump.f1100m3h_274kpa_100kw_wilo_SCP12X10X14HA()
    "Chiller model performance data"
    annotation (choicesAllMatching = true,
                Placement(transformation(extent={{122,82},{142,102}})),
                Dialog(group="Performance Curve"));
  parameter HVAC.Data.Pump.Generic cdp_per=
      HVAC.Data.Pump.f1694m3h_274kpa_150kw_wilo_SCP16X12X15()
    "Chiller model performance data"
    annotation (choicesAllMatching = true,
                Placement(transformation(extent={{100,80},{120,100}})),
                Dialog(group="Performance Curve"));

  Modelica.Blocks.Interfaces.RealInput OAT(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Outdoor air dry bulb temperature" annotation (
      Placement(transformation(extent={{-13,-13},{13,13}}, origin={-153,81}),
        iconTransformation(extent={{-155,93},{-140,108}})));
  Modelica.Blocks.Interfaces.RealInput OARH(
    min=0,
    max=1,
    unit="1")
    "Outdoor air relative humidity"         annotation (Placement(
        transformation(extent={{-13,-13},{13,13}}, origin={-153,61}),
                                                      iconTransformation(extent={{-155,71},
            {-140,86}})));
  Modelica.Blocks.Interfaces.RealInput CltFanRatio(final quantity="1", final
      unit="1") "Cooling tower fan speed ratio (0-1)" annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-40,110}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-100,128})));
  Modelica.Blocks.Interfaces.RealInput ChrTOutSP(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Chiller supply water temperature setpoint" annotation (
     Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={-22,110},
        rotation=270), iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-79.5,128})));
  Buildings.Controls.Continuous.LimPID cdp_ctrl(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=CwpPIParams[1],
    Ti=CwpPIParams[2],
    reset=Buildings.Types.Reset.Disabled)
    annotation (Placement(transformation(extent={{58,30},{66,38}})));
  Buildings.Fluid.Sensors.RelativeTemperature cd_dT_sen(redeclare package
      Medium = Buildings.Media.Water) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={-30,30})));
  Modelica.Blocks.Interfaces.RealInput CdDTSP(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") if CdpAutoCtrl
                        "Condensed water delta temperature setpoint"
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={-6,110},
        rotation=270), iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-59.5,128})));
  Modelica.Blocks.Interfaces.RealInput CdpSpeedRatio(final quantity="1", final
      unit="1") if CdpAutoCtrl == false "Condensed water pump speed ratio"
                                                   annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={10,110}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-40,128})));
  Modelica.Blocks.Interfaces.BooleanInput ChrState annotation (Placement(
        transformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-120,128}),iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-120,128})));
  Modelica.Blocks.Interfaces.RealInput CwDPSP(
    final quantity="Pressure",
    final unit="Pa",
    displayUnit="Pa") if CwpAutoCtrl
                      "Chilled supply water delta pressure setpoint"
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={26,110},
        rotation=270), iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={-19.5,128})));
  Modelica.Blocks.Interfaces.RealInput CwFlowTarget(
    final quantity="MassFlowRate",
    final unit="kg/s",
    displayUnit="kg/s") "Chilled supply water mass flow rate target"
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={62,110},
        rotation=270), iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={19.5,128})));
  Modelica.Blocks.Interfaces.RealInput ChwTRet(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Chilled water return temperature" annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={78,110},
        rotation=270), iconTransformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={39.5,128})));
  Modelica.Blocks.Interfaces.RealInput CwpSpeedRatio(final quantity="1", final
      unit="1") if CwpAutoCtrl == false "Supply water pump speed ratio"
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={44,110}), iconTransformation(
        extent={{-8,-8},{8,8}},
        rotation=270,
        origin={8.88178e-16,128})));
equation
  connect(chr_01.port_b1, cdp_01.port_a) annotation (
    Line(points = {{-22, -12}, {26, -12}, {26, -1}, {36, -1}}, color = {0, 127, 255}));
  connect(cdp_01.port_b, clt_01.port_a) annotation (
    Line(points = {{46, -1}, {48, -1}, {48, 52}, {-26, 52}}, color = {0, 127, 255}));
  connect(clt_01.port_b, chr_01.port_a1) annotation (
    Line(points = {{-46, 52}, {-54, 52}, {-54, -12}, {-42, -12}}, color = {0, 127, 255}));
  connect(OAP.y, wetBul.p) annotation (
    Line(points={{-71.4,88},{-60,88},{-60,78},{-48,78},{-48,73},{-38.5,73}},              color = {0, 0, 127}));
  connect(wetBul.TWetBul, clt_01.TAir) annotation (
    Line(points = {{-27.5, 77}, {-20, 77}, {-20, 78}, {-12, 78}, {-12, 56}, {-24, 56}}, color = {0, 0, 127}));
  connect(chw_ret.ports[1], chr_01.port_a2) annotation (
    Line(points={{36,-24},{-22,-24}},                   color = {0, 127, 255}));
  connect(exp1.port_a, cdp_01.port_a) annotation (Line(points={{0,-4},{0,-12},{26,
          -12},{26,-1},{36,-1}}, color={0,127,255}));
  connect(chr_01.port_b2, cwp_01.port_a) annotation (Line(points={{-42,-24},{-42,
          -68},{-72,-68},{-72,-79},{-66,-79}}, color={0,127,255}));
  connect(chw_dP_sen.port_a, terminal_resistance.port_a) annotation (Line(
        points={{-26,-99},{-32,-99},{-32,-78},{-24,-78}}, color={0,127,255}));
  connect(chw_dP_sen.port_b, terminal_resistance.port_b) annotation (Line(
        points={{-12,-99},{-10,-99},{-10,-82},{-12,-82},{-12,-78}}, color={0,127,
          255}));
  if CwpAutoCtrl then
  connect(cwp_ctrl.y, cwp_01.y) annotation (Line(points={{-67.6,-104},{-66,-104},
          {-66,-92},{-61,-92},{-61,-85}}, color={0,0,127}));
  connect(chw_dP_sen.p_rel, cwp_ctrl.u_m) annotation (Line(points={{-19,-105.3},
          {-19,-116},{-72,-116},{-72,-108.8}}, color={0,0,127}));
  connect(CwDPSP, cwp_ctrl.u_s) annotation (Line(points={{26,110},{28,110},{28,76},
          {-76.8,76},{-76.8,-104}}, color={0,0,127}));
  end if;
  connect(term_resis_ctrl.y, terminal_resistance.opening) annotation (Line(
        points={{1.6,-102},{0,-102},{0,-86},{-30,-86},{-30,-82.8},{-18,-82.8}},
        color={0,0,127}));
  connect(cwp_01.port_b, terminal_resistance.port_a)
    annotation (Line(points={{-56,-79},{-24,-78}}, color={0,127,255}));
  connect(terminal_resistance.port_b, chw_m_sen.port_a) annotation (Line(points=
         {{-12,-78},{-12,-82},{2,-82},{2,-80},{10,-80}}, color={0,127,255}));
  connect(chw_m_sen.port_b, chw_sup_sink.ports[1])
    annotation (Line(points={{22,-80},{46,-80}}, color={0,127,255}));
  connect(chw_m_sen.m_flow, term_resis_ctrl.u_m) annotation (Line(points={{16,-86.6},
          {16,-96},{18,-96},{18,-112},{6,-112},{6,-106.8}}, color={0,0,127}));
  connect(OAT, wetBul.TDryBul) annotation (Line(points={{-153,81},{-90,81},{-90,
          100},{-46,100},{-46,81},{-38.5,81}}, color={0,0,127}));
  connect(OARH, wetBul.phi) annotation (Line(points={{-153,61},{-56,61},{-56,77},
          {-38.5,77}}, color={0,0,127}));
  connect(CltFanRatio, clt_01.y) annotation (Line(points={{-40,110},{-40,68},{-16,
          68},{-16,60},{-24,60}}, color={0,0,127}));
  connect(ChrTOutSP, chr_01.TSet) annotation (Line(points={{-22,110},{-30,110},{
          -30,70},{-44,70},{-44,-21}}, color={0,0,127}));
  connect(clt_01.port_a, cd_dT_sen.port_a) annotation (Line(points={{-26,52},{-16,
          52},{-16,30},{-24,30}}, color={0,127,255}));
  connect(cd_dT_sen.port_b, clt_01.port_b) annotation (Line(points={{-36,30},{-54,
          30},{-54,52},{-46,52}}, color={0,127,255}));
  if CdpAutoCtrl then
  connect(cd_dT_sen.T_rel, cdp_ctrl.u_m) annotation (Line(points={{-30,35.4},{50,
          35.4},{50,20},{62,20},{62,29.2}}, color={0,0,127}));
  connect(CdDTSP, cdp_ctrl.u_s) annotation (Line(points={{-6,110},{0,110},{0,40},
            {57.2,40},{57.2,34}},
                                color={0,0,127}));
  connect(cdp_ctrl.y, cdp_01.y) annotation (Line(points={{66.4,34},{70,34},{70,0},
          {41,0},{41,5}}, color={0,0,127}));
  end if;
  connect(ChrState, chr_01.on) annotation (Line(points={{-120,128},{-120,54},{-56,
          54},{-56,-15},{-44,-15}}, color={255,0,255}));

  connect(CwFlowTarget, term_resis_ctrl.u_s) annotation (Line(points={{62,110},{
          62,44},{72,44},{72,-102},{10.8,-102}},  color={0,0,127}));
  connect(ChwTRet, chw_ret.T_in) annotation (Line(points={{78,110},{78,-26.4},{49.2,
          -26.4}},              color={0,0,127}));
  if CwpAutoCtrl==false then
  connect(CwpSpeedRatio, cwp_01.y) annotation (Line(points={{44,110},{42,110},{42,
          74},{-61,74},{-61,-85}}, color={0,0,127}));
  end if;
  if CdpAutoCtrl==false then
  connect(CdpSpeedRatio, cdp_01.y)
    annotation (Line(points={{10,110},{41,110},{41,5}}, color={0,0,127}));
  end if;
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false, extent={{-140,-120},{140,120}}),
        graphics={                                                                                       Rectangle(lineColor = {0, 0, 127}, fillColor = {255, 255, 255},
            fillPattern =                                                                                                                                                              FillPattern.Solid,
            lineThickness =                                                                                                                                                                                               1, extent={{
              -140,120},{140,-120}}),
        Polygon(
          origin={110,-12},
          lineColor={78,138,73},
          fillColor={28,108,200},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{-58,-34},{-18,-54},{-58,-74},{-58,-34}}),
        Rectangle(
          extent={{-86,-44},{-46,-64}},
          lineColor={0,0,127},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-86,-64},{-46,-84}},
          lineColor={0,0,127},
          lineThickness=1,
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-88,80},{-44,34}},
          lineColor={0,0,127},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Polygon(
          origin={110,114},
          lineColor={78,138,73},
          fillColor={78,138,73},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{-58,-34},{-18,-54},{-58,-74},{-58,-34}}),
        Line(
          points={{-46,-54},{52,-64}},
          color={0,0,0},
          pattern=LinePattern.None)}),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-140,-120},{140,
            120}})));
end PrimaryPumpChw;
