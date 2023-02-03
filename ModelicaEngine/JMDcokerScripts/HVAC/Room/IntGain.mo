within HVAC.Room;
model IntGain
 Modelica.Blocks.Interfaces.RealInput convectiveQ
    "Convective heat gain per unit room area (W/m2)"
    annotation (Placement(transformation(extent={{-136,40},{-96,80}}),
        iconTransformation(extent={{-136,40},{-96,80}})));
  Modelica.Blocks.Interfaces.RealInput latentQ
    "Latent heat gain per room area (W/m2)"
    annotation (Placement(transformation(extent={{-136,-80},{-96,-40}}),
        iconTransformation(extent={{-136,-80},{-96,-40}})));
  Modelica.Blocks.Interfaces.RealOutput y[3]
    annotation (Placement(transformation(extent={{100,-10},{120,10}}),
        iconTransformation(extent={{100,-10},{120,10}})));
  Modelica.Blocks.Sources.Constant radiantQ(k=0)
    "Radiant heat gain per room area (W/m2), constantly zero"
    annotation (Placement(transformation(extent={{-54,62},{-34,82}})));
equation
  connect(radiantQ.y, y[1]) annotation (Line(points={{-33,72},{92,72},{92,
          -6.66667},{110,-6.66667}}, color={0,0,127}));
  connect(convectiveQ, y[2]) annotation (Line(points={{-116,60},{92,60},{92,0},
          {110,0}}, color={0,0,127}));
  connect(latentQ, y[3]) annotation (Line(points={{-116,-60},{92,-60},{92,
          6.66667},{110,6.66667}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Text(
          extent={{-92,92},{6,26}},
          textColor={28,108,200},
          textString="Convec"),
        Text(
          extent={{-96,-42},{2,-110}},
          textColor={28,108,200},
          textString="Latent
"),     Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          lineThickness=1)}),                                    Diagram(
        coordinateSystem(preserveAspectRatio=false)),
              Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Text(
          extent={{-92,92},{6,26}},
          textColor={28,108,200},
          textString="Convec"),
        Text(
          extent={{-96,-42},{2,-110}},
          textColor={28,108,200},
          textString="Latent
"),     Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          lineThickness=1)}),                                    Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end IntGain;
