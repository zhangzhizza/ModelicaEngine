within HVAC.Room.Utils;
function getOrientationN

  input Boolean UpperFaceOutside
    "Does the upper surface face outside environment";
  input Boolean LowerFaceOutside
    "Does lower surface face outside environment";
  input Boolean LeftFaceOutside
    "Does left surface face outside environment";
  input Boolean RightFaceOutside
    "Does right surface face outside environment";
  output Integer nOrientation "Number of orientations";

protected
  Boolean faceOutsides[4];

algorithm
 nOrientation :=0;
 faceOutsides :={UpperFaceOutside,LowerFaceOutside,
                  LeftFaceOutside,RightFaceOutside};
 for i in 1:size(faceOutsides, 1) loop
    if faceOutsides[i] then
        nOrientation := nOrientation + 1;
    end if;
 end for;

end getOrientationN;
