// Note declaration of structure for type information
extern _ATL_FUNC_INFO OnDocChangeInfo;
extern _ATL_FUNC_INFO OnQuitInfo;

class ATL_NO_VTABLE CSimple : 
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CSimple, &CLSID_Simple>,
   public IDispatchImpl<ISwitch, &IID_ISwitch, &LIBID_ATLEVENTHANDLINGLib>,
   // Note inheritance from IDispEventSimpleImpl
   public IDispEventSimpleImpl</*nID =*/ 1, CSimple, &__uuidof(Word::ApplicationEvents)>
{
public:
   CSimple()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CSimple)
   COM_INTERFACE_ENTRY(ISwitch)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

   CComPtr<Word::_Application> m_pApp;

   // Event handlers
   // Note the __stdcall calling convention and 
   // dispinterface-style signature
   void __stdcall OnQuit()
   {
      Stop();
   }

   void __stdcall OnDocChange()
   {
     ATLASSERT(m_pApp != NULL);

      // Get a pointer to the _Document interface on the active document
      CComPtr<Word::_Document> pDoc;
      m_pApp->get_ActiveDocument(&pDoc);

      // Get the name from the active document
      CComBSTR bstrName;
     if (pDoc)
      pDoc->get_Name(&bstrName);

      // Create a display string
      CComBSTR bstrDisplay(_T("New document title:\n"));
      bstrDisplay += bstrName;

      // Display the name to the user
      USES_CONVERSION;
      MessageBox(NULL, W2CT(bstrDisplay), _T("IDispEventSimpleImpl : Active Document Changed"), MB_OK);
   }

// Note the mapping from Word events to our event handler functions.
BEGIN_SINK_MAP(CSimple)
   SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(Word::ApplicationEvents), /*dispid =*/ 3, OnDocChange, &OnDocChangeInfo)
   SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(Word::ApplicationEvents), /*dispid =*/ 2, OnQuit, &OnQuitInfo)
END_SINK_MAP()

// ISwitch
public:
   STDMETHOD(Start)()
   {
      // If we already have an object, just return
      if (m_pApp)
         return S_OK;
      
      // Create an instance of Word's Application object
      HRESULT hr = m_pApp.CoCreateInstance(__uuidof(Word::Application), NULL, CLSCTX_SERVER);
     if (FAILED(hr))
        return hr;

     ATLASSERT(m_pApp != NULL);

      // Make the Word user interface visible
      m_pApp->put_Visible(true);

      // Note call to advise
      // Forge a connection to enable us to receive events
      DispEventAdvise(m_pApp);

      return S_OK;
   }

   STDMETHOD(Stop)()
   {
      // Check we have an object to unadvise on
      if (!m_pApp)
         return S_OK;

      // Note call to unadvise
      // Break the connection with the event source
      DispEventUnadvise(m_pApp);

      // Release the Word application
      m_pApp.Release();

      return S_OK;
   }
};