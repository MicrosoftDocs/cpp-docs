---
title: "CDHtmlDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDHtmlDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDHtmlDialog class"
ms.assetid: 3f941c85-87e1-4f0f-9cc5-ffee8498b312
caps.latest.revision: 23
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
# CDHtmlDialog Class
Is used to create dialog boxes that use HTML rather than dialog resources to implement their user interface.  
  
## Syntax  
  
```  
class CDHtmlDialog : public CDialog, public CDHtmlEventSink  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDHtmlDialog::CDHtmlDialog](#cdhtmldialog__cdhtmldialog)|Constructs a CDHtmlDialog object.|  
|[CDHtmlDialog::~CDHtmlDialog](#cdhtmldialog__~cdhtmldialog)|Destroys a CDHtmlDialog object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDHtmlDialog::CanAccessExternal](#cdhtmldialog__canaccessexternal)|Overridable that is called as an access check to see whether scripting objects on the loaded page can access the external dispatch of the control site. Checks to make sure the dispatch is either safe for scripting or the current zone allows for objects that are not safe for scripting.|  
|[CDHtmlDialog::CreateControlSite](#cdhtmldialog__createcontrolsite)|Overridable used to create a control site instance to host the WebBrowser control on the dialog.|  
|[CDHtmlDialog::DDX_DHtml_AxControl](#cdhtmldialog__ddx_dhtml_axcontrol)|Exchanges data between a member variable and the property value of an ActiveX control on an HTML page.|  
|[CDHtmlDialog::DDX_DHtml_CheckBox](#cdhtmldialog__ddx_dhtml_checkbox)|Exchanges data between a member variable and a check box on an HTML page.|  
|[CDHtmlDialog::DDX_DHtml_ElementText](#cdhtmldialog__ddx_dhtml_elementtext)|Exchanges data between a member variable and any HTML element property on an HTML page.|  
|[CDHtmlDialog::DDX_DHtml_Radio](#cdhtmldialog__ddx_dhtml_radio)|Exchanges data between a member variable and a radio button on an HTML page.|  
|[CDHtmlDialog::DDX_DHtml_SelectIndex](#cdhtmldialog__ddx_dhtml_selectindex)|Gets or sets the index of a list box on an HTML page.|  
|[CDHtmlDialog::DDX_DHtml_SelectString](#cdhtmldialog__ddx_dhtml_selectstring)|Gets or sets the display text of a list box entry (based on the current index) on an HTML page.|  
|[CDHtmlDialog::DDX_DHtml_SelectValue](#cdhtmldialog__ddx_dhtml_selectvalue)|Gets or sets the value of a list box entry (based on the current index) on an HTML page.|  
|[CDHtmlDialog::DestroyModeless](#cdhtmldialog__destroymodeless)|Destroys a modeless dialog box.|  
|[CDHtmlDialog::EnableModeless](#cdhtmldialog__enablemodeless)|Enables modeless dialog boxes.|  
|[CDHtmlDialog::FilterDataObject](#cdhtmldialog__filterdataobject)|Allows the dialog to filter clipboard data objects created by the hosted browser.|  
|[CDHtmlDialog::GetControlDispatch](#cdhtmldialog__getcontroldispatch)|Retrieves the `IDispatch` interface on an ActiveX control embedded in the HTML document.|  
|[CDHtmlDialog::GetControlProperty](#cdhtmldialog__getcontrolproperty)|Retrieves the requested property of the specified ActiveX control.|  
|[CDHtmlDialog::GetCurrentUrl](#cdhtmldialog__getcurrenturl)|Retrieves the Uniform Resource Locator (URL) associated with the current document.|  
|[CDHtmlDialog::GetDHtmlDocument](#cdhtmldialog__getdhtmldocument)|Retrieves the IHTMLDocument2 interface on the currently loaded HTML document.|  
|[CDHtmlDialog::GetDropTarget](#cdhtmldialog__getdroptarget)|Called by the contained WebBrowser control when it is being used as a drop target to allow the dialog to supply an alternative [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).|  
|[CDHtmlDialog::GetElement](#cdhtmldialog__getelement)|Gets an interface on an HTML element.|  
|[CDHtmlDialog::GetElementHtml](#cdhtmldialog__getelementhtml)|Retrieves the **innerHTML** property of an HTML element.|  
|[CDHtmlDialog::GetElementInterface](#cdhtmldialog__getelementinterface)|Retrieves the requested interface pointer from an HTML element.|  
|[CDHtmlDialog::GetElementProperty](#cdhtmldialog__getelementproperty)|Retrieves the value of an HTML element's property.|  
|[CDHtmlDialog::GetElementText](#cdhtmldialog__getelementtext)|Retrieves the **innerText** property of an HTML element.|  
|[CDHtmlDialog::GetEvent](#cdhtmldialog__getevent)|Gets the **IHTMLEventObj** pointer to the current event object.|  
|[CDHtmlDialog::GetExternal](#cdhtmldialog__getexternal)|Gets the host's `IDispatch` interface.|  
|[CDHtmlDialog::GetHostInfo](#cdhtmldialog__gethostinfo)|Retrieves the host's UI capabilities.|  
|[CDHtmlDialog::GetOptionKeyPath](#cdhtmldialog__getoptionkeypath)|Retrieves the registry key under which user preferences are stored.|  
|[CDHtmlDialog::HideUI](#cdhtmldialog__hideui)|Hides the host's UI.|  
|[CDHtmlDialog::IsExternalDispatchSafe](#cdhtmldialog__isexternaldispatchsafe)|Indicates whether the host's `IDispatch` interface is safe for scripting.|  
|[CDHtmlDialog::LoadFromResource](#cdhtmldialog__loadfromresource)|Loads the specified resource into the WebBrowser control.|  
|[CDHtmlDialog::Navigate](#cdhtmldialog__navigate)|Navigates to the specified URL.|  
|[CDHtmlDialog::OnBeforeNavigate](#cdhtmldialog__onbeforenavigate)|Called by the framework before a navigation event is fired.|  
|[CDHtmlDialog::OnDocumentComplete](#cdhtmldialog__ondocumentcomplete)|Called by the framework to notify an application when a document has reached the `READYSTATE_COMPLETE` state.|  
|[CDHtmlDialog::OnDocWindowActivate](#cdhtmldialog__ondocwindowactivate)|Called by the framework when the document window is activated or deactivated.|  
|[CDHtmlDialog::OnFrameWindowActivate](#cdhtmldialog__onframewindowactivate)|Called by the framework when the frame window is activated or deactivated.|  
|[CDHtmlDialog::OnInitDialog](#cdhtmldialog__oninitdialog)|Called in response to the **WM_INITDIALOG** message.|  
|[CDHtmlDialog::OnNavigateComplete](#cdhtmldialog__onnavigatecomplete)|Called by the framework after a navigation event is completed.|  
|[CDHtmlDialog::ResizeBorder](#cdhtmldialog__resizeborder)|Alerts the object that it needs to resize its border space.|  
|[CDHtmlDialog::SetControlProperty](#cdhtmldialog__setcontrolproperty)|Sets the property of an ActiveX control to a new value.|  
|[CDHtmlDialog::SetElementHtml](#cdhtmldialog__setelementhtml)|Sets the **innerHTML** property of an HTML element.|  
|[CDHtmlDialog::SetElementProperty](#cdhtmldialog__setelementproperty)|Sets a property of an HTML element.|  
|[CDHtmlDialog::SetElementText](#cdhtmldialog__setelementtext)|Sets the **innerText** property of an HTML element.|  
|[CDHtmlDialog::SetExternalDispatch](#cdhtmldialog__setexternaldispatch)|Sets the host's `IDispatch` interface.|  
|[CDHtmlDialog::SetHostFlags](#cdhtmldialog__sethostflags)|Sets the host's UI flags.|  
|[CDHtmlDialog::ShowContextMenu](#cdhtmldialog__showcontextmenu)|Called when a context menu is about to be displayed.|  
|[CDHtmlDialog::ShowUI](#cdhtmldialog__showui)|Shows the host's UI.|  
|[CDHtmlDialog::TranslateAccelerator](#cdhtmldialog__translateaccelerator)|Called to process menu accelerator-key messages.|  
|[CDHtmlDialog::TranslateUrl](#cdhtmldialog__translateurl)|Called to modify the URL to be loaded.|  
|[CDHtmlDialog::UpdateUI](#cdhtmldialog__updateui)|Called to notify the host that the command state has changed.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CDHtmlDialog::m_bUseHtmlTitle](#cdhtmldialog__m_busehtmltitle)|Indicates whether to use the HTML document's title as the dialog caption.|  
|[CDHtmlDialog::m_nHtmlResID](#cdhtmldialog__m_nhtmlresid)|Resource ID of HTML resource to be displayed.|  
|[CDHtmlDialog::m_pBrowserApp](#cdhtmldialog__m_pbrowserapp)|A pointer to a Web browser application.|  
|[CDHtmlDialog::m_spHtmlDoc](#cdhtmldialog__m_sphtmldoc)|A pointer to an HTML document.|  
|[CDHtmlDialog::m_strCurrentUrl](#cdhtmldialog__m_strcurrenturl)|The current URL.|  
|[CDHtmlDialog::m_szHtmlResID](#cdhtmldialog__m_szhtmlresid)|String version of the HTML resource ID.|  
  
## Remarks  
 **CDHtmlDialog** can load the HTML to be displayed from either an HTML resource or a URL.  
  
 `CDHtmlDialog` can also do data exchange with HTML controls and handle events from HTML controls, such as button clicks.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDHtmlSinkHandlerBase2`  
  
 `CDHtmlSinkHandlerBase1`  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDHtmlSinkHandler`  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDHtmlEventSink`  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `CDHtmlDialog`  
  
## Requirements  
 **Header:** afxdhtml.h  
  
##  <a name="ddx_dhtml_helper_macros"></a>  DDX_DHtml Helper Macros  
 The DDX_DHtml helper macros allow easy access to the commonly used properties of controls on an HTML page.  
  
### Data Exchange Macros  
  
|||  
|-|-|  
|[DDX_DHtml_ElementValue](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementvalue)|Sets or retrieves the Value property from the selected control.|  
|[DDX_DHtml_ElementInnerText](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnertext)|Sets or retrieves the text between the start and end tags of the current element.|  
|[DDX_DHtml_ElementInnerHtml](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnerhtml)|Sets or retrieves the HTML between the start and end tags of the current element.|  
|[DDX_DHtml_Anchor_Href](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_href)|Sets or retrieves the destination URL or anchor point.|  
|[DDX_DHtml_Anchor_Target](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_target)|Sets or retrieves the target window or frame.|  
|[DDX_DHtml_Img_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_img_src)|Sets or retrieves the name of an image or a video clip in the document.|  
|[DDX_DHtml_Frame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_frame_src)|Sets or retrieves the URL of the associated frame.|  
|[DDX_DHtml_IFrame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_iframe_src)|Sets or retrieves the URL of the associated frame.|  
  
##  <a name="cdhtmldialog__canaccessexternal"></a>  CDHtmlDialog::CanAccessExternal  
 Overridable that is called as an access check to see whether scripting objects on the loaded page can access the external dispatch of the control site. Checks to make sure the dispatch is either safe for scripting or the current zone allows for objects that are not safe for scripting.  
  
```  
virtual BOOL CanAccessExternal();
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="cdhtmldialog__cdhtmldialog"></a>  CDHtmlDialog::CDHtmlDialog  
 Constructs a resource-based dynamic HTML dialog box.  
  
```  
CDHtmlDialog();

 
CDHtmlDialog(
    LPCTSTR lpszTemplateName,  
    LPCTSTR szHtmlResID,  
    CWnd *pParentWnd = NULL);

 
CDHtmlDialog(
    UINT nIDTemplate,  
    UINT nHtmlResID = 0,  
    CWnd *pParentWnd = NULL);
```  
  
### Parameters  
 `lpszTemplateName`  
 The null-terminated string that is the name of a dialog-box template resource.  
  
 `szHtmlResID`  
 The null-terminated string that is the name of an HTML resource.  
  
 `pParentWnd`  
 A pointer to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
 `nIDTemplate`  
 Contains the ID number of a dialog-box template resource.  
  
 `nHtmlResID`  
 Contains the ID number of an HTML resource.  
  
### Remarks  
 The second form of the constructor provides access to the dialog resource through the template name. The third form of the constructor provides access to the dialog resource through the ID of the resource template. Usually, the ID begins with the **IDD_** prefix.  
  
##  <a name="cdhtmldialog___dtorcdhtmldialog"></a>  CDHtmlDialog::~CDHtmlDialog  
 Destroys a CDHtmlDialog object.  
  
```  
virtual ~CDHtmlDialog();
```  
  
### Remarks  
 The [CWnd::DestroyWindow](../../mfc/reference/cwnd-class.md#cwnd__destroywindow) member function must be used to destroy modeless dialog boxes that are created by [CDialog::Create](../../mfc/reference/cdialog-class.md#cdialog__create).  
  
##  <a name="cdhtmldialog__createcontrolsite"></a>  CDHtmlDialog::CreateControlSite  
 Overridable used to create a control site instance to host the WebBrowser control on the dialog.  
  
```  
virtual BOOL CreateControlSite(
    COleControlContainer* pContainer,  
    COleControlSite** ppSite,  
    UINT /* nID */,  
    REFCLSID /* clsid */);
```  
  
### Parameters  
 `pContainer`  
 A pointer to the [COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md) object  
  
 `ppSite`  
 A pointer to a pointer to a [COleControlSite](../../mfc/reference/colecontrolsite-class.md).  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 You can override this member function to return an instance of your own control site class.  
  
##  <a name="cdhtmldialog__ddx_dhtml_axcontrol"></a>  CDHtmlDialog::DDX_DHtml_AxControl  
 Exchanges data between a member variable and the property value of an ActiveX control on an HTML page.  
  
```  
void DDX_DHtml_AxControl(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    VARIANT& var);

 
void DDX_DHtml_AxControl(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    LPCTSTR szPropName,  
    VARIANT& var);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value of the object tag's ID parameter in the HTML source for the ActiveX control.  
  
 `dispid`  
 The dispatch ID of the property with which you want to exchange data.  
  
 `szPropName`  
 The name of the property.  
  
 `var`  
 The data member, of type `VARIANT`, [COleVariant](../../mfc/reference/colevariant-class.md), or [CComVariant](../../atl/reference/ccomvariant-class.md), that holds the value exchanged with the ActiveX control property.  
  
### Example  
 [!code-cpp[NVC_MFCHtmlHttp#1](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_1.cpp)]  
  
##  <a name="cdhtmldialog__ddx_dhtml_checkbox"></a>  CDHtmlDialog::DDX_DHtml_CheckBox  
 Exchanges data between a member variable and a check box on an HTML page.  
  
```  
void DDX_DHtml_CheckBox(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    int& value);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value that you specified for the HTML control's ID parameter.  
  
 *value*  
 The value being exchanged.  
  
### Example  
 [!code-cpp[NVC_MFCHtmlHttp#2](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_2.cpp)]  
  
##  <a name="cdhtmldialog__ddx_dhtml_elementtext"></a>  CDHtmlDialog::DDX_DHtml_ElementText  
 Exchanges data between a member variable and any HTML element property on an HTML page.  
  
```  
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    CString& value);

 
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    short& value);

 
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    int& value);

 
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    long& value);

 
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    DWORD& value);

 
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    float& value);

 
void DDX_DHtml_ElementText(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    DISPID dispid,  
    double& value);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value that you specified for the HTML control's ID parameter.  
  
 *dispid*  
 The dispatch ID of the HTML element with which you want to exchange data.  
  
 *value*  
 The value being exchanged.  
  
##  <a name="cdhtmldialog__ddx_dhtml_radio"></a>  CDHtmlDialog::DDX_DHtml_Radio  
 Exchanges data between a member variable and a radio button on an HTML page.  
  
```  
void DDX_DHtml_Radio(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    long& value);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value that you specified for the HTML control's ID parameter.  
  
 *value*  
 The value being exchanged.  
  
##  <a name="cdhtmldialog__ddx_dhtml_selectindex"></a>  CDHtmlDialog::DDX_DHtml_SelectIndex  
 Gets or sets the index of a list box on an HTML page.  
  
```  
void DDX_DHtml_SelectIndex(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    long& value);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value that you specified for the HTML control's id parameter.  
  
 *value*  
 The value being exchanged.  
  
##  <a name="cdhtmldialog__ddx_dhtml_selectstring"></a>  CDHtmlDialog::DDX_DHtml_SelectString  
 Gets or sets the display text of a list box entry (based on the current index) on an HTML page.  
  
```  
void DDX_DHtml_SelectString(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    CString& value);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value that you specified for the HTML control's ID parameter.  
  
 *value*  
 The value being exchanged.  
  
##  <a name="cdhtmldialog__ddx_dhtml_selectvalue"></a>  CDHtmlDialog::DDX_DHtml_SelectValue  
 Gets or sets the value of a list box entry (based on the current index) on an HTML page.  
  
```  
void DDX_DHtml_SelectValue(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    CString& value);
```  
  
### Parameters  
 `pDX`  
 A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.  
  
 `szId`  
 The value that you specified for the HTML control's ID parameter.  
  
 *value*  
 The value being exchanged.  
  
### Example  
 [!code-cpp[NVC_MFCHtmlHttp#3](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_3.cpp)]  
  
##  <a name="cdhtmldialog__destroymodeless"></a>  CDHtmlDialog::DestroyModeless  
 Detaches a modeless dialog box from the `CDHtmlDialog` object and destroys the object.  
  
```  
void DestroyModeless();
```  
  
##  <a name="cdhtmldialog__enablemodeless"></a>  CDHtmlDialog::EnableModeless  
 Enables modeless dialog boxes.  
  
```  
STDMETHOD(EnableModeless)(BOOL fEnable);
```  
  
### Parameters  
 `fEnable`  
 See `fEnable` in [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__filterdataobject"></a>  CDHtmlDialog::FilterDataObject  
 Allows the dialog to filter clipboard data objects created by the hosted browser.  
  
```  
STDMETHOD(FilterDataObject)(
    IDataObject* pDO,  
    IDataObject** ppDORet);
```  
  
### Parameters  
 `pDO`  
 See `pDO` in [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppDORet`  
 See `ppDORet` in **IDocHostUIHandler::FilterDataObject** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **S_FALSE**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__getcontroldispatch"></a>  CDHtmlDialog::GetControlDispatch  
 Retrieves the `IDispatch` interface on an ActiveX control embedded in the HTML document returned by [GetDHtmlDocument](#cdhtmldialog__getdhtmldocument).  
  
```  
HRESULT GetControlDispatch(
    LPCTSTR szId,  
    IDispatch** ppdisp);
```  
  
### Parameters  
 `szId`  
 The HTML ID of an ActiveX control.  
  
 *ppdisp*  
 The `IDispatch` interface of the control if found in the Web page.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="cdhtmldialog__getcontrolproperty"></a>  CDHtmlDialog::GetControlProperty  
 Retrieves the requested property of the specified ActiveX control.  
  
```  
VARIANT GetControlProperty(
    LPCTSTR szId,  
    LPCTSTR szPropName);

 
VARIANT GetControlProperty(
    LPCTSTR szId,  
    DISPID dispid);

 
VARIANT GetControlProperty(
    IDispatch* pdispControl,  
    DISPID dispid);
```  
  
### Parameters  
 `szId`  
 The HTML ID of an ActiveX control.  
  
 `szPropName`  
 The name of a property in the default locale of the current user.  
  
 `pdispControl`  
 The `IDispatch` pointer of an ActiveX control.  
  
 `dispid`  
 The dispatch ID of a property.  
  
### Return Value  
 A variant containing the requested property or an empty variant if the control or property could not be found.  
  
### Remarks  
 The overloads are listed from least efficient at the top to most efficient at the bottom.  
  
##  <a name="cdhtmldialog__getcurrenturl"></a>  CDHtmlDialog::GetCurrentUrl  
 Retrieves the Uniform Resource Locator (URL) associated with the current document.  
  
```  
void GetCurrentUrl(CString& szUrl);
```  
  
### Parameters  
 `szUrl`  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the URL to retrieve.  
  
##  <a name="cdhtmldialog__getdhtmldocument"></a>  CDHtmlDialog::GetDHtmlDocument  
 Retrieves the [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interface on the currently loaded HTML document.  
  
```  
HRESULT GetDHtmlDocument(IHTMLDocument2 **pphtmlDoc);
```  
  
### Parameters  
 *\*\*pphtmlDoc*  
 A pointer to a pointer to an HTML document.  
  
### Return Value  
 A standard `HRESULT`. Returns `S_OK` if successful.  
  
##  <a name="cdhtmldialog__getdroptarget"></a>  CDHtmlDialog::GetDropTarget  
 Called by the contained WebBrowser control when it is being used as a drop target to allow the dialog to supply an alternative [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).  
  
```  
STDMETHOD(GetDropTarget)(
    IDropTarget* pDropTarget,  
    IDropTarget** ppDropTarget);
```  
  
### Parameters  
 `pDropTarget`  
 See `pDropTarget` in [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppDropTarget`  
 See `ppDropTarget` in **IDocHostUIHandler::GetDropTarget** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__getelement"></a>  CDHtmlDialog::GetElement  
 Returns an interface on the HTML element specified by `szElementId`.  
  
```  
HRESULT GetElement(
    LPCTSTR szElementId,  
    IDispatch** ppdisp,  
    BOOL* pbCollection = NULL);

 
HRESULT GetElement(
    LPCTSTR szElementId,  
    IHTMLElement** pphtmlElement);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
 *ppdisp*  
 An `IDispatch` pointer to the requested element or collection of elements.  
  
 *pbCollection*  
 A **BOOL** indicating whether the object represented by *ppdisp* is a single element or a collection of elements.  
  
 *pphtmlElement*  
 An **IHTMLElement** pointer to the requested element.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 Use the first overload if you need to handle conditions in which there may be more than one element with the specified ID. You can use the last parameter to find out whether the returned interface pointer is to a collection or a single item. If the interface pointer is on a collection, you can query for the **IHTMLElementCollection** and use its **item** property to refer to the elements by ordinal position.  
  
 The second overload will fail if there is more than one element with the same ID in the page.  
  
##  <a name="cdhtmldialog__getelementhtml"></a>  CDHtmlDialog::GetElementHtml  
 Retrieves the **innerHTML** property of the HTML element identified by `szElementId`.  
  
```  
BSTR GetElementHtml(LPCTSTR szElementId);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
### Return Value  
 The **innerHTML** property of the HTML element identified by `szElementId` or **NULL** if the element could not be found.  
  
##  <a name="cdhtmldialog__getelementinterface"></a>  CDHtmlDialog::GetElementInterface  
 Retrieves the requested interface pointer from the HTML element identified by `szElementId`.  
  
```  
template <class Q> HRESULT GetElementInterface(
    LPCTSTR szElementId,  
    Q** ppvObj);

 
HRESULT GetElementInterface(
    LPCTSTR szElementId,  
    REFIID riid,  
    void** ppvObj);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
 `ppvObj`  
 Address of a pointer that will be filled with the requested interface pointer if the element is found and the query succeeds.  
  
 `riid`  
 The interface ID (IID) of the requested interface.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Example  
 [!code-cpp[NVC_MFCHtmlHttp#4](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_4.cpp)]  
  
##  <a name="cdhtmldialog__getelementproperty"></a>  CDHtmlDialog::GetElementProperty  
 Retrieves the value of the property identified by `dispid` from the HTML element identified by `szElementId`.  
  
```  
VARIANT GetElementProperty(
    LPCTSTR szElementId,  
    DISPID dispid);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
 `dispid`  
 The dispatch ID of a property.  
  
### Return Value  
 The value of the property or an empty variant if the property or element could not be found.  
  
##  <a name="cdhtmldialog__getelementtext"></a>  CDHtmlDialog::GetElementText  
 Retrieves the **innerText** property of the HTML element identified by `szElementId`.  
  
```  
BSTR GetElementText(LPCTSTR szElementId);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
### Return Value  
 The **innerText** property of the HTML element identified by `szElementId` or **NULL** if the property or element could not be found.  
  
##  <a name="cdhtmldialog__getevent"></a>  CDHtmlDialog::GetEvent  
 Returns the **IHTMLEventObj** pointer to the current event object.  
  
```  
HRESULT GetEvent(IHTMLEventObj** ppEventObj);
```  
  
### Parameters  
 `ppEventObj`  
 Address of a pointer that will be filled with the **IHTMLEventObj** interface pointer.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 This function should only be called from within a DHTML event handler.  
  
##  <a name="cdhtmldialog__getexternal"></a>  CDHtmlDialog::GetExternal  
 Gets the host's `IDispatch` interface.  
  
```  
STDMETHOD(GetExternal)(IDispatch** ppDispatch);
```  
  
### Parameters  
 *ppDispatch*  
 See *ppDispatch* in [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns `S_OK` on success or **E_NOTIMPL** on failure.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__gethostinfo"></a>  CDHtmlDialog::GetHostInfo  
 Retrieves the host's UI capabilities.  
  
```  
STDMETHOD(GetHostInfo)(DOCHOSTUIINFO* pInfo);
```  
  
### Parameters  
 `pInfo`  
 See `pInfo` in [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__getoptionkeypath"></a>  CDHtmlDialog::GetOptionKeyPath  
 Retrieves the registry key under which user preferences are stored.  
  
```  
STDMETHOD(GetOptionKeyPath)(
    LPOLESTR* pchKey,  
    DWORD dw);
```  
  
### Parameters  
 `pchKey`  
 See `pchKey` in [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dw`  
 See `dw` in **IDocHostUIHandler::GetOptionKeyPath** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__hideui"></a>  CDHtmlDialog::HideUI  
 Hides the host's UI.  
  
```  
STDMETHOD(HideUI)(void);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::HideUI](https://msdn.microsoft.com/library/aa753259.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__isexternaldispatchsafe"></a>  CDHtmlDialog::IsExternalDispatchSafe  
 Indicates whether the host's `IDispatch` interface is safe for scripting.  
  
```  
virtual BOOL IsExternalDispatchSafe();
```  
  
### Return Value  
 Returns **FALSE**.  
  
##  <a name="cdhtmldialog__loadfromresource"></a>  CDHtmlDialog::LoadFromResource  
 Loads the specified resource into the WebBrowser control in the DHTML dialog.  
  
```  
BOOL LoadFromResource(LPCTSTR lpszResource);

 
BOOL LoadFromResource(UINT nRes);
```  
  
### Parameters  
 `lpszResource`  
 A pointer to a string containing the name of the resource to load.  
  
 `nRes`  
 The ID of the resource to load.  
  
### Return Value  
 **TRUE** if successful; otherwise **FALSE**.  
  
##  <a name="cdhtmldialog__m_busehtmltitle"></a>  CDHtmlDialog::m_bUseHtmlTitle  
 Indicates whether to use the HTML document's title as the dialog caption.  
  
```  
BOOL m_bUseHtmlTitle;  
```  
  
### Remarks  
 If **m**_ **bUseHtmlTitle** is **true**, the dialog caption is set equal to the title of the HTML document; otherwise, the caption in the dialog resource is used.  
  
##  <a name="cdhtmldialog__m_nhtmlresid"></a>  CDHtmlDialog::m_nHtmlResID  
 Resource ID of HTML resource to be displayed.  
  
```  
UINT m_nHtmlResID;  
```  
  
### Example  
 [!code-cpp[NVC_MFCHtmlHttp#5](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_5.cpp)]  
  
##  <a name="cdhtmldialog__m_pbrowserapp"></a>  CDHtmlDialog::m_pBrowserApp  
 A pointer to a Web browser application.  
  
```  
CComPtr <IWebBrowser2> m_pBrowserApp;  
```  
  
##  <a name="cdhtmldialog__m_sphtmldoc"></a>  CDHtmlDialog::m_spHtmlDoc  
 A pointer to an HTML document.  
  
```  
CComPtr<IHTMLDocument2> m_spHtmlDoc;  
```  
  
##  <a name="cdhtmldialog__m_strcurrenturl"></a>  CDHtmlDialog::m_strCurrentUrl  
 The current URL.  
  
```  
CString m_strCurrentUrl;  
```  
  
##  <a name="cdhtmldialog__m_szhtmlresid"></a>  CDHtmlDialog::m_szHtmlResID  
 String version of the HTML resource ID.  
  
```  
LPTSTR m_szHtmlResID;  
```  
  
### Example  
 [!code-cpp[NVC_MFCHtmlHttp#6](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_6.cpp)]  
  
##  <a name="cdhtmldialog__navigate"></a>  CDHtmlDialog::Navigate  
 Navigates to the resource identified by the URL that is specified by `lpszURL`.  
  
```  
void Navigate(
    LPCTSTR lpszURL,  
    DWORD dwFlags = 0,  
    LPCTSTR lpszTargetFrameName = NULL,  
    LPCTSTR lpszHeaders = NULL,  
    LPVOID lpvPostData = NULL,  
    DWORD dwPostDataLen = 0);
```  
  
### Parameters  
 `lpszURL`  
 A pointer to a string containing the URL to be targeted.  
  
 `dwFlags`  
 The flags of a variable that specifies whether to add the resource to the history list, whether to read to the cache or write from the cache, and whether to display the resource in a new window. The variable can be a combination of the values defined by the [BrowserNavConstants](https://msdn.microsoft.com/library/aa768360.aspx) enumeration.  
  
 `lpszTargetFrameName`  
 A pointer to a string that contains the name of the frame in which to display the resource.  
  
 `lpszHeaders`  
 A pointer to a value that specifies the HTTP headers to send to the server. These headers are added to the default Internet Explorer headers. The headers can specify such information as the action required of the server, the type of data being passed to the server, or a status code. This parameter is ignored if the URL is not an HTTP URL.  
  
 `lpvPostData`  
 A pointer to the data to send with the HTTP POST transaction. For example, the POST transaction is used to send data gathered by an HTML form. If this parameter does not specify any post data, **Navigate** issues an HTTP GET transaction. This parameter is ignored if the URL is not an HTTP URL.  
  
 `dwPostDataLen`  
 Data to send with the HTTP POST transaction. For example, the POST transaction is used to send data gathered by an HTML form. If this parameter does not specify any post data, **Navigate** issues an HTTP GET transaction. This parameter is ignored if URL is not an HTTP URL.  
  
##  <a name="cdhtmldialog__onbeforenavigate"></a>  CDHtmlDialog::OnBeforeNavigate  
 Called by the framework to cause an event to fire before a navigation occurs.  
  
```  
virtual void OnBeforeNavigate(
    LPDISPATCH pDisp,  
    LPCTSTR szUrl);
```  
  
### Parameters  
 `pDisp`  
 A pointer to an `IDispatch` object.  
  
 `szUrl`  
 A pointer to a string containing the URL to navigate to.  
  
##  <a name="cdhtmldialog__ondocumentcomplete"></a>  CDHtmlDialog::OnDocumentComplete  
 Called by the framework to notify an application when a document has achieved the `READYSTATE_COMPLETE` state.  
  
```  
virtual void OnDocumentComplete(
    LPDISPATCH pDisp,  
    LPCTSTR szUrl);
```  
  
### Parameters  
 `pDisp`  
 A pointer to an `IDispatch` object.  
  
 `szUrl`  
 A pointer to a string containing the URL that was navigated to.  
  
##  <a name="cdhtmldialog__ondocwindowactivate"></a>  CDHtmlDialog::OnDocWindowActivate  
 Called by the framework when the document window is activated or deactivated.  
  
```  
STDMETHOD(OnDocWindowActivate)(BOOL fActivate);
```  
  
### Parameters  
 `fActivate`  
 See `fActivate` in [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implemention of [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__onframewindowactivate"></a>  CDHtmlDialog::OnFrameWindowActivate  
 Called by the framework when the frame window is activated or deactivated.  
  
```  
STDMETHOD(OnFrameWindowActivate)(BOOL fActivate);
```  
  
### Parameters  
 `fActivate`  
 See `fActivate` in [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__oninitdialog"></a>  CDHtmlDialog::OnInitDialog  
 Called in response to the **WM_INITDIALOG** message.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### Return Value  
 The default implementation returns **TRUE**.  
  
### Remarks  
 This message is sent to the dialog box during the **Create**, `CreateIndirect`, or `DoModal` calls, which occur immediately before the dialog box is displayed.  
  
 Override this member function if you need to perform special processing when the dialog box is initialized. In the overridden version, first call the base class `OnInitDialog` but disregard its return value. You will normally return **TRUE** from your overridden member function.  
  
 Windows calls the `OnInitDialog` function through the standard global dialog-box procedure common to all Microsoft Foundation Class Library dialog boxes, rather than through your message map, so you do not need a message-map entry for this member function.  
  
##  <a name="cdhtmldialog__onnavigatecomplete"></a>  CDHtmlDialog::OnNavigateComplete  
 Called by the framework after navigation to the specified URL is completed.  
  
```  
virtual void OnNavigateComplete(
    LPDISPATCH pDisp,  
    LPCTSTR szUrl);
```  
  
### Parameters  
 `pDisp`  
 A pointer to an `IDispatch` object.  
  
 `szUrl`  
 A pointer to a string containing the URL that was navigated to.  
  
##  <a name="cdhtmldialog__resizeborder"></a>  CDHtmlDialog::ResizeBorder  
 Alerts the object that it needs to resize its border space.  
  
```  
STDMETHOD(ResizeBorder)(
    LPCRECT prcBorder,  
    IOleInPlaceUIWindow* pUIWindow,  
    BOOL fRameWindow);
```  
  
### Parameters  
 `prcBorder`  
 See `prcBorder` in [IDocHostUIHandler::ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pUIWindow`  
 See `pUIWindow` in **IDocHostUIHandler::ResizeBorder** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `fFrameWindow`  
 See *fFrameWindow* in **IDocHostUIHandler::ResizeBorder** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
##  <a name="cdhtmldialog__setcontrolproperty"></a>  CDHtmlDialog::SetControlProperty  
 Sets the property of an ActiveX control to a new value.  
  
```  
void SetControlProperty(
    LPCTSTR szElementId,  
    DISPID dispid,  
    VARIANT* pVar);

 
void SetControlProperty(
    IDispatch* pdispControl,  
    DISPID dispid,  
    VARIANT* pVar);

 
void SetControlProperty(
    LPCTSTR szElementId,  
    LPCTSTR szPropName,  
    VARIANT* pVar);
```  
  
### Parameters  
 `szElementId`  
 The HTML ID of an ActiveX control.  
  
 `dispid`  
 The dispatch ID of the property to set.  
  
 *pVar*  
 Pointer to a **VARIANT** containing the new property value.  
  
 `pdispControl`  
 Pointer to an ActiveX control's `IDispatch` interface.  
  
 `szPropName`  
 String containing the name of the property to set.  
  
##  <a name="cdhtmldialog__setelementhtml"></a>  CDHtmlDialog::SetElementHtml  
 Sets the **innerHTML** property of an HTML element.  
  
```  
void SetElementHtml(
    LPCTSTR szElementId,  
    BSTR bstrText);

 
void SetElementHtml(
    IUnknown* punkElem,  
    BSTR bstrText);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
 `bstrText`  
 The new value of the **innerHTML** property.  
  
 `punkElem`  
 The **IUnknown** pointer of an HTML element.  
  
##  <a name="cdhtmldialog__setelementproperty"></a>  CDHtmlDialog::SetElementProperty  
 Sets a property of an HTML element.  
  
```  
void SetElementProperty(
    LPCTSTR szElementId,  
    DISPID dispid,  
    VARIANT* pVar);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
 `dispid`  
 The dispatch ID of the property to set.  
  
 *pVar*  
 The new value of the property.  
  
##  <a name="cdhtmldialog__setelementtext"></a>  CDHtmlDialog::SetElementText  
 Sets the **innerText** property of an HTML element.  
  
```  
void SetElementText(
    LPCTSTR szElementId,  
    BSTR bstrText);

 
void SetElementText(
    IUnknown* punkElem,  
    BSTR bstrText);
```  
  
### Parameters  
 `szElementId`  
 The ID of an HTML element.  
  
 `bstrText`  
 The new value of the **innerText** property.  
  
 `punkElem`  
 The **IUnknown** pointer of an HTML element.  
  
##  <a name="cdhtmldialog__setexternaldispatch"></a>  CDHtmlDialog::SetExternalDispatch  
 Sets the host's `IDispatch` interface.  
  
```  
void SetExternalDispatch(IDispatch* pdispExternal);
```  
  
### Parameters  
 *pdispExternal*  
 The new `IDispatch` interface.  
  
##  <a name="cdhtmldialog__sethostflags"></a>  CDHtmlDialog::SetHostFlags  
 Sets the host UI flags.  
  
```  
void SetHostFlags(DWORD dwFlags);
```  
  
### Parameters  
 `dwFlags`  
 For possible values, see [DOCHOSTUIFLAG](https://msdn.microsoft.com/library/aa753277.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__showcontextmenu"></a>  CDHtmlDialog::ShowContextMenu  
 Called when a context menu is about to be displayed.  
  
```  
STDMETHOD(ShowContextMenu)(
    DWORD dwID,  
    POINT* ppt,  
    IUnknown* pcmdtReserved,  
    IDispatch* pdispReserved);
```  
  
### Parameters  
 `dwID`  
 See `dwID` in [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppt`  
 See `ppt` in **IDocHostUIHandler::ShowContextMenu** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pcmdtReserved`  
 See `pcmdtReserved` in **IDocHostUIHandler::ShowContextMenu** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pdispReserved`  
 See `pdispReserved` in **IDocHostUIHandler::ShowContextMenu** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **S_FALSE**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__showui"></a>  CDHtmlDialog::ShowUI  
 Shows the host's UI.  
  
```  
STDMETHOD(ShowUI)(
    DWORD dwID,  
    IOleInPlaceActiveObject* pActiveObject,  
    IOleCommandTarget* pCommandTarget,  
    IOleInPlaceFrame* pFrame,  
    IOleInPlaceUIWindow* pDoc);
```  
  
### Parameters  
 `dwID`  
 See `dwID` in [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pActiveObject`  
 See *d pActiveObject* in **IDocHostUIHandler::ShowUI** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pCommandTarget`  
 See `pCommandTarget` in **IDocHostUIHandler::ShowUI** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pFrame`  
 See `pFrame` in **IDocHostUIHandler::ShowUI** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pDoc`  
 See `pDoc` in **IDocHostUIHandler::ShowUI** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **S_FALSE**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__translateaccelerator"></a>  CDHtmlDialog::TranslateAccelerator  
 Called to process menu accelerator-key messages.  
  
```  
STDMETHOD(TranslateAccelerator)(
    LPMSG lpMsg,  
    const GUID* pguidCmdGroup,  
    DWORD nCmdID);
```  
  
### Parameters  
 `lpMsg`  
 See `lpMsg` in [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pguidCmdGroup`  
 See `pguidCmdGroup` in **IDocHostUIHandler::TranslateAccelerator** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nCmdID`  
 See `nCmdID` in **IDocHostUIHandler::TranslateAccelerator** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **S_FALSE**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__translateurl"></a>  CDHtmlDialog::TranslateUrl  
 Called to modify the URL to be loaded.  
  
```  
STDMETHOD(TranslateUrl)(
    DWORD dwTranslate,  
    OLECHAR* pchURLIn,  
    OLECHAR** ppchURLOut);
```  
  
### Parameters  
 `dwTranslate`  
 See `dwTranslate` in [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pchURLIn`  
 See `pchURLIn` in **IDocHostUIHandler::TranslateUrl** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppchURLOut`  
 See `ppchURLOut` in **IDocHostUIHandler::TranslateUrl** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **S_FALSE**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdhtmldialog__updateui"></a>  CDHtmlDialog::UpdateUI  
 Called to notify the host that the command state has changed.  
  
```  
STDMETHOD(UpdateUI)(void);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::UpdateUI](https://msdn.microsoft.com/library/aa753268.aspx), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [MFC Sample DHtmlExplore](../../visual-cpp-samples.md)   
 [DDX_DHtml Helper Macros](#ddx_dhtml_helper_macros)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


