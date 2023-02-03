within HVAC.Room.Tests;
model Test_SquaredRoom1EleRC
  HVAC.Room.RectangleRoom1EleRC squaredRoom1EleRC(
    CWallPerArea= 457385, ConstantInfiltrationRate = 5,
    GWin= 1, HorizontalLength = 3.5, InitRH = 0.6, InitTDryBulb = 295.15, Lat( displayUnit = "rad") = 0.6565929999999999, LeftFaceOutside = false, Lon( displayUnit = "rad") = -2.13628, LowerFaceOutside = false, RightFaceOutside = true, RightSurfaceWWR = 0.46666, RoomHeight = 3, TimeZone = -8 * 3600,
    UWall= 26,UWin= 4.347, UpperAzi = 0, UpperFaceOutside = true, UpperSurfaceWWR = 0.6666,
    UseInputInfiltrationRate= true, VerticalLength = 5,
    nPorts= 0)
    annotation (Placement(visible = true, transformation(extent = {{20, 10}, {78, 56}}, rotation = 0)));

  Modelica.Blocks.Sources.Constant OAT(k = 290.156)  annotation (
    Placement(visible = true, transformation(origin={-68,86},    extent={{-6,-6},
            {6,6}},                                                                               rotation = 0)));
  Modelica.Blocks.Sources.Constant OARH(k = 0.763) annotation (
    Placement(visible = true, transformation(origin={-68,64},    extent={{-6,-6},
            {6,6}},                                                                               rotation = 0)));
  Modelica.Blocks.Sources.Constant skyCoverTenth(k = 8.2) annotation (
    Placement(visible = true, transformation(origin={-68,42},     extent={{-6,-6},
            {6,6}},                                                                                rotation = 0)));
  Modelica.Blocks.Sources.Constant SolDifHori(k= 267.29) annotation (Placement(
        visible=true, transformation(
        origin={-68,2},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant nPeople(k = 1) annotation (
    Placement(visible = true, transformation(origin={-68,-18},    extent={{-6,-6},
            {6,6}},                                                                                rotation = 0)));
  Modelica.Blocks.Sources.Constant equipGain(k = 200) annotation (
    Placement(visible = true, transformation(origin={-68,-40},  extent={{-6,-6},
            {6,6}},                                                                              rotation = 0)));
  Modelica.Blocks.Sources.Constant SolDirNorm(k= 80.55) annotation (Placement(
        visible=true, transformation(
        origin={-68,22},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant infiltrationACH(k = 0) annotation (
    Placement(visible = true, transformation(origin = {-68, -62}, extent = {{-6, -6}, {6, 6}}, rotation = 0)));
equation
  connect(OAT.y, squaredRoom1EleRC.OAT) annotation (
    Line(points={{-61.4,86},{18.1545,86},{18.1545,54.3765}},
                                                   color = {0, 0, 127}));
  connect(OARH.y, squaredRoom1EleRC.OARH) annotation (
    Line(points={{-61.4,64},{-21,64},{-21,44},{18,44},{18,46},{18.1545,46},{
          18.1545,47.3412}},                                                                 color = {0, 0, 127}));
  connect(skyCoverTenth.y, squaredRoom1EleRC.SkyCoverTenths) annotation (
    Line(points={{-61.4,42},{18.1545,42},{18.1545,40.5765}},
                                                   color = {0, 0, 127}));
  connect(SolDirNorm.y, squaredRoom1EleRC.SolDirNorm) annotation (
    Line(points={{-61.4,22},{-20,22},{-20,32},{18,32},{18,31},{18.1545,31},{
          18.1545,33.5412}},                                                                 color = {0, 0, 127}));
  connect(SolDifHori.y, squaredRoom1EleRC.SolDifHori) annotation (
    Line(points={{-61.4,2},{-14,2},{-14,22},{14,22},{14,23},{18.1545,23},{
          18.1545,26.5059}},                                                               color = {0, 0, 127}));
  connect(nPeople.y, squaredRoom1EleRC.nPeople) annotation (
    Line(points={{-61.4,-18},{-21,-18},{-21,-16},{8,-16},{8,18},{20,18},{20,17},
          {18.1545,17},{18.1545,19.7412}},                                                                         color = {0, 0, 127}));
  connect(equipGain.y, squaredRoom1EleRC.EquipGain) annotation (
    Line(points={{-61.4,-40},{18.1545,-40},{18.1545,12.4353}},
                                                     color = {0, 0, 127}));
  connect(infiltrationACH.y, squaredRoom1EleRC.InputInfiltration) annotation (
    Line(points={{-61.4,-62},{28.9636,-62},{28.9636,8.37647}},
                                                    color = {0, 0, 127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={Rectangle(fillColor = {0, 85, 255},
            fillPattern =                                                                                                   FillPattern.Solid,
            lineThickness =                                                                                                                                    1, extent = {{-100, 100}, {104, -100}}), Rectangle(origin = {3, -1}, fillColor = {0, 170, 0},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid, extent = {{-81, 81}, {81, -81}}), Text(origin = {5, 7}, lineColor = {255, 255, 255}, extent = {{-81, 59}, {81, -59}}, textString = "t", textStyle = {TextStyle.Bold})}),                                  Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Test_SquaredRoom1EleRC;
