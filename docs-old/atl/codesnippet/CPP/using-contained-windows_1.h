class CMyContainer : public CMessageMap
{
public:
   CContainedWindow m_wndEdit;
   CContainedWindow m_wndList;

   CMyContainer() : m_wndEdit(_T("Edit"), this, 1), 
                    m_wndList(_T("List"), this, 2)
   {
   }

   BEGIN_MSG_MAP(CMyContainer)
   ALT_MSG_MAP(1)
      // handlers for the Edit window go here
   ALT_MSG_MAP(2)
      // handlers for the List window go here
   END_MSG_MAP()

};