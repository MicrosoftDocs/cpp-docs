CMFCDesktopAlertWnd *pPopup = new CMFCDesktopAlertWnd;

// int m_nAnimation
pPopup->SetAnimationType((CMFCPopupMenu::ANIMATION_TYPE)m_nAnimation);

// int m_nAnimationSpeed
pPopup->SetAnimationSpeed(m_nAnimationSpeed);

// int m_nTransparency
pPopup->SetTransparency((BYTE)m_nTransparency);

// BOOL m_bSmallCaption
pPopup->SetSmallCaption(m_bSmallCaption);

// BOOL m_bAutoClose, int m_nAutoCloseTime
pPopup->SetAutoCloseTime(m_bAutoClose ? m_nAutoCloseTime * 1000 : 0);

// int m_nPopupSource
if (m_nPopupSource == 0)
{
   // int m_nVisualMngr
   // CPoint m_ptPopup
   // The this pointer points to a CDesktopAlertDemoDlg class which extends the CDialogEx class.
   if (m_nVisualMngr == 5) // MSN-style
   {
      pPopup->Create(this, IDD_DIALOG2, NULL,
                     m_ptPopup, RUNTIME_CLASS(CMSNDlg));
   }
   else
   {
      pPopup->Create(this, IDD_DIALOG1,
                     m_menuPopup.GetSubMenu(0)->GetSafeHmenu(),
                     m_ptPopup, RUNTIME_CLASS(CMyPopupDlg));
   }
}