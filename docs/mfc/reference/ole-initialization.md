---
description: "Learn more about: OLE Initialization"
title: "OLE Initialization"
ms.date: "11/04/2016"
f1_keywords: ["afxdisp/AfxOleInit", "afxdisp/AfxEnableControlContainer"]
helpviewer_keywords: ["OLE initialization"]
ms.assetid: aa8a54a7-24c3-4344-b2c6-dbcf6084fa31
---
# OLE Initialization

Before an application can use OLE system services, it must initialize the OLE system DLLs and verify that the DLLs are the correct version. The `AfxOleInit` function initializes the OLE system DLLs.

### OLE Initialization

|Name|Description|
|-|-|
|[AfxOleInit](#afxoleinit)|Initializes the OLE libraries.|
|[AfxEnableControlContainer](#afxenablecontrolcontainer)|Call this function in your application object's `InitInstance` function to enable support for containment of OLE controls.|

## <a name="afxenablecontrolcontainer"></a> AfxEnableControlContainer

Call this function in your application object's `InitInstance` function to enable support for containment of OLE controls.

### Syntax

```cpp
void AfxEnableControlContainer( );
```

### Remarks

For more information about OLE controls (now called ActiveX controls), see [ActiveX Control Topics](../mfc-activex-controls.md).

### Requirements

**Header:** afxdisp.h

## <a name="afxoleinit"></a> AfxOleInit

Initializes OLE support for the application.

```
BOOL AFXAPI AfxOleInit();
```

### Return Value

Nonzero if successful; 0 if initialization fails, possibly because incorrect versions of the OLE system DLLs are installed.

### Remarks

Call this function to initialize the OLE support for an MFC application. When this function is called, the following actions occur:

- Initializes the COM library on the current apartment of the calling application. For more information, see [OleInitialize](/windows/win32/api/ole2/nf-ole2-oleinitialize).

- Creates a message filter object, implementing the [IMessageFilter](/windows/win32/api/objidl/nn-objidl-imessagefilter) interface. This message filter can be accessed with a call to [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).

> [!NOTE]
> If **AfxOleInit** is called from an MFC DLL, the call will fail. The failure occurs because the function assumes that, if it is called from a DLL, the OLE system was previously initialized by the calling application.

> [!NOTE]
> MFC applications must be initialized as single threaded apartment (STA). If you call [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) in your `InitInstance` override, specify COINIT_APARTMENTTHREADED (rather than COINIT_MULTITHREADED).

### Requirements

**Header:** afxdisp.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
