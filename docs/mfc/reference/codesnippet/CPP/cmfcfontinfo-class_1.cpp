CMFCRibbonFontComboBox *pFontCombo = DYNAMIC_DOWNCAST(CMFCRibbonFontComboBox, pRibbon->FindByID(ID_FONT_FONT));
if (pFontCombo == NULL)
{
   return;
}

CCharFormat cf;
cf.szFaceName[0] = NULL;
cf.dwMask = CFM_FACE | CFM_CHARSET;

const CMFCFontInfo *pDesc = pFontCombo->GetFontDesc();
ASSERT_VALID(pDesc);
ASSERT(pDesc->m_strName.GetLength() < LF_FACESIZE);

#if _MSC_VER >= 1300
lstrcpyn(cf.szFaceName, pDesc->m_strName, LF_FACESIZE);
#else
lstrcpynA(cf.szFaceName, T2A((LPTSTR)(LPCTSTR)pDesc->m_strName), LF_FACESIZE);
#endif

cf.bCharSet = pDesc->m_nCharSet;
cf.bPitchAndFamily = pDesc->m_nPitchAndFamily;