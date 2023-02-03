within HVAC.Room.Utils;
model Test
  parameter Integer nOrientation = getOrientationN(true, false, true, true);
  Real WallsArea[nOrientation] = getWallsArea(true, false, true, true, nOrientation, 3, 5, 2);
  Real WinsArea[nOrientation] = getWinsArea(true, false, true, true, 0.3, 0.4, 0.5, 0.6, nOrientation, 3, 5, 2);
  Real RWallWin[2] = getWallWinThermalResistance(true, false, true, true, 0.3, 0.4, 0.5, 0.6, 3, 5, 2, 0.35, 1.21);
  Real WFWallWin[2,nOrientation] = getWeightFactors(true, false, true, true, 0.3, 0.4, 0.5, 0.6, nOrientation, 3, 5, 2, 0.35, 1.21);
  Real WFWall[nOrientation] = WFWallWin[1, :];
  Real WFWin[nOrientation] = WFWallWin[2, :];
  Real X = HVAC.PsychrometricUtils.Functions.getSteamMassFracFromTDrybulbRH(273.15 + 15, 0.02);
  Real C = getWallCapacity(true, false, true, true, 0.3, 0.4, 0.5, 0.6, 3, 5, 2,  54000);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Test;
