model Hall2ThermalResponse
  parameter String Mode = "Inference"  annotation(
    Dialog(group = "Simulation Mode"), choices(
                choice="Calibration" "Calibration mode",
                choice="Inference" "Inference mode"));
  parameter Real theta_Foa = 50 "18.667 Outdoor air flow rate in kg/s";
  parameter Real theta_Fret= 20 "6.29 Return air flow rate in kg/s";
  parameter Real theta_UAcoil = 50000 "37948 AHU coil UA in W/K";
  parameter Real theta_InfilRate = 0.05 "0.0543 Infiltration rate in ACH";
  parameter Real theta_Uwall = 2.93 "Wall U value in W/m2.K";
  parameter Real TroomAirInit = 30.676 "Initial room air temperature in C";
  parameter Real theta_Mass = 100000 "Other mass, kJ/K";
  parameter Real EquipSensibleRatio =  0.4 "Proportion of equipment electric power to sensible heat gain";
  parameter Real x_TdbInit = 2 "Initial Tdb (C)";
  HVAC.AirSideSystem.RoomWithACnOA Hall2(CWallPerArea = 60000, FhumwNominal = 0.001, FoaNominal = theta_Foa, FretNominal = theta_Fret, FwatNominal = 20, GWin = 0.5, HorizontalLength = 300, InitRH = 0.5, InitTDryBulb = TroomAirInit + 273.15, Lat = 0.69813170079773, LeftFaceOutside = false, LeftSurfaceWWR = 0.01, Lon = 2.0943951023932, LowerFaceOutside = false, LowerSurfaceWWR = 0.01, RightFaceOutside = true, RightSurfaceWWR = 0.01, RoomHeight = 20, TimeZone = 8*3600, UAcoilNominal = theta_UAcoil, UWall = theta_Uwall, UWin = 2, UpperAzi = 0.5235987755982988, UpperFaceOutside = false, UpperSurfaceWWR = 0.01, VerticalLength = 200, OtherMass = theta_Mass) annotation(
    Placement(transformation(extent = {{0, -52}, {92, 40}})));
  Modelica.Blocks.Sources.Constant NPeople(k = 50) annotation(
    Placement(transformation(origin = {-88, -52}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant EquipGain(k = 0) annotation(
    Placement(transformation(origin = {-88, -70}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant infiltrationACH(k = theta_InfilRate) annotation(
    Placement(transformation(origin = {-88, -92}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant Foa(k = theta_Foa) annotation(
    Placement(transformation(origin = {-14, 86}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant Fret(k = theta_Fret) annotation(
    Placement(transformation(origin = {8, 86}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant RhumVal(k = 0) annotation(
    Placement(transformation(origin = {28, 86}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Math.Add TdbK annotation(
    Placement(transformation(origin = {-43, 65}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Constant Kelvin(k = 273.15)  annotation(
    Placement(transformation(origin = {-92, 90}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Math.Add TwatSupK annotation(
    Placement(transformation(origin = {51, 87}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Constant u_Fwat(k = 50) annotation(
    Placement(transformation(origin = {-90, 44}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant x_TwatSup(k = 45) annotation(
    Placement(transformation(origin = {-90, 24}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant x_HairOutdoor(k = 0.6) annotation(
    Placement(transformation(origin = {-90, -14}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant x_SkyCoverTenth(k = 8) annotation(
    Placement(transformation(origin = {-90, -34}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant x_SolDir(k = 300) annotation(
    Placement(transformation(origin = {-66, -24}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant x_SolDif(k = 300) annotation(
    Placement(transformation(origin = {-66, -44}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Interfaces.RealInput x_Tdb(start = x_TdbInit) annotation(
    Placement(transformation(origin = {-99, 7}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {-90, 8}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(NPeople.y, Hall2.nPeople) annotation(
    Line(points = {{-81, -52}, {-20, -52}, {-20, -15.2}, {-2.76, -15.2}}, color = {0, 0, 127}));
  connect(infiltrationACH.y, Hall2.InputInfiltration) annotation(
    Line(points = {{-81, -92}, {-8, -92}, {-8, -33.6}, {-2.76, -33.6}}, color = {0, 0, 127}));
  connect(Foa.y, Hall2.FairOutdoor) annotation(
    Line(points = {{-7.4, 86}, {-4, 86}, {-4, 72}, {18.4, 72}, {18.4, 42.76}}, color = {0, 0, 127}));
  connect(Fret.y, Hall2.FairReturn) annotation(
    Line(points = {{14.6, 86}, {18, 86}, {18, 72}, {27.6, 72}, {27.6, 42.76}}, color = {0, 0, 127}));
  connect(RhumVal.y, Hall2.RhumVal) annotation(
    Line(points = {{34.6, 86}, {36.8, 86}, {36.8, 42.76}}, color = {0, 0, 127}));
  
  connect(Kelvin.y, TdbK.u2) annotation(
    Line(points = {{-86, 90}, {-84, 90}, {-84, 60}, {-52, 60}}, color = {0, 0, 127}));
  connect(TdbK.y, Hall2.TairOutdoor) annotation(
    Line(points = {{-36, 66}, {-12, 66}, {-12, 30}, {-2, 30}}, color = {0, 0, 127}));
  connect(Kelvin.y, TwatSupK.u2) annotation(
    Line(points = {{-86, 90}, {-82, 90}, {-82, 54}, {40, 54}, {40, 82}, {42, 82}}, color = {0, 0, 127}));
  connect(TwatSupK.y, Hall2.TwatSup) annotation(
    Line(points = {{58, 88}, {66, 88}, {66, 60}, {46, 60}, {46, 42}}, color = {0, 0, 127}));
    
  connect(u_Fwat.y, Hall2.Fwat) annotation(
    Line(points = {{-84, 44}, {0, 44}, {0, 60}, {56, 60}, {56, 42}}, color = {0, 0, 127}));
  connect(x_HairOutdoor.y, Hall2.HairOutdoor) annotation(
    Line(points = {{-84, -14}, {-20, -14}, {-20, 22}, {-2, 22}}, color = {0, 0, 127}));
  connect(x_SkyCoverTenth.y, Hall2.SkyCoverTenths) annotation(
    Line(points = {{-84, -34}, {-26, -34}, {-26, 12}, {-2, 12}}, color = {0, 0, 127}));
  connect(x_SolDir.y, Hall2.SolDirNorm) annotation(
    Line(points = {{-60, -24}, {-36, -24}, {-36, 4}, {-2, 4}}, color = {0, 0, 127}));
  connect(x_SolDif.y, Hall2.SolDifHori) annotation(
    Line(points = {{-60, -44}, {-26, -44}, {-26, -6}, {-2, -6}}, color = {0, 0, 127}));
  connect(x_TwatSup.y, TwatSupK.u1) annotation(
    Line(points = {{-84, 24}, {-22, 24}, {-22, 96}, {38, 96}, {38, 92}, {42, 92}}, color = {0, 0, 127}));
  connect(EquipGain.y, Hall2.EquipGain) annotation(
    Line(points = {{-82, -70}, {-12, -70}, {-12, -24}, {-2, -24}}, color = {0, 0, 127}));
  connect(x_Tdb, TdbK.u1) annotation(
    Line(points = {{-98, 8}, {-66, 8}, {-66, 70}, {-52, 70}}, color = {0, 0, 127}));
  annotation(
    uses(Modelica(version = "3.2.3")),
  __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=uode -d=initialization,NLSanalyticJacobian");
end Hall2ThermalResponse;
