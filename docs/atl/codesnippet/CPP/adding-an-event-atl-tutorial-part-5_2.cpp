LRESULT CPolyCtl::OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, 
   BOOL& /*bHandled*/)
{
   HRGN hRgn;
   WORD xPos = LOWORD(lParam);  // horizontal position of cursor
   WORD yPos = HIWORD(lParam);  // vertical position of cursor

   CalcPoints(m_rcPos);

   // Create a region from our list of points
   hRgn = CreatePolygonRgn(&m_arrPoint[0], m_nSides, WINDING);

   // If the clicked point is in our polygon then fire the ClickIn
   //  event otherwise we fire the ClickOut event
   if (PtInRegion(hRgn, xPos, yPos))
      Fire_ClickIn(xPos, yPos);
   else
      Fire_ClickOut(xPos, yPos);

   // Delete the region that we created
   DeleteObject(hRgn);
   return 0;
}