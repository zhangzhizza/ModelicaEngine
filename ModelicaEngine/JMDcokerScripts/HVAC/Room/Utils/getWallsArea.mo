within HVAC.Room.Utils;
function getWallsArea

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
  output Real WallsArea[nOrientation] "Area of walls";

protected
  Integer cur_index=1;

algorithm
 if UpperFaceOutside then
   WallsArea[cur_index] := HorizontalLength*RoomHeight*(1-UpperSurfaceWWR);
   cur_index := cur_index + 1;
 end if;
 if LowerFaceOutside then
   WallsArea[cur_index] := HorizontalLength*RoomHeight*(1-LowerSurfaceWWR);
   cur_index := cur_index + 1;
 end if;
 if LeftFaceOutside then
   WallsArea[cur_index] := VerticalLength*RoomHeight*(1-LeftSurfaceWWR);
   cur_index := cur_index + 1;
 end if;
 if RightFaceOutside then
   WallsArea[cur_index] := VerticalLength*RoomHeight*(1-RightSurfaceWWR);
   cur_index := cur_index + 1;
 end if;

end getWallsArea;
