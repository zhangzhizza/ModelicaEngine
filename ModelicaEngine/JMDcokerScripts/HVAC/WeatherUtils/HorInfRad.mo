within HVAC.WeatherUtils;
block HorInfRad "Horizontal Infrared Radiation Intensity"
  extends Modelica.Blocks.Icons.Block;

  Modelica.Blocks.Interfaces.RealInput TDryBul(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Dry bulb temperature at ground level"
    annotation (Placement(transformation(extent={{-140,60},{-100,100}})));
  Modelica.Blocks.Interfaces.RealInput nOpa10(
    displayUnit="Tenths(0-10)",
    min=0,
    max=10) "Opaque sky cover in tenths"
    annotation (Placement(transformation(extent={{-140,-100},{-100,-60}})));

  Modelica.Blocks.Interfaces.RealInput TDewPoi(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Dew point temperature"
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));

  Modelica.Blocks.Interfaces.RealOutput HorInfRad(
    unit="W/m2",
    min=0,
    nominal=100) "Horizontal Infrared Radiation Intensity"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));

  constant Real StefanBoltzmannConst=5.6697*10e-8 "W/m2/K^4";
protected
  Modelica.SIunits.Emissivity epsSky "Black-body absorptivity of sky";
equation
  epsSky =  (0.787 + 0.764*Modelica.Math.log(-TDewPoi/Modelica.Constants.T_zero))*(1 + 0.0224*nOpa10 -
      0.0035*(nOpa10^2) + 0.00028*(nOpa10^3));
  HorInfRad = epsSky*StefanBoltzmannConst*(TDryBul^4);
  annotation (
    defaultComponentName="HorInfRad",
    Documentation(info="<html>
<p>This component computes the Horizontal Infrared Radiation Intensity. </p>
<p>It uses the method presented by EnergyPlus (https://bigladdersoftware.com/epx/docs/9-5/engineering-reference/climate-calculations.html#sky-radiation-modeling) where the sky emissivity calculation uses Clark&amp;Allen&apos;s method. </p>
</html>", revisions="<html>
<ul>
<li>Jan 8, 2023, by Zhiang Zhang:<br>First implementation. </li>
</ul>
</html>"),
    Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
            100}}), graphics={
        Text(
          extent={{-150,110},{150,150}},
          textString="%name",
          lineColor={0,0,255}),
        Text(
          extent={{-40,44},{66,-40}},
          lineColor={0,0,255},
          textString="HorInfRad"),
        Text(
          extent={{-96,84},{-66,74}},
          lineColor={0,0,127},
          textString="TDry"),
        Text(
          extent={{-90,-74},{-60,-88}},
          lineColor={0,0,127},
          textString="nOpa10"),
        Text(
          extent={{-92,6},{-58,-8}},
          lineColor={0,0,127},
          textString="TDewPoi")}));
end HorInfRad;
