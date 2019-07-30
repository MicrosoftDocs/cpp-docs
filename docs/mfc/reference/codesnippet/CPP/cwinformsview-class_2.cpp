IMPLEMENT_DYNCREATE(CMyView, CWinFormsView)

BEGIN_MESSAGE_MAP(CMyView, CWinFormsView)
END_MESSAGE_MAP()

CMyView::CMyView()
    : CWinFormsView(ControlLibrary1::UserControl1::typeid)
{
}