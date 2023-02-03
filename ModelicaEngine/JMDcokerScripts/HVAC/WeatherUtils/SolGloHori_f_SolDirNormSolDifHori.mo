within HVAC.WeatherUtils;
model SolGloHori_f_SolDirNormSolDifHori
  "Get global horizontal solar radiation from direct normal and diffuse horizontal solar radiation"
  parameter Modelica.SIunits.Time timZon(displayUnit="h") "Time zone";
  parameter Modelica.SIunits.Angle lon(displayUnit="deg") "Longitude";
  parameter Modelica.SIunits.Angle lat(displayUnit="deg") "Latitude";

  Modelica.Blocks.Interfaces.RealInput SolDirNorm(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2") annotation (Placement(
        transformation(extent={{-122,50},{-100,72}}), iconTransformation(extent=
           {{-122,50},{-100,72}})));
  Modelica.Blocks.Interfaces.RealInput SolDifHori(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2") annotation (Placement(
        transformation(extent={{-122,-70},{-100,-48}}), iconTransformation(
          extent={{-122,-70},{-100,-48}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.ZenithAngle zen1(lat=lat)
    annotation (Placement(transformation(extent={{-40,14},{-30,24}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.Declination decAng
    annotation (Placement(transformation(extent={{-72,24},{-62,34}})));
  SolarTime solarTime(timZon=timZon, lon=lon)
    annotation (Placement(transformation(extent={{-76,10},{-68,18}})));
  Modelica.Blocks.Interfaces.RealInput secondsFromJan1st(final quantity="Time",
    final unit="s") annotation (Placement(
        transformation(extent={{-122,-10},{-100,12}}), iconTransformation(
          extent={{-122,-10},{-100,12}})));
  Modelica.Blocks.Math.Cos cos1
    annotation (Placement(transformation(extent={{-22,14},{-12,24}})));
  Modelica.Blocks.Math.Product product1
    annotation (Placement(transformation(extent={{2,16},{22,36}})));
  Modelica.Blocks.Math.Add add
    annotation (Placement(transformation(extent={{36,-14},{56,6}})));
  Modelica.Blocks.Interfaces.RealOutput SolGloHori(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2")
    "Global horizontal solar radiation"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
protected
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.SolarHourAngle
    solHouAng "Solar hour angle"
    annotation (Placement(transformation(extent={{-64,10},{-56,18}})));
equation
  connect(solarTime.solTime, solHouAng.solTim)
    annotation (Line(points={{-67.6,14},{-64.8,14}}, color={0,0,127}));
  connect(solHouAng.solHouAng, zen1.solHouAng) annotation (Line(points={{-55.6,14},
          {-46,14},{-46,16.6},{-41,16.6}}, color={0,0,127}));
  connect(decAng.decAng, zen1.decAng) annotation (Line(points={{-61.5,29},{-46,29},
          {-46,21.7},{-41,21.7}}, color={0,0,127}));
  connect(secondsFromJan1st, decAng.nDay) annotation (Line(points={{-111,1},{-80,
          1},{-80,29},{-73,29}}, color={0,0,127}));
  connect(secondsFromJan1st, solarTime.secondsFromJan1st) annotation (Line(
        points={{-111,1},{-80,1},{-80,14},{-76.8,14}}, color={0,0,127}));
  connect(zen1.zen, cos1.u)
    annotation (Line(points={{-29.5,19},{-23,19}}, color={0,0,127}));
  connect(cos1.y, product1.u2)
    annotation (Line(points={{-11.5,19},{0,20}}, color={0,0,127}));
  connect(SolDirNorm, product1.u1) annotation (Line(points={{-111,61},{-6,61},{-6,
          32},{0,32}}, color={0,0,127}));
  connect(product1.y, add.u1)
    annotation (Line(points={{23,26},{28,26},{28,2},{34,2}}, color={0,0,127}));
  connect(SolDifHori, add.u2) annotation (Line(points={{-111,-59},{28,-59},{28,-10},
          {34,-10}}, color={0,0,127}));
  connect(add.y, SolGloHori) annotation (Line(points={{57,-4},{94,-4},{94,0},{110,
          0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
                                Rectangle(
        extent={{-100,-100},{100,100}},
        lineColor={0,0,127},
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid),
        Ellipse(
          extent={{-28,76},{28,24}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={255,128,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{46,-32},{-40,-84}},
          textColor={217,67,180},
          textString="GlobalHorizontal"),
        Line(
          points={{-32,20},{-50,2}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{-6,18},{-8,-34}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{6,18},{10,-34}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{20,18},{38,-20}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{-18,18},{-38,-20}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{36,18},{50,2}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Rectangle(
          extent={{-62,-76},{62,-82}},
          lineColor={0,0,0},
          lineThickness=1,
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid)}), Diagram(coordinateSystem(
          preserveAspectRatio=false)));
end SolGloHori_f_SolDirNormSolDifHori;
