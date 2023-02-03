within HVAC.Room.Utils;
function getWeightFactors

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
  input Integer nOrientation
    "Number of orientation";
  input Modelica.SIunits.Length RoomHeight
    "Room height";
  input Modelica.SIunits.Length HorizontalLength
    "Horizontal surface length";
  input Modelica.SIunits.Length VerticalLength
    "Vertical surface length";
  input Real UWall(unit="W/m2.K") "Thermal transmittance (U-value) of wall";
  input Real UWin(unit="W/m2.K") "Thermal transmittance (U-value) of window";
  output Real WFWallWin[2,nOrientation]  "Weight factor of wall (row 1) and window (row 2)";

protected
  Real UA_wall_total;
  Real UA_win_total;
  Real R_wall_win[2];
  Real R_wall_total;
  Real R_win_total;
  Integer cur_index = 1;

algorithm
 R_wall_win := getWallWinThermalResistance(UpperFaceOutside, LowerFaceOutside, LeftFaceOutside, RightFaceOutside, UpperSurfaceWWR, LowerSurfaceWWR, LeftSurfaceWWR, RightSurfaceWWR, RoomHeight, HorizontalLength, VerticalLength, UWall, UWin);
 R_wall_total :=R_wall_win[1];
 R_win_total :=R_wall_win[2];
 if R_wall_total == 0 then
   UA_wall_total :=0;
 else
   UA_wall_total :=1/R_wall_total;
 end if;
 if R_win_total == 0 then
   UA_win_total :=0;
 else
   UA_win_total :=1/R_win_total;
 end if;
 if UpperFaceOutside then
   WFWallWin[1, cur_index] := (HorizontalLength*RoomHeight*(1-UpperSurfaceWWR)*UWall)/UA_wall_total;
   if UA_win_total == 0 then
     WFWallWin[2, cur_index] :=0;
   else
     WFWallWin[2, cur_index] := (HorizontalLength*RoomHeight*UpperSurfaceWWR*UWin)/UA_win_total;
   end if;
   cur_index :=cur_index + 1;
 end if;
 if LowerFaceOutside then
   WFWallWin[1, cur_index] := (HorizontalLength*RoomHeight*(1-LowerSurfaceWWR)*UWall)/UA_wall_total;
   if UA_win_total == 0 then
     WFWallWin[2, cur_index] :=0;
   else
     WFWallWin[2, cur_index] := (HorizontalLength*RoomHeight*LowerSurfaceWWR*UWin)/UA_win_total;
   end if;
   cur_index :=cur_index + 1;
 end if;
 if LeftFaceOutside then
   WFWallWin[1, cur_index] := (VerticalLength*RoomHeight*(1-LeftSurfaceWWR)*UWall)/UA_wall_total;
   if UA_win_total == 0 then
     WFWallWin[2, cur_index] :=0;
   else
     WFWallWin[2, cur_index] := (VerticalLength*RoomHeight*LeftSurfaceWWR*UWin)/UA_win_total;
   end if;
   cur_index :=cur_index + 1;
 end if;
 if RightFaceOutside then
   WFWallWin[1, cur_index] := (VerticalLength*RoomHeight*(1-RightSurfaceWWR)*UWall)/UA_wall_total;
   if UA_win_total == 0 then
     WFWallWin[2, cur_index] :=0;
   else
     WFWallWin[2, cur_index] := (VerticalLength*RoomHeight*RightSurfaceWWR*UWin)/UA_win_total;
   end if;
   cur_index :=cur_index + 1;
 end if;

end getWeightFactors;
