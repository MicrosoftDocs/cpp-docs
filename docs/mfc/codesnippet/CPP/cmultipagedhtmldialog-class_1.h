class CMyMultiPageDlg : public CMultiPageDHtmlDialog
{
public:
   // Declare the DHTML event handlers:
   HRESULT OnPage1Next(IHTMLElement* pElement);
   HRESULT OnPage2Next(IHTMLElement* pElement);
   HRESULT OnPage2Back(IHTMLElement* pElement);
   HRESULT OnPage3Back(IHTMLElement* pElement);

   DECLARE_DHTML_URL_EVENT_MAP()

   // rest of class declaration omitted
};