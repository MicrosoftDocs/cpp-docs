---
description: "Learn more about: CDHtmlDialog Class"
title: "CDHtmlDialog Class"
ms.date: "03/27/2019"
f1_keywords: ["CDHtmlDialog", "AFXDHTML/CDHtmlDialog", "AFXDHTML/CDHtmlDialog::CDHtmlDialog", "AFXDHTML/CDHtmlDialog::CanAccessExternal", "AFXDHTML/CDHtmlDialog::CreateControlSite", "AFXDHTML/CDHtmlDialog::DDX_DHtml_AxControl", "AFXDHTML/CDHtmlDialog::DDX_DHtml_CheckBox", "AFXDHTML/CDHtmlDialog::DDX_DHtml_ElementText", "AFXDHTML/CDHtmlDialog::DDX_DHtml_Radio", "AFXDHTML/CDHtmlDialog::DDX_DHtml_SelectIndex", "AFXDHTML/CDHtmlDialog::DDX_DHtml_SelectString", "AFXDHTML/CDHtmlDialog::DDX_DHtml_SelectValue", "AFXDHTML/CDHtmlDialog::DestroyModeless", "AFXDHTML/CDHtmlDialog::EnableModeless", "AFXDHTML/CDHtmlDialog::FilterDataObject", "AFXDHTML/CDHtmlDialog::GetControlDispatch", "AFXDHTML/CDHtmlDialog::GetControlProperty", "AFXDHTML/CDHtmlDialog::GetCurrentUrl", "AFXDHTML/CDHtmlDialog::GetDHtmlDocument", "AFXDHTML/CDHtmlDialog::GetDropTarget", "AFXDHTML/CDHtmlDialog::GetElement", "AFXDHTML/CDHtmlDialog::GetElementHtml", "AFXDHTML/CDHtmlDialog::GetElementInterface", "AFXDHTML/CDHtmlDialog::GetElementProperty", "AFXDHTML/CDHtmlDialog::GetElementText", "AFXDHTML/CDHtmlDialog::GetEvent", "AFXDHTML/CDHtmlDialog::GetExternal", "AFXDHTML/CDHtmlDialog::GetHostInfo", "AFXDHTML/CDHtmlDialog::GetOptionKeyPath", "AFXDHTML/CDHtmlDialog::HideUI", "AFXDHTML/CDHtmlDialog::IsExternalDispatchSafe", "AFXDHTML/CDHtmlDialog::LoadFromResource", "AFXDHTML/CDHtmlDialog::Navigate", "AFXDHTML/CDHtmlDialog::OnBeforeNavigate", "AFXDHTML/CDHtmlDialog::OnDocumentComplete", "AFXDHTML/CDHtmlDialog::OnDocWindowActivate", "AFXDHTML/CDHtmlDialog::OnFrameWindowActivate", "AFXDHTML/CDHtmlDialog::OnInitDialog", "AFXDHTML/CDHtmlDialog::OnNavigateComplete", "AFXDHTML/CDHtmlDialog::ResizeBorder", "AFXDHTML/CDHtmlDialog::SetControlProperty", "AFXDHTML/CDHtmlDialog::SetElementHtml", "AFXDHTML/CDHtmlDialog::SetElementProperty", "AFXDHTML/CDHtmlDialog::SetElementText", "AFXDHTML/CDHtmlDialog::SetExternalDispatch", "AFXDHTML/CDHtmlDialog::SetHostFlags", "AFXDHTML/CDHtmlDialog::ShowContextMenu", "AFXDHTML/CDHtmlDialog::ShowUI", "AFXDHTML/CDHtmlDialog::TranslateAccelerator", "AFXDHTML/CDHtmlDialog::TranslateUrl", "AFXDHTML/CDHtmlDialog::UpdateUI", "AFXDHTML/CDHtmlDialog::m_bUseHtmlTitle", "AFXDHTML/CDHtmlDialog::m_nHtmlResID", "AFXDHTML/CDHtmlDialog::m_pBrowserApp", "AFXDHTML/CDHtmlDialog::m_spHtmlDoc", "AFXDHTML/CDHtmlDialog::m_strCurrentUrl", "AFXDHTML/CDHtmlDialog::m_szHtmlResID"]
helpviewer_keywords: ["CDHtmlDialog [MFC], CDHtmlDialog", "CDHtmlDialog [MFC], CanAccessExternal", "CDHtmlDialog [MFC], CreateControlSite", "CDHtmlDialog [MFC], DDX_DHtml_AxControl", "CDHtmlDialog [MFC], DDX_DHtml_CheckBox", "CDHtmlDialog [MFC], DDX_DHtml_ElementText", "CDHtmlDialog [MFC], DDX_DHtml_Radio", "CDHtmlDialog [MFC], DDX_DHtml_SelectIndex", "CDHtmlDialog [MFC], DDX_DHtml_SelectString", "CDHtmlDialog [MFC], DDX_DHtml_SelectValue", "CDHtmlDialog [MFC], DestroyModeless", "CDHtmlDialog [MFC], EnableModeless", "CDHtmlDialog [MFC], FilterDataObject", "CDHtmlDialog [MFC], GetControlDispatch", "CDHtmlDialog [MFC], GetControlProperty", "CDHtmlDialog [MFC], GetCurrentUrl", "CDHtmlDialog [MFC], GetDHtmlDocument", "CDHtmlDialog [MFC], GetDropTarget", "CDHtmlDialog [MFC], GetElement", "CDHtmlDialog [MFC], GetElementHtml", "CDHtmlDialog [MFC], GetElementInterface", "CDHtmlDialog [MFC], GetElementProperty", "CDHtmlDialog [MFC], GetElementText", "CDHtmlDialog [MFC], GetEvent", "CDHtmlDialog [MFC], GetExternal", "CDHtmlDialog [MFC], GetHostInfo", "CDHtmlDialog [MFC], GetOptionKeyPath", "CDHtmlDialog [MFC], HideUI", "CDHtmlDialog [MFC], IsExternalDispatchSafe", "CDHtmlDialog [MFC], LoadFromResource", "CDHtmlDialog [MFC], Navigate", "CDHtmlDialog [MFC], OnBeforeNavigate", "CDHtmlDialog [MFC], OnDocumentComplete", "CDHtmlDialog [MFC], OnDocWindowActivate", "CDHtmlDialog [MFC], OnFrameWindowActivate", "CDHtmlDialog [MFC], OnInitDialog", "CDHtmlDialog [MFC], OnNavigateComplete", "CDHtmlDialog [MFC], ResizeBorder", "CDHtmlDialog [MFC], SetControlProperty", "CDHtmlDialog [MFC], SetElementHtml", "CDHtmlDialog [MFC], SetElementProperty", "CDHtmlDialog [MFC], SetElementText", "CDHtmlDialog [MFC], SetExternalDispatch", "CDHtmlDialog [MFC], SetHostFlags", "CDHtmlDialog [MFC], ShowContextMenu", "CDHtmlDialog [MFC], ShowUI", "CDHtmlDialog [MFC], TranslateAccelerator", "CDHtmlDialog [MFC], TranslateUrl", "CDHtmlDialog [MFC], UpdateUI", "CDHtmlDialog [MFC], m_bUseHtmlTitle", "CDHtmlDialog [MFC], m_nHtmlResID", "CDHtmlDialog [MFC], m_pBrowserApp", "CDHtmlDialog [MFC], m_spHtmlDoc", "CDHtmlDialog [MFC], m_strCurrentUrl", "CDHtmlDialog [MFC], m_szHtmlResID"]
ms.assetid: 3f941c85-87e1-4f0f-9cc5-ffee8498b312
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
|[CDHtmlDialog::CDHtmlDialog](#cdhtmldialog)|Constructs a CDHtmlDialog object.|
|[CDHtmlDialog::~CDHtmlDialog](#_dtorcdhtmldialog)|Destroys a CDHtmlDialog object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDHtmlDialog::CanAccessExternal](#canaccessexternal)|Overridable that is called as an access check to see whether scripting objects on the loaded page can access the external dispatch of the control site. Checks to make sure the dispatch is either safe for scripting or the current zone allows for objects that are not safe for scripting.|
|[CDHtmlDialog::CreateControlSite](#createcontrolsite)|Overridable used to create a control site instance to host the WebBrowser control on the dialog.|
|[CDHtmlDialog::DDX_DHtml_AxControl](#ddx_dhtml_axcontrol)|Exchanges data between a member variable and the property value of an ActiveX control on an HTML page.|
|[CDHtmlDialog::DDX_DHtml_CheckBox](#ddx_dhtml_checkbox)|Exchanges data between a member variable and a check box on an HTML page.|
|[CDHtmlDialog::DDX_DHtml_ElementText](#ddx_dhtml_elementtext)|Exchanges data between a member variable and any HTML element property on an HTML page.|
|[CDHtmlDialog::DDX_DHtml_Radio](#ddx_dhtml_radio)|Exchanges data between a member variable and a radio button on an HTML page.|
|[CDHtmlDialog::DDX_DHtml_SelectIndex](#ddx_dhtml_selectindex)|Gets or sets the index of a list box on an HTML page.|
|[CDHtmlDialog::DDX_DHtml_SelectString](#ddx_dhtml_selectstring)|Gets or sets the display text of a list box entry (based on the current index) on an HTML page.|
|[CDHtmlDialog::DDX_DHtml_SelectValue](#ddx_dhtml_selectvalue)|Gets or sets the value of a list box entry (based on the current index) on an HTML page.|
|[CDHtmlDialog::DestroyModeless](#destroymodeless)|Destroys a modeless dialog box.|
|[CDHtmlDialog::EnableModeless](#enablemodeless)|Enables modeless dialog boxes.|
|[CDHtmlDialog::FilterDataObject](#filterdataobject)|Allows the dialog to filter clipboard data objects created by the hosted browser.|
|[CDHtmlDialog::GetControlDispatch](#getcontroldispatch)|Retrieves the `IDispatch` interface on an ActiveX control embedded in the HTML document.|
|[CDHtmlDialog::GetControlProperty](#getcontrolproperty)|Retrieves the requested property of the specified ActiveX control.|
|[CDHtmlDialog::GetCurrentUrl](#getcurrenturl)|Retrieves the Uniform Resource Locator (URL) associated with the current document.|
|[CDHtmlDialog::GetDHtmlDocument](#getdhtmldocument)|Retrieves the IHTMLDocument2 interface on the currently loaded HTML document.|
|[CDHtmlDialog::GetDropTarget](#getdroptarget)|Called by the contained WebBrowser control when it is being used as a drop target to allow the dialog to supply an alternative [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget).|
|[CDHtmlDialog::GetElement](#getelement)|Gets an interface on an HTML element.|
|[CDHtmlDialog::GetElementHtml](#getelementhtml)|Retrieves the `innerHTML` property of an HTML element.|
|[CDHtmlDialog::GetElementInterface](#getelementinterface)|Retrieves the requested interface pointer from an HTML element.|
|[CDHtmlDialog::GetElementProperty](#getelementproperty)|Retrieves the value of an HTML element's property.|
|[CDHtmlDialog::GetElementText](#getelementtext)|Retrieves the `innerText` property of an HTML element.|
|[CDHtmlDialog::GetEvent](#getevent)|Gets the `IHTMLEventObj` pointer to the current event object.|
|[CDHtmlDialog::GetExternal](#getexternal)|Gets the host's `IDispatch` interface.|
|[CDHtmlDialog::GetHostInfo](#gethostinfo)|Retrieves the host's UI capabilities.|
|[CDHtmlDialog::GetOptionKeyPath](#getoptionkeypath)|Retrieves the registry key under which user preferences are stored.|
|[CDHtmlDialog::HideUI](#hideui)|Hides the host's UI.|
|[CDHtmlDialog::IsExternalDispatchSafe](#isexternaldispatchsafe)|Indicates whether the host's `IDispatch` interface is safe for scripting.|
|[CDHtmlDialog::LoadFromResource](#loadfromresource)|Loads the specified resource into the WebBrowser control.|
|[CDHtmlDialog::Navigate](#navigate)|Navigates to the specified URL.|
|[CDHtmlDialog::OnBeforeNavigate](#onbeforenavigate)|Called by the framework before a navigation event is fired.|
|[CDHtmlDialog::OnDocumentComplete](#ondocumentcomplete)|Called by the framework to notify an application when a document has reached the READYSTATE_COMPLETE state.|
|[CDHtmlDialog::OnDocWindowActivate](#ondocwindowactivate)|Called by the framework when the document window is activated or deactivated.|
|[CDHtmlDialog::OnFrameWindowActivate](#onframewindowactivate)|Called by the framework when the frame window is activated or deactivated.|
|[CDHtmlDialog::OnInitDialog](#oninitdialog)|Called in response to the WM_INITDIALOG message.|
|[CDHtmlDialog::OnNavigateComplete](#onnavigatecomplete)|Called by the framework after a navigation event is completed.|
|[CDHtmlDialog::ResizeBorder](#resizeborder)|Alerts the object that it needs to resize its border space.|
|[CDHtmlDialog::SetControlProperty](#setcontrolproperty)|Sets the property of an ActiveX control to a new value.|
|[CDHtmlDialog::SetElementHtml](#setelementhtml)|Sets the `innerHTML` property of an HTML element.|
|[CDHtmlDialog::SetElementProperty](#setelementproperty)|Sets a property of an HTML element.|
|[CDHtmlDialog::SetElementText](#setelementtext)|Sets the `innerText` property of an HTML element.|
|[CDHtmlDialog::SetExternalDispatch](#setexternaldispatch)|Sets the host's `IDispatch` interface.|
|[CDHtmlDialog::SetHostFlags](#sethostflags)|Sets the host's UI flags.|
|[CDHtmlDialog::ShowContextMenu](#showcontextmenu)|Called when a context menu is about to be displayed.|
|[CDHtmlDialog::ShowUI](#showui)|Shows the host's UI.|
|[CDHtmlDialog::TranslateAccelerator](#translateaccelerator)|Called to process menu accelerator-key messages.|
|[CDHtmlDialog::TranslateUrl](#translateurl)|Called to modify the URL to be loaded.|
|[CDHtmlDialog::UpdateUI](#updateui)|Called to notify the host that the command state has changed.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDHtmlDialog::m_bUseHtmlTitle](#m_busehtmltitle)|Indicates whether to use the HTML document's title as the dialog caption.|
|[CDHtmlDialog::m_nHtmlResID](#m_nhtmlresid)|Resource ID of HTML resource to be displayed.|
|[CDHtmlDialog::m_pBrowserApp](#m_pbrowserapp)|A pointer to a Web browser application.|
|[CDHtmlDialog::m_spHtmlDoc](#m_sphtmldoc)|A pointer to an HTML document.|
|[CDHtmlDialog::m_strCurrentUrl](#m_strcurrenturl)|The current URL.|
|[CDHtmlDialog::m_szHtmlResID](#m_szhtmlresid)|String version of the HTML resource ID.|

## Remarks

`CDHtmlDialog` can load the HTML to be displayed from either an HTML resource or a URL.

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

## <a name="ddx_dhtml_helper_macros"></a> DDX_DHtml Helper Macros

The DDX_DHtml helper macros allow easy access to the commonly used properties of controls on an HTML page.

### Data Exchange Macros

|Name|Description|
|-|-|
|[DDX_DHtml_ElementValue](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementvalue)|Sets or retrieves the Value property from the selected control.|
|[DDX_DHtml_ElementInnerText](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnertext)|Sets or retrieves the text between the start and end tags of the current element.|
|[DDX_DHtml_ElementInnerHtml](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnerhtml)|Sets or retrieves the HTML between the start and end tags of the current element.|
|[DDX_DHtml_Anchor_Href](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_href)|Sets or retrieves the destination URL or anchor point.|
|[DDX_DHtml_Anchor_Target](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_target)|Sets or retrieves the target window or frame.|
|[DDX_DHtml_Img_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_img_src)|Sets or retrieves the name of an image or a video clip in the document.|
|[DDX_DHtml_Frame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_frame_src)|Sets or retrieves the URL of the associated frame.|
|[DDX_DHtml_IFrame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_iframe_src)|Sets or retrieves the URL of the associated frame.|

## <a name="canaccessexternal"></a> CDHtmlDialog::CanAccessExternal

Overridable that is called as an access check to see whether scripting objects on the loaded page can access the external dispatch of the control site. Checks to make sure the dispatch is either safe for scripting or the current zone allows for objects that are not safe for scripting.

```
virtual BOOL CanAccessExternal();
```

### Return Value

Nonzero if successful; otherwise 0.

## <a name="cdhtmldialog"></a> CDHtmlDialog::CDHtmlDialog

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

*lpszTemplateName*<br/>
The null-terminated string that is the name of a dialog-box template resource.

*szHtmlResID*<br/>
The null-terminated string that is the name of an HTML resource.

*pParentWnd*<br/>
A pointer to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is NULL, the dialog object's parent window is set to the main application window.

*nIDTemplate*<br/>
Contains the ID number of a dialog-box template resource.

*nHtmlResID*<br/>
Contains the ID number of an HTML resource.

### Remarks

The second form of the constructor provides access to the dialog resource through the template name. The third form of the constructor provides access to the dialog resource through the ID of the resource template. Usually, the ID begins with the **IDD_** prefix.

## <a name="_dtorcdhtmldialog"></a> CDHtmlDialog::~CDHtmlDialog

Destroys a CDHtmlDialog object.

```
virtual ~CDHtmlDialog();
```

### Remarks

The [CWnd::DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) member function must be used to destroy modeless dialog boxes that are created by [CDialog::Create](../../mfc/reference/cdialog-class.md#create).

## <a name="createcontrolsite"></a> CDHtmlDialog::CreateControlSite

Overridable used to create a control site instance to host the WebBrowser control on the dialog.

```
virtual BOOL CreateControlSite(
    COleControlContainer* pContainer,
    COleControlSite** ppSite,
    UINT /* nID */,
    REFCLSID /* clsid */);
```

### Parameters

*pContainer*<br/>
A pointer to the [COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md) object

*ppSite*<br/>
A pointer to a pointer to a [COleControlSite](../../mfc/reference/colecontrolsite-class.md).

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You can override this member function to return an instance of your own control site class.

## <a name="ddx_dhtml_axcontrol"></a> CDHtmlDialog::DDX_DHtml_AxControl

Exchanges data between a member variable and the property value of an ActiveX control on an HTML page.

```cpp
void DDX_DHtml_AxControl(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    VARIANT& var);

void DDX_DHtml_AxControl(
    CDataExchange* pDX,
    LPCTSTR szId,
    LPCTSTR szPropName,
    VARIANT& var);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value of the object tag's ID parameter in the HTML source for the ActiveX control.

*dispId*<br/>
The dispatch ID of the property with which you want to exchange data.

*szPropName*<br/>
The name of the property.

*var*<br/>
The data member, of type VARIANT, [COleVariant](../../mfc/reference/colevariant-class.md), or [CComVariant](../../atl/reference/ccomvariant-class.md), that holds the value exchanged with the ActiveX control property.

### Example

[!code-cpp[NVC_MFCHtmlHttp#1](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_1.cpp)]

## <a name="ddx_dhtml_checkbox"></a> CDHtmlDialog::DDX_DHtml_CheckBox

Exchanges data between a member variable and a check box on an HTML page.

```cpp
void DDX_DHtml_CheckBox(
    CDataExchange* pDX,
    LPCTSTR szId,
    int& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value that you specified for the HTML control's ID parameter.

*value*<br/>
The value being exchanged.

### Example

[!code-cpp[NVC_MFCHtmlHttp#2](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_2.cpp)]

## <a name="ddx_dhtml_elementtext"></a> CDHtmlDialog::DDX_DHtml_ElementText

Exchanges data between a member variable and any HTML element property on an HTML page.

```cpp
void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    CString& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    short& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    int& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    long& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    DWORD& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    float& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    double& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value that you specified for the HTML control's ID parameter.

*dispId*<br/>
The dispatch ID of the HTML element with which you want to exchange data.

*value*<br/>
The value being exchanged.

## <a name="ddx_dhtml_radio"></a> CDHtmlDialog::DDX_DHtml_Radio

Exchanges data between a member variable and a radio button on an HTML page.

```cpp
void DDX_DHtml_Radio(
    CDataExchange* pDX,
    LPCTSTR szId,
    long& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value that you specified for the HTML control's ID parameter.

*value*<br/>
The value being exchanged.

## <a name="ddx_dhtml_selectindex"></a> CDHtmlDialog::DDX_DHtml_SelectIndex

Gets or sets the index of a list box on an HTML page.

```cpp
void DDX_DHtml_SelectIndex(
    CDataExchange* pDX,
    LPCTSTR szId,
    long& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value that you specified for the HTML control's `id` parameter.

*value*<br/>
The value being exchanged.

## <a name="ddx_dhtml_selectstring"></a> CDHtmlDialog::DDX_DHtml_SelectString

Gets or sets the display text of a list box entry (based on the current index) on an HTML page.

```cpp
void DDX_DHtml_SelectString(
    CDataExchange* pDX,
    LPCTSTR szId,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value that you specified for the HTML control's ID parameter.

*value*<br/>
The value being exchanged.

## <a name="ddx_dhtml_selectvalue"></a> CDHtmlDialog::DDX_DHtml_SelectValue

Gets or sets the value of a list box entry (based on the current index) on an HTML page.

```cpp
void DDX_DHtml_SelectValue(
    CDataExchange* pDX,
    LPCTSTR szId,
    CString& value);
```

### Parameters

*pDX*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*szId*<br/>
The value that you specified for the HTML control's ID parameter.

*value*<br/>
The value being exchanged.

### Example

[!code-cpp[NVC_MFCHtmlHttp#3](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_3.cpp)]

## <a name="destroymodeless"></a> CDHtmlDialog::DestroyModeless

Detaches a modeless dialog box from the `CDHtmlDialog` object and destroys the object.

```cpp
void DestroyModeless();
```

## <a name="enablemodeless"></a> CDHtmlDialog::EnableModeless

Enables modeless dialog boxes.

```
STDMETHOD(EnableModeless)(BOOL fEnable);
```

### Parameters

*fEnable*<br/>
See *fEnable* in [IDocHostUIHandler::EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\)) in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\)), as described in the Windows SDK.

## <a name="filterdataobject"></a> CDHtmlDialog::FilterDataObject

Allows the dialog to filter clipboard data objects created by the hosted browser.

```
STDMETHOD(FilterDataObject)(
    IDataObject* pDO,
    IDataObject** ppDORet);
```

### Parameters

*pDO*<br/>
See *pDO* in [IDocHostUIHandler::FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\)) in the Windows SDK.

*ppDORet*<br/>
See *ppDORet* in `IDocHostUIHandler::FilterDataObject` in the Windows SDK.

### Return Value

Returns S_FALSE.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\)), as described in the Windows SDK.

## <a name="getcontroldispatch"></a> CDHtmlDialog::GetControlDispatch

Retrieves the `IDispatch` interface on an ActiveX control embedded in the HTML document returned by [GetDHtmlDocument](#getdhtmldocument).

```
HRESULT GetControlDispatch(
    LPCTSTR szId,
    IDispatch** ppdisp);
```

### Parameters

*szId*<br/>
The HTML ID of an ActiveX control.

*ppdisp*<br/>
The `IDispatch` interface of the control if found in the Web page.

### Return Value

A standard HRESULT value.

## <a name="getcontrolproperty"></a> CDHtmlDialog::GetControlProperty

Retrieves the requested property of the specified ActiveX control.

```
VARIANT GetControlProperty(
    LPCTSTR szId,
    LPCTSTR szPropName);

VARIANT GetControlProperty(
    LPCTSTR szId,
    DISPID dispId);

VARIANT GetControlProperty(
    IDispatch* pdispControl,
    DISPID dispId);
```

### Parameters

*szId*<br/>
The HTML ID of an ActiveX control.

*szPropName*<br/>
The name of a property in the default locale of the current user.

*pdispControl*<br/>
The `IDispatch` pointer of an ActiveX control.

*dispId*<br/>
The dispatch ID of a property.

### Return Value

A variant containing the requested property or an empty variant if the control or property could not be found.

### Remarks

The overloads are listed from least efficient at the top to most efficient at the bottom.

## <a name="getcurrenturl"></a> CDHtmlDialog::GetCurrentUrl

Retrieves the Uniform Resource Locator (URL) associated with the current document.

```cpp
void GetCurrentUrl(CString& szUrl);
```

### Parameters

*szUrl*<br/>
A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the URL to retrieve.

## <a name="getdhtmldocument"></a> CDHtmlDialog::GetDHtmlDocument

Retrieves the [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) interface on the currently loaded HTML document.

```
HRESULT GetDHtmlDocument(IHTMLDocument2 **pphtmlDoc);
```

### Parameters

*\*\*pphtmlDoc*
A pointer to a pointer to an HTML document.

### Return Value

A standard HRESULT. Returns S_OK if successful.

## <a name="getdroptarget"></a> CDHtmlDialog::GetDropTarget

Called by the contained WebBrowser control when it is being used as a drop target to allow the dialog to supply an alternative [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget).

```
STDMETHOD(GetDropTarget)(
    IDropTarget* pDropTarget,
    IDropTarget** ppDropTarget);
```

### Parameters

*pDropTarget*<br/>
See *pDropTarget* in [IDocHostUIHandler::GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\)) in the Windows SDK.

*ppDropTarget*<br/>
See *ppDropTarget* in `IDocHostUIHandler::GetDropTarget` in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\)), as described in the Windows SDK.

## <a name="getelement"></a> CDHtmlDialog::GetElement

Returns an interface on the HTML element specified by *szElementId*.

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

*szElementId*<br/>
The ID of an HTML element.

*ppdisp*<br/>
An `IDispatch` pointer to the requested element or collection of elements.

*pbCollection*<br/>
A BOOL indicating whether the object represented by *ppdisp* is a single element or a collection of elements.

*pphtmlElement*<br/>
An `IHTMLElement` pointer to the requested element.

### Return Value

A standard HRESULT value.

### Remarks

Use the first overload if you need to handle conditions in which there may be more than one element with the specified ID. You can use the last parameter to find out whether the returned interface pointer is to a collection or a single item. If the interface pointer is on a collection, you can query for the `IHTMLElementCollection` and use its `item` property to refer to the elements by ordinal position.

The second overload will fail if there is more than one element with the same ID in the page.

## <a name="getelementhtml"></a> CDHtmlDialog::GetElementHtml

Retrieves the `innerHTML` property of the HTML element identified by *szElementId*.

```
BSTR GetElementHtml(LPCTSTR szElementId);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

### Return Value

The `innerHTML` property of the HTML element identified by *szElementId* or NULL if the element could not be found.

## <a name="getelementinterface"></a> CDHtmlDialog::GetElementInterface

Retrieves the requested interface pointer from the HTML element identified by *szElementId*.

```
template <class Q> HRESULT GetElementInterface(
    LPCTSTR szElementId,
    Q** ppvObj);

HRESULT GetElementInterface(
    LPCTSTR szElementId,
    REFIID refiid,
    void** ppvObj);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

*ppvObj*<br/>
Address of a pointer that will be filled with the requested interface pointer if the element is found and the query succeeds.

*refiid*<br/>
The interface ID (IID) of the requested interface.

### Return Value

A standard HRESULT value.

### Example

[!code-cpp[NVC_MFCHtmlHttp#4](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_4.cpp)]

## <a name="getelementproperty"></a> CDHtmlDialog::GetElementProperty

Retrieves the value of the property identified by *dispId* from the HTML element identified by *szElementId*.

```
VARIANT GetElementProperty(
    LPCTSTR szElementId,
    DISPID dispId);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

*dispId*<br/>
The dispatch ID of a property.

### Return Value

The value of the property or an empty variant if the property or element could not be found.

## <a name="getelementtext"></a> CDHtmlDialog::GetElementText

Retrieves the `innerText` property of the HTML element identified by *szElementId*.

```
BSTR GetElementText(LPCTSTR szElementId);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

### Return Value

The `innerText` property of the HTML element identified by *szElementId* or NULL if the property or element could not be found.

## <a name="getevent"></a> CDHtmlDialog::GetEvent

Returns the `IHTMLEventObj` pointer to the current event object.

```
HRESULT GetEvent(IHTMLEventObj** ppEventObj);
```

### Parameters

*ppEventObj*<br/>
Address of a pointer that will be filled with the `IHTMLEventObj` interface pointer.

### Return Value

A standard HRESULT value.

### Remarks

This function should only be called from within a DHTML event handler.

## <a name="getexternal"></a> CDHtmlDialog::GetExternal

Gets the host's `IDispatch` interface.

```
STDMETHOD(GetExternal)(IDispatch** ppDispatch);
```

### Parameters

*ppDispatch*<br/>
See *ppDispatch* in [IDocHostUIHandler::GetExternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\)) in the Windows SDK.

### Return Value

Returns S_OK on success or E_NOTIMPL on failure.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetExternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\)), as described in the Windows SDK.

## <a name="gethostinfo"></a> CDHtmlDialog::GetHostInfo

Retrieves the host's UI capabilities.

```
STDMETHOD(GetHostInfo)(DOCHOSTUIINFO* pInfo);
```

### Parameters

*pInfo*<br/>
See *pInfo* in [IDocHostUIHandler::GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\)) in the Windows SDK.

### Return Value

Returns S_OK.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\)), as described in the Windows SDK.

## <a name="getoptionkeypath"></a> CDHtmlDialog::GetOptionKeyPath

Retrieves the registry key under which user preferences are stored.

```
STDMETHOD(GetOptionKeyPath)(
    LPOLESTR* pchKey,
    DWORD dw);
```

### Parameters

*pchKey*<br/>
See *pchKey* in [IDocHostUIHandler::GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\)) in the Windows SDK.

*dw*<br/>
See *dw* in `IDocHostUIHandler::GetOptionKeyPath` in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\)), as described in the Windows SDK.

## <a name="hideui"></a> CDHtmlDialog::HideUI

Hides the host's UI.

```
STDMETHOD(HideUI)(void);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::HideUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753259\(v=vs.85\)), as described in the Windows SDK.

## <a name="isexternaldispatchsafe"></a> CDHtmlDialog::IsExternalDispatchSafe

Indicates whether the host's `IDispatch` interface is safe for scripting.

```
virtual BOOL IsExternalDispatchSafe();
```

### Return Value

Returns FALSE.

## <a name="loadfromresource"></a> CDHtmlDialog::LoadFromResource

Loads the specified resource into the WebBrowser control in the DHTML dialog.

```
BOOL LoadFromResource(LPCTSTR lpszResource);
BOOL LoadFromResource(UINT nRes);
```

### Parameters

*lpszResource*<br/>
A pointer to a string containing the name of the resource to load.

*nRes*<br/>
The ID of the resource to load.

### Return Value

TRUE if successful; otherwise FALSE.

## <a name="m_busehtmltitle"></a> CDHtmlDialog::m_bUseHtmlTitle

Indicates whether to use the HTML document's title as the dialog caption.

```
BOOL m_bUseHtmlTitle;
```

### Remarks

If **m**_ **bUseHtmlTitle** is TRUE, the dialog caption is set equal to the title of the HTML document; otherwise, the caption in the dialog resource is used.

## <a name="m_nhtmlresid"></a> CDHtmlDialog::m_nHtmlResID

Resource ID of HTML resource to be displayed.

```
UINT m_nHtmlResID;
```

### Example

[!code-cpp[NVC_MFCHtmlHttp#5](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_5.cpp)]

## <a name="m_pbrowserapp"></a> CDHtmlDialog::m_pBrowserApp

A pointer to a Web browser application.

```
CComPtr <IWebBrowser2> m_pBrowserApp;
```

## <a name="m_sphtmldoc"></a> CDHtmlDialog::m_spHtmlDoc

A pointer to an HTML document.

```
CComPtr<IHTMLDocument2> m_spHtmlDoc;
```

## <a name="m_strcurrenturl"></a> CDHtmlDialog::m_strCurrentUrl

The current URL.

```
CString m_strCurrentUrl;
```

## <a name="m_szhtmlresid"></a> CDHtmlDialog::m_szHtmlResID

String version of the HTML resource ID.

```
LPTSTR m_szHtmlResID;
```

### Example

[!code-cpp[NVC_MFCHtmlHttp#6](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_6.cpp)]

## <a name="navigate"></a> CDHtmlDialog::Navigate

Navigates to the resource identified by the URL that is specified by *lpszURL*.

```cpp
void Navigate(
    LPCTSTR lpszURL,
    DWORD dwFlags = 0,
    LPCTSTR lpszTargetFrameName = NULL,
    LPCTSTR lpszHeaders = NULL,
    LPVOID lpvPostData = NULL,
    DWORD dwPostDataLen = 0);
```

### Parameters

*lpszURL*<br/>
A pointer to a string containing the URL to be targeted.

*dwFlags*<br/>
The flags of a variable that specifies whether to add the resource to the history list, whether to read to the cache or write from the cache, and whether to display the resource in a new window. The variable can be a combination of the values defined by the [BrowserNavConstants](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768360\(v=vs.85\)) enumeration.

*lpszTargetFrameName*<br/>
A pointer to a string that contains the name of the frame in which to display the resource.

*lpszHeaders*<br/>
A pointer to a value that specifies the HTTP headers to send to the server. These headers are added to the default Internet Explorer headers. The headers can specify such information as the action required of the server, the type of data being passed to the server, or a status code. This parameter is ignored if the URL is not an HTTP URL.

*lpvPostData*<br/>
A pointer to the data to send with the HTTP POST transaction. For example, the POST transaction is used to send data gathered by an HTML form. If this parameter does not specify any post data, `Navigate` issues an HTTP GET transaction. This parameter is ignored if the URL is not an HTTP URL.

*dwPostDataLen*<br/>
Data to send with the HTTP POST transaction. For example, the POST transaction is used to send data gathered by an HTML form. If this parameter does not specify any post data, `Navigate` issues an HTTP GET transaction. This parameter is ignored if URL is not an HTTP URL.

## <a name="onbeforenavigate"></a> CDHtmlDialog::OnBeforeNavigate

Called by the framework to cause an event to fire before a navigation occurs.

```
virtual void OnBeforeNavigate(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### Parameters

*pDisp*<br/>
A pointer to an `IDispatch` object.

*szUrl*<br/>
A pointer to a string containing the URL to navigate to.

## <a name="ondocumentcomplete"></a> CDHtmlDialog::OnDocumentComplete

Called by the framework to notify an application when a document has achieved the READYSTATE_COMPLETE state.

```
virtual void OnDocumentComplete(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### Parameters

*pDisp*<br/>
A pointer to an `IDispatch` object.

*szUrl*<br/>
A pointer to a string containing the URL that was navigated to.

## <a name="ondocwindowactivate"></a> CDHtmlDialog::OnDocWindowActivate

Called by the framework when the document window is activated or deactivated.

```
STDMETHOD(OnDocWindowActivate)(BOOL fActivate);
```

### Parameters

*fActivate*<br/>
See *fActivate* in [IDocHostUIHandler::OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\)) in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\)), as described in the Windows SDK.

## <a name="onframewindowactivate"></a> CDHtmlDialog::OnFrameWindowActivate

Called by the framework when the frame window is activated or deactivated.

```
STDMETHOD(OnFrameWindowActivate)(BOOL fActivate);
```

### Parameters

*fActivate*<br/>
See *fActivate* in [IDocHostUIHandler::OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\)) in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\)), as described in the Windows SDK.

## <a name="oninitdialog"></a> CDHtmlDialog::OnInitDialog

Called in response to the WM_INITDIALOG message.

```
virtual BOOL OnInitDialog();
```

### Return Value

The default implementation returns TRUE.

### Remarks

This message is sent to the dialog box during the `Create`, `CreateIndirect`, or `DoModal` calls, which occur immediately before the dialog box is displayed.

Override this member function if you need to perform special processing when the dialog box is initialized. In the overridden version, first call the base class `OnInitDialog` but disregard its return value. You will normally return TRUE from your overridden member function.

Windows calls the `OnInitDialog` function through the standard global dialog-box procedure common to all Microsoft Foundation Class Library dialog boxes, rather than through your message map, so you do not need a message-map entry for this member function.

## <a name="onnavigatecomplete"></a> CDHtmlDialog::OnNavigateComplete

Called by the framework after navigation to the specified URL is completed.

```
virtual void OnNavigateComplete(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### Parameters

*pDisp*<br/>
A pointer to an `IDispatch` object.

*szUrl*<br/>
A pointer to a string containing the URL that was navigated to.

## <a name="resizeborder"></a> CDHtmlDialog::ResizeBorder

Alerts the object that it needs to resize its border space.

```
STDMETHOD(ResizeBorder)(
    LPCRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fRameWindow);
```

### Parameters

*prcBorder*<br/>
See *prcBorder* in [IDocHostUIHandler::ResizeBorder](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753263\(v=vs.85\)) in the Windows SDK.

*pUIWindow*<br/>
See *pUIWindow* in `IDocHostUIHandler::ResizeBorder` in the Windows SDK.

*fFrameWindow*<br/>
See *fFrameWindow* in `IDocHostUIHandler::ResizeBorder` in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

## <a name="setcontrolproperty"></a> CDHtmlDialog::SetControlProperty

Sets the property of an ActiveX control to a new value.

```cpp
void SetControlProperty(
    LPCTSTR szElementId,
    DISPID dispId,
    VARIANT* pVar);

void SetControlProperty(
    IDispatch* pdispControl,
    DISPID dispId,
    VARIANT* pVar);

void SetControlProperty(
    LPCTSTR szElementId,
    LPCTSTR szPropName,
    VARIANT* pVar);
```

### Parameters

*szElementId*<br/>
The HTML ID of an ActiveX control.

*dispId*<br/>
The dispatch ID of the property to set.

*pVar*<br/>
Pointer to a VARIANT containing the new property value.

*pdispControl*<br/>
Pointer to an ActiveX control's `IDispatch` interface.

*szPropName*<br/>
String containing the name of the property to set.

## <a name="setelementhtml"></a> CDHtmlDialog::SetElementHtml

Sets the `innerHTML` property of an HTML element.

```cpp
void SetElementHtml(
    LPCTSTR szElementId,
    BSTR bstrText);

void SetElementHtml(
    IUnknown* punkElem,
    BSTR bstrText);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

*bstrText*<br/>
The new value of the `innerHTML` property.

*punkElem*<br/>
The `IUnknown` pointer of an HTML element.

## <a name="setelementproperty"></a> CDHtmlDialog::SetElementProperty

Sets a property of an HTML element.

```cpp
void SetElementProperty(
    LPCTSTR szElementId,
    DISPID dispId,
    VARIANT* pVar);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

*dispId*<br/>
The dispatch ID of the property to set.

*pVar*<br/>
The new value of the property.

## <a name="setelementtext"></a> CDHtmlDialog::SetElementText

Sets the `innerText` property of an HTML element.

```cpp
void SetElementText(
    LPCTSTR szElementId,
    BSTR bstrText);

void SetElementText(
    IUnknown* punkElem,
    BSTR bstrText);
```

### Parameters

*szElementId*<br/>
The ID of an HTML element.

*bstrText*<br/>
The new value of the `innerText` property.

*punkElem*<br/>
The `IUnknown` pointer of an HTML element.

## <a name="setexternaldispatch"></a> CDHtmlDialog::SetExternalDispatch

Sets the host's `IDispatch` interface.

```cpp
void SetExternalDispatch(IDispatch* pdispExternal);
```

### Parameters

*pdispExternal*<br/>
The new `IDispatch` interface.

## <a name="sethostflags"></a> CDHtmlDialog::SetHostFlags

Sets the host UI flags.

```cpp
void SetHostFlags(DWORD dwFlags);
```

### Parameters

*dwFlags*<br/>
For possible values, see [DOCHOSTUIFLAG](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753277\(v=vs.85\)) in the Windows SDK.

## <a name="showcontextmenu"></a> CDHtmlDialog::ShowContextMenu

Called when a context menu is about to be displayed.

```
STDMETHOD(ShowContextMenu)(
    DWORD dwID,
    POINT* ppt,
    IUnknown* pcmdtReserved,
    IDispatch* pdispReserved);
```

### Parameters

*dwID*<br/>
See *dwID* in [IDocHostUIHandler::ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\)) in the Windows SDK.

*ppt*<br/>
See *ppt* in `IDocHostUIHandler::ShowContextMenu` in the Windows SDK.

*pcmdtReserved*<br/>
See *pcmdtReserved* in `IDocHostUIHandler::ShowContextMenu` in the Windows SDK.

*pdispReserved*<br/>
See *pdispReserved* in `IDocHostUIHandler::ShowContextMenu` in the Windows SDK.

### Return Value

Returns S_FALSE.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\)), as described in the Windows SDK.

## <a name="showui"></a> CDHtmlDialog::ShowUI

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

*dwID*<br/>
See *dwID* in [IDocHostUIHandler::ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\)) in the Windows SDK.

*pActiveObject*<br/>
See *d pActiveObject* in `IDocHostUIHandler::ShowUI` in the Windows SDK.

*pCommandTarget*<br/>
See *pCommandTarget* in `IDocHostUIHandler::ShowUI` in the Windows SDK.

*pFrame*<br/>
See *pFrame* in `IDocHostUIHandler::ShowUI` in the Windows SDK.

*pDoc*<br/>
See *pDoc* in `IDocHostUIHandler::ShowUI` in the Windows SDK.

### Return Value

Returns S_FALSE.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\)), as described in the Windows SDK.

## <a name="translateaccelerator"></a> CDHtmlDialog::TranslateAccelerator

Called to process menu accelerator-key messages.

```
STDMETHOD(TranslateAccelerator)(
    LPMSG lpMsg,
    const GUID* pguidCmdGroup,
    DWORD nCmdID);
```

### Parameters

*lpMsg*<br/>
See *lpMsg* in [IDocHostUIHandler::TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\)) in the Windows SDK.

*pguidCmdGroup*<br/>
See *pguidCmdGroup* in `IDocHostUIHandler::TranslateAccelerator` in the Windows SDK.

*nCmdID*<br/>
See *nCmdID* in `IDocHostUIHandler::TranslateAccelerator` in the Windows SDK.

### Return Value

Returns S_FALSE.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\)), as described in the Windows SDK.

## <a name="translateurl"></a> CDHtmlDialog::TranslateUrl

Called to modify the URL to be loaded.

```
STDMETHOD(TranslateUrl)(
    DWORD dwTranslate,
    OLECHAR* pchURLIn,
    OLECHAR** ppchURLOut);
```

### Parameters

*dwTranslate*<br/>
See *dwTranslate* in [IDocHostUIHandler::TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\)) in the Windows SDK.

*pchURLIn*<br/>
See *pchURLIn* in `IDocHostUIHandler::TranslateUrl` in the Windows SDK.

*ppchURLOut*<br/>
See *ppchURLOut* in `IDocHostUIHandler::TranslateUrl` in the Windows SDK.

### Return Value

Returns S_FALSE.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\)), as described in the Windows SDK.

## <a name="updateui"></a> CDHtmlDialog::UpdateUI

Called to notify the host that the command state has changed.

```
STDMETHOD(UpdateUI)(void);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

This member function is CDHtmlDialog's implementation of [IDocHostUIHandler::UpdateUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753268\(v=vs.85\)), as described in the Windows SDK.

## See also

[MFC Sample DHtmlExplore](../../overview/visual-cpp-samples.md)<br/>
[DDX_DHtml Helper Macros](#ddx_dhtml_helper_macros)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
