// pDoc points to a COleDocument object
POSITION pos = pDoc->GetStartPosition();
COleClientItem* pItem;
CString strType;
while ((pItem = pDoc->GetNextClientItem(pos)) != NULL)
{
   // Use pItem
   pItem->GetUserType(USERCLASSTYPE_FULL, strType);
   TRACE(strType);
}