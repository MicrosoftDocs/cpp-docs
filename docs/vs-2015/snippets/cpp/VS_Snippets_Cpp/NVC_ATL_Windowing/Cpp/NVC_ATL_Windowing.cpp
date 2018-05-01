// NVC_ATL_Windowing.cpp : Implementation of DLL Exports.
//
// Snippets for ATL Windowing classes.
//
// Topic                                           Snippet
// CWindow::Attach                                 1
// CWindow::BeginPaint                             2 
// CWindow::BringWindowToTop                       3
// CWindow::CenterWindow                           4
// CWindow::DestroyWindow                          5
// CWindow::Detach                                 6
// CWindow::EnableWindow                           7
// CWindow::EndPaint                               2
// CWindow::GetClientRect                          8
// CWindow::GetDC                                  9
// CWindow::GetExStyle                             10
// CWindow::GetParent                              11
// CWindow::GetStyle                               12
// CWindow::GetTopWindow                           13
// CWindow::GetWindowDC                            14
// CWindow::GetWindowProcessID                     15
// CWindow::GetWindowThreadID                      16
// CWindow::HideCaret                              17
// CWindow::Invalidate                             18
// CWindow::IsIconic                               19
// CWindow::IsWindow                               20
// CWindow::IsWindowEnabled                        21
// CWindow::IsWindowVisible                        22
// CWindow::IsWindowUnicode                        23
// CWindow::MessageBox                             24
// CWindow::ModifyStyle                            25
// CWindow::ModifyStyleEx                          26
// CWindow::PostMessage                            27
// CWindow::RedrawWindow                           28
// CWindow::ReleaseDC                              9
// CWindow::SendMessage                            29
// CWindow::SetActiveWindow                        30
// CWindow::SetFocus                               31
// CWindow::SetParent                              32
// CWindow::SetRedraw                              33
// CWindow::SetWindowText                          34
// CWindow::ShowCaret                              35
// CWindow::ShowWindow                             36
// CWindow::UpdateWindow                           37
// CContainedWindowT Class                         38 - 40
// CAxDialogImpl Class                             41
// CAxWindow::CreateControl                        42
// CWindowImpl Class                               43
// CWndClassInfo Class                             43
// Step 3: Adding a Property to the Control        44 - 46
// Step 4: Changing the Drawing Code               47 - 55
// Step 5: Adding an Event                         56 - 57
// Step 6: Adding a Property Page                  58 - 61
// Step 7: Putting the Control on a Web Page       62 - 63
// Implementing a Window with CWindowImpl          64 - 65
// Implementing a Dialog Box                       66
// Using Contained Windows                         67
// Understanding Window Traits                     68
// How Do I Load Controls Specified at Run Time?   69 - 71
// Specifying Property Pages                       72
// Example: Implementing a Property Page           73 - 80
// Adding Connection Points to an Object           81 - 82
// Removed (was Adding Connection Points to an Object) 83
// ATL Connection Point Example                    84 - 85
// CBindStatusCallback Class                       86
// CBindStatusCallback::StartAsyncDownload         87
// CDynamicChain Class                             88 - 89
// CMessageMap Class                               90
// AtlAdvise                                       91
// AtlAdviseSinkMap                                92
// AtlGetObjectSourceInterface                     93
// AtlInternalQueryInterface                       94
// AtlThrow                                        95
// AtlUnadvise                                     96
// _pAtlModule                                     97
// ALT_MSG_MAP                                     98 - 99
// BEGIN_CATEGORY_MAP                              100
// BEGIN_CONNECTION_POINT_MAP                      101
// BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP             105
// BEGIN_MSG_MAP                                   102, 98 - 99
// BEGIN_PROP_MAP                                  103
// BEGIN_SINK_MAP                                  104
// BEGIN_SNAPINTOOLBARID_MAP                       106
// CHAIN_MSG_MAP                                   107
// CHAIN_MSG_MAP_MEMBER                            108
// COM_INTERFACE_ENTRY                             109
// COM_INTERFACE_ENTRY Macros                      110 - 111
// COM_INTERFACE_ENTRY_AGGREGATE                   112
// COM_INTERFACE_ENTRY_AGGREGATE_BLIND             113
// COM_INTERFACE_ENTRY_AUTOAGGREGATE               114
// COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND         115
// COM_INTERFACE_ENTRY_CHAIN                       116, 111
// COM_INTERFACE_ENTRY_IID                         117
// COM_INTERFACE_ENTRY2                            118
// COMMAND_HANDLER                                 119
// CONNECTION_POINT_ENTRY                          120
// DECLARE_AGGREGATABLE                            121
// DECLARE_EMPTY_MSG_MAP                           122
// DECLARE_NOT_AGGREGATABLE                        121
// DECLARE_OBJECT_DESCRIPTION                      123
// DECLARE_OLEMISC_STATUS                          124
// DECLARE_ONLY_AGGREGATABLE                       125
// DECLARE_VIEW_STATUS                             126
// DECLARE_WND_CLASS                               127
// DECLARE_WND_CLASS_EX                            127
// DECLARE_WND_SUPERCLASS                          127
// END_CONNECTION_POINT_MAP                        128
// END_MSG_MAP                                     98 - 99
// END_SINK_MAP                                    104
// EXTENSION_SNAPIN_DATACLASS                      105
// IMPLEMENTED_CATEGORY                            100
// MESSAGE_HANDLER                                 129
// NOTIFY_HANDLER                                  130
// PROP_DATA_ENTRY                                 131 - 132
// PROP_ENTRY_EX                                   133
// PROP_PAGE                                       134
// REQUIRED_CATEGORY                               135
// SINK_ENTRY                                      104
// SINK_ENTRY_EX                                   136
// WM_FORWARDMSG                                   137
// _ATL_FUNC_INFO Structure                        139 - 140
// CDialogImpl Class                               41
// Supporting IDispEventImpl                       141 - 142, 136
// IDispatchImpl Class                             143

#include "stdafx.h"
#include "resource.h"
#include "NVC_ATL_Windowing.h"

#include "MyEventHandler.h"

class CNVC_ATL_WindowingModule : public CAtlDllModuleT< CNVC_ATL_WindowingModule >
{
public :
   DECLARE_LIBID(LIBID_NVC_ATL_WindowingLib)
   DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NVC_ATL_WINDOWING, "{80FEC745-7846-4A5E-A193-AF0C20B18C62}")
};

CNVC_ATL_WindowingModule _AtlModule;


#ifdef _MANAGED
#pragma managed(push, off)
#endif

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
   hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved); 
}

#ifdef _MANAGED
#pragma managed(pop)
#endif




// Used to determine whether the DLL can be unloaded by OLE
STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}


// Returns a class factory to create an object of the requested type
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
    // registers object, typelib and all interfaces in typelib
    HRESULT hr = _AtlModule.DllRegisterServer();
   return hr;
}


// DllUnregisterServer - Removes entries from the system registry
STDAPI DllUnregisterServer(void)
{
   HRESULT hr = _AtlModule.DllUnregisterServer();
   return hr;
}

// <Snippet127>
static CWndClassInfo& GetWndClassInfo();
// </Snippet127>