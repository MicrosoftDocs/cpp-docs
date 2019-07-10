// CMyAxSubCtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CMyAxSubCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
   cs.lpszClass = _T("BUTTON");
   return COleControl::PreCreateWindow(cs);
}

// CMyAxSubCtrl::IsSubclassedControl - This is a subclassed control

BOOL CMyAxSubCtrl::IsSubclassedControl()
{
   return TRUE;
}