HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

// Dump the bounds of hmyItem.
if (hmyItem != NULL)
{
   RECT r;

   m_TreeCtrl.GetItemRect(hmyItem, &r, FALSE);

   TRACE(TEXT("left = %d, top = %d, right = %d, bottom = %d\r\n"),
         r.left,
         r.top,
         r.right,
         r.bottom);
}