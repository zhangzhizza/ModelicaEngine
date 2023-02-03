within HVAC.WeatherUtils;
model DiffuseTitledSurface_f_CloTime
  parameter Modelica.SIunits.Time timZon(displayUnit="h") "Time zone";
  parameter Modelica.SIunits.Angle lon(displayUnit="deg") "Longitude";
  parameter Modelica.SIunits.Angle lat(displayUnit="deg") "Latitude";
  parameter Modelica.SIunits.Angle azi(displayUnit="deg") "Surface azimuth; azi=90 degree if surface outward unit normal points toward east; azi=0 if it points toward north";
  parameter Modelica.SIunits.Angle til(displayUnit="deg") "Surface tilt";
  parameter Real rho(min=0, max=1, final unit="1")=0.2 "Ground reflectance";
  parameter Boolean OutputHSkyDifTil = false;
  parameter Boolean OutputHGroDifTil = false;
  Modelica.Blocks.Math.Add add "Block to add radiations"
    annotation (Placement(transformation(extent={{60,-10},{80,10}})));
  Modelica.Blocks.Interfaces.RealOutput H(final quantity="RadiantEnergyFluenceRate",
      final unit="W/m2")
                        "Radiation per unit area"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
  Modelica.Blocks.Interfaces.RealOutput HSkyDifTil(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2") if OutputHSkyDifTil
    "Hemispherical diffuse solar irradiation on a tilted surface from the sky"
    annotation (Placement(transformation(extent={{100,50},{120,70}})));
  Modelica.Blocks.Interfaces.RealOutput HGroDifTil(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2") if OutputHGroDifTil
    "Hemispherical diffuse solar irradiation on a tilted surface from the ground"
    annotation (Placement(transformation(extent={{100,-70},{120,-50}})));
  IncidenceAngle_f_CloTime incidenceAngle_f_CloTime(
    final timZon=timZon,
    final lon=lon,
    final lat=lat,
    final azi=azi,
    final til=til)
    annotation (Placement(transformation(extent={{-82,-94},{-62,-74}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.ZenithAngle zen(lat=lat)
    annotation (Placement(transformation(extent={{-68,26},{-58,36}})));
  Modelica.Blocks.Interfaces.RealInput SolGloHori(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2")
    "Direct normal solar radiation" annotation (Placement(transformation(extent=
           {{-124,44},{-100,68}}), iconTransformation(extent={{-124,44},{-100,68}})));
  Modelica.Blocks.Interfaces.RealInput SolDifHori(final quantity="RadiantEnergyFluenceRate",
    final unit="W/m2")
    "Diffuse horizontal solar radiation" annotation (Placement(transformation(
          extent={{-124,-12},{-100,12}}), iconTransformation(extent={{-124,-12},
            {-100,12}})));
  Modelica.Blocks.Interfaces.RealInput secondsFromJan1st(final quantity="Time",
    final unit="s") "Seconds from Jan 1st"
    annotation (Placement(transformation(extent={{-124,-70},{-100,-46}}),
        iconTransformation(extent={{-124,-70},{-100,-46}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.Declination decAng
    annotation (Placement(transformation(extent={{-88,28},{-78,38}})));
  SolarTime solarTime(timZon=timZon, lon=lon)
    annotation (Placement(transformation(extent={{-92,14},{-84,22}})));
protected
  Buildings.BoundaryConditions.SolarIrradiation.BaseClasses.DiffusePerez
                           HDifTil(final til=til, final rho=rho)
                   "Diffuse irradiation on tilted surface"
    annotation (Placement(transformation(extent={{0,-21},{42,21}})));
  Buildings.BoundaryConditions.SolarIrradiation.BaseClasses.SkyClearness
                           skyCle "Sky clearness"
    annotation (Placement(transformation(extent={{-40,20},{-32,28}})));
  Buildings.BoundaryConditions.SolarIrradiation.BaseClasses.BrighteningCoefficient
                                     briCoe "Brightening coefficient"
    annotation (Placement(transformation(extent={{-26,-6},{-18,2}})));
  Buildings.BoundaryConditions.SolarIrradiation.BaseClasses.RelativeAirMass
                              relAirMas "Relative air mass"
    annotation (Placement(transformation(extent={{-48,-32},{-40,-24}})));
  Buildings.BoundaryConditions.SolarIrradiation.BaseClasses.SkyBrightness
                            skyBri "Sky brightness"
    annotation (Placement(transformation(extent={{-40,-52},{-32,-44}})));
  Buildings.BoundaryConditions.SolarGeometry.BaseClasses.SolarHourAngle
    solHouAng "Solar hour angle"
    annotation (Placement(transformation(extent={{-80,14},{-72,22}})));
equation

  connect(relAirMas.relAirMas,skyBri. relAirMas) annotation (Line(
      points={{-39.6,-28},{-34,-28},{-34,-40},{-44,-40},{-44,-46.4},{-40.8,-46.4}},
      color={0,0,127}));
  connect(skyBri.skyBri,briCoe. skyBri) annotation (Line(
      points={{-31.6,-48},{-28,-48},{-28,-10},{-30,-10},{-30,-2},{-26.8,-2}},
      color={0,0,127}));
  connect(briCoe.F2,HDifTil. briCof2) annotation (Line(
      points={{-17.6,-3.6},{-24,-3.6},{-24,-2.1},{-4.2,-2.1}},
      color={0,0,127}));
  connect(briCoe.F1,HDifTil. briCof1) annotation (Line(
      points={{-17.6,-0.4},{-12,-0.4},{-12,4.2},{-4.2,4.2}},
      color={0,0,127}));
  connect(HDifTil.HSkyDifTil,add. u1) annotation (Line(
      points={{44.1,8.4},{52,8.4},{52,6},{58,6}},
      color={0,0,127}));
  connect(HDifTil.HGroDifTil,add. u2) annotation (Line(
      points={{44.1,-8.4},{52,-8.4},{52,-6},{58,-6}},
      color={0,0,127}));
  connect(add.y,H)  annotation (Line(
      points={{81,0},{110,0}},
      color={0,0,127}));
  connect(HDifTil.HSkyDifTil,HSkyDifTil)  annotation (Line(
      points={{44.1,8.4},{52,8.4},{52,60},{110,60}},
      color={0,0,127}));
  connect(HDifTil.HGroDifTil,HGroDifTil)  annotation (Line(
      points={{44.1,-8.4},{52,-8.4},{52,-60},{110,-60}},
      color={0,0,127}));
  connect(incidenceAngle_f_CloTime.IncAng, HDifTil.incAng) annotation (Line(
        points={{-61,-84},{-14,-84},{-14,-14.7},{-4.2,-14.7}}, color={0,0,127}));
  connect(secondsFromJan1st, incidenceAngle_f_CloTime.secondsFromJan1st)
    annotation (Line(points={{-112,-58},{-90,-58},{-90,-84},{-84,-84}}, color={0,
          0,127}));
  connect(SolDifHori, skyCle.HDifHor) annotation (Line(points={{-112,0},{-54,0},
          {-54,24},{-40.8,24}}, color={0,0,127}));
  connect(zen.zen, skyCle.zen) annotation (Line(points={{-57.5,31},{-56,31},{-56,
          21.6},{-40.8,21.6}}, color={0,0,127}));
  connect(secondsFromJan1st, decAng.nDay) annotation (Line(points={{-112,-58},{-96,
          -58},{-96,33},{-89,33}}, color={0,0,127}));
  connect(solarTime.solTime, solHouAng.solTim)
    annotation (Line(points={{-83.6,18},{-80.8,18}}, color={0,0,127}));
  connect(skyCle.skyCle, briCoe.skyCle) annotation (Line(points={{-31.6,24},{-26,
          24},{-26,6},{-30,6},{-30,0.4},{-26.8,0.4}}, color={0,0,127}));
  connect(solHouAng.solHouAng, zen.solHouAng) annotation (Line(points={{-71.6,18},
          {-66,18},{-66,22},{-69,22},{-69,28.6}}, color={0,0,127}));
  connect(decAng.decAng, zen.decAng) annotation (Line(points={{-77.5,33},{-76,33},
          {-76,42},{-69,42},{-69,33.7}}, color={0,0,127}));
  connect(solarTime.secondsFromJan1st, secondsFromJan1st) annotation (Line(
        points={{-92.8,18},{-96,18},{-96,-58},{-112,-58}}, color={0,0,127}));
  connect(zen.zen, relAirMas.zen) annotation (Line(points={{-57.5,31},{-56,31},{
          -56,-28},{-48.8,-28}}, color={0,0,127}));
  connect(SolDifHori, skyBri.HDifHor) annotation (Line(points={{-112,0},{-58,0},
          {-58,-49.6},{-40.8,-49.6}}, color={0,0,127}));
  connect(zen.zen, HDifTil.zen) annotation (Line(points={{-57.5,31},{-56,31},{-56,
          -8},{-26,-8},{-26,-10},{-12,-10},{-12,-8.4},{-4.2,-8.4}}, color={0,0,127}));
  connect(SolDifHori, HDifTil.HDifHor) annotation (Line(points={{-112,0},{-54,0},
          {-54,24},{-46,24},{-46,32},{-14,32},{-14,10.5},{-4.2,10.5}}, color={0,
          0,127}));
  connect(SolGloHori, HDifTil.HGloHor) annotation (Line(points={{-112,56},{-4.2,
          56},{-4.2,16.8}}, color={0,0,127}));
  connect(SolGloHori, skyCle.HGloHor) annotation (Line(points={{-112,56},{-42,56},
          {-42,30},{-44,30},{-44,26.4},{-40.8,26.4}}, color={0,0,127}));
  connect(zen.zen, briCoe.zen) annotation (
    Line(points = {{-58, 32}, {-50, 32}, {-50, -4}, {-40, -4}, {-40, -5}, {-34, -5}, {-34, -5.5}, {-26, -5.5}, {-26, -4}}, color = {0, 0, 127}));
  annotation (Icon(graphics={   Rectangle(
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
        Ellipse(
          extent={{-76,20},{60,4}},
          lineColor={217,67,180},
          fillColor={175,175,175},
          fillPattern=FillPattern.Solid,
          pattern=LinePattern.Dash),
        Line(
          points={{-54,48},{-26,24}},
          color={244,125,35},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled}),
        Text(
          extent={{16,-34},{-70,-86}},
          textColor={217,67,180},
          textString="DiffuseOnTilted"),
        Line(
          points={{-56,6},{-74,-12}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{-30,4},{-32,-48}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{-18,4},{-14,-48}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{-4,4},{14,-34}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{-42,4},{-62,-34}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash),
        Line(
          points={{12,4},{26,-12}},
          color={217,67,180},
          thickness=1,
          arrow={Arrow.None,Arrow.Filled},
          pattern=LinePattern.Dash)}));
end DiffuseTitledSurface_f_CloTime;
