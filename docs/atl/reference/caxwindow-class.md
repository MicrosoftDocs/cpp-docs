---
title: "CAxWindow Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAxWindowT"
  - "CAxWindow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAxWindow class"
  - "ATL, hosting ActiveX controls"
ms.assetid: 85e79261-43e4-4770-bde0-1ff87f222b0f
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CAxWindow Class
This class provides methods for manipulating a window hosting an ActiveX control.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAxWindow : public CWindow
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AttachControl](#caxwindow__attachcontrol)|Attaches an existing ActiveX control to the `CAxWindow` object.|  
|[CAxWindow](#caxwindow__caxwindow)|Constructs a `CAxWindow` object.|  
|[CreateControl](#caxwindow__createcontrol)|Creates an ActiveX control, initializes it, and hosts it in the `CAxWindow` window.|  
|[CreateControlEx](#caxwindow__createcontrolex)|Creates an ActiveX control and retrieves an interface pointer (or pointers) from the control.|  
|[GetWndClassName](#caxwindow__getwndclassname)|(Static) Retrieves the predefined class name of the `CAxWindow` object.|  
|[QueryControl](#caxwindow__querycontrol)|Retrieves the **IUnknown** of the hosted ActiveX control.|  
|[QueryHost](#caxwindow__queryhost)|Retrieves the **IUnknown** pointer of the `CAxWindow` object.|  
|[SetExternalDispatch](#caxwindow__setexternaldispatch)|Sets the external dispatch interface used by the `CAxWindow` object.|  
|[SetExternalUIHandler](#caxwindow__setexternaluihandler)|Sets the external **IDocHostUIHandler** interface used by the `CAxWindow` object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](#caxwindow__operator_eq)|Assigns an **HWND** to an existing **CAxWindow** object.|  
  
## Remarks  
 This class provides methods for manipulating a window that hosts an ActiveX control. The hosting is provided by " **AtlAxWin80"**, which is wrapped by `CAxWindow`.  
  
 Class `CAxWindow` is implemented as a specialization of the `CAxWindowT` class. This specialization is declared as:  
  
 `typedef CAxWindowT<CWindow> CAxWindow;`  
  
 If you need to change the base class, you can use `CAxWindowT` and specify the new base class as a template argument.  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="caxwindow__attachcontrol"></a>  CAxWindow::AttachControl  
 Creates a new host object if one isn't already present and attaches the specified control to the host.  
  
```
HRESULT AttachControl(
    IUnknown* pControl,
    IUnknown** ppUnkContainer);
```  
  
### Parameters  
 `pControl`  
 [in] A pointer to the **IUnknown** of the control.  
  
 `ppUnkContainer`  
 [out] A pointer to the **IUnknown** of the host (the **AxWin** object).  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The control object being attached must be correctly initialized before calling `AttachControl`.  
  
##  <a name="caxwindow__caxwindow"></a>  CAxWindow::CAxWindow  
 Constructs a `CAxWindow` object using an existing window object handle.  
  
```
CAxWindow(HWND   hWnd = NULL);
```  
  
### Parameters  
 `hWnd`  
 A handle to an existing window object.  
  
##  <a name="caxwindow__createcontrol"></a>  CAxWindow::CreateControl  
 Creates an ActiveX control, initializes it, and hosts it in the specified window.  
  
```
HRESULT CreateControl(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL);

    HRESULT CreateControl(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL);
```  
  
### Parameters  
 `lpszName`  
 A pointer to a string to create the control. Must be formatted in one of the following ways:  
  
-   A ProgID such as "MSCAL.Calendar.7"  
  
-   A CLSID such as "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   A URL such as "http://www.microsoft.com"  
  
-   A reference to an Active document such as "file://\\\Documents\MyDoc.doc"  
  
-   A fragment of HTML such as "MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"  
  
    > [!NOTE]
    >  "MSHTML:" must precede the HTML fragment so that it is designated as being an MSHTML stream. Only the ProgID and CLSID are supported in Windows Mobile platforms. Windows CE embedded platforms, other than Windows Mobile with support for CE IE support all types including ProgID, CLSID, URL, reference to active document, and fragment of HTML.  
  
 `pStream`  
 [in] A pointer to a stream that is used to initialize the properties of the control. Can be **NULL**.  
  
 `ppUnkContainer`  
 [out] The address of a pointer that will receive the **IUnknown** of the container. Can be **NULL**.  
  
 `dwResID`  
 The resource ID of an HTML resource. The WebBrowser control will be created and loaded with the specified resource.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 If the second version of this method is used, an HTML control is created and bound to the resource identified by `dwResID`.  
  
 This method gives you the same result as calling:  
  
 [!code-cpp[NVC_ATL_Windowing#42](../../atl/codesnippet/cpp/caxwindow-class_1.cpp)]  
  
 See [CAxWindow2T::CreateControlLic](../../atl/reference/caxwindow2t-class.md#caxwindow2t__createcontrollic) to create, initialize, and host a licensed ActiveX control.  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) for a sample that uses `CreateControl`.  
  
##  <a name="caxwindow__createcontrolex"></a>  CAxWindow::CreateControlEx  
 Creates an ActiveX control, initializes it, and hosts it in the specified window.  
  
```
HRESULT CreateControlEx(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);

    HRESULT CreateControlEx(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);
```  
  
### Parameters  
 `lpszName`  
 A pointer to a string to create the control. Must be formatted in one of the following ways:  
  
-   A ProgID such as "MSCAL.Calendar.7"  
  
-   A CLSID such as "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   A URL such as "http://www.microsoft.com"  
  
-   A reference to an Active document such as "file://\\\Documents\MyDoc.doc"  
  
-   A fragment of HTML such as "MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"  
  
    > [!NOTE]
    >  "MSHTML:" must precede the HTML fragment so that it is designated as being an MSHTML stream. Only the ProgID and CLSID are supported in Windows Mobile platforms. Windows CE embedded platforms, other than Windows Mobile with support for CE IE support all types including ProgID, CLSID, URL, reference to active document, and fragment of HTML.  
  
 `pStream`  
 [in] A pointer to a stream that is used to initialize the properties of the control. Can be **NULL**.  
  
 `ppUnkContainer`  
 [out] The address of a pointer that will receive the **IUnknown** of the container. Can be **NULL**.  
  
 `ppUnkControl`  
 [out] The address of a pointer that will receive the **IUnknown** of the control. Can be **NULL**.  
  
 `iidSink`  
 [in] The interface identifier of an outgoing interface on the contained object. Can be **IID_NULL**.  
  
 *punkSink*  
 [in] A pointer to the **IUnknown** interface of the sink object to be connected to the connection point on the contained object specified by `iidSink`.  
  
 `dwResID`  
 [in] The resource ID of an HTML resource. The WebBrowser control will be created and loaded with the specified resource.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 This method is similar to [CAxWindow::CreateControl](#caxwindow__createcontrol), but unlike that method, `CreateControlEx` also allows you to receive an interface pointer to the newly created control and set up an event sink to receive events fired by the control.  
  
 See [CAxWindow2T::CreateControlLicEx](../../atl/reference/caxwindow2t-class.md#caxwindow2t__createcontrollicex) to create, initialize, and host a licensed ActiveX control.  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) for a sample that uses `CreateControlEx`.  
  
##  <a name="caxwindow__getwndclassname"></a>  CAxWindow::GetWndClassName  
 Retrieves the name of the window class.  
  
```
static LPCTSTR GetWndClassName();
```  
  
### Return Value  
 A pointer to a string containing the name of the window class that can host nonlicensed ActiveX controls.  
  
##  <a name="caxwindow__operator_eq"></a>  CAxWindow::operator =  
 Assigns an `HWND` to an existing `CAxWindow` object.  
  
```
CAxWindow<TBase>& operator=(HWND   hWnd);
```  
  
### Parameters  
 `hWnd`  
 A handle to an existing window.  
  
### Return Value  
 Returns a reference to the current `CAxWindow` object.  
  
##  <a name="caxwindow__querycontrol"></a>  CAxWindow::QueryControl  
 Retrieves the specified interface of the hosted control.  
  
```
HRESULT QueryControl(
    REFIID iid,
    void** ppUnk);

    template <class  Q>
    HRESULT QueryControl(
    Q** ppUnk);
```  
  
### Parameters  
 `iid`  
 [in] Specifies the IID of the control's interface.  
  
 `ppUnk`  
 [out] A pointer to the interface of the control. In the template version of this method, there is no need for a reference ID as long as a typed interface with an associated UUID is passed.  
  
 `Q`  
 [in] The interface that is being queried for.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="caxwindow__queryhost"></a>  CAxWindow::QueryHost  
 Returns the specified interface of the host.  
  
```
HRESULT QueryHost(
    REFIID iid,
    void** ppUnk);

    template <class  Q>
    HRESULT QueryHost(
    Q** ppUnk);
```  
  
### Parameters  
 `iid`  
 [in] Specifies the IID of the control's interface.  
  
 `ppUnk`  
 [out] A pointer to the interface on the host. In the template version of this method, there is no need for a reference ID as long as a typed interface with an associated UUID is passed.  
  
 `Q`  
 [in] The interface that is being queried for.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The interface of the host allows access to the underlying functionality of the window-hosting code, implemented by **AxWin**.  
  
##  <a name="caxwindow__setexternaldispatch"></a>  CAxWindow::SetExternalDispatch  
 Sets the external dispatch interface for the `CAxWindow` object.  
  
```
HRESULT SetExternalDispatch(IDispatch* pDisp);
```  
  
### Parameters  
 `pDisp`  
 [in] A pointer to an `IDispatch` interface.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="caxwindow__setexternaluihandler"></a>  CAxWindow::SetExternalUIHandler  
 Sets the external [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interface for the `CAxWindow` object.  
  
```
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
```  
  
### Parameters  
 *pUIHandler*  
 [in] A pointer to an **IDocHostUIHandlerDispatch** interface.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The external `IDocHostUIHandlerDispatch` interface is used by controls that query the host's site for the `IDocHostUIHandlerDispatch` interface. The WebBrowser control is one control that does this.  
  
## See Also  
 [ATLCON Sample](../../visual-cpp-samples.md)   
 [CWindow Class](../../atl/reference/cwindow-class.md)   
 [Composite Control Fundamentals](../../atl/atl-composite-control-fundamentals.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Control Containment FAQ](../../atl/atl-control-containment-faq.md)








