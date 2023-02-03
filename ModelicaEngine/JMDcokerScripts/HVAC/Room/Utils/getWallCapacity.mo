within HVAC.Room.Utils;
function getWallCapacity
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
  input Real CWallPerArea(unit="J/K.m2") "Heat capacity of wall per unit wall area";
  output Modelica.SIunits.HeatCapacity CWall "Capacitance of wall";

algorithm
 CWall := 0;
 if UpperFaceOutside then
   CWall := CWall + HorizontalLength*RoomHeight*(1-UpperSurfaceWWR)*CWallPerArea;
 end if;
 if LowerFaceOutside then
   CWall := CWall + HorizontalLength*RoomHeight*(1-LowerSurfaceWWR)*CWallPerArea;
 end if;
 if LeftFaceOutside then
   CWall := CWall + VerticalLength*RoomHeight*(1-LeftSurfaceWWR)*CWallPerArea;
 end if;
 if RightFaceOutside then
   CWall := CWall + VerticalLength*RoomHeight*(1-RightSurfaceWWR)*CWallPerArea;
 end if;

end getWallCapacity;
