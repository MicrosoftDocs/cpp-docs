void CMainFrame::OnUpdatePage(CCmdUI* pCmdUI)
{
   pCmdUI->Enable();
   CString strPage;
   strPage.Format(_T("Page %d"), m_nPage);
   pCmdUI->SetText(strPage);
}