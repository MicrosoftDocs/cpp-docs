CSettingsStore reg(FALSE, TRUE);
DWORD dwEnableBalloonTips = 1;

if (reg.Open(_T("Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced")) &&
    reg.Read(_T("EnableBalloonTips"), dwEnableBalloonTips))
{
   return dwEnableBalloonTips == 1;
}