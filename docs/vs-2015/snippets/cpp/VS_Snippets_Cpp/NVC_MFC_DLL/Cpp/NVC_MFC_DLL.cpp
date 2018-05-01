// NVC_MFC_DLL.cpp : Defines the initialization routines for the DLL.
//
// Topic                                     Snippet
// 
// AFX_EXT_CLASS                             1
// AfxInitExtensionModule                    2
// AfxRegisterClass                          3
// AfxTermExtensionModule                    4
// AFX_EXTENSION_MODULE Structure            2, 5
// Exporting String Classes Using CStringT   6 - 8

#include "stdafx.h"
#include "myview.h"
#include "resource.h"
#include <afxdllx.h>
#ifdef _MANAGED
#error Please read instructions in NVC_MFC_DLL.cpp to compile with /clr
// If you want to add /clr to your project you must do the following:
//	1. Remove the above include for afxdllx.h
//	2. Add a .cpp file to your project that does not have /clr thrown and has
//	   Precompiled headers disabled, with the following text:
//			#include <afxwin.h>
//			#include <afxdllx.h>
#endif

#ifdef _DEBUG
#define new DEBUG_NEW
#endif



#ifdef _MANAGED
#pragma managed(push, off)
#endif

// <Snippet1>
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
// </Snippet1>

class CMyDynLinkLibrary : public CDynLinkLibrary
{
   DECLARE_DYNAMIC(CMyDynLinkLibrary);
public:
   CMyDynLinkLibrary(AFX_EXTENSION_MODULE& state, BOOL bSystem = FALSE);
};

// <Snippet5>
IMPLEMENT_DYNAMIC(CMyDynLinkLibrary, CDynLinkLibrary)

CMyDynLinkLibrary::CMyDynLinkLibrary(AFX_EXTENSION_MODULE& state, BOOL bSystem)
   : CDynLinkLibrary(state, bSystem)
{
#ifndef _AFX_NO_OLE_SUPPORT
	m_factoryList.Construct(offsetof(COleObjectFactory, m_pNextFactory));
#endif
	m_classList.Construct(offsetof(CRuntimeClass, m_pNextClass));

	// copy info from AFX_EXTENSION_MODULE struct
	ASSERT(state.hModule != NULL);
	m_hModule = state.hModule;
	m_hResource = state.hResource;
	m_classList.m_pHead = state.pFirstSharedClass;
#ifndef _AFX_NO_OLE_SUPPORT
	m_factoryList.m_pHead = state.pFirstSharedFactory;
#endif
	m_bSystem = bSystem;
}
// </Snippet5>

// <Snippet4>
// <Snippet2>
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	// Remove this if you use lpReserved
	UNREFERENCED_PARAMETER(lpReserved);

	if (dwReason == DLL_PROCESS_ATTACH)
	{
		TRACE0("NVC_MFC_DLL.DLL Initializing!\n");
		
		// Extension DLL one-time initialization
		if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
			return 0;
// </Snippet2>

		new CMyDynLinkLibrary(NVC_MFC_DLLDLL);

	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		TRACE0("NVC_MFC_DLL.DLL Terminating!\n");

		// Terminate the library before destructors are called
		AfxTermExtensionModule(NVC_MFC_DLLDLL);
	}
	return 1;   // ok
}
// </Snippet4>

CRuntimeClass* GetMyView()
{
   return RUNTIME_CLASS(CMyView);
}

void RegisterMyNewClass()
{
// <Snippet3>
   // Register your unique class name that you wish to use
   WNDCLASS wndcls;

   memset(&wndcls, 0, sizeof(WNDCLASS));   // start with NULL defaults

   wndcls.style = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;

   //you can specify your own window procedure
   wndcls.lpfnWndProc = ::DefWindowProc; 
   wndcls.hInstance = AfxGetInstanceHandle();
   wndcls.hIcon = LoadIcon(wndcls.hInstance, MAKEINTRESOURCE(IDI_MYICON));
   wndcls.hCursor = LoadCursor(wndcls.hInstance, MAKEINTRESOURCE(IDC_ARROW));
   wndcls.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
   wndcls.lpszMenuName = NULL;

   // Specify your own class name for using FindWindow later
   wndcls.lpszClassName = _T("MyNewClass");

   // Register the new class and trace if it fails
   if(!AfxRegisterClass(&wndcls))
   {
      TRACE("Class Registration Failed\n");
   }
// </Snippet3>
}

// <Snippet6>
// MyString.h
class AFX_EXT_CLASS CMyString : public CString
{
   // Your implementation code
};
// </Snippet6>

// <Snippet7>
#ifdef _AFXDLL
   #define AFX_EXT_CSTRING AFX_EXT_CLASS
#else
   #define AFX_EXT_CSTRING
#endif

template< typename BaseType, class StringTraits >
class AFX_EXT_CSTRING CStringT_Exported 
   : public CStringT< BaseType, StringTraits >
{
   // Reimplement all CStringT<> constructors and
   // forward to the base class implementation
};
// </Snippet7>

namespace Trickery
{
// <Snippet8>
typedef CStringT_Exported< wchar_t, 
      StrTraitMFC< wchar_t > > CStringW;

typedef CStringT_Exported< char,
      StrTraitMFC< char > > CStringA;

typedef CStringT_Exported< TCHAR,
      StrTraitMFC< TCHAR > > CString;
// </Snippet8>
};

#ifdef _MANAGED
#pragma managed(pop)
#endif

