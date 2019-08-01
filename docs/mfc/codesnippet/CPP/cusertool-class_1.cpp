// CUserToolsManager* pUserToolsManager
CUserTool* pTool1 = pUserToolsManager->CreateNewTool();
pTool1->m_strLabel = _T("&Notepad");
pTool1->SetCommand(_T("notepad.exe"));