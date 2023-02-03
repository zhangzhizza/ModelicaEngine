within HVAC.AirSideSystem.Tests;
model Test_RoomWithFCU
  RoomWithFCU roomWithFCU(
    CWallPerArea=457385,
    EnableWatPort=false,
    FCU_nominal_UA=2000,
    FCU_nominal_air_m(displayUnit = "") = 0.2,
    FCU_nominal_wat_m(displayUnit = "") = 0.2,
    GWin=1,
    HorizontalLength=3,
    InitRH=0.6,
    InitTDryBulb=295.15, IsHeating = false,
    KpTi={0.5,300},
    Lat=0.6565929999999999,
    LeftFaceOutside=false,
    Lon=-2.13628,
    LowerFaceOutside=false,
    RightFaceOutside=true,
    RightSurfaceWWR=0.46666,
    RoomHeight=3,TimeZone=-8*3600,
    UWall=26,
    UWin=4.347,
    UpperAzi=0,
    UpperFaceOutside=true,
    UpperSurfaceWWR=0.6666,
    UsePIControl= true,
    VerticalLength=5)
    annotation (Placement(transformation(extent={{-18,-50},{78,42}})));

  Modelica.Blocks.Sources.Constant OAT(k=292.526)    annotation (
    Placement(visible = true, transformation(origin={-80,70},    extent={{-6,-6},
            {6,6}},                                                                               rotation = 0)));
  Modelica.Blocks.Sources.Constant OARH(k=0.679)   annotation (
    Placement(visible = true, transformation(origin={-80,48},    extent={{-6,-6},
            {6,6}},                                                                               rotation = 0)));
  Modelica.Blocks.Sources.Constant skyCoverTenth(k=3.53)   annotation (
    Placement(visible = true, transformation(origin={-80,26},     extent={{-6,-6},
            {6,6}},                                                                                rotation = 0)));
  Modelica.Blocks.Sources.Constant SolDifHori(k=287)  annotation (Placement(
        visible=true, transformation(
        origin={-80,-14},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant nPeople(k=1)   annotation (
    Placement(visible = true, transformation(origin={-80,-34},    extent={{-6,-6},
            {6,6}},                                                                                rotation = 0)));
  Modelica.Blocks.Sources.Constant equipGain(k=200)   annotation (
    Placement(visible = true, transformation(origin={-80,-56},  extent={{-6,-6},
            {6,6}},                                                                              rotation = 0)));
  Modelica.Blocks.Sources.Constant SolDirNorm(k=482)  annotation (Placement(
        visible=true, transformation(
        origin={-80,6},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant infiltrationACH(k=1)   annotation (
    Placement(visible = true, transformation(origin={-80,-78},    extent = {{-6, -6}, {6, 6}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant FCU_AirFlowRatio(k=1) annotation (Placement(
        visible=true, transformation(
        origin={-26,84},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant IAT_SP(k=273.15 + 22) annotation (Placement(
        visible=true, transformation(
        origin={0,86},
        extent={{-6,-6},{6,6}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant WatTIn(k=273.15 + 10) annotation (Placement(
        visible=true, transformation(
        origin={28,82},
        extent={{-6,-6},{6,6}},
        rotation=0)));
equation
  connect(OAT.y, roomWithFCU.OAT) annotation (
    Line(points = {{-73.4, 70}, {-20, 70}, {-20, 46}, {-21.6, 46}, {-21.6, 42.23}}, color = {0, 0, 127}));
  connect(OARH.y, roomWithFCU.OARH) annotation (
    Line(points = {{-73.4, 48}, {-30, 48}, {-30, 33.03}, {-21.6, 33.03}}, color = {0, 0, 127}));
  connect(skyCoverTenth.y, roomWithFCU.SkyCoverTenths) annotation (
    Line(points = {{-73.4, 26}, {-30, 26}, {-30, 23.83}, {-21.6, 23.83}}, color = {0, 0, 127}));
  connect(SolDirNorm.y, roomWithFCU.SolDirNorm) annotation (
    Line(points = {{-73.4, 6}, {-30, 6}, {-30, 14.63}, {-21.6, 14.63}}, color = {0, 0, 127}));
  connect(roomWithFCU.SolDifHori, SolDifHori.y) annotation (
    Line(points = {{-21.6, 5.43}, {-68, 5.43}, {-68, -14}, {-73.4, -14}}, color = {0, 0, 127}));
  connect(roomWithFCU.nPeople, nPeople.y) annotation (
    Line(points = {{-21.6, -12.97}, {-66, -12.97}, {-66, -34}, {-73.4, -34}}, color = {0, 0, 127}));
  connect(roomWithFCU.EquipGain, equipGain.y) annotation (
    Line(points = {{-21.6, -22.17}, {-64, -22.17}, {-64, -56}, {-73.4, -56}}, color = {0, 0, 127}));
  connect(infiltrationACH.y, roomWithFCU.InputInfiltration) annotation (
    Line(points={{-73.4,-78},{-30,-78},{-30,-32.29},{-21.6,-32.29}},          color = {0, 0, 127}));
  connect(FCU_AirFlowRatio.y, roomWithFCU.FCU_airflow_ratio) annotation (
    Line(points = {{-19.4, 84}, {-8.4, 84}, {-8.4, 45.68}}, color = {0, 0, 127}));
  connect(IAT_SP.y, roomWithFCU.IAT_SP) annotation (
    Line(points = {{6.6, 86}, {10.8, 86}, {10.8, 45.68}}, color = {0, 0, 127}));
  connect(WatTIn.y, roomWithFCU.WatTIn) annotation (
    Line(points={{34.6,82},{30,82},{30,52},{20.4,52},{20.4,45.68}},          color = {0, 0, 127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={Rectangle(fillColor = {0, 85, 255},
            fillPattern =                                                                                                   FillPattern.Solid,
            lineThickness =                                                                                                                                    1, extent={{
              -100,102},{104,-98}}),                                                                                                                                                                    Rectangle(origin={3,
              1},                                                                                                                                                                                                        fillColor = {0, 170, 0},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid, extent = {{-81, 81}, {81, -81}}), Text(origin={5,
              9},                                                                                                                                                                                                        lineColor = {255, 255, 255}, extent = {{-81, 59}, {81, -59}}, textString = "t", textStyle = {TextStyle.Bold})}),
      Diagram(coordinateSystem(preserveAspectRatio=false)));
end Test_RoomWithFCU;
