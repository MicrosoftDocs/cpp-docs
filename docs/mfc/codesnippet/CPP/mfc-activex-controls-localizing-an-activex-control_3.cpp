HINSTANCE CMyAxLocCtrl::GetLocalizedResourceHandle(LCID lcid)
{
   LPCTSTR lpszResDll;
   HINSTANCE hResHandle = NULL;
   switch (PRIMARYLANGID(lcid))
   {
   case LANG_ENGLISH:
      lpszResDll = _T("myctlen.dll");
      break;

   case LANG_FRENCH:
      lpszResDll = _T("myctlfr.dll");
      break;

   case LANG_GERMAN:
      lpszResDll = _T("myctlde.dll");
      break;

   case 0:
   default:
      lpszResDll = NULL;
   }

   if (lpszResDll != NULL)
      hResHandle = LoadLibrary(lpszResDll);
#ifndef _WIN32
   if (hResHandle <= HINSTANCE_ERROR)
      hResHandle = NULL;
#endif

   return hResHandle;
}