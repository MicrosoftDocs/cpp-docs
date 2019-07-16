// Make sure the focus is set to the tree control.
m_TreeCtrl.SetFocus();

// Show the edit control on the label of the selected item.
// The tree control must have the TVS_EDITLABELS style set.
HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
CEdit *pmyEdit = m_TreeCtrl.EditLabel(hSel);
ASSERT(pmyEdit != NULL);