---
title: "CMFCOutlookBarPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCOutlookBarPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Dock method"
  - "IsChangeState method"
  - "SmartUpdate method"
  - "OnBeforeFloat method"
  - "RestoreOriginalstate method"
  - "CMFCOutlookBarPane class"
  - "CanBeRestored method"
ms.assetid: 094e2ef3-a118-487e-a4cc-27626108fe08
caps.latest.revision: 30
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
# CMFCOutlookBarPane Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 A control derived from [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) that can be inserted into an Outlook bar ( [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)). The Outlook bar pane contains a column of large buttons. The user can scroll up and down the list of buttons if it is larger than the pane. When the user detaches an Outlook bar pane from the Outlook bar, it can float or dock in the main frame window.  
  
## Syntax  
  
```  
class CMFCOutlookBarPane : public CMFCToolBar  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCOutlookBarPane::CMFCOutlookBarPane`|Default constructor.|  
|`CMFCOutlookBarPane::~CMFCOutlookBarPane`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCOutlookBarPane::AddButton](#cmfcoutlookbarpane__addbutton)|Adds a button to the Outlook bar pane.|  
|[CMFCOutlookBarPane::CanBeAttached](#cmfcoutlookbarpane__canbeattached)|Determines whether the pane can be docked to another pane or frame window. (Overrides [CBasePane::CanBeAttached](../../mfc/reference/cbasepane-class.md#cbasepane__canbeattached).)|  
|`CMFCOutlookBarPane::CanBeRestored`|Determines whether the system can restore a toolbar to its original state after customization. (Overrides [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__canberestored).)|  
|[CMFCOutlookBarPane::ClearAll](#cmfcoutlookbarpane__clearall)|Frees the resources used by the images in the Outlook bar pane.|  
|[CMFCOutlookBarPane::Create](#cmfcoutlookbarpane__create)|Creates the Outlook bar pane.|  
|`CMFCOutlookBarPane::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCOutlookBarPane::Dock`|Called by the framework to dock the Outlook bar pane. (Overrides `CPane::Dock`.)|  
|[CMFCOutlookBarPane::EnablePageScrollMode](#cmfcoutlookbarpane__enablepagescrollmode)|Specifies whether the scroll arrows on the Outlook bar pane advance the list of buttons by page, or by button.|  
|[CMFCOutlookBarPane::GetRegularColor](#cmfcoutlookbarpane__getregularcolor)|Returns the regular (non-selected) text color of the Outlook bar pane.|  
|`CMFCOutlookBarPane::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCOutlookBarPane::IsBackgroundTexture](#cmfcoutlookbarpane__isbackgroundtexture)|Determines whether there is a background image loaded for the Outlook bar pane.|  
|`CMFCOutlookBarPane::IsChangeState`|Determines whether a floating pane may be docked. (Overrides `CPane::IsChangeState`.)|  
|[CMFCOutlookBarPane::IsDrawShadedHighlight](#cmfcoutlookbarpane__isdrawshadedhighlight)|Determines whether the button border is shaded when a button is highlighted and a background image is displayed.|  
|`CMFCOutlookBarPane::OnBeforeFloat`|Called by the framework when a pane is about to float. (Overrides [CPane::OnBeforeFloat](../../mfc/reference/cpane-class.md#cpane__onbeforefloat).)|  
|[CMFCOutlookBarPane::RemoveButton](#cmfcoutlookbarpane__removebutton)|Removes the button that has a specified command ID.|  
|`CMFCOutlookBarPane::RestoreOriginalstate`|Restores the original state of a toolbar. (Overrides [CMFCToolBar::RestoreOriginalState](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__restoreoriginalstate).)|  
|[CMFCOutlookBarPane::SetBackColor](#cmfcoutlookbarpane__setbackcolor)|Sets the background color.|  
|[CMFCOutlookBarPane::SetBackImage](#cmfcoutlookbarpane__setbackimage)|Sets the background image.|  
|[CMFCOutlookBarPane::SetDefaultState](#cmfcoutlookbarpane__setdefaultstate)|Resets the Outlook bar pane to the original set of buttons.|  
|[CMFCOutlookBarPane::SetExtraSpace](#cmfcoutlookbarpane__setextraspace)|Sets the number of pixels of padding used around buttons in the Outlook bar pane.|  
|[CMFCOutlookBarPane::SetTextColor](#cmfcoutlookbarpane__settextcolor)|Sets the colors of regular and highlighted text in the Outlook bar pane.|  
|[CMFCOutlookBarPane::SetTransparentColor](#cmfcoutlookbarpane__settransparentcolor)|Sets the transparent color for the Outlook bar pane.|  
|`CMFCOutlookBarPane::SmartUpdate`|Used internally to update the Outlook bar. (Overrides `CMFCToolBar::SmartUpdate`.)|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCOutlookBarPane::EnableContextMenuItems](#cmfcoutlookbarpane__enablecontextmenuitems)|Specifies which shortcut menu items are displayed in customization mode.|  
|[CMFCOutlookBarPane::RemoveAllButtons](#cmfcoutlookbarpane__removeallbuttons)|Removes all the buttons from the Outlook bar pane. (Overrides [CMFCToolBar::RemoveAllButtons](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__removeallbuttons).)|  
  
## Remarks  
 For information about how to implement an Outlook bar, see [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 For an example of an Outlook bar, see the OutlookDemo sample project.  
  
## Example  
 The following example demonstrates how to use various methods of the `CMFCOutlookBarPane` class. The example shows how to create an Outlook bar pane, enable the page scroll mode, enable docking, and set the background color of the Outlook bar. This code snippet is part of the [Outlook Multi Views sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookMultiViews#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_1.h)]  
[!code-cpp[NVC_MFC_OutlookMultiViews#4](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)  
  
## Requirements  
 **Header:** afxoutlookbarpane.h  
  
##  <a name="cmfcoutlookbarpane__addbutton"></a>  CMFCOutlookBarPane::AddButton  
 Adds a button to the Outlook bar pane.  
  
```  
BOOL AddButton(
    UINT uiImage,  
    LPCTSTR lpszLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    UINT uiImage,  
    UINT uiLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    LPCTSTR szBmpFileName,  
    LPCTSTR szLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    HBITMAP hBmp,  
    LPCTSTR lpszLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    HICON hIcon,  
    LPCTSTR lpszLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1,  
    BOOL bAlphaBlend=FALSE);
```  
  
### Parameters  
 [in] `uiImage`  
 Specifies the resource identifier of a bitmap.  
  
 [in] `lpszLabel`  
 Specifies the button's text.  
  
 [in] `iIdCommand`  
 Specifies the button control's ID.  
  
 [in] `iInsertAt`  
 Specifies the zero-based index on the outlook bar's page at which to insert the button.  
  
 [in] `uiLabel`  
 A string resource ID.  
  
 [in] `szBmpFileName`  
 Specifies the name of the disk image file to load.  
  
 [in] `szLabel`  
 Specifies the button's text.  
  
 [in] `hBmp`  
 A handle to a button's bitmap.  
  
 [in] `hIcon`  
 A handle to a buttons' icon.  
  
### Return Value  
 `TRUE` if a button was added successfully; otherwise `FALSE`.  
  
### Remarks  
 Use this method to insert a new button into an Outlook bar's page. The button's image can be loaded either from the application resources or from a disk file.  
  
 If the page ID specified by `uiPageID` is -1, the button is inserted into the first page.  
  
 If the index specified by `iInsertAt` is -1, the button is added at the end of the page.  
  
##  <a name="cmfcoutlookbarpane__canbeattached"></a>  CMFCOutlookBarPane::CanBeAttached  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeAttached() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcoutlookbarpane__clearall"></a>  CMFCOutlookBarPane::ClearAll  
 Frees the resources used by the images on the Outlook bar pane.  
  
```  
void ClearAll();
```  
  
### Remarks  
 This method directly calls [CMFCToolBarImages::Clear](../../mfc/reference/cmfctoolbarimages-class.md#cmfctoolbarimages__clear), which is called on the images that are used by the Outlook bar pane.  
  
##  <a name="cmfcoutlookbarpane__create"></a>  CMFCOutlookBarPane::Create  
 Creates the Outlook bar pane.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,  
    UINT uiID=(UINT)-1,  
    DWORD dwControlBarStyle=0);
```  
  
### Parameters  
 [in] `pParentWnd`  
 Specifies the parent window of the Outlook bar pane control. Must not be `NULL`.  
  
 [in] `dwStyle`  
 The window style.  For a list of window styles, see [Window Styles](../../mfc/reference/window-styles.md).  
  
 [in] `uiID`  
 The control ID. Must be unique to enable saving of the control's state.  
  
 [in] `dwControlBarStyle`  
 Specifies special styles that define the behavior of the Outlook bar pane control when it is detached from the Outlook bar.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
 To construct a `CMFCOutlookBarPane` object, first call the constructor, and then call `Create`, which creates the Outlook bar pane control and attaches it to the `CMFCOutlookBarPane` object.  
  
 For more information about `dwControlBarStyle` see [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex).  
  
##  <a name="cmfcoutlookbarpane__enablecontextmenuitems"></a>  CMFCOutlookBarPane::EnableContextMenuItems  
 Specifies which shortcut menu items are displayed in customization mode.  
  
```  
virtual BOOL EnableContextMenuItems(
    CMFCToolBarButton* pButton,  
    CMenu* pPopup);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to a toolbar button that a user clicked.  
  
 [in] `pPopup`  
 A pointer to the shortcut menu.  
  
### Return Value  
 Returns `TRUE` if the shortcut menu should be displayed; otherwise `FALSE`.  
  
### Remarks  
 Override this method to modify the framework standard shortcut menu that the framework displays in customization mode.  
  
 The default implementation checks the customization mode ( [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__iscustomizemode)) and if it is set to `TRUE`, disables all the shortcut menu items except **Delete**. Then, it just passes the input parameters to `CMFCToolBar::EnableContextMenuItems`.  
  
> [!NOTE]
> *Context menu* is a synonym for shortcut menu.  
  
##  <a name="cmfcoutlookbarpane__enablepagescrollmode"></a>  CMFCOutlookBarPane::EnablePageScrollMode  
 Specifies whether the scroll arrows on the Outlook bar pane advance the list of buttons page by page, or button by button.  
  
```  
void EnablePageScrollMode(BOOL bPageScroll=TRUE);
```  
  
### Parameters  
 [in] `bPageScroll`  
 If `TRUE`, enable the page scroll mode. If `FALSE`, disable the page scroll mode.  
  
##  <a name="cmfcoutlookbarpane__getregularcolor"></a>  CMFCOutlookBarPane::GetRegularColor  
 Returns the regular (that is, non-selected) text color of the Outlook bar pane.  
  
```  
DECLARE_MESSAGE_MAPCOLORREF GetRegularColor() const;

 
```  
  
### Return Value  
 The current text color as an RGB color value.  
  
### Remarks  
 Use [CMFCOutlookBarPane::SetTextColor](#cmfcoutlookbarpane__settextcolor) to set the current (regular and selected) text color of the Outlook bar. You can obtain the default text color by calling the [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) function with the `COLOR_WINDOW` index.  
  
##  <a name="cmfcoutlookbarpane__isbackgroundtexture"></a>  CMFCOutlookBarPane::IsBackgroundTexture  
 Determines whether there is a background image loaded for the Outlook bar pane.  
  
```  
BOOL IsBackgroundTexture() const;

 
```  
  
### Return Value  
 `TRUE` if there is background image to display; otherwise `FALSE`.  
  
### Remarks  
 You can add a background image by calling [CMFCOutlookBarPane::SetBackImage](#cmfcoutlookbarpane__setbackimage) function.  
  
 If there is no background image, the background is painted with a color specified by using [CMFCOutlookBarPane::SetBackColor](#cmfcoutlookbarpane__setbackcolor).  
  
##  <a name="cmfcoutlookbarpane__isdrawshadedhighlight"></a>  CMFCOutlookBarPane::IsDrawShadedHighlight  
 Determines whether the button border is shaded when a button is highlighted and a background image is displayed.  
  
```  
BOOL IsDrawShadedHighlight() const;

 
```  
  
### Return Value  
 `TRUE` if button's borders are shaded; otherwise `FALSE`.  
  
##  <a name="cmfcoutlookbarpane__removeallbuttons"></a>  CMFCOutlookBarPane::RemoveAllButtons  
 Removes all the buttons from the Outlook bar pane.  
  
```  
virtual void RemoveAllButtons();
```  
  
##  <a name="cmfcoutlookbarpane__removebutton"></a>  CMFCOutlookBarPane::RemoveButton  
 Removes the button that has a specified command ID.  
  
```  
BOOL RemoveButton(UINT iIdCommand);
```  
  
### Parameters  
 [in] `iIdCommand`  
 Specifies the command ID of a button to remove.  
  
### Return Value  
 `TRUE` if the button was successfully removed; `FALSE` if the specified command ID is not valid.  
  
##  <a name="cmfcoutlookbarpane__setbackcolor"></a>  CMFCOutlookBarPane::SetBackColor  
 Sets the background color of the Outlook bar.  
  
```  
void SetBackColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 Specifies the new background color.  
  
### Remarks  
 Call this function to set the current background color for the Outlook bar. The background color is used only if there is no background image.  
  
##  <a name="cmfcoutlookbarpane__setbackimage"></a>  CMFCOutlookBarPane::SetBackImage  
 Sets the background image.  
  
```  
void SetBackImage(UINT uiImageID);
```  
  
### Parameters  
 [in] `uiImageID`  
 Specifies the image resource ID.  
  
### Remarks  
 Call this method to set the Outlook bar's background image. The list of background images is managed by the embedded [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) object.  
  
##  <a name="cmfcoutlookbarpane__setdefaultstate"></a>  CMFCOutlookBarPane::SetDefaultState  
 Resets the Outlook bar pane to the original set of buttons.  
  
```  
void SetDefaultState();
```  
  
### Remarks  
 This method restores the Outlook bar buttons to the original set. This method is like `CMFCOutlookBarPane::RestoreOriginalstate`, except that it does not trigger a redraw of the Outlook bar pane.  
  
##  <a name="cmfcoutlookbarpane__setextraspace"></a>  CMFCOutlookBarPane::SetExtraSpace  
 Sets the number of pixels of padding used around buttons in the Outlook bar pane.  
  
```  
void SetExtraSpace()  
```  
  
##  <a name="cmfcoutlookbarpane__settextcolor"></a>  CMFCOutlookBarPane::SetTextColor  
 Sets the colors of regular and highlighted text in the Outlook bar pane.  
  
```  
void SetTextColor(
    COLORREF clrRegText,  
    COLORREF clrSelText=0);
```  
  
### Parameters  
 [in] `clrRegText`  
 Specifies the new color for non-selected text.  
  
 [in] `clrSelText`  
 Specifies the new color for selected text.  
  
##  <a name="cmfcoutlookbarpane__settransparentcolor"></a>  CMFCOutlookBarPane::SetTransparentColor  
 Sets the transparent color for the Outlook bar pane.  
  
```  
void SetTransparentColor(COLORREF color);
```  
  
### Parameters  
 `color`  
 Specifies the new transparent color.  
  
### Remarks  
 The transparent color is required to display transparent images. Any occurrence of this color in an image is painted with the background color instead.  There is no blending of background and foreground images.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)
