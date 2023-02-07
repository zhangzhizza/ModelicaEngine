within HVAC.Coil;
model WaterCoolingCoil "Wet water cooling coil"
  parameter Modelica.SIunits.MassFlowRate AirFlowNominal(displayUnit="kg/s") "Nominal air mass flow rate";
  parameter Modelica.SIunits.MassFlowRate WatFlowNominal(displayUnit="kg/s") "Nominal water mass flow rate";
  parameter Modelica.SIunits.ThermalConductance UANominal(displayUnit="W/K") "Nominal UA of the heating coil";
  Modelica.Blocks.Interfaces.RealInput AirTIn(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Inlet air dry bulb temperature"
    annotation (Placement(transformation(extent={{-120,52},{-100,72}}),
        iconTransformation(extent={{-120,52},{-100,72}})));
  Modelica.Blocks.Interfaces.RealInput AirRHIn(
    final quantity="1",
    final unit="1",
    displayUnit="1") "Inlet air relative humidity"
    annotation (Placement(transformation(extent={{-120,-10},{-100,10}}),
        iconTransformation(extent={{-120,-10},{-100,10}})));
  Modelica.Blocks.Interfaces.RealInput AirF(
    final quantity="MassFlowRate",
    final unit="kg/s",
    displayUnit="kg/s") "Air mass flow rate"
    annotation (Placement(transformation(extent={{-120,-68},{-100,-48}}),
        iconTransformation(extent={{-120,-68},{-100,-48}})));
  Modelica.Blocks.Interfaces.RealInput WatF(
    final quantity="MassFlowRate",
    final unit="kg/s",
    displayUnit="kg/s") "Water mass flow rate" annotation (
      Placement(transformation(
        extent={{-21,-21},{21,21}},
        rotation=90,
        origin={-23,-121}), iconTransformation(
        extent={{-22.2222,-22.2222},{-2.22222,-2.22222}},
        rotation=90,
        origin={-52.222,-97.778})));
  Modelica.Blocks.Interfaces.RealInput WatTIn(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Inlet water temperature"
    annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={20,-120}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={40,-110})));
  Modelica.Blocks.Interfaces.RealOutput AirTOut(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC")
    annotation (Placement(transformation(extent={{104,30},{124,50}}),
        iconTransformation(extent={{104,30},{124,50}})));
  Modelica.Blocks.Interfaces.RealOutput AirRHOut(
    final quantity="1",
    final unit="1",
    displayUnit="1")
    annotation (Placement(transformation(extent={{104,-10},{124,10}}),
        iconTransformation(extent={{104,-10},{124,10}})));
  Modelica.Blocks.Interfaces.RealOutput WatTOut(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC")
    annotation (Placement(transformation(extent={{104,-50},{124,-30}}),
        iconTransformation(extent={{104,-50},{124,-30}})));
  Buildings.Fluid.HeatExchangers.WetCoilCounterFlow cooCoi(
    redeclare package Medium1 = Buildings.Media.Water,
    redeclare package Medium2 = Buildings.Media.Air,
    m1_flow_nominal=WatFlowNominal,
    m2_flow_nominal=AirFlowNominal,
    dp1_nominal=5000,
    dp2_nominal=300,
    UA_nominal=UANominal)
    annotation (Placement(transformation(extent={{2,40},{-48,-6}})));
  Buildings.Utilities.Psychrometrics.X_pTphi x_pTphi(use_p_in=false)
    annotation (Placement(transformation(extent={{-94,32},{-84,42}})));
  Buildings.Fluid.Sources.MassFlowSource_T air_source(
    redeclare package Medium = Buildings.Media.Air,
    use_Xi_in=true,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) annotation (Placement(transformation(extent={{-74,40},{-54,60}})));
  Buildings.Fluid.Sources.MassFlowSource_T wat_source(
    redeclare package Medium = Buildings.Media.Water,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={40,6})));
  Modelica.Fluid.Vessels.OpenTank wat_sink(
    height=100,
    crossArea=100,
    redeclare package Medium = Buildings.Media.Water,
    use_portsData=false,
    nPorts=1)
    annotation (Placement(transformation(extent={{-66,-54},{-50,-38}})));
  Buildings.Fluid.Sources.Boundary_pT air_sink(redeclare package Medium =
        Buildings.Media.Air, nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={86,68})));
  Buildings.Fluid.Sensors.MassFractionTwoPort air_out_hr(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{20,32},{30,42}})));
  Buildings.Fluid.Sensors.TemperatureTwoPort wat_out_T(redeclare package Medium =
        Buildings.Media.Water, m_flow_nominal=WatFlowNominal) annotation (
      Placement(transformation(
        extent={{5,-5},{-5,5}},
        rotation=0,
        origin={-67,-1})));
  Buildings.Fluid.Sensors.TemperatureTwoPort air_out_T(redeclare package Medium =
        Buildings.Media.Air, m_flow_nominal=AirFlowNominal) annotation (
      Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={47,37})));
  Buildings.Fluid.Sensors.MassFractionTwoPort air_in_hr(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{-44,46},{-34,56}})));
  Buildings.Fluid.Sensors.RelativeHumidityTwoPort air_out_rh(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{60,34},{72,46}})));
  Buildings.Fluid.Sensors.RelativeHumidityTwoPort air_in_rhsen(redeclare
      package Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{-28,46},{-18,56}})));
  Buildings.Fluid.Sensors.TemperatureTwoPort air_in_Tsen(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={-61,31})));
equation
  connect(x_pTphi.X[1],air_source. Xi_in[1]) annotation (Line(points={{-83.5,37},
          {-80,37},{-80,46},{-76,46}},
                                color={0,0,127}));
  connect(wat_out_T.port_b,wat_sink. ports[1]) annotation (Line(points={{-72,-1},
          {-76,-1},{-76,-60},{-58,-60},{-58,-54}},   color={0,127,255}));
  connect(air_out_hr.port_b,air_out_T. port_a)
    annotation (Line(points={{30,37},{42,37}},   color={0,127,255}));
  connect(air_source.ports[1],air_in_hr. port_a)
    annotation (Line(points={{-54,50},{-54,51},{-44,51}}, color={0,127,255}));
  connect(air_out_T.port_b,air_out_rh. port_a)
    annotation (Line(points={{52,37},{56,37},{56,50},{60,50},{60,40}},
                                                          color={0,127,255}));
  connect(air_out_rh.port_b,air_sink. ports[1]) annotation (Line(points={{72,40},
          {76,40},{76,54},{68,54},{68,68},{76,68}},
                                           color={0,127,255}));
  connect(air_in_hr.port_b,air_in_rhsen. port_a)
    annotation (Line(points={{-34,51},{-28,51}},
                                             color={0,127,255}));
  connect(air_in_rhsen.port_b,air_in_Tsen. port_a)
    annotation (Line(points={{-18,51},{-12,51},{-12,20},{-70,20},{-70,31},{-66,31}},
                                               color={0,127,255}));
  connect(wat_source.ports[1],cooCoi. port_a1) annotation (Line(points={{30,6},{
          10,6},{10,3.2},{2,3.2}},                              color={0,127,
          255}));
  connect(cooCoi.port_b1,wat_out_T. port_a) annotation (Line(points={{-48,3.2},{
          -56,3.2},{-56,-1},{-62,-1}},   color={0,127,255}));
  connect(air_in_Tsen.port_b,cooCoi. port_a2)
    annotation (Line(points={{-56,31},{-56,30.8},{-48,30.8}},
                                                           color={0,127,255}));
  connect(cooCoi.port_b2,air_out_hr. port_a) annotation (Line(points={{2,30.8},{
          12,30.8},{12,37},{20,37}},                     color={0,127,255}));
  connect(AirTIn, x_pTphi.T) annotation (Line(points={{-110,62},{-94,62},{-94,46},
          {-102,46},{-102,37},{-95,37}}, color={0,0,127}));
  connect(AirTIn, air_source.T_in) annotation (Line(points={{-110,62},{-94,62},{
          -94,54},{-76,54}}, color={0,0,127}));
  connect(AirRHIn, x_pTphi.phi) annotation (Line(points={{-110,0},{-96,0},{-96,28},
          {-95,28},{-95,34}}, color={0,0,127}));
  connect(AirF, air_source.m_flow_in) annotation (Line(points={{-110,-58},{-78,-58},
          {-78,42},{-80,42},{-80,46},{-82,46},{-82,58},{-76,58}}, color={0,0,127}));
  connect(WatF, wat_source.m_flow_in)
    annotation (Line(points={{-23,-121},{-23,-2},{52,-2}}, color={0,0,127}));
  connect(WatTIn, wat_source.T_in) annotation (Line(points={{20,-120},{36,-120},
          {36,-70},{52,-70},{52,2}}, color={0,0,127}));
  connect(air_out_T.T, AirTOut) annotation (Line(points={{47,42.5},{46,42.5},{46,
          84},{100,84},{100,40},{114,40}}, color={0,0,127}));
  connect(air_out_rh.phi, AirRHOut) annotation (Line(points={{66.06,46.6},{66.06,
          50},{98,50},{98,0},{114,0}}, color={0,0,127}));
  connect(wat_out_T.T, WatTOut)
    annotation (Line(points={{-67,4.5},{114,4.5},{114,-40}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(
          extent={{-100,100},{104,-100}},
          lineThickness=1,
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid,
          lineColor={0,0,0}),
      Text(
          extent={{-149,135},{151,95}},
          lineColor={0,0,255},
          fillPattern=FillPattern.HorizontalCylinder,
          fillColor={0,127,255},
          textString="%name"),
        Line(
          points={{-80,80},{80,80}},
          color={0,0,0},
          thickness=1),
        Line(
          points={{-80,-80},{80,-80}},
          color={0,0,0},
          thickness=1),
        Rectangle(
          extent={{-100,8},{-56,-8}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-60,20},{-60,-20},{-40,0},{-60,20}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-20,60},{20,-60}},
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{40,8},{84,-8}},
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{80,20},{80,-20},{100,0},{80,20}},
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(
          points={{-10,-94},{-10,-60}},
          color={28,108,200},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled}),
        Line(
          points={{10,-94},{10,-60}},
          color={0,140,72},
          thickness=1,
          arrow={Arrow.Filled,Arrow.None})}), Diagram(coordinateSystem(
          preserveAspectRatio=false)));
end WaterCoolingCoil;
