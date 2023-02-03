within HVAC.Coil;
model WaterHeatingCoil
  Modelica.Blocks.Sources.Constant air_in_T(k=14) "Air inlet T (C)"
    annotation (Placement(transformation(extent={{-98,22},{-86,34}})));
  Modelica.Blocks.Math.Add add1
    annotation (Placement(transformation(extent={{-76,24},{-68,32}})));
  Modelica.Blocks.Sources.Constant k_const(k=273.15) "A constant"
    annotation (Placement(transformation(extent={{-78,58},{-72,64}})));
  Modelica.Blocks.Sources.Constant air_in_rh(k=50) "Air inlet RH (0-100%)"
    annotation (Placement(transformation(extent={{-98,-10},{-86,2}})));
  Modelica.Blocks.Math.Product product2
    annotation (Placement(transformation(extent={{-76,4},{-68,12}})));
  Modelica.Blocks.Sources.Constant by_100(k=1/100) "A constant"
    annotation (Placement(transformation(extent={{-88,-26},{-80,-18}})));
  Buildings.Utilities.Psychrometrics.X_pTphi x_pTphi(use_p_in=false)
    annotation (Placement(transformation(extent={{-60,12},{-50,22}})));
  Modelica.Blocks.Sources.Constant wat_in_T(k= 200) "Water inlet T (C)"
    annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={122,-58})));
  Modelica.Blocks.Math.Add add2
    annotation (Placement(transformation(extent={{-4,-4},{4,4}},
        rotation=180,
        origin={98,-52})));
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
        origin={60,-46})));
  Modelica.Blocks.Sources.Constant air_in_m(k=1)
    "Air inlet mass flow rate (kg/s)"
    annotation (Placement(transformation(extent={{-98,-48},{-86,-36}})));
  Modelica.Blocks.Sources.Constant wat_in_m(k=1)
    "Water inlet mass flow rate (kg/s)" annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={122,-82})));
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
        origin={124,10})));
  parameter Modelica.SIunits.MassFlowRate air_flow_nominal=10;
  parameter Modelica.SIunits.MassFlowRate wat_flow_nominal=1;
  parameter Modelica.SIunits.ThermalConductance ua_nominal=2000;
  replaceable package NonAirMedium = HVAC.Media.Water300C
    constrainedby Modelica.Media.Interfaces.PartialMedium
                                            "Non-air medium, currently only water and a hypothetical water"
      annotation (choices(
        choice(redeclare package Medium =
            HVAC.Media.Water300C
                         "hypothetical water with maximum allowed temperature 300C"),
        choice(redeclare package Medium = Buildings.Media.Water "Water")));
  Buildings.Fluid.Sensors.MassFractionTwoPort air_out_hr(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=air_flow_nominal)
    annotation (Placement(transformation(extent={{42,-14},{52,-4}})));
  Modelica.Blocks.Sources.Constant k_const1(k=273.15)
                                                     "A constant"
    annotation (Placement(transformation(extent={{-3,-3},{3,3}},
        rotation=180,
        origin={123,-39})));
  Buildings.Fluid.Sensors.TemperatureTwoPort wat_out_T(redeclare package Medium
      = Buildings.Media.Water, m_flow_nominal=wat_flow_nominal) annotation (
      Placement(transformation(
        extent={{5,-5},{-5,5}},
        rotation=0,
        origin={-19,-13})));
  Buildings.Fluid.Sensors.TemperatureTwoPort air_out_T(redeclare package Medium
      = Buildings.Media.Air, m_flow_nominal=air_flow_nominal) annotation (
      Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={69,-9})));
  Buildings.Fluid.Sensors.MassFractionTwoPort air_in_hr(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=air_flow_nominal)
    annotation (Placement(transformation(extent={{-10,18},{0,28}})));
  Buildings.Fluid.Sensors.RelativeHumidityTwoPort air_out_rh(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=air_flow_nominal)
    annotation (Placement(transformation(extent={{82,-14},{94,-2}})));
  Buildings.Fluid.Sensors.RelativeHumidityTwoPort air_in_rhsen(redeclare
      package Medium = Buildings.Media.Air, m_flow_nominal=air_flow_nominal)
    annotation (Placement(transformation(extent={{6,18},{16,28}})));
  Buildings.Fluid.Sensors.TemperatureTwoPort air_in_Tsen(redeclare package
      Medium = Buildings.Media.Air, m_flow_nominal=air_flow_nominal)
    annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={27,23})));
  Buildings.Fluid.HeatExchangers.DryCoilCounterFlow heaCoi(
    redeclare package Medium1 = NonAirMedium,
    redeclare package Medium2 = Buildings.Media.Air,
    m1_flow_nominal=wat_flow_nominal,
    m2_flow_nominal=air_flow_nominal,
    dp1_nominal=5000,
    dp2_nominal=300,
    UA_nominal=ua_nominal)
    annotation (Placement(transformation(extent={{20,2},{0,-18}})));
equation
  connect(k_const.y, add1.u1) annotation (Line(points={{-71.7,61},{-66,61},{-66,
          36},{-80,36},{-80,30.4},{-76.8,30.4}}, color={0,0,127}));
  connect(air_in_T.y, add1.u2) annotation (Line(points={{-85.4,28},{-80,28},{
          -80,22},{-76.8,22},{-76.8,25.6}}, color={0,0,127}));
  connect(air_in_rh.y, product2.u1) annotation (Line(points={{-85.4,-4},{-82,-4},
          {-82,10.4},{-76.8,10.4}}, color={0,0,127}));
  connect(by_100.y, product2.u2) annotation (Line(points={{-79.6,-22},{-74,-22},
          {-74,0},{-76.8,0},{-76.8,5.6}}, color={0,0,127}));
  connect(product2.y, x_pTphi.phi)
    annotation (Line(points={{-67.6,8},{-61,8},{-61,14}}, color={0,0,127}));
  connect(wat_in_T.y, add2.u1) annotation (Line(points={{115.4,-58},{104,-58},{
          104,-54},{102.8,-54},{102.8,-54.4}},
                                            color={0,0,127}));
  connect(x_pTphi.X[1], air_source.Xi_in[1]) annotation (Line(points={{-49.5,17},
          {-49.5,16},{-36,16}}, color={0,0,127}));
  connect(add1.y, air_source.T_in) annotation (Line(points={{-67.6,28},{-42,28},
          {-42,24},{-36,24}}, color={0,0,127}));
  connect(add2.y, wat_source.T_in)
    annotation (Line(points={{93.6,-52},{82,-52},{82,-50},{72,-50}},
                                                   color={0,0,127}));
  connect(air_in_m.y, air_source.m_flow_in) annotation (Line(points={{-85.4,-42},
          {-44,-42},{-44,34},{-36,34},{-36,28}}, color={0,0,127}));
  connect(wat_in_m.y, wat_source.m_flow_in) annotation (Line(points={{115.4,-82},
          {78,-82},{78,-54},{72,-54}},  color={0,0,127}));
  connect(k_const1.y, add2.u2) annotation (Line(points={{119.7,-39},{102.8,-39},
          {102.8,-49.6}},
                        color={0,0,127}));
  connect(add1.y, x_pTphi.T) annotation (Line(points={{-67.6,28},{-62,28},{-62,
          22},{-66,22},{-66,17},{-61,17}}, color={0,0,127}));
  connect(wat_out_T.port_b, wat_sink.ports[1]) annotation (Line(points={{-24,-13},
          {-42,-13},{-42,-74},{-56,-74},{-56,-70}},  color={0,127,255}));
  connect(air_out_hr.port_b, air_out_T.port_a)
    annotation (Line(points={{52,-9},{64,-9}},   color={0,127,255}));
  connect(air_source.ports[1], air_in_hr.port_a)
    annotation (Line(points={{-14,20},{-14,23},{-10,23}}, color={0,127,255}));
  connect(air_out_T.port_b, air_out_rh.port_a)
    annotation (Line(points={{74,-9},{74,-8},{82,-8}},    color={0,127,255}));
  connect(air_out_rh.port_b, air_sink.ports[1]) annotation (Line(points={{94,-8},
          {110,-8},{110,10},{114,10}},     color={0,127,255}));
  connect(air_in_hr.port_b, air_in_rhsen.port_a)
    annotation (Line(points={{0,23},{6,23}}, color={0,127,255}));
  connect(air_in_rhsen.port_b, air_in_Tsen.port_a)
    annotation (Line(points={{16,23},{22,23}}, color={0,127,255}));
  connect(wat_source.ports[1], heaCoi.port_a1) annotation (Line(points={{50,-46},
          {20,-46},{20,-14}},                           color={0,127,255}));
  connect(heaCoi.port_b1, wat_out_T.port_a) annotation (Line(points={{0,-14},{
          -8,-14},{-8,-13},{-14,-13}},
                                  color={0,127,255}));
  connect(air_in_Tsen.port_b, heaCoi.port_a2) annotation (Line(points={{32,23},
          {36,23},{36,6},{-4,6},{-4,-2},{0,-2}},
                                    color={0,127,255}));
  connect(heaCoi.port_b2, air_out_hr.port_a) annotation (Line(points={{20,-2},{
          36,-2},{36,-9},{42,-9}},  color={0,127,255}));
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
