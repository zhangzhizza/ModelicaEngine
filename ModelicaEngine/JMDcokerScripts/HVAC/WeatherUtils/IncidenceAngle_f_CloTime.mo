within HVAC.WeatherUtils;
model IncidenceAngle_f_CloTime
  parameter Modelica.SIunits.Time timZon(displayUnit="h") "Time zone";
  parameter Modelica.SIunits.Angle lon(displayUnit="deg") "Longitude";
  parameter Modelica.SIunits.Angle lat(displayUnit="deg") "Latitude";
  parameter Modelica.SIunits.Angle azi(displayUnit="deg") "Surface azimuth; azi=90 degree if surface outward unit normal points toward east; azi=0 if it points toward north";
  parameter Modelica.SIunits.Angle til(displayUnit="deg") "Surface tilt";
  parameter Modelica.SIunits.Angle azi_cvt = convertAzi(azi)
                                                  "Surface azimuth; azi=-90 degree if surface outward unit normal points toward east; azi=0 if it points toward south";
protected
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.Declination decAng
    "Declination angle"
    annotation (Placement(transformation(extent={{-30,40},{-10,60}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.SolarHourAngle
    solHouAng "Solar hour angle"
    annotation (Placement(transformation(extent={{-30,-40},{-10,-20}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.IncidenceAngle incAng(
    final lat=lat,
    final azi=azi_cvt,
    final til=til) "Incidence angle"
    annotation (Placement(transformation(extent={{50,0},{70,20}})));
public
  Modelica.Blocks.Interfaces.RealInput secondsFromJan1st
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));
  SolarTime solarTime(timZon=timZon, lon=lon)
    annotation (Placement(transformation(extent={{-70,-40},{-50,-20}})));
  Modelica.Blocks.Interfaces.RealOutput IncAng
    "Incidence angle on a tilted surface"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
equation
  connect(decAng.decAng,incAng. decAng) annotation (Line(
      points={{-9,50},{30,50},{30,15.4},{47.8,15.4}},
      color={0,0,127}));
  connect(solHouAng.solHouAng,incAng. solHouAng) annotation (Line(
      points={{-9,-30},{30,-30},{30,5.2},{48,5.2}},
      color={0,0,127}));
  connect(secondsFromJan1st, solarTime.secondsFromJan1st) annotation (Line(
        points={{-120,0},{-78,0},{-78,-30},{-72,-30}}, color={0,0,127}));
  connect(solarTime.solTime, solHouAng.solTim)
    annotation (Line(points={{-49,-30},{-32,-30}}, color={0,0,127}));
  connect(decAng.nDay, secondsFromJan1st) annotation (Line(points={{-32,50},{-90,
          50},{-90,0},{-120,0}}, color={0,0,127}));
  connect(incAng.incAng, IncAng) annotation (Line(points={{71,10},{94,10},{94,0},
          {110,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
                                Rectangle(
        extent={{-100,-100},{100,100}},
        lineColor={0,0,127},
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid),
        Polygon(
          points={{14,50},{88,24},{86,-80},{14,-56},{14,50}},
          lineColor={28,108,200},
          lineThickness=1,
          fillColor={23,91,168},
          fillPattern=FillPattern.Solid),
        Ellipse(
          extent={{-90,80},{-34,28}},
          lineColor={244,125,35},
          lineThickness=1,
          fillColor={255,128,0},
          fillPattern=FillPattern.Solid),
        Line(
          points={{-38,40},{48,-16}},
          color={244,125,35},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled}),
        Line(
          points={{48,-16},{-98,-64}},
          color={0,0,0},
          thickness=1),
        Line(
          points={{4,10}},
          color={244,125,35},
          thickness=1,
          arrow={Arrow.Filled,Arrow.None}),
        Text(
          extent={{34,6},{-42,-30}},
          textColor={244,125,35},
          textString="InciAngle")}),                             Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end IncidenceAngle_f_CloTime;
