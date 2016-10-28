// My callback procedure that reads the rich edit control contents
// from a file.
static DWORD CALLBACK 
MyStreamInCallback(DWORD dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb)
{
   CFile* pFile = (CFile*) dwCookie;

   *pcb = pFile->Read(pbBuff, cb);

   return 0;
}