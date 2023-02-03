within HVAC.Data.Pump;
record f1100m3h_274kpa_100kw_wilo_SCP12X10X14HA
  extends HVAC.Data.Pump.Generic(
    speed_rpm_nominal=1480,
    use_powerCharacteristic=true,
    power(V_flow={
          5.55555555556e-07,
          0.05,
          0.10,
          0.15,
          0.20,
          0.25,
          0.30,
          0.35,
          0.37},
          P={
          56670,
          65621,
          74569,
          82772,
          89483,
          95449,
          99923,
          99923,
          96195}),
    pressure(V_flow={
          5.55555555556e-07,
          0.05,
          0.10,
          0.15,
          0.20,
          0.25,
          0.30,
          0.35,
          0.37},
          dp={
          413000,
          402000,
          385000,
          366000,
          345000,
          320000,
          279000,
          216000,
          182000}));
  annotation (
defaultComponentPrefixes="parameter",
defaultComponentName="per",
Documentation(info="<html>
  <p>Wilo pump SCP12X10X14HA 0.31 m3/s | 274.0 kPa | 1480 rpm | 100kW</p>
  <p>Data from: https://wilousa.portal-center.intelliquip.com/</p>
  </html>",
  revisions="<html>
<ul>
<li>Jan 7, 2023
    by Zhiang Zhang:<br/>
       Initial version
</li>
</ul>
</html>"));
end f1100m3h_274kpa_100kw_wilo_SCP12X10X14HA;
