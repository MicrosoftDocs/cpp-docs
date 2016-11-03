// My callback procedure that writes the rich edit control contents
// to a file.
static DWORD CALLBACK 
MyStreamOutCallback(DWORD dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb)
{
   CFile* pFile = (CFile*) dwCookie;

   pFile->Write(pbBuff, cb);
   *pcb = cb;

   return 0;
}