		CToolTipCtrl* pTip = m_myListCtrl.GetToolTips();
		if (NULL != pTip)
		{
			pTip->UpdateTipText(_T("I'm a list view!"), &m_myListCtrl,
				IDD_MYLISTCTRL);
		}