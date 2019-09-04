CFile file;
TCHAR szBuf[512];
if (!file.Open(_T("CArchive__test__file.txt"),
               CFile::modeCreate | CFile::modeWrite))
{
#ifdef _DEBUG
   AFXDUMP(_T("Unable to open file\n"));
   exit(1);
#endif
}
CArchive ar(&file, CArchive::store, 512, szBuf);