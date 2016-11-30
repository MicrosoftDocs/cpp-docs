---
title: "CMFCToolBarEditBoxButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "OnDrawOnCustomizeList"
  - "OnDraw"
  - "CMFCToolBarEditBoxButton::OnDrawOnCustomizeList"
  - "CMFCToolBarEditBoxButton.SetACCData"
  - "CMFCToolBarEditBoxButton::OnDraw"
  - "OnCalculateSize"
  - "SetACCData"
  - "CMFCToolBarEditBoxButton"
  - "CMFCToolBarEditBoxButton::SetACCData"
  - "CMFCToolBarEditBoxButton::Serialize"
  - "CMFCToolBarEditBoxButton.OnDraw"
  - "CMFCToolBarEditBoxButton.OnDrawOnCustomizeList"
  - "CMFCToolBarEditBoxButton::OnCalculateSize"
  - "Serialize"
  - "CMFCToolBarEditBoxButton.Serialize"
  - "CMFCToolBarEditBoxButton.OnCalculateSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarEditBoxButton class"
  - "SetACCData method"
  - "OnCalculateSize method"
  - "OnDraw method"
  - "OnDrawOnCustomizeList method"
  - "Serialize method"
ms.assetid: b21d9b67-6bf7-4ca9-bd62-b237756e0ab3
caps.latest.revision: 28
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
# CMFCToolBarEditBoxButton Class
A toolbar button that contains an edit control ( [CEdit Class](../../mfc/reference/cedit-class.md)).  
  
## Syntax  
  
```  
class CMFCToolBarEditBoxButton : public CMFCToolBarButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton](#cmfctoolbareditboxbutton__cmfctoolbareditboxbutton)|Constructs a `CMFCToolBarEditBoxButton` object.|  
|`CMFCToolBarEditBoxButton::~CMFCToolBarEditBoxButton`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarEditBoxButton::CanBeStretched](#cmfctoolbareditboxbutton__canbestretched)|Specifies whether a user can stretch the button during customization. (Overrides [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__canbestretched).)|  
|[CMFCToolBarEditBoxButton::CopyFrom](#cmfctoolbareditboxbutton__copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__copyfrom).)|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::CreateEdit](#cmfctoolbareditboxbutton__createedit)|Creates a new edit control in the button.|  
|`CMFCToolBarEditBoxButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCToolBarEditBoxButton::GetByCmd](#cmfctoolbareditboxbutton__getbycmd)|Retrieves the first `CMFCToolBarEditBoxButton` object in the application that has the specified command ID.|  
|[CMFCToolBarEditBoxButton::GetContentsAll](#cmfctoolbareditboxbutton__getcontentsall)|Retrieves the text of the first edit box toolbar control that has the specified command ID.|  
|[CMFCToolBarEditBoxButton::GetContextMenuID](#cmfctoolbareditboxbutton__getcontextmenuid)|Retrieves the resource ID of the shortcut menu that is associated with the button.|  
|[CMFCToolBarEditBoxButton::GetEditBorder](#cmfctoolbareditboxbutton__geteditborder)|Retrieves the bounding rectangle of the edit part of the edit box button.|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::GetEditBox](#cmfctoolbareditboxbutton__geteditbox)|Returns a pointer to the edit control that is embedded in the button.|  
|[CMFCToolBarEditBoxButton::GetHwnd](#cmfctoolbareditboxbutton__gethwnd)|Retrieves the window handle that is associated with the toolbar button. (Overrides [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__gethwnd).)|  
|[CMFCToolBarEditBoxButton::GetInvalidateRect](#cmfctoolbareditboxbutton__getinvalidaterect)|Retrieves the region of the client area of the button that must be redrawn. (Overrides [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__getinvalidaterect).)|  
|`CMFCToolBarEditBoxButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCToolBarEditBoxButton::HaveHotBorder](#cmfctoolbareditboxbutton__havehotborder)|Determines whether a border of the button is displayed when a user clicks the button. (Overrides [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__havehotborder).)|  
|[CMFCToolBarEditBoxButton::IsFlatMode](#cmfctoolbareditboxbutton__isflatmode)|Determines whether edit box buttons have a flat style.|  
|[CMFCToolBarEditBoxButton::NotifyCommand](#cmfctoolbareditboxbutton__notifycommand)|Specifies whether the button processes the [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) message. (Overrides [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__notifycommand).)|  
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](#cmfctoolbareditboxbutton__onaddtocustomizepage)|Called by the framework when the button is added to a **Customize** dialog box. (Overrides [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onaddtocustomizepage).)|  
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncalculatesize).)|  
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](#cmfctoolbareditboxbutton__onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd).)|  
|[CMFCToolBarEditBoxButton::OnClick](#cmfctoolbareditboxbutton__onclick)|Called by the framework when the user clicks the mouse button. (Overrides [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick).)|  
|[CMFCToolBarEditBoxButton::OnCtlColor](#cmfctoolbareditboxbutton__onctlcolor)|Called by the framework when the parent toolbar handles a `WM_CTLCOLOR` message. (Overrides [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onctlcolor).)|  
|`CMFCToolBarEditBoxButton::OnDraw`|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondraw).)|  
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondrawoncustomizelist).)|  
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](#cmfctoolbareditboxbutton__onglobalfontschanged)|Called by the framework when the global font has changed. (Overrides [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onglobalfontschanged).)|  
|[CMFCToolBarEditBoxButton::OnMove](#cmfctoolbareditboxbutton__onmove)|Called by the framework when the parent toolbar moves. (Overrides [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onmove).)|  
|[CMFCToolBarEditBoxButton::OnShow](#cmfctoolbareditboxbutton__onshow)|Called by the framework when the button becomes visible or invisible. (Overrides [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onshow).)|  
|[CMFCToolBarEditBoxButton::OnSize](#cmfctoolbareditboxbutton__onsize)|Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size. (Overrides [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onsize).)|  
|[CMFCToolBarEditBoxButton::OnUpdateToolTip](#cmfctoolbareditboxbutton__onupdatetooltip)|Called by the framework when the parent toolbar updates its tooltip text. (Overrides [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onupdatetooltip).)|  
|`CMFCToolBarEditBoxButton::Serialize`|Reads this object from an archive or writes it to an archive. (Overrides [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__serialize).)|  
|`CMFCToolBarEditBoxButton::SetACCData`|Populates the provided `CAccessibilityData` object with accessibility data from the toolbar button. (Overrides [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__setaccdata).)|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContents](#cmfctoolbareditboxbutton__setcontents)|Sets the text in the edit control of the button.|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContentsAll](#cmfctoolbareditboxbutton__setcontentsall)|Finds the edit control button that has a specified command ID, and sets the text in the edit control of that button.|  
|[CMFCToolBarEditBoxButton::SetContextMenuID](#cmfctoolbareditboxbutton__setcontextmenuid)|Specifies the resource ID of the shortcut menu that is associated with the button.|  
|[CMFCToolBarEditBoxButton::SetFlatMode](#cmfctoolbareditboxbutton__setflatmode)|Specifies the flat style appearance of edit box buttons in the application.|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetStyle](#cmfctoolbareditboxbutton__setstyle)|Specifies the style of the button. (Overrides [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__setstyle).)|  
  
## Remarks  
 To add an edit box button to a toolbar, follow these steps:  
  
 1. Reserve a dummy resource ID for the button in the parent toolbar resource.  
  
 2. Construct a `CMFCToolBarEditBoxButton` object.  
  
 3. In the message handler that processes the `AFX_WM_RESETTOOLBAR` message, replace the dummy button with the new combo box button by using [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton).  
  
 For more information, see [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md).  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCToolBarEditBoxButton` class. The example shows how to specify that a user can stretch the button during customization, specify that a border of the button is displayed when a user clicks the button, set the text in the text box control, specify the flat style appearance of edit box buttons in the application, and specify the style of a toolbar edit box control.  
  
 [!code-cpp[NVC_MFC_RibbonApp#40](../../mfc/reference/codesnippet/cpp/cmfctoolbareditboxbutton-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md)  
  
## Requirements  
 **Header:** afxtoolbareditboxbutton.h  
  
##  <a name="cmfctoolbareditboxbutton__canbestretched"></a>  CMFCToolBarEditBoxButton::CanBeStretched  
 Specifies whether a user can stretch the button during customization.  
  
```  
virtual BOOL CanBeStretched() const;

 
```  
  
### Return Value  
 This method returns `TRUE`.  
  
### Remarks  
 By default, the framework does not allow the user to stretch a toolbar button during customization. This method extends the base class implementation ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__canbestretched)) by allowing the user to stretch an edit box toolbar button during customization.  
  
##  <a name="cmfctoolbareditboxbutton__cmfctoolbareditboxbutton"></a>  CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton  
 Constructs a [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) object.  
  
```  
CMFCToolBarEditBoxButton(
    UINT uiID,  
    int iImage,  
    DWORD dwStyle=ES_AUTOHSCROLL,  
    int iWidth=0);
```  
  
### Parameters  
 [in] `uiID`  
 Specifies the control ID.  
  
 [in] `iImage`  
 Specifies the zero-based index of a toolbar image. The image is located in the [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) object that [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) class maintains.  
  
 [in] `dwStyle`  
 Specifies the edit control style.  
  
 [in] `iWidth`  
 Specifies the width in pixels of the edit control.  
  
### Remarks  
 The default constructor sets the edit control style to the following combination:  
  
 `WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL`  
  
 The default width of the control is 150 pixels.  
  
##  <a name="cmfctoolbareditboxbutton__copyfrom"></a>  CMFCToolBarEditBoxButton::CopyFrom  
 Copies the properties of another toolbar button to the current button.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### Parameters  
 [in] `src`  
 A reference to the source button from which to copy.  
  
### Remarks  
 Call this method to copy another toolbar button to this toolbar button. `src` must be of type `CMFCToolBarEditBoxButton`.  
  
##  <a name="cmfctoolbareditboxbutton__createedit"></a>  CMFCToolBarEditBoxButton::CreateEdit  
 Creates a new edit control in the button.  
  
```  
virtual CEdit* CreateEdit(
    CWnd* pWndParent,  
    const CRect& rect);
```  
  
### Parameters  
 `[in] pWndParent`  
 Specifies the parent window of the edit control. It must not be NULL.  
  
 `[in] rect`  
 Specifies the edit control's size and position.  
  
### Return Value  
 A pointer to the newly created edit control; it is `NULL` if the control's creation and attachment fail.  
  
### Remarks  
 You construct a [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) object in two steps. First call the constructor, and then call `CreateEdit,` which creates the Windows edit control and attaches it to the `CMFCToolBarEditBoxButton` object.  
  
##  <a name="cmfctoolbareditboxbutton__getbycmd"></a>  CMFCToolBarEditBoxButton::GetByCmd  
 Retrieves the first `CMFCToolBarEditBoxButton` object in the application that has the specified command ID.  
  
```  
static CMFCToolBarEditBoxButton* __stdcall GetByCmd(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the button to retrieve.  
  
### Return Value  
 The first `CMFCToolBarEditBoxButton` object in the application that has the specified command ID, or `NULL` if no such object exists.  
  
### Remarks  
 This shared utility method is used by methods such as [CMFCToolBarEditBoxButton::SetContentsAll](#cmfctoolbareditboxbutton__setcontentsall) and [CMFCToolBarEditBoxButton::GetContentsAll](#cmfctoolbareditboxbutton__getcontentsall) to set or get the text of the first edit box toolbar control that has the specified command ID.  
  
##  <a name="cmfctoolbareditboxbutton__getcontentsall"></a>  CMFCToolBarEditBoxButton::GetContentsAll  
 Retrieves the text of the first edit box toolbar control that has the specified command ID.  
  
```  
static CString __stdcall GetContentsAll(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the button from which to retrieve contents.  
  
### Return Value  
 A `CString` object that contains the text of the first edit box toolbar control that has the specified command ID.  
  
### Remarks  
 This method returns the empty string if no `CMFCToolBarEditBoxButton` objects have the specified command ID.  
  
##  <a name="cmfctoolbareditboxbutton__getcontextmenuid"></a>  CMFCToolBarEditBoxButton::GetContextMenuID  
 Retrieves the resource ID of the shortcut menu that is associated with the button.  
  
```  
UINT GetContextMenuID();
```  
  
### Return Value  
 The resource ID of the shortcut menu that is associated with the button or 0 if the button has no associated shortcut menu.  
  
### Remarks  
 The framework uses the resource ID to create the shortcut menu when the user right-clicks on the button.  
  
##  <a name="cmfctoolbareditboxbutton__geteditborder"></a>  CMFCToolBarEditBoxButton::GetEditBorder  
 Retrieves the bounding rectangle of the edit part of the edit box button.  
  
```  
virtual void GetEditBorder(CRect& rectBorder);
```  
  
### Parameters  
 [out] `rectBorder`  
 A reference to the `CRect` object that receives the bounding rectangle.  
  
### Remarks  
 This method retrieves the bounding rectangle of the edit control in client coordinates. It expands the size of the rectangle in each direction by one pixel.  
  
 The [CMFCVisualManager::OnDrawEditBorder](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondraweditborder) method calls this method when it draws the border around a `CMFCToolBarEditBoxButton` object.  
  
##  <a name="cmfctoolbareditboxbutton__geteditbox"></a>  CMFCToolBarEditBoxButton::GetEditBox  
 Returns a pointer to the [CEdit Class](../../mfc/reference/cedit-class.md) control that is embedded in the button.  
  
```  
CEdit* GetEditBox() const;

 
```  
  
### Return Value  
 A pointer to the [CEdit Class](../../mfc/reference/cedit-class.md) control that the button contains. It is `NULL` if the `CEdit` control has not been created yet.  
  
### Remarks  
 You create the `CEdit` control by calling [CMFCToolBarEditBoxButton::CreateEdit](#cmfctoolbareditboxbutton__createedit).  
  
##  <a name="cmfctoolbareditboxbutton__gethwnd"></a>  CMFCToolBarEditBoxButton::GetHwnd  
 Retrieves the window handle that is associated with the toolbar button.  
  
```  
virtual HWND GetHwnd();
```  
  
### Return Value  
 The window handle that is associated with the button.  
  
### Remarks  
 This method overrides the [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__gethwnd) method by returning the window handle of the edit control part of the edit box button.  
  
##  <a name="cmfctoolbareditboxbutton__getinvalidaterect"></a>  CMFCToolBarEditBoxButton::GetInvalidateRect  
 Retrieves the region of the client area of the button that must be redrawn.  
  
```  
virtual const CRect GetInvalidateRect() const;

 
```  
  
### Return Value  
 A `CRect` object that specifies the region that must be redrawn.  
  
### Remarks  
 This method extends the base class implementation, [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__getinvalidaterect), by including in the region the area of the text label.  
  
##  <a name="cmfctoolbareditboxbutton__havehotborder"></a>  CMFCToolBarEditBoxButton::HaveHotBorder  
 Determines whether a border of the button is displayed when a user clicks the button.  
  
```  
virtual BOOL HaveHotBorder() const;

 
```  
  
### Return Value  
 Nonzero if a button displays its border when selected; otherwise 0.  
  
### Remarks  
 This method extends the base class implementation, [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__havehotborder), by returning a nonzero value if the control is visible.  
  
##  <a name="cmfctoolbareditboxbutton__isflatmode"></a>  CMFCToolBarEditBoxButton::IsFlatMode  
 Determines whether edit box buttons have a flat style.  
  
```  
static BOOL __stdcall IsFlatMode();
```  
  
### Return Value  
 Nonzero if the buttons have a flat style; otherwise, 0.  
  
### Remarks  
 By default, edit box buttons have a flat style. Use the [CMFCToolBarEditBoxButton::SetFlatMode](#cmfctoolbareditboxbutton__setflatmode) method to change the flat style appearance for your application.  
  
##  <a name="cmfctoolbareditboxbutton__notifycommand"></a>  CMFCToolBarEditBoxButton::NotifyCommand  
 Specifies whether the button processes the [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) message.  
  
```  
virtual BOOL NotifyCommand(int iNotifyCode);
```  
  
### Parameters  
 [in] `iNotifyCode`  
 The notification message that is associated with the command.  
  
### Return Value  
 `TRUE` if the button processes the `WM_COMMAND` message, or `FALSE` to indicate that the message must be handled by the parent toolbar.  
  
### Remarks  
 The framework calls this method when it is about to send a [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) message to the parent window.  
  
 This method extends the base class implementation ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__notifycommand)) by processing the [EN_UPDATE](http://msdn.microsoft.com/library/windows/desktop/bb761687) notification. For each edit box with the same command ID as this object, it sets its text label to the text label of this object.  
  
##  <a name="cmfctoolbareditboxbutton__onaddtocustomizepage"></a>  CMFCToolBarEditBoxButton::OnAddToCustomizePage  
 Called by the framework when the button is added to a **Customize** dialog box.  
  
```  
virtual void OnAddToCustomizePage();
```  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onaddtocustomizepage)) by copying the properties from the edit box control in any toolbar that has the same command ID as this object. This method does nothing if no toolbar has an edit box control that has the same command ID as this object.  
  
 For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
##  <a name="cmfctoolbareditboxbutton__onchangeparentwnd"></a>  CMFCToolBarEditBoxButton::OnChangeParentWnd  
 Called by the framework when the button is inserted into a new toolbar.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### Parameters  
 [in] `pWndParent`  
 A pointer to the new parent window.  
  
### Remarks  
 This method overrides the base class implementation ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd)) by recreating the internal `CEdit` object.  
  
##  <a name="cmfctoolbareditboxbutton__onclick"></a>  CMFCToolBarEditBoxButton::OnClick  
 Called by the framework when the user clicks the mouse button.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### Parameters  
 [in] `pWnd`  
 Unused.  
  
 [in] `bDelay`  
 Unused.  
  
### Return Value  
 Nonzero if the button processes the click message; otherwise 0.  
  
### Remarks  
 This method overrides the base class implementation ( [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick)) by returning a nonzero value if the internal `CEdit` object is visible.  
  
##  <a name="cmfctoolbareditboxbutton__onctlcolor"></a>  CMFCToolBarEditBoxButton::OnCtlColor  
 Called by the framework when the parent toolbar handles a `WM_CTLCOLOR` message.  
  
```  
virtual HBRUSH OnCtlColor(
    CDC* pDC,  
    UINT nCtlColor);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the button.  
  
 [in] `nCtlColor`  
 Unused.  
  
### Return Value  
 A handle to the global window brush.  
  
### Remarks  
 This method overrides the base class implementation ( [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onctlcolor)) by setting the text and background colors of the provided device context to the global text and background colors, respectively.  
  
 For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).  
  
##  <a name="cmfctoolbareditboxbutton__onglobalfontschanged"></a>  CMFCToolBarEditBoxButton::OnGlobalFontsChanged  
 Called by the framework when the global font has changed.  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onglobalfontschanged)) by changing the font of the control to that of the global font.  
  
 For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).  
  
##  <a name="cmfctoolbareditboxbutton__onmove"></a>  CMFCToolBarEditBoxButton::OnMove  
 Called by the framework when the parent toolbar moves.  
  
```  
virtual void OnMove();
```  
  
### Remarks  
 This method overrides the default class implementation ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onmove)) by updating the position of the internal `CEdit` object  
  
##  <a name="cmfctoolbareditboxbutton__onshow"></a>  CMFCToolBarEditBoxButton::OnShow  
 Called by the framework when the button becomes visible or invisible.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 Specifies whether the button is visible. If this parameter is `TRUE`, the button is visible. Otherwise, the button is not visible.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onshow)) by displaying the button if `bShow` is `TRUE`. Otherwise, this method hides the button.  
  
##  <a name="cmfctoolbareditboxbutton__onsize"></a>  CMFCToolBarEditBoxButton::OnSize  
 Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size.  
  
```  
virtual void OnSize(int iSize);
```  
  
### Parameters  
 [in] `iSize`  
 The new width of the button, in pixels.  
  
### Remarks  
 This method overrides the default class implementation, [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onsize), by updating the size and position of the internal `CEdit` object.  
  
##  <a name="cmfctoolbareditboxbutton__onupdatetooltip"></a>  CMFCToolBarEditBoxButton::OnUpdateToolTip  
 Called by the framework when the parent toolbar updates its tooltip text.  
  
```  
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,  
    int iButtonIndex,  
    CToolTipCtrl& wndToolTip,  
    CString& str);
```  
  
### Parameters  
 [in] `pWndParent`  
 Unused.  
  
 [in] `iButtonIndex`  
 Unused.  
  
 [in] `wndToolTip`  
 The control that displays the tooltip text.  
  
 [out] `str`  
 A `CString` object that receives the updated tooltip text.  
  
### Return Value  
 Nonzero if the method updates the tooltip text; otherwise 0.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onupdatetooltip)) by displaying the tooltip text that is associated with the edit part of the button. If the internal `CEdit` object is `NULL` or the window handle of the `CEdit` object does not identify an existing window, this method does nothing and returns `FALSE`.  
  
##  <a name="cmfctoolbareditboxbutton__setcontents"></a>  CMFCToolBarEditBoxButton::SetContents  
 Sets the text in the text box control.  
  
```  
virtual void SetContents(const CString& sContents);
```  
  
### Parameters  
 `[in] sContents`  
 Specifies the new text to set.  
  
##  <a name="cmfctoolbareditboxbutton__setcontentsall"></a>  CMFCToolBarEditBoxButton::SetContentsAll  
 Finds a [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) object that has a specified command ID and sets the specified text within its text box.  
  
```  
static BOOL SetContentsAll(
    UINT uiCmd,  
    const CString& strContents);
```  
  
### Parameters  
 [in] `uiCmd`  
 Specifies the command ID of the control for which the text will be changed.  
  
 [in] `strContents`  
 Specifies the new text to set.  
  
### Return Value  
 Nonzero if the text was set; 0 if the `CMFCToolBarEditBoxButton` control with the specified command ID does not exist.  
  
##  <a name="cmfctoolbareditboxbutton__setcontextmenuid"></a>  CMFCToolBarEditBoxButton::SetContextMenuID  
 Specifies the resource ID of the shortcut menu that is associated with the button.  
  
```  
void SetContextMenuID(UINT uiResID);
```  
  
### Parameters  
 [in] `uiCmd`  
 The resource ID of the shortcut menu.  
  
### Remarks  
 The framework uses the resource ID to create the shortcut menu when the user right-clicks the toolbar button.  
  
##  <a name="cmfctoolbareditboxbutton__setflatmode"></a>  CMFCToolBarEditBoxButton::SetFlatMode  
 Specifies the flat style appearance of edit box buttons in the application.  
  
```  
static void __stdcall SetFlatMode(BOOL bFlat = TRUE);
```  
  
### Parameters  
 [in] `bFlat`  
 The flat style for edit box buttons. If this parameter is `TRUE`, the flat style appearance is enabled; otherwise the flat style appearance is disabled.  
  
### Remarks  
 The default flat style for edit box buttons is `TRUE`. Use the [CMFCToolBarEditBoxButton::IsFlatMode](#cmfctoolbareditboxbutton__isflatmode) method to retrieve the flat style appearance for your application.  
  
##  <a name="cmfctoolbareditboxbutton__setstyle"></a>  CMFCToolBarEditBoxButton::SetStyle  
 Specifies the style of a toolbar edit box control.  
  
```  
virtual void SetStyle(UINT nStyle);
```  
  
### Parameters  
 [in] `nStyle`  
 A new style to set.  
  
### Remarks  
 This method sets [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__m_nstyle) to `nStyle` It also disables the text box when the application is in Customize mode, and enables it when the application is not in Customize mode (see [CMFCToolBar::SetCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__setcustomizemode) and [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__iscustomizemode)). See [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md) for a list of valid style flags.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton)   
 [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)



