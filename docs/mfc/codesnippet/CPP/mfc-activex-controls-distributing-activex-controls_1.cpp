HINSTANCE hLib = LoadLibrary(pszDllName);

if (hLib < (HINSTANCE)HINSTANCE_ERROR)
{
   AfxMessageBox(IDS_LOADLIBFAILED); //unable to load DLL
   iReturn = FAIL_LOAD;              //unable to load DLL
}

// Find the entry point.
lpDllEntryPoint = GetProcAddress(hLib, "DllRegisterServer");
if (lpDllEntryPoint != NULL)
(*lpDllEntryPoint)();
else
;// Unable to locate entry point