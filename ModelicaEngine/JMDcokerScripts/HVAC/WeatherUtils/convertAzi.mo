within HVAC.WeatherUtils;
function convertAzi "Convert azimuth angle from 0=North to 0=South"
  input Modelica.SIunits.Angle org_azi(displayUnit="deg")
  "Surface azimuth; azi=90 degree if surface outward unit normal points toward east; azi=0 if it points toward north";
  output Modelica.SIunits.Angle cvt_azi(displayUnit="deg")
  "Surface azimuth; azi=-90 degree if surface outward unit normal points toward east; azi=0 if it points toward south";
algorithm
  cvt_azi := rem(org_azi + Modelica.Constants.pi, 2*Modelica.Constants.pi);
end convertAzi;
