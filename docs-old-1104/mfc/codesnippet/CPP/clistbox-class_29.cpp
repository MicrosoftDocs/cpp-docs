void CMyODListBox::OnLButtonDown(UINT nFlags, CPoint point)
{
   BOOL bOutside = TRUE;
   UINT uItem = ItemFromPoint(point, bOutside);

   if (!bOutside)
   {
      // Set the anchor to be the middle item.
      SetAnchorIndex(uItem);
      ASSERT((UINT)GetAnchorIndex() == uItem);
   }

   CListBox::OnLButtonDown(nFlags, point);
}