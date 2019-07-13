return TRUE;
}

int CUserApp::ExitInstance()
{
   if (NULL != m_hViewDll)
   {
      AfxFreeLibrary(m_hViewDll);
      m_hViewDll = NULL;
   }

   return CWinApp::ExitInstance();
}