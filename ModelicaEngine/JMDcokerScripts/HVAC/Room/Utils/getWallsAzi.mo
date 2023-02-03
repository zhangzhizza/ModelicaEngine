within HVAC.Room.Utils;
function getWallsAzi

  input Boolean UpperFaceOutside
    "Does the upper surface face outside environment";
  input Boolean LowerFaceOutside
    "Does lower surface face outside environment";
  input Boolean LeftFaceOutside
    "Does left surface face outside environment";
  input Boolean RightFaceOutside
    "Does right surface face outside environment";
  input Integer nOrientation
    "Number of orientation";
  input Modelica.SIunits.Angle UpperAzi(
    displayUnit="deg")
    "Surface azimuth angle (north is zero, clockwise) of the upper surface";
  output Real WallsAzi[nOrientation] "Azimuth of walls";

protected
  Integer cur_index=1;

algorithm
 if UpperFaceOutside then
   WallsAzi[cur_index] := UpperAzi;
   cur_index := cur_index + 1;
 end if;
 if LowerFaceOutside then
   WallsAzi[cur_index] := rem(UpperAzi + Modelica.Constants.pi, 2*Modelica.Constants.pi);
   cur_index := cur_index + 1;
 end if;
 if LeftFaceOutside then
   WallsAzi[cur_index] := rem(UpperAzi + 1.5*Modelica.Constants.pi, 2*Modelica.Constants.pi);
   cur_index := cur_index + 1;
 end if;
 if RightFaceOutside then
   WallsAzi[cur_index] := rem(UpperAzi + 0.5*Modelica.Constants.pi, 2*Modelica.Constants.pi);
   cur_index := cur_index + 1;
 end if;

end getWallsAzi;
