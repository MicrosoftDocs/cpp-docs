NMLVDISPINFO *pDispInfo = reinterpret_cast<NMLVDISPINFO *>(pNMHDR);
LVITEM *pItem = &(pDispInfo)->item;

int iItem = pItem->iItem;

if (pItem->mask & LVIF_TEXT) //valid text buffer?
{
   switch (pItem->iSubItem)
   {
   case 0: //fill in main text
      _tcscpy_s(pItem->pszText, pItem->cchTextMax,
                m_Items[iItem].m_strItemText);
      break;
   case 1: //fill in sub item 1 text
      _tcscpy_s(pItem->pszText, pItem->cchTextMax,
                m_Items[iItem].m_strSubItem1Text);
      break;
   case 2: //fill in sub item 2 text
      _tcscpy_s(pItem->pszText, pItem->cchTextMax,
                m_Items[iItem].m_strSubItem2Text);
      break;
   }
}

if (pItem->mask & LVIF_IMAGE) //valid image?
{
   pItem->iImage = m_Items[iItem].m_iImage;
}