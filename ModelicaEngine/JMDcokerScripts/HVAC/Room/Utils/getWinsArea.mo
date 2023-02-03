within HVAC.Room.Utils;
function getWinsArea

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
  input Real RoomHeight
    "Room height";
  input Real HorizontalLength
    "Horizontal surface length";
  input Real VerticalLength
    "Vertical surface length";
  output Real WinsArea[nOrientation] "Area of windows";

protected
  Integer cur_index=1;

algorithm
 if UpperFaceOutside then
   WinsArea[cur_index] := HorizontalLength*RoomHeight*UpperSurfaceWWR;
   cur_index := cur_index + 1;
 end if;
 if LowerFaceOutside then
   WinsArea[cur_index] := HorizontalLength*RoomHeight*LowerSurfaceWWR;
   cur_index := cur_index + 1;
 end if;
 if LeftFaceOutside then
   WinsArea[cur_index] := VerticalLength*RoomHeight*LeftSurfaceWWR;
   cur_index := cur_index + 1;
 end if;
 if RightFaceOutside then
   WinsArea[cur_index] := VerticalLength*RoomHeight*RightSurfaceWWR;
   cur_index := cur_index + 1;
 end if;

end getWinsArea;
