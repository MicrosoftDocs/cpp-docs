// The code fragment below shows how to UI activate an ActiveX control.
// CMyAxCtrl is a COleControl-derived class.
int CMyAxCtrl::OnMouseActivate(CWnd *pDesktopWnd, UINT nHitTest, UINT message)
{
   OnActivateInPlace(TRUE, NULL); // OnActivateInPlace() is an undocumented function
   return COleControl::OnMouseActivate(pDesktopWnd, nHitTest, message);
}