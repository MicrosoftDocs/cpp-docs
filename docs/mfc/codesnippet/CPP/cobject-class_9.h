void* CAge::operator new(size_t nSize)
{
   return malloc(nSize);
}

void* CAge::operator new(size_t nSize, LPCSTR lpszFileName, int nLine)
{
   UNREFERENCED_PARAMETER(lpszFileName);
   UNREFERENCED_PARAMETER(nLine);
   return malloc(nSize);
}