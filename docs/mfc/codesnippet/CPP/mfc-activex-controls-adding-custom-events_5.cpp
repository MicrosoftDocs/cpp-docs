VARIANT_BOOL CMyAxUICtrl::InCircle(CPoint& point)
{
   CRect rc;
   GetClientRect(rc);
   // Determine radii
   double a = (rc.right - rc.left) / 2;
   double b = (rc.bottom - rc.top) / 2;

   // Determine x, y
   double x = point.x - (rc.left + rc.right) / 2;
   double y = point.y - (rc.top + rc.bottom) / 2;

   // Apply ellipse formula
   return ((x * x) / (a * a) + (y * y) / (b * b) <= 1);
}