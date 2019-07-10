// Extends the CListBox class to provide synchronization with 
// an external data source
template <typename CollectionT>
class CSyncListBox : public CListBox
{
public:
   CSyncListBox();
   virtual ~CSyncListBox();

   afx_msg void OnPaint();
   afx_msg void OnDestroy();
   afx_msg LRESULT OnSynchronize(WPARAM wParam, LPARAM lParam);
   DECLARE_MESSAGE_MAP()

   // ...additional functionality as needed
};