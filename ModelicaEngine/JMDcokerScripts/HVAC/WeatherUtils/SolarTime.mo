within HVAC.WeatherUtils;
model SolarTime
  parameter Modelica.SIunits.Time timZon(displayUnit="h") "Time zone";
  parameter Modelica.SIunits.Angle lon(displayUnit="deg") "Longitude";
protected
  Buildings.BoundaryConditions.WeatherData.BaseClasses.EquationOfTime
                             eqnTim "Equation of time"
    annotation (Placement(transformation(extent={{-62,16},{-42,36}})));
  Buildings.BoundaryConditions.WeatherData.BaseClasses.LocalCivilTime locTim(final lon=
       lon, final timZon=timZon)          "Local civil time"
    annotation (Placement(transformation(extent={{-62,-42},{-42,-22}})));
  Buildings.BoundaryConditions.WeatherData.BaseClasses.SolarTime
                        solTim "Solar time"
    annotation (Placement(transformation(extent={{-2,-2},{18,18}})));
public
  Modelica.Blocks.Interfaces.RealInput secondsFromJan1st(final quantity="Time",
    final unit="s")
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));
  Modelica.Blocks.Interfaces.RealOutput solTime(final quantity="Time",
    final unit="s") "Solar time in seconds"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
equation
  connect(secondsFromJan1st, eqnTim.nDay) annotation (Line(points={{-120,0},{
          -70,0},{-70,26},{-64,26}},
                                  color={0,0,127}));
  connect(secondsFromJan1st, locTim.cloTim) annotation (Line(points={{-120,0},{
          -70,0},{-70,-32},{-64,-32}}, color={0,0,127}));
  connect(eqnTim.eqnTim, solTim.equTim) annotation (Line(points={{-41,26},{-10,
          26},{-10,14},{-4,14}}, color={0,0,127}));
  connect(locTim.locTim, solTim.locTim) annotation (Line(points={{-41,-32},{-10,
          -32},{-10,2.6},{-4,2.6}}, color={0,0,127}));
  connect(solTim.solTim, solTime)
    annotation (Line(points={{19,8},{94,8},{94,0},{110,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
                                Rectangle(
        extent={{-100,-100},{100,100}},
        lineColor={0,0,127},
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid),
        Text(
          extent={{-42,42},{64,-42}},
          lineColor={0,0,255},
          textString="SolarTime"),
        Text(
          extent={{-102,4},{-72,-6}},
          lineColor={0,0,127},
          textString="secondsFromJan1st")}),                     Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end SolarTime;
