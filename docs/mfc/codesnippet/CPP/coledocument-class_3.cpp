// pDoc points to a COleDocument object
POSITION pos = pDoc->GetStartPosition();
COleServerItem* pItem;
while ((pItem = pDoc->GetNextServerItem(pos)) != NULL)
{
   // Use pItem
}