CMFCToolBarFontSizeComboBox *pSizeCombo =
    DYNAMIC_DOWNCAST(CMFCToolBarFontSizeComboBox, CMFCToolBarFontSizeComboBox::GetByCmd(IDC_FONTSIZE));
if (pSizeCombo != NULL)
{
   int nSize = pSizeCombo->GetTwipSize();
   // CMFCFontInfo* pDesc
   pSizeCombo->RebuildFontSizes(pDesc->m_strName);
   pSizeCombo->SetTwipSize(nSize);
}