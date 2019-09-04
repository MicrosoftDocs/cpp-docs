CFile f;
if (!f.Open(_T("dump.txt"), CFile::modeCreate | CFile::modeWrite))
{
   AFXDUMP(_T("Unable to open file\n"));
   exit(1);
}
CDumpContext dc(&f);