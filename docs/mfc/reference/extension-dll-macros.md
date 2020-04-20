---
title: "Macros and Functions for Managing DLLs"
ms.date: "03/27/2019"
helpviewer_keywords: ["module macros in MFC"]
ms.assetid: 303f4161-cb5e-4099-81ad-acdb11aa60fb
---
# Macros and Functions for Managing DLLs

|||
|-|-|
|[AFX_EXT_CLASS](#afx_ext_class)]|Exports classes.|
|[AFX_MANAGE_STATE](#afx_manage_state)|Protect an exported function in a DLL.|
|[AfxOleInitModule](#afxoleinitmodule)|Provides OLE support from a regular MFC DLL that is dynamically linked to MFC.|
|[AfxNetInitModule](#afxnetinitmodule)|Provides MFC Sockets support from a regular MFC DLL that is dynamically linked to MFC.|
|[AfxGetAmbientActCtx](#afxgetambientactctx)|Gets the current state of the per-module state flag.|
|[AfxGetStaticModuleState](#afxgetstaticmodulestate)|Sets the module state before initialization and/or to restore the previous module state after clean up.|
|[AfxInitExtensionModule](#afxinitextensionmodule)|Initializes the DLL.|
|[AfxSetAmbientActCtx](#afxsetambientactctx)|set the per-module state flag, which affects the WinSxS behavior of MFC.|
|[AfxTermExtensionModule](#afxtermextensionmodule)|Allows MFC to clean up the MFC extension DLL when each process detaches from the DLL.|

## <a name="afx_ext_class"></a> AFX_EXT_CLASS

[MFC extension DLLs](../../build/extension-dlls.md) use the macro AFX_EXT_CLASS to export classes; the executables that link to the MFC extension DLL use the macro to import classes.

### Remarks

With the AFX_EXT_CLASS macro, the same header file(s) used to build the MFC extension DLL can be used with the executables that link to the DLL.

In the header file for your DLL, add the AFX_EXT_CLASS keyword to the declaration of your class as follows:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

For more information, see [Export and Import Using AFX_EXT_CLASS](../../build/exporting-and-importing-using-afx-ext-class.md).

### Requirements

**Header:** afxv_dll.h

## <a name="afx_manage_state"></a> AFX_MANAGE_STATE

Call this macro to protect an exported function in a DLL.

### Syntax

```
AFX_MANAGE_STATE(AFX_MODULE_STATE* pModuleState )
```

### Parameters

*pModuleState*<br/>
A pointer to an `AFX_MODULE_STATE` structure.

### Remarks

When this macro is invoked, *pModuleState* is the effective module state for the remainder of the immediate containing scope. Upon leaving the scope, the previous effective module state will be automatically restored.
The `AFX_MODULE_STATE` structure contains global data for the module, that is, the portion of the module state that is pushed or popped.

By default, MFC uses the resource handle of the main application to load the resource template. If you have an exported function in a DLL, such as one that launches a dialog box in the DLL, this template is actually stored in the DLL module. You need to switch the module state for the correct handle to be used. You can do this by adding the following code to the beginning of the function:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

This swaps the current module state with the state returned from [AfxGetStaticModuleState](#afxgetstaticmodulestate) until the end of the current scope.

For more information on module states and MFC, see "Managing the State Data of MFC Modules" in [Creating New Documents, Windows, and Views](../creating-new-documents-windows-and-views.md) and [Technical Note 58](../tn058-mfc-module-state-implementation.md).

> [!NOTE]
> When MFC creates an activation context for an assembly, it uses [AfxWinInit](application-information-and-management.md#afxwininit) to create the context and `AFX_MANAGE_STATE` to activate and deactivate it. Note also that `AFX_MANAGE_STATE` is enabled for static MFC libraries, as well as MFC DLLs, in order to allow MFC code to execute in the proper activation context selected by the User DLL. For more information, see [Support for Activation Contexts in the MFC Module State](../support-for-activation-contexts-in-the-mfc-module-state.md).

### Requirements

**Header:** afxstat_.h

## <a name="afxoleinitmodule"><a/> AfxOleInitModule

For OLE support from a regular MFC DLL that is dynamically linked to MFC, call this function in your regular MFC DLL's `CWinApp::InitInstance` function to initialize the MFC OLE DLL.

### Syntax

```cpp
void AFXAPI AfxOleInitModule( );
```

### Remarks

The MFC OLE DLL is an MFC extension DLL; in order for an MFC extension DLL to get wired into a `CDynLinkLibrary` chain, it must create a `CDynLinkLibrary` object in the context of every module that will be using it. `AfxOleInitModule` creates the `CDynLinkLibrary` object in your regular MFC DLL's context so that it gets wired into the `CDynLinkLibrary` object chain of the regular MFC DLL.

If you are building an OLE control and are using `COleControlModule`, you should not call `AfxOleInitModule` because the `InitInstance` member function for `COleControlModule` calls `AfxOleInitModule`.

### Requirements

**Header**: \<afxdll_.h>

## <a name="afxnetinitmodule"></a> AfxNetInitModule

For MFC Sockets support from a regular MFC DLL that is dynamically linked to MFC, add a call to this function in your regular MFC DLL's `CWinApp::InitInstance` function to initialize the MFC Sockets DLL.

### Syntax

```cpp
void AFXAPI AfxNetInitModule( );
```

### Remarks

The MFC Sockets DLL is an MFC extension DLL; in order for an MFC extension DLL to get wired into a `CDynLinkLibrary` chain, it must create a `CDynLinkLibrary` object in the context of every module that will be using it. `AfxNetInitModule` creates the `CDynLinkLibrary` object in your regular MFC DLL's context so that it gets wired into the `CDynLinkLibrary` object chain of the regular MFC DLL.

### Requirements

**Header:** \<afxdll_.h>

## <a name="afxgetambientactctx"></a> AfxGetAmbientActCtx

Use this function to get the current state of the per-module state flag, which affects the WinSxS behavior of MFC.

### Syntax

```
BOOL AFXAPI AfxGetAmbientActCtx();
```

### Return Value

Module state flag current value.

### Remarks

When the flag is set (which is the default) and a thread enters an MFC module (see [AFX_MANAGE_STATE](#afx_manage_state)), the context of the module is activated.

If the flag is not set, the context of the module is not activated on entry.

The context of a module is determined from its manifest, usually embedded in module resources.

### Requirements

**Header:** afxcomctl32.h

## <a name="afxgetstaticmodulestate"></a> AfxGetStaticModuleState

Call this function to set the module state before initialization and/or to restore the previous module state after clean up.

### Syntax

```
AFX_MODULE_STATE* AFXAPI AfxGetStaticModuleState( );
```

### Return Value

A pointer to an `AFX_MODULE_STATE` structure.

### Remarks

The `AFX_MODULE_STATE` structure contains global data for the module, that is, the portion of the module state that is pushed or popped.

By default, MFC uses the resource handle of the main application to load the resource template. If you have an exported function in a DLL, such as one that launches a dialog box in the DLL, this template is actually stored in the DLL module. You need to switch the module state for the correct handle to be used. You can do this by adding the following code to the beginning of the function:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

This swaps the current module state with the state returned from `AfxGetStaticModuleState` until the end of the current scope.

For more information on module states and MFC, see "Managing the State Data of MFC Modules" in [Creating New Documents, Windows, and Views](../creating-new-documents-windows-and-views.md) and [Technical Note 58](../tn058-mfc-module-state-implementation.md).

### Requirements

**Header:** afxstat_.h

## AfxInitExtensionModule

Call this function in an MFC extension DLL's `DllMain` to initialize the DLL.

### Syntax

```
BOOL AFXAPI AfxInitExtensionModule( AFX_EXTENSION_MODULE& state,  HMODULE hModule );
```

### Parameters

*state*<br/>
A reference to the [AFX_EXTENSION_MODULE Structure](afx-extension-module-structure.md) structure that will contain the state of the MFC extension DLL module after the initialization. The state includes a copy of the runtime class objects that have been initialized by the MFC extension DLL as part of normal static object construction executed before `DllMain` is entered.

*hModule*<br/>
A handle of the MFC extension DLL module.

### Return Value

TRUE if the MFC extension DLL is successfully initialized; otherwise, FALSE.

### Remarks

For example:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // Remove this if you use lpReserved
    UNREFERENCED_PARAMETER(lpReserved);

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Initializing!\n");

        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
            return 0;
...
```

`AfxInitExtensionModule` makes a copy of the DLL's HMODULE and captures the DLL's runtime-classes (`CRuntimeClass` structures) as well as its object factories (`COleObjectFactory` objects) for use later when the `CDynLinkLibrary` object is created.
MFC extension DLLs need to do two things in their `DllMain` function:

- Call [AfxInitExtensionModule](#afxinitextensionmodule) and check the return value.

- Create a `CDynLinkLibrary` object if the DLL will be exporting [CRuntimeClass Structure](cruntimeclass-structure.md) objects or has its own custom resources.

You can call `AfxTermExtensionModule` to clean up the MFC extension DLL when each process detaches from the MFC extension DLL (which happens when the process exits, or when the DLL is unloaded as a result of an `AfxFreeLibrary` call).

### Requirements

**Header:** afxdll_.h

## <a name="afxsetambientactctx"></a> AfxSetAmbientActCtx

Use this function to set the per-module state flag, which affects the WinSxS behavior of MFC.

### Syntax

```cpp
void AFXAPI AfxSetAmbientActCtx(BOOL bSet);
```

### Parameters

*bSet*<br/>
New value of the module state flag.

### Remarks

When the flag is set (which is the default) and a thread enters an MFC module (see [AFX_MANAGE_STATE](#afx_manage_state)), the context of the module is activated.
If the flag is not set, the context of the module is not activated on entry.
The context of a module is determined from its manifest, usually embedded in module resources.

### Example

```cpp
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
}
```

### Requirements

**Header:** afxcomctl32.h

## <a name="afxtermextensionmodule"></a> AfxTermExtensionModule

Call this function to allow MFC to clean up the MFC extension DLL when each process detaches from the DLL (which happens when the process exits, or when the DLL is unloaded as a result of a `AfxFreeLibrary` call).

### Syntax

```cpp
void AFXAPI AfxTermExtensionModule(  AFX_EXTENSION_MODULE& state,  BOOL bAll  = FALSE );
```

### Parameters

*state*<br/>
A reference to the [AFX_EXTENSION_MODULE](afx-extension-module-structure.md) structure that contains the state of MFC extension DLL module.

*bAll*<br/>
If TRUE, clean up all MFC extension DLL modules. Otherwise, clean up only the current DLL module.

### Remarks

`AfxTermExtensionModule` will delete any local storage attached to the module and remove any entries from the message map cache. For example:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // Remove this if you use lpReserved
    UNREFERENCED_PARAMETER(lpReserved);

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Initializing!\n");

        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
            return 0;

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
```

If your application loads and frees MFC extension DLLs dynamically, be sure to call `AfxTermExtensionModule`. Since most MFC extension DLLs are not dynamically loaded (usually, they are linked via their import libraries), the call to `AfxTermExtensionModule` is usually not necessary.

MFC extension DLLs need to call [AfxInitExtensionModule](#afxinitextensionmodule) in their `DllMain`. If the DLL will be exporting [CRuntimeClass](cruntimeclass-structure.md) objects or has its own custom resources, you also need to create a `CDynLinkLibrary` object in `DllMain`.

### Requirements

**Header:** afxdll_.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)<br/>
[AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)<br/>
[Managing the State Data of MFC Modules](../managing-the-state-data-of-mfc-modules.md)<br/>
