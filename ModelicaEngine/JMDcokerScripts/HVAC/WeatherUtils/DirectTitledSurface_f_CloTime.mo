within HVAC.WeatherUtils;
model DirectTitledSurface_f_CloTime
  parameter Modelica.SIunits.Time timZon(displayUnit="h") "Time zone";
  parameter Modelica.SIunits.Angle lon(displayUnit="deg") "Longitude";
  parameter Modelica.SIunits.Angle lat(displayUnit="deg") "Latitude";
  parameter Modelica.SIunits.Angle azi(displayUnit="deg") "Surface azimuth; azi=90 degree if surface outward unit normal points toward east; azi=0 if it points toward north";
  parameter Modelica.SIunits.Angle til(displayUnit="deg") "Surface tilt";

  IncidenceAngle_f_CloTime incidenceAngle_f_CloTime(
    final timZon=timZon,
    final lon=lon,
    final lat=lat,
    final azi=azi,
    final til=til)
    annotation (Placement(transformation(extent={{-56,-10},{-36,10}})));
public
  Modelica.Blocks.Interfaces.RealInput secondsFromJan1st
    annotation (Placement(transformation(extent={{-140,-80},{-100,-40}})));
  Buildings.BoundaryConditions.SolarIrradiation.BaseClasses.DirectTiltedSurface
    HDirTil annotation (Placement(transformation(extent={{16,-16},{36,4}})));
public
  Modelica.Blocks.Interfaces.RealInput dirSol(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2")
    "Direct normal solar radiation"
    annotation (Placement(transformation(extent={{-140,40},{-100,80}})));
  Modelica.Blocks.Interfaces.RealOutput titledDirSol
    "Direct solar radiation on a tilted surface"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
equation
  connect(secondsFromJan1st, incidenceAngle_f_CloTime.secondsFromJan1st)
    annotation (Line(points={{-120,-60},{-64,-60},{-64,0},{-58,0}}, color={0,0,127}));
  connect(incidenceAngle_f_CloTime.IncAng, HDirTil.incAng) annotation (Line(
        points={{-35,0},{6,0},{6,-12},{14,-12}}, color={0,0,127}));
  connect(dirSol, HDirTil.HDirNor)
    annotation (Line(points={{-120,60},{8,60},{8,0},{14,0}}, color={0,0,127}));
  connect(HDirTil.HDirTil, titledDirSol) annotation (Line(points={{37,-6},{94,-6},
          {94,0},{110,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
                                Rectangle(
        extent={{-100,-100},{100,100}},
        lineColor={0,0,127},
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid),
        Polygon(
          points={{16,48},{90,22},{88,-82},{16,-58},{16,48}},
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={23,91,168},
          fillPattern=FillPattern.Solid),
        Ellipse(
          extent={{-88,78},{-32,26}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={255,128,0},
          fillPattern=FillPattern.Solid),
        Line(
          points={{-36,38},{50,-18}},
          color={244,125,35},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled}),
        Line(
          points={{48,-18},{-34,-42}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.Filled,Arrow.None},
          pattern=LinePattern.Dash),
        Text(
          extent={{36,-2},{-8,-26}},
          textColor={244,125,35},
          textString="InciAngle"),
        Text(
          extent={{38,50},{-22,16}},
          textColor={244,125,35},
          textString="DirectNormal"),
        Text(
          extent={{10,-32},{-50,-66}},
          textColor={217,67,180},
          textString="DirectOnTilted")}),                        Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end DirectTitledSurface_f_CloTime;
