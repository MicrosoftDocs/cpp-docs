// Your project must be apartment threaded or the (AtlAx)CreateControl(Lic)(Ex)
// calls will fail.
#define _ATL_APARTMENT_THREADED
#include <atlbase.h>
#include <atlwin.h>
#include <atlhost.h>

// Value of g_UseMethod determines the function used to create the control.
int g_UseMethod = 0; // 1 to 8 are valid values
bool ValidateUseMethod() { return (1 <= g_UseMethod) && (g_UseMethod <= 8); }

#import "PROGID:MSCAL.Calendar.7" no_namespace, raw_interfaces_only

// Child window class that will be subclassed for hosting Active X control
class CChildWindow : public CWindowImpl<CChildWindow>
{
public:
   BEGIN_MSG_MAP(CChildWindow)
   END_MSG_MAP()
};

class CMainWindow : public CWindowImpl<CMainWindow, CWindow, CFrameWinTraits>,
   public IDispEventImpl<1, CMainWindow, &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>
{
public :

   CChildWindow m_wndChild;
   CAxWindow2 m_axwnd;
   CWindow m_wndEdit;

   static ATL::CWndClassInfo& GetWndClassInfo()
   {
      static ATL::CWndClassInfo wc =
      {
         { 
            sizeof(WNDCLASSEX), 
            CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS, 
            StartWindowProc,
            0, 0, NULL, NULL, NULL, 
            (HBRUSH)(COLOR_WINDOW + 1), 
            0, 
            _T("MainWindow"), 
            NULL 
         },
         NULL, NULL, IDC_ARROW, TRUE, 0, _T("")
      };
      return wc;
   }
   
   BEGIN_MSG_MAP(CMainWindow)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
      MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
   END_MSG_MAP()

   BEGIN_SINK_MAP(CMainWindow)
      SINK_ENTRY_EX(1, __uuidof(DCalendarEvents), DISPID_CLICK, OnClick)
   END_SINK_MAP()

   // Helper to display events
   void DisplayNotification(TCHAR* pszMessage)
   {
      CWindow wnd;
      wnd.Attach(GetDlgItem(2));
      
      wnd.SendMessage(EM_SETSEL, (WPARAM)-1, -1);
      wnd.SendMessage(EM_REPLACESEL, 0, (LPARAM)pszMessage);
   }
   
   // Event Handler for Click
   STDMETHOD(OnClick)()
   {
      DisplayNotification(_T("OnClick\r\n"));
      return S_OK;
   }

   LRESULT OnCreate(UINT, WPARAM, LPARAM, BOOL&)
   {
      HRESULT hr = E_INVALIDARG;

      _pAtlModule->Lock();

      RECT rect;
      GetClientRect(&rect);
      
      RECT rect2;
      rect2 = rect;
      
      rect2.bottom -=200;
      
      // if g_UseMethod is odd then create AxHost directly as the child of the main window
      if (g_UseMethod & 0x1) 
      {
         m_axwnd.Create(m_hWnd, rect2, NULL, WS_CHILD | WS_VISIBLE | WS_BORDER, 0, 1);
      }
      // if g_UseMethod is even then the AtlAx version is invoked.
      else
      {
         // Create a child window.
         // AtlAx functions will subclass this window.
         m_wndChild.Create(m_hWnd, rect2, NULL, WS_CHILD | WS_VISIBLE | WS_BORDER, 0, 1);
         // Attach the child window to the CAxWindow so we can access the 
         // host that subclasses the child window.
         m_axwnd.Attach(m_wndChild);
      }

      if (m_axwnd.m_hWnd != NULL)
      {
         CComPtr<IUnknown> spControl;

         // The calls to (AtlAx)CreateControl(Lic)(Ex) do the following:
         // Create Calendar control. (Passing in NULL for license key. 
         //   Pass in valid license key to the Lic functions if the 
         //   control requires one.)
         // Get the IUnknown pointer for the control.
         // Sink events from the control.
         
         // The AtlAx versions subclass the hWnd that is passed in to them 
         //   to implement the host functionality.

         // The first 4 calls accomplish it in one call.
         // The last 4 calls accomplish it using multiple steps.

         switch (g_UseMethod)
         {
            case 1:
            {
               hr = m_axwnd.CreateControlLicEx(
                  OLESTR("MSCAL.Calendar.7"), 
                  NULL, 
                  NULL, 
                  &spControl, 
                  __uuidof(DCalendarEvents), 
                  (IUnknown*)(IDispEventImpl<1, CMainWindow, 
                     &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>*)this
               );
               break;
            }
            case 2:
            {
               hr = AtlAxCreateControlLicEx(
                  OLESTR("MSCAL.Calendar.7"), 
                  m_wndChild.m_hWnd, 
                  NULL, 
                  NULL, 
                  &spControl, 
                  __uuidof(DCalendarEvents), 
                  (IUnknown*)(IDispEventImpl<1, CMainWindow, 
                     &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>*)this, 
                  NULL
               );
               break;
            }
            case 3:
            {
               hr = m_axwnd.CreateControlEx(
                  OLESTR("MSCAL.Calendar.7"), 
                  NULL, 
                  NULL, 
                  &spControl, 
                  __uuidof(DCalendarEvents), 
                  (IUnknown*)(IDispEventImpl<1, CMainWindow, 
                     &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>*)this
               );
               break;
            }
            case 4:
            {
               hr = AtlAxCreateControlEx(
                  OLESTR("MSCAL.Calendar.7"), 
                  m_wndChild.m_hWnd, 
                  NULL, 
                  NULL, 
                  &spControl, 
                  __uuidof(DCalendarEvents), 
                  (IUnknown*)(IDispEventImpl<1, CMainWindow, 
                     &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>*)this
               );
               break;
            }
            // The following calls create the control, obtain an interface to 
            // the control, and set up the sink in multiple steps.
            case 5:
            {
               hr = m_axwnd.CreateControlLic(
                  OLESTR("MSCAL.Calendar.7")
               );
               break;
            }
            case 6:
            {
               hr = AtlAxCreateControlLic(
                  OLESTR("MSCAL.Calendar.7"), 
                  m_wndChild.m_hWnd, 
                  NULL, 
                  NULL
               );
               break;
            }
            case 7:
            {
               hr = m_axwnd.CreateControl(
                  OLESTR("MSCAL.Calendar.7")
               );
               break;
            }
            case 8:
            {
               hr = AtlAxCreateControl(
                  OLESTR("MSCAL.Calendar.7"), 
                  m_wndChild.m_hWnd , 
                  NULL, 
                  NULL
               );
               break;
            }
         }

         // have to obtain an interface to the control and set up the sink
         if (g_UseMethod > 4)
         {
            if (SUCCEEDED(hr))
            {
               hr = m_axwnd.QueryControl(&spControl);
               if (SUCCEEDED(hr))
               {
                  // Sink events form the control
                  DispEventAdvise(spControl, &__uuidof(DCalendarEvents));
               }
            }
         }

         if (SUCCEEDED(hr))
         {
            // Use the returned IUnknown pointer.
            CComPtr<ICalendar> spCalendar;
            hr = spControl.QueryInterface(&spCalendar);
            if (SUCCEEDED(hr))
            {
               spCalendar->put_ShowDateSelectors(VARIANT_FALSE);
            }
         }
      }

      rect2 = rect;
      rect2.top = rect.bottom - 200 + 1;
      m_wndEdit.Create(_T("Edit"), m_hWnd, rect2, NULL, WS_CHILD | WS_VISIBLE | 
         WS_BORDER | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE, 0, 2);
      return 0;
   }

   LRESULT OnDestroy(UINT, WPARAM, LPARAM, BOOL&)
   {
      _pAtlModule->Unlock();
      return 0;
   }
};

class CHostActiveXModule : public CAtlExeModuleT<CHostActiveXModule>
{
public :

   CMainWindow m_wndMain;

   // Create the Main window
   HRESULT PreMessageLoop(int nCmdShow)
   {
      HRESULT hr = CAtlExeModuleT<CHostActiveXModule>::PreMessageLoop(nCmdShow);
      if (SUCCEEDED(hr))
      {
         AtlAxWinInit();
         hr = S_OK;
         RECT rc;
         rc.top = rc.left = 100;
         rc.bottom = rc.right = 500;
         m_wndMain.Create(NULL, rc, _T("Host Calendar") );
         m_wndMain.ShowWindow(nCmdShow);         
      }
      return hr;
   }

   // Clean up. App is exiting.
   HRESULT PostMessageLoop()
   {
      AtlAxWinTerm();
      return CAtlExeModuleT<CHostActiveXModule>::PostMessageLoop();
   }
};

CHostActiveXModule _AtlModule;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
   UNREFERENCED_PARAMETER(hInstance);
   UNREFERENCED_PARAMETER(hPrevInstance);

   g_UseMethod = _ttoi(lpCmdLine);

   if (ValidateUseMethod())
   {
      return _AtlModule.WinMain(nCmdShow);
   }
   else
   {
      return E_INVALIDARG;   
   }
}