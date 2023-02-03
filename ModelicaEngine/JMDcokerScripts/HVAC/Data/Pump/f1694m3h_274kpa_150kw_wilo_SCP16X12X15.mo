within HVAC.Data.Pump;
record f1694m3h_274kpa_150kw_wilo_SCP16X12X15
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
          0.40,
          0.45,
          0.50,
          0.54},
          P={
          120057,
          128260,
          135717,
          141682,
          146902,
          152868,
          157342,
          161071,
          161071,
          155105,
          137208,
          106635}),
    pressure(V_flow={
          5.55555555556e-07,
          0.05,
          0.10,
          0.15,
          0.20,
          0.25,
          0.30,
          0.35,
          0.40,
          0.45,
          0.50,
          0.54},
          dp={
          483000,
          478000,
          467000,
          453000,
          438000,
          420000,
          401000,
          375000,
          342000,
          298000,
          231000,
          161000}));
  annotation (
defaultComponentPrefixes="parameter",
defaultComponentName="per",
Documentation(info="<html>
  <p>Wilo pump SCP16X12X15 0.47 m3/s | 274.0 kPa | 1480 rpm | 150kW</p>
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
end f1694m3h_274kpa_150kw_wilo_SCP16X12X15;
