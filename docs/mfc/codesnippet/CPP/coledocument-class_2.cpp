// pDoc points to a COleDocument object
POSITION pos = pDoc->GetStartPosition();
CDocItem* pItem;
CString strType;
while (pos != NULL)
{
   pItem = pDoc->GetNextItem(pos);
   // Use pItem
   if (pItem->IsKindOf(RUNTIME_CLASS(COleClientItem)))
   {
      ((COleClientItem*)pItem)->GetUserType(USERCLASSTYPE_FULL, strType);
      TRACE(strType);
   }
}