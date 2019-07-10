CUserToolsManager* pUserToolsManager = theApp.GetUserToolsManager();
if (pUserToolsManager != NULL && pUserToolsManager->GetUserTools().IsEmpty())
{
   // CUserToolsManager* pUserToolsManager
   CUserTool* pTool1 = pUserToolsManager->CreateNewTool();
   pTool1->m_strLabel = _T("&Notepad");
   pTool1->SetCommand(_T("notepad.exe"));

   CUserTool* pTool2 = pUserToolsManager->CreateNewTool();
   pTool2->m_strLabel = _T("Paint &Brush");
   pTool2->SetCommand(_T("mspaint.exe"));

   CUserTool* pTool3 = pUserToolsManager->CreateNewTool();
   pTool3->m_strLabel = _T("&Windows Explorer");
   pTool3->SetCommand(_T("explorer.exe"));

   CUserTool* pTool4 = pUserToolsManager->CreateNewTool();
   pTool4->m_strLabel = _T("Microsoft On-&Line");
   pTool4->SetCommand(_T("http://www.microsoft.com"));
}