within HVAC.Coil;
model WaterHeatingCoil
  Buildings.Utilities.Psychrometrics.X_pTphi x_pTphi(use_p_in=false)
    annotation (Placement(transformation(extent={{-60,12},{-50,22}})));
  Buildings.Fluid.Sources.MassFlowSource_T air_source(
    redeclare package Medium = Buildings.Media.Air,
    use_Xi_in=true,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) annotation (Placement(transformation(extent={{-34,10},{-14,30}})));
  Buildings.Fluid.Sources.MassFlowSource_T wat_source(
    redeclare package Medium = Buildings.Media.Water,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={38,-42})));
  Modelica.Fluid.Vessels.OpenTank wat_sink(
    height=100,
    crossArea=100,
    redeclare package Medium = Buildings.Media.Water,
    use_portsData=false,
    nPorts=1)
    annotation (Placement(transformation(extent={{-64,-70},{-48,-54}})));
  Buildings.Fluid.Sources.Boundary_pT air_sink(redeclare package Medium =
        Buildings.Media.Air, nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={136,-14})));
  parameter Modelica.SIunits.MassFlowRate AirFlowNominal(displayUnit="kg/s") "Nominal air mass flow rate";
  parameter Modelica.SIunits.MassFlowRate WatFlowNominal(displayUnit="kg/s") "Nominal water mass flow rate";
  parameter Modelica.SIunits.ThermalConductance UANominal(displayUnit="W/K") "Nominal UA of the heating coil";
  replaceable package NonAirMedium = HVAC.Media.Water300C
    constrainedby Modelica.Media.Interfaces.PartialMedium
                                            "Non-air medium, currently only water and a hypothetical water"
      annotation (choices(
        choice(redeclare package Medium =
            HVAC.Media.Water300C
                         "hypothetical water with maximum allowed temperature 300C"),
        choice(redeclare package Medium = Buildings.Media.Water "Water")));
  Buildings.Fluid.Sensors.MassFractionTwoPort air_out_hr(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{42,-14},{52,-4}})));
  Buildings.Fluid.Sensors.TemperatureTwoPort wat_out_T(redeclare package Medium
      = Buildings.Media.Water, m_flow_nominal=WatFlowNominal) annotation (
      Placement(transformation(
        extent={{5,-5},{-5,5}},
        rotation=0,
        origin={-19,-13})));
  Buildings.Fluid.Sensors.TemperatureTwoPort air_out_T(redeclare package Medium
      = Buildings.Media.Air, m_flow_nominal=AirFlowNominal) annotation (
      Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={69,-9})));
  Buildings.Fluid.Sensors.MassFractionTwoPort air_in_hr(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{-10,18},{0,28}})));
  Buildings.Fluid.Sensors.RelativeHumidityTwoPort air_out_rh(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{80,-16},{92,-4}})));
  Buildings.Fluid.Sensors.RelativeHumidityTwoPort air_in_rhsen(redeclare
      package Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(extent={{6,18},{16,28}})));
  Buildings.Fluid.Sensors.TemperatureTwoPort air_in_Tsen(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=AirFlowNominal)
    annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={27,23})));
  Buildings.Fluid.HeatExchangers.DryCoilCounterFlow heaCoi(
    redeclare package Medium1 = NonAirMedium,
    redeclare package Medium2 = Buildings.Media.Air,
    m1_flow_nominal=WatFlowNominal,
    m2_flow_nominal=AirFlowNominal,
    dp1_nominal=5000,
    dp2_nominal=300,
    UA_nominal=UANominal)
    annotation (Placement(transformation(extent={{20,2},{0,-18}})));
  Modelica.Blocks.Interfaces.RealInput AirTIn(final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Inlet air dry bulb temperature"
    annotation (Placement(transformation(extent={{-120,52},{-100,72}}),
        iconTransformation(extent={{-120,52},{-100,72}})));
  Modelica.Blocks.Interfaces.RealInput AirRHIn(final quantity="1",
    final unit="1",
    displayUnit="1") "Inlet air relative humidity"
    annotation (Placement(transformation(extent={{-120,-10},{-100,10}}),
        iconTransformation(extent={{-120,-10},{-100,10}})));
  Modelica.Blocks.Interfaces.RealInput AirF(final quantity="MassFlowRate",
    final unit="kg/s",
    displayUnit="kg/s") "Air mass flow rate"
    annotation (Placement(transformation(extent={{-120,-68},{-100,-48}}),
        iconTransformation(extent={{-120,-68},{-100,-48}})));
  Modelica.Blocks.Interfaces.RealInput WatF(final quantity="MassFlowRate",
    final unit="kg/s",
    displayUnit="kg/s") "Water mass flow rate" annotation (
      Placement(transformation(
        extent={{-21,-21},{21,21}},
        rotation=90,
        origin={-23,-121}), iconTransformation(
        extent={{-22.2222,-22.2222},{-2.22222,-2.22222}},
        rotation=90,
        origin={-52.2222,-97.7778})));
  Modelica.Blocks.Interfaces.RealInput WatTIn(final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Inlet water temperature"
    annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={20,-120}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={40,-110})));
  Modelica.Blocks.Interfaces.RealOutput AirTOut(final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC")
    annotation (Placement(transformation(extent={{104,30},{124,50}}),
        iconTransformation(extent={{104,30},{124,50}})));
  Modelica.Blocks.Interfaces.RealOutput AirRHOut(final quantity="1",
    final unit="1",
    displayUnit="1")
    annotation (Placement(transformation(extent={{104,-10},{124,10}}),
        iconTransformation(extent={{104,-10},{124,10}})));
  Modelica.Blocks.Interfaces.RealOutput WatTOut(final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC")
    annotation (Placement(transformation(extent={{104,-50},{124,-30}}),
        iconTransformation(extent={{104,-50},{124,-30}})));
equation
  connect(x_pTphi.X[1], air_source.Xi_in[1]) annotation (Line(points={{-49.5,17},
          {-49.5,16},{-36,16}}, color={0,0,127}));
  connect(wat_out_T.port_b, wat_sink.ports[1]) annotation (Line(points={{-24,-13},
          {-42,-13},{-42,-74},{-56,-74},{-56,-70}},  color={0,127,255}));
  connect(air_out_hr.port_b, air_out_T.port_a)
    annotation (Line(points={{52,-9},{64,-9}},   color={0,127,255}));
  connect(air_source.ports[1], air_in_hr.port_a)
    annotation (Line(points={{-14,20},{-14,23},{-10,23}}, color={0,127,255}));
  connect(air_out_T.port_b, air_out_rh.port_a)
    annotation (Line(points={{74,-9},{74,-10},{80,-10}},  color={0,127,255}));
  connect(air_out_rh.port_b, air_sink.ports[1]) annotation (Line(points={{92,-10},
          {92,-18},{118,-18},{118,-14},{126,-14}},
                                           color={0,127,255}));
  connect(air_in_hr.port_b, air_in_rhsen.port_a)
    annotation (Line(points={{0,23},{6,23}}, color={0,127,255}));
  connect(air_in_rhsen.port_b, air_in_Tsen.port_a)
    annotation (Line(points={{16,23},{22,23}}, color={0,127,255}));
  connect(wat_source.ports[1], heaCoi.port_a1) annotation (Line(points={{28,-42},
          {22,-42},{22,-22},{24,-22},{24,-14},{20,-14}},color={0,127,255}));
  connect(heaCoi.port_b1, wat_out_T.port_a) annotation (Line(points={{0,-14},{
          -8,-14},{-8,-13},{-14,-13}},
                                  color={0,127,255}));
  connect(air_in_Tsen.port_b, heaCoi.port_a2) annotation (Line(points={{32,23},
          {36,23},{36,6},{-4,6},{-4,-2},{0,-2}},
                                    color={0,127,255}));
  connect(heaCoi.port_b2, air_out_hr.port_a) annotation (Line(points={{20,-2},{
          36,-2},{36,-9},{42,-9}},  color={0,127,255}));
  connect(AirTIn, air_source.T_in) annotation (Line(points={{-110,62},{-82,62},
          {-82,50},{-58,50},{-58,42},{-42,42},{-42,24},{-36,24}}, color={0,0,
          127}));
  connect(AirTIn, x_pTphi.T) annotation (Line(points={{-110,62},{-82,62},{-82,50},
          {-68,50},{-68,17},{-61,17}},     color={0,0,127}));
  connect(AirRHIn, x_pTphi.phi) annotation (Line(points={{-110,0},{-66,0},{-66,14},
          {-61,14}},     color={0,0,127}));
  connect(AirF, air_source.m_flow_in) annotation (Line(points={{-110,-58},{-78,
          -58},{-78,28},{-36,28}},          color={0,0,127}));
  connect(air_out_T.T, AirTOut)
    annotation (Line(points={{69,-3.5},{69,40},{114,40}}, color={0,0,127}));
  connect(air_out_rh.phi, AirRHOut) annotation (Line(points={{86.06,-3.4},{86.06,
          2},{96,2},{96,0},{114,0}},       color={0,0,127}));
  connect(wat_out_T.T, WatTOut) annotation (Line(points={{-19,-7.5},{-19,-4},{-8,
          -4},{-8,-10},{-6,-10},{-6,-24},{96,-24},{96,-40},{114,-40}},    color=
         {0,0,127}));
  connect(WatTIn, wat_source.T_in)
    annotation (Line(points={{20,-120},{20,-46},{50,-46}}, color={0,0,127}));
  connect(WatF, wat_source.m_flow_in) annotation (Line(points={{-23,-121},{-23,
          -96},{56,-96},{56,-50},{50,-50}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,
            100}}), graphics={
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
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-60,20},{-60,-20},{-40,0},{-60,20}},
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-20,60},{20,-60}},
          lineColor={255,0,0},
          lineThickness=1,
          fillColor={255,0,0},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{40,8},{84,-8}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{80,20},{80,-20},{100,0},{80,20}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Line(
          points={{-10,-94},{-10,-60}},
          color={238,46,47},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled}),
        Line(
          points={{10,-94},{10,-60}},
          color={244,125,35},
          thickness=1,
          arrow={Arrow.Filled,Arrow.None})}),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
            100,100}})));
end WaterHeatingCoil;
