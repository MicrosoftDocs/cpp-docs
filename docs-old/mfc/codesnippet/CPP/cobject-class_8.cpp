void CAge::operator delete(void* p)
{
   free(p);
}

void CAge::operator delete(void *p, LPCSTR lpszFileName, int nLine)
{
   UNREFERENCED_PARAMETER(lpszFileName);
   UNREFERENCED_PARAMETER(nLine);
   free(p);
}