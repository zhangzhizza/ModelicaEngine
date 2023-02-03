within HVAC.PsychrometricUtils.Functions;
function getSteamMassFracFromTDrybulbRH
input Modelica.SIunits.ThermodynamicTemperature TDryBulb;
input Real RH(unit = "1");
output Real X(unit = "1") "Steam mass fraction";

protected
Modelica.SIunits.AbsolutePressure pSat(displayUnit="Pa",
                                          nominal=1000) "Saturation pressure";

algorithm
  pSat :=Buildings.Media.Air.saturationPressure(TDryBulb);
  X :=  Buildings.Utilities.Psychrometrics.Functions.X_pSatpphi(
     pSat=pSat,
     p=101325,
     phi=RH);

end getSteamMassFracFromTDrybulbRH;
