---
title: "OLE Initialization | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["afxdisp/AfxOleInit", "afxdisp/AfxEnableControlContainer"]
dev_langs: ["C++"]
helpviewer_keywords: ["OLE initialization"]
ms.assetid: aa8a54a7-24c3-4344-b2c6-dbcf6084fa31
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OLE Initialization
Before an application can use OLE system services, it must initialize the OLE system DLLs and verify that the DLLs are the correct version. The `AfxOleInit` function initializes the OLE system DLLs.  
  
### OLE Initialization  
  
|||  
|-|-|  
|[AfxOleInit](#afxoleinit)|Initializes the OLE libraries.| 
|[AfxEnableControlContainer](#afxenablecontrolcontainer)|Call this function in your application object's `InitInstance` function to enable support for containment of OLE controls.| 


## <a name="afxenablecontrolcontainer"></a> AfxEnableControlContainer
Call this function in your application object's `InitInstance` function to enable support for containment of OLE controls.  
   
### Syntax    
```
void AfxEnableControlContainer( );  
```  
   
### Remarks  
 For more information about OLE controls (now called ActiveX controls), see [ActiveX Control Topics](../mfc-activex-controls.md).  
   
### Requirements  
 **Header:** afxdisp.h  

  
##  <a name="afxoleinit"></a>  AfxOleInit  
 Initializes OLE support for the application.  
  
``` 
BOOL AFXAPI AfxOleInit(); 
```  
  
### Return Value  
 Nonzero if successful; 0 if initialization fails, possibly because incorrect versions of the OLE system DLLs are installed.  
  
### Remarks  
 Call this function to initialize the OLE support for an MFC application. When this function is called, the following actions occur:  
  
-   Initializes the COM library on the current apartment of the calling application. For more information, see [OleInitialize](/windows/desktop/api/ole2/nf-ole2-oleinitialize).  
  
-   Creates a message filter object, implementing the [IMessageFilter](/windows/desktop/api/objidl/nn-objidl-imessagefilter) interface. This message filter can be accessed with a call to [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).  
  
> [!NOTE]
>  If **AfxOleInit** is called from an MFC DLL, the call will fail. The failure occurs because the function assumes that, if it is called from a DLL, the OLE system was previously initialized by the calling application.  
  
> [!NOTE]
>  MFC applications must be initialized as single threaded apartment (STA). If you call [CoInitializeEx](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializeex) in your `InitInstance` override, specify COINIT_APARTMENTTHREADED (rather than COINIT_MULTITHREADED). For more information, see PRB: MFC Application Stops Responding When You Initialize the Application as a Multithreaded Apartment (828643) at [http://support.microsoft.com/default.aspxscid=kb;en-us;828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  

### Requirements  
 **Header:** afxdisp.h

## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
