within HVAC.PsychrometricUtils;
model Dew_f_Tdrybulb_RH
  "Calculate dewpoint temperature (K) from dry bulb temperature (K) and RH (0-1)"
  Buildings.Utilities.Psychrometrics.pW_X pWat(use_p_in=false)
    annotation (Placement(transformation(extent={{-24,-8},{-12,4}})));
  Buildings.Utilities.Psychrometrics.TDewPoi_pW dewPoi
    annotation (Placement(transformation(extent={{0,-12},{20,8}})));
  Buildings.Utilities.Psychrometrics.X_pTphi x_pTphi(use_p_in=false)
    annotation (Placement(transformation(extent={{-76,-10},{-62,4}})));
  Modelica.Blocks.Interfaces.RealInput TDryBulb(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Drybulb air temperature"
    annotation (Placement(transformation(extent={{-124,48},{-100,72}}),
        iconTransformation(extent={{-124,48},{-100,72}})));
  Modelica.Blocks.Interfaces.RealInput RelHum(min=0, max=1, unit="1") "Air relative humidity"
    annotation (Placement(transformation(extent={{-124,-72},{-100,-48}}),
        iconTransformation(extent={{-124,-72},{-100,-48}})));
  Modelica.Blocks.Interfaces.RealOutput DewPoi(
    final quantity="ThermodynamicTemperature",
    final unit="K",
    displayUnit="degC") "Air dewpoint temperature"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
equation
  connect(pWat.p_w, dewPoi.p_w)
    annotation (Line(points={{-11.4,-2},{-1,-2}}, color={0,0,127}));
  connect(x_pTphi.X[1], pWat.X_w)
    annotation (Line(points={{-61.3,-3},{-24.6,-2}}, color={0,0,127}));
  connect(TDryBulb, x_pTphi.T) annotation (Line(points={{-112,60},{-82,60},{
          -82,-3},{-77.4,-3}}, color={0,0,127}));
  connect(RelHum, x_pTphi.phi) annotation (Line(points={{-112,-60},{-82,-60},
          {-82,-7.2},{-77.4,-7.2}}, color={0,0,127}));
  connect(dewPoi.T, DewPoi) annotation (Line(points={{21,-2},{96,-2},{96,0},{
          110,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
                                Rectangle(
        extent={{-100,-100},{100,100}},
        lineColor={0,0,127},
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid), Text(
          extent={{-90,56},{92,-56}},
          textColor={28,108,200},
          textString="Dew_f_Tdrybulb_RH")}),                     Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Dew_f_Tdrybulb_RH;
