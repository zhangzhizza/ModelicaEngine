within HVAC.Room.Utils;
function getWallWinThermalResistance
  input Boolean UpperFaceOutside
    "Does the upper surface face outside environment";
  input Boolean LowerFaceOutside
    "Does lower surface face outside environment";
  input Boolean LeftFaceOutside
    "Does left surface face outside environment";
  input Boolean RightFaceOutside
    "Does right surface face outside environment";
  input Real UpperSurfaceWWR
    "Upper surface WWR";
  input Real LowerSurfaceWWR
    "Lower surface WWR";
  input Real LeftSurfaceWWR
    "Left surface WWR";
  input Real RightSurfaceWWR
    "Right surface WWR";
  input Modelica.SIunits.Length RoomHeight
    "Room height";
  input Modelica.SIunits.Length HorizontalLength
    "Horizontal surface length";
  input Modelica.SIunits.Length VerticalLength
    "Vertical surface length";
  input Real UWall(unit="W/m2.K") "Thermal transmittance (U-value) of wall";
  input Real UWin(unit="W/m2.K") "Thermal transmittance (U-value) of window";
  output Modelica.SIunits.ThermalResistance Rs[2] "Thermal resistance of wall and window";

protected
  Real UWall_area = 0;
  Real UWin_area = 0;

algorithm
 if UpperFaceOutside then
   UWin_area := UWin_area + HorizontalLength*RoomHeight*UpperSurfaceWWR*UWin;
   UWall_area := UWall_area + HorizontalLength*RoomHeight*(1-UpperSurfaceWWR)*UWall;
 end if;
 if LowerFaceOutside then
   UWin_area := UWin_area + HorizontalLength*RoomHeight*LowerSurfaceWWR*UWin;
   UWall_area := UWall_area + HorizontalLength*RoomHeight*(1-LowerSurfaceWWR)*UWall;
 end if;
 if LeftFaceOutside then
   UWin_area := UWin_area + VerticalLength*RoomHeight*LeftSurfaceWWR*UWin;
   UWall_area := UWall_area + VerticalLength*RoomHeight*(1-LeftSurfaceWWR)*UWall;
 end if;
 if RightFaceOutside then
   UWin_area := UWin_area + VerticalLength*RoomHeight*RightSurfaceWWR*UWin;
   UWall_area := UWall_area + VerticalLength*RoomHeight*(1-RightSurfaceWWR)*UWall;
 end if;
 if UWall_area == 0 then
   Rs[1] := 0;
 else
   Rs[1] :=1/UWall_area;
 end if;
 if UWin_area == 0 then
   Rs[2] := 0;
 else
   Rs[2] :=1/UWin_area;
 end if;

end getWallWinThermalResistance;
