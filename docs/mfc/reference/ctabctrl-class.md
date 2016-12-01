---
title: "CTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tab controls"
  - "CTabCtrl class, common controls"
  - "CTabCtrl class"
ms.assetid: 42e4aff6-46ae-4b2c-beaa-d1dce8d82138
caps.latest.revision: 21
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
# CTabCtrl Class
Provides the functionality of the Windows common tab control.  
  
## Syntax  
  
```  
class CTabCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CTabCtrl::CTabCtrl](#ctabctrl__ctabctrl)|Constructs a `CTabCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTabCtrl::AdjustRect](#ctabctrl__adjustrect)|Calculates a tab control's display area given a window rectangle, or calculates the window rectangle that would correspond to a given display area.|  
|[CTabCtrl::Create](#ctabctrl__create)|Creates a tab control and attaches it to an instance of a `CTabCtrl` object.|  
|[CTabCtrl::CreateEx](#ctabctrl__createex)|Creates a tab control with the specified Windows extended styles and attaches it to an instance of a `CTabCtrl` object.|  
|[CTabCtrl::DeleteAllItems](#ctabctrl__deleteallitems)|Removes all items from a tab control.|  
|[CTabCtrl::DeleteItem](#ctabctrl__deleteitem)|Removes an item from a tab control.|  
|[CTabCtrl::DeselectAll](#ctabctrl__deselectall)|Resets items in a tab control, clearing any that were pressed.|  
|[CTabCtrl::DrawItem](#ctabctrl__drawitem)|Draws a specified item of a tab control.|  
|[CTabCtrl::GetCurFocus](#ctabctrl__getcurfocus)|Retrieves the tab with the current focus of a tab control.|  
|[CTabCtrl::GetCurSel](#ctabctrl__getcursel)|Determines the currently selected tab in a tab control.|  
|[CTabCtrl::GetExtendedStyle](#ctabctrl__getextendedstyle)|Retrieves the extended styles that are currently in use for the tab control.|  
|[CTabCtrl::GetImageList](#ctabctrl__getimagelist)|Retrieves the image list associated with a tab control.|  
|[CTabCtrl::GetItem](#ctabctrl__getitem)|Retrieves information about a tab in a tab control.|  
|[CTabCtrl::GetItemCount](#ctabctrl__getitemcount)|Retrieves the number of tabs in the tab control.|  
|[CTabCtrl::GetItemRect](#ctabctrl__getitemrect)|Retrieves the bounding rectangle for a tab in a tab control.|  
|[CTabCtrl::GetItemState](#ctabctrl__getitemstate)|Retrieves the state of the indicated tab control item.|  
|[CTabCtrl::GetRowCount](#ctabctrl__getrowcount)|Retrieves the current number of rows of tabs in a tab control.|  
|[CTabCtrl::GetToolTips](#ctabctrl__gettooltips)|Retrieves the handle of the tool tip control associated with a tab control.|  
|[CTabCtrl::HighlightItem](#ctabctrl__highlightitem)|Sets the highlight state of a tab item.|  
|[CTabCtrl::HitTest](#ctabctrl__hittest)|Determines which tab, if any, is at a specified screen position.|  
|[CTabCtrl::InsertItem](#ctabctrl__insertitem)|Inserts a new tab in a tab control.|  
|[CTabCtrl::RemoveImage](#ctabctrl__removeimage)|Removes an image from a tab control's image list.|  
|[CTabCtrl::SetCurFocus](#ctabctrl__setcurfocus)|Sets the focus to a specified tab in a tab control.|  
|[CTabCtrl::SetCurSel](#ctabctrl__setcursel)|Selects a tab in a tab control.|  
|[CTabCtrl::SetExtendedStyle](#ctabctrl__setextendedstyle)|Sets the extended styles for a tab control.|  
|[CTabCtrl::SetImageList](#ctabctrl__setimagelist)|Assigns an image list to a tab control.|  
|[CTabCtrl::SetItem](#ctabctrl__setitem)|Sets some or all of a tab's attributes.|  
|[CTabCtrl::SetItemExtra](#ctabctrl__setitemextra)|Sets the number of bytes per tab reserved for application-defined data in a tab control.|  
|[CTabCtrl::SetItemSize](#ctabctrl__setitemsize)|Sets the width and height of an item.|  
|[CTabCtrl::SetItemState](#ctabctrl__setitemstate)|Sets the state of the indicated tab control item.|  
|[CTabCtrl::SetMinTabWidth](#ctabctrl__setmintabwidth)|Sets the minimum width of items in a tab control.|  
|[CTabCtrl::SetPadding](#ctabctrl__setpadding)|Sets the amount of space (padding) around each tab's icon and label in a tab control.|  
|[CTabCtrl::SetToolTips](#ctabctrl__settooltips)|Assigns a tool tip control to a tab control.|  
  
## Remarks  
 A "tab control" is analogous to the dividers in a notebook or the labels in a file cabinet. By using a tab control, an application can define multiple pages for the same area of a window or dialog box. Each page consists of a set of information or a group of controls that the application displays when the user selects the corresponding tab. A special type of tab control displays tabs that look like buttons. Clicking a button should immediately perform a command instead of displaying a page.  
  
 This control (and therefore the `CTabCtrl` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.  
  
 For more information on using `CTabCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CTabCtrl](../../mfc/using-ctabctrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CTabCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="ctabctrl__adjustrect"></a>  CTabCtrl::AdjustRect  
 Calculates a tab control's display area given a window rectangle, or calculates the window rectangle that would correspond to a given display area.  
  
```  
void AdjustRect(
    BOOL bLarger,   LPRECT lpRect);
```  
  
### Parameters  
 `bLarger`  
 Indicates which operation to perform. If this parameter is **TRUE**, `lpRect` specifies a display rectangle and receives the corresponding window rectangle. If this parameter is **FALSE**, `lpRect` specifies a window rectangle and receives the corresponding display rectangle.  
  
 `lpRect`  
 Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that specifies the given rectangle and receives the calculated rectangle.  
  
### Example  
 [!code-cpp[NVC_MFC_CTabCtrl#1](../../mfc/reference/codesnippet/cpp/ctabctrl-class_1.cpp)]  
  
##  <a name="ctabctrl__create"></a>  CTabCtrl::Create  
 Creates a tab control and attaches it to an instance of a `CTabCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the tab control's style. Apply any combination of [tab control styles](http://msdn.microsoft.com/library/windows/desktop/bb760549), described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. See **Remarks** for a list of window styles that you can also apply to the control.  
  
 `rect`  
 Specifies the tab control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
 `pParentWnd`  
 Specifies the tab control's parent window, usually a `CDialog`. It must not be **NULL**.  
  
 `nID`  
 Specifies the tab control's ID.  
  
### Return Value  
 **TRUE** if initialization of the object was successful; otherwise **FALSE**.  
  
### Remarks  
 You construct a `CTabCtrl` object in two steps. First, call the constructor, and then call **Create**, which creates the tab control and attaches it to the `CTabCtrl` object.  
  
 In addition to tab control styles, you can apply the following window styles to a tab control:  
  
- **WS_CHILD** Creates a child window that represents the tab control. Cannot be used with the `WS_POPUP` style.  
  
- **WS_VISIBLE** Creates a tab control that is initially visible.  
  
- **WS_DISABLED** Creates a window that is initially disabled.  
  
- **WS_GROUP** Specifies the first control of a group of controls in which the user can move from one control to the next with the arrow keys. All controls defined with the **WS_GROUP** style after the first control belong to the same group. The next control with the **WS_GROUP** style ends the style group and starts the next group (that is, one group ends where the next begins).  
  
- **WS_TABSTOP** Specifies one of any number of controls through which the user can move by using the TAB key. The TAB key moves the user to the next control specified by the **WS_TABSTOP** style.  
  
 To create a tab control with extended window styles, call [CTabCtrl::CreateEx](#ctabctrl__createex) instead of **Create**.  
  
### Example  
 [!code-cpp[NVC_MFC_CTabCtrl#2](../../mfc/reference/codesnippet/cpp/ctabctrl-class_2.cpp)]  
  
##  <a name="ctabctrl__createex"></a>  CTabCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CTabCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```  
  
### Parameters  
 `dwExStyle`  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the `dwExStyle` parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifies the tab control's style. Apply any combination of [tab control styles](http://msdn.microsoft.com/library/windows/desktop/bb760549), described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. See **Remarks** in [Create](#ctabctrl__create) for a list of window styles that you can also apply to the control.  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of `pParentWnd`.  
  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `nID`  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#ctabctrl__create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
 `CreateEx` creates the control with the extended Windows styles specified by `dwExStyle`. Set extended styles specific to a control using [SetExtendedStyle](#ctabctrl__setextendedstyle). For example, use `CreateEx` to set such styles as **WS_EX_CONTEXTHELP**, but use `SetExtendedStyle` to set such styles as **TCS_EX_FLATSEPARATORS**. For more information, see the styles described in [Tab Control Extended Styles](http://msdn.microsoft.com/library/windows/desktop/bb760546) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__ctabctrl"></a>  CTabCtrl::CTabCtrl  
 Constructs a `CTabCtrl` object.  
  
```  
CTabCtrl();
```  
  
##  <a name="ctabctrl__deleteallitems"></a>  CTabCtrl::DeleteAllItems  
 Removes all items from a tab control.  
  
```  
BOOL DeleteAllItems();
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="ctabctrl__deleteitem"></a>  CTabCtrl::DeleteItem  
 Removes the specified item from a tab control.  
  
```  
BOOL DeleteItem(int nItem);
```  
  
### Parameters  
 `nItem`  
 Zero-based value of the item to delete.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
 [!code-cpp[NVC_MFC_CTabCtrl#3](../../mfc/reference/codesnippet/cpp/ctabctrl-class_3.cpp)]  
  
##  <a name="ctabctrl__deselectall"></a>  CTabCtrl::DeselectAll  
 Resets items in a tab control, clearing any that were pressed.  
  
```  
void DeselectAll(BOOL fExcludeFocus);
```  
  
### Parameters  
 *fExcludeFocus*  
 Flag that specifies the scope of the item deselection. If this parameter is set to **FALSE**, all tab buttons will be reset. If it is set to **TRUE**, then all tab items except for the one currently selected will be reset.  
  
### Remarks  
 This member function implements the behavior of the Win32 message, [TCM_DESELECTALL](http://msdn.microsoft.com/library/windows/desktop/bb760579), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__drawitem"></a>  CTabCtrl::DrawItem  
 Called by the framework when a visual aspect of an owner-draw tab control changes.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### Parameters  
 `lpDrawItemStruct`  
 A pointer to a [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) structure describing the item to be painted.  
  
### Remarks  
 The **itemAction** member of the `DRAWITEMSTRUCT` structure defines the drawing action that is to be performed.  
  
 By default, this member function does nothing. Override this member function to implement drawing for an owner-draw `CTabCtrl` object.  
  
 The application should restore all graphics device interface (GDI) objects selected for the display context supplied in `lpDrawItemStruct` before this member function terminates.  
  
##  <a name="ctabctrl__getcurfocus"></a>  CTabCtrl::GetCurFocus  
 Retrieves the index of the tab with the current focus.  
  
```  
int GetCurFocus() const;

 
```  
  
### Return Value  
 The zero-based index of the tab with the current focus.  
  
##  <a name="ctabctrl__getcursel"></a>  CTabCtrl::GetCurSel  
 Retrieves the currently selected tab in a tab control.  
  
```  
int GetCurSel() const;

 
```  
  
### Return Value  
 Zero-based index of the selected tab if successful or – 1 if no tab is selected.  
  
##  <a name="ctabctrl__getextendedstyle"></a>  CTabCtrl::GetExtendedStyle  
 Retrieves the extended styles that are currently in use for the tab control.  
  
```  
DWORD GetExtendedStyle();
```  
  
### Return Value  
 Represents the extended styles currently in use for the tab control. This value is a combination of [tab control extended styles](http://msdn.microsoft.com/library/windows/desktop/bb760546), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TCM_GETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb760585), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__getimagelist"></a>  CTabCtrl::GetImageList  
 Retrieves the image list that's associated with a tab control.  
  
```  
CImageList* GetImageList() const;

 
```  
  
### Return Value  
 If successful, a pointer to the image list of the tab control; otherwise, **NULL**.  
  
##  <a name="ctabctrl__getitem"></a>  CTabCtrl::GetItem  
 Retrieves information about a tab in a tab control.  
  
```  
BOOL GetItem(
    int nItem,   TCITEM* pTabCtrlItem) const;

 
```  
  
### Parameters  
 `nItem`  
 Zero-based index of the tab.  
  
 `pTabCtrlItem`  
 Pointer to a [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure, used to specify the information to retrieve. Also used to receive information about the tab. This structure is used with the `InsertItem`, `GetItem`, and `SetItem` member functions.  
  
### Return Value  
 Returns **TRUE** if successful; **FALSE** otherwise.  
  
### Remarks  
 When the message is sent, the **mask** member specifies which attributes to return. If the **mask** member specifies the `TCIF_TEXT` value, the **pszText** member must contain the address of the buffer that receives the item text and the **cchTextMax** member must specify the size of the buffer.  
  
 **mask**  
 Value specifying which `TCITEM` structure members to retrieve or set. This member can be zero or a combination of the following values:  
  
- `TCIF_TEXT` The **pszText** member is valid.  
  
- `TCIF_IMAGE` The `iImage` member is valid.  
  
- `TCIF_PARAM` The **lParam** member is valid.  
  
- `TCIF_RTLREADING` The text of **pszText** is displayed using right-to-left reading order on Hebrew or Arabic systems.  
  
- `TCIF_STATE` The **dwState** member is valid.  
  
 **pszText**  
 Pointer to a null-terminated string containing the tab text if the structure contains information about a tab. If the structure is receiving information, this member specifies the address of the buffer that receives the tab text.  
  
 **cchTextMax**  
 Size of the buffer pointed to by **pszText**. This member is ignored if the structure is not receiving information.  
  
 `iImage`  
 Index into the tab control's image list, or – 1 if there is no image for the tab.  
  
 **lParam**  
 Application-defined data associated with the tab. If there are more than four bytes of application-defined data per tab, an application must define a structure and use it instead of the `TCITEM` structure. The first member of the application-defined structure must be a [TCITEMHEADER](http://msdn.microsoft.com/library/windows/desktop/bb760556)structure. The **TCITEMHEADER** structure is identical to the `TCITEM` structure, but without the **lParam** member. The difference between the size of your structure and the size of the **TCITEMHEADER** structure should equal the number of extra bytes per tab.  
  
### Example  
 [!code-cpp[NVC_MFC_CTabCtrl#4](../../mfc/reference/codesnippet/cpp/ctabctrl-class_4.cpp)]  
  
##  <a name="ctabctrl__getitemcount"></a>  CTabCtrl::GetItemCount  
 Retrieves the number of tabs in the tab control.  
  
```  
int GetItemCount() const;

 
```  
  
### Return Value  
 Number of items in the tab control.  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
##  <a name="ctabctrl__getitemrect"></a>  CTabCtrl::GetItemRect  
 Retrieves the bounding rectangle for the specified tab in a tab control.  
  
```  
BOOL GetItemRect(
    int nItem,   LPRECT lpRect) const;

 
```  
  
### Parameters  
 `nItem`  
 Zero-based index of the tab item.  
  
 `lpRect`  
 Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that receives the bounding rectangle of the tab. These coordinates use the viewport's current mapping mode.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
##  <a name="ctabctrl__getitemstate"></a>  CTabCtrl::GetItemState  
 Retrieves the state of the tab control item identified by `nItem`.  
  
```  
DWORD GetItemState(
    int nItem,  
    DWORD dwMask) const;

 
```  
  
### Parameters  
 `nItem`  
 The zero-based index number of the item for which to retrieve state information.  
  
 `dwMask`  
 Mask specifying which of the item's state flags to return. For a list of values, see the mask member of the [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 A reference to a `DWORD` value receiving the state information. Can be one of the following values:  
  
|Value|Description|  
|-----------|-----------------|  
|**TCIS_BUTTONPRESSED**|The tab control item is selected.|  
|**TCIS_HIGHLIGHTED**|The tab control item is highlighted, and the tab and text are drawn using the current highlight color. When using highlight color, this will be a true interpolation, not a dithered color.|  
  
### Remarks  
 An item's state is specified by the **dwState** member of the `TCITEM` structure.  
  
##  <a name="ctabctrl__getrowcount"></a>  CTabCtrl::GetRowCount  
 Retrieves the current number of rows in a tab control.  
  
```  
int GetRowCount() const;

 
```  
  
### Return Value  
 The number of rows of tabs in the tab control.  
  
### Remarks  
 Only tab controls that have the **TCS_MULTILINE** style can have multiple rows of tabs.  
  
##  <a name="ctabctrl__gettooltips"></a>  CTabCtrl::GetToolTips  
 Retrieves the handle of the tool tip control associated with a tab control.  
  
```  
CToolTipCtrl* GetToolTips() const;

 
```  
  
### Return Value  
 Handle of the tool tip control if successful; otherwise **NULL**.  
  
### Remarks  
 A tab control creates a tool tip control if it has the **TCS_TOOLTIPS** style. You can also assign a tool tip control to a tab control by using the `SetToolTips` member function.  
  
##  <a name="ctabctrl__highlightitem"></a>  CTabCtrl::HighlightItem  
 Sets the highlight state of a tab item.  
  
```  
BOOL HighlightItem(
    int idItem,   BOOL fHighlight = TRUE);
```  
  
### Parameters  
 `idItem`  
 Zero-based index of a tab control item.  
  
 `fHighlight`  
 Value specifying the highlight state to be set. If this value is **TRUE**, the tab is highlighted; if **FALSE**, the tab is set to its default state.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This member function implements the Win32 message [TCM_HIGHLIGHTITEM](http://msdn.microsoft.com/library/windows/desktop/bb760602), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__hittest"></a>  CTabCtrl::HitTest  
 Determines which tab, if any, is at the specified screen position.  
  
```  
int HitTest(TCHITTESTINFO* pHitTestInfo) const;

 
```  
  
### Parameters  
 `pHitTestInfo`  
 Pointer to a [TCHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb760553) structure, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)], which specifies the screen position to test.  
  
### Return Value  
 Returns the zero-based index of the tab or – 1 if no tab is at the specified position.  
  
##  <a name="ctabctrl__insertitem"></a>  CTabCtrl::InsertItem  
 Inserts a new tab in an existing tab control.  
  
```  
LONG InsertItem(
    int nItem,
    TCITEM* pTabCtrlItem);

 
LONG InsertItem(
    int nItem,
    LPCTSTR lpszItem);

 
LONG InsertItem(
    int nItem,
    LPCTSTR lpszItem,
    int nImage);

 
LONG InsertItem(
    UINT nMask,
    int nItem,
    LPCTSTR lpszItem,
    int nImage,
    LPARAM lParam);

 
LONG InsertItem(
    UINT nMask,  
    int nItem,  
    LPCTSTR lpszItem,  
    int nImage,  
    LPARAM lParam,  
    DWORD dwState,  
    DWORD dwStateMask);
```  
  
### Parameters  
 `nItem`  
 Zero-based index of the new tab.  
  
 `pTabCtrlItem`  
 Pointer to a [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure that specifies the attributes of the tab.  
  
 `lpszItem`  
 Address of a null-terminated string that contains the text of the tab.  
  
 `nImage`  
 The zero-based index of an image to insert from an image list.  
  
 `nMask`  
 Specifies which `TCITEM` structure attributes to set. Can be zero or a combination of the following values:  
  
- `TCIF_TEXT` The **pszText** member is valid.  
  
- `TCIF_IMAGE` The `iImage` member is valid.  
  
- `TCIF_PARAM` The **lParam** member is valid.  
  
- `TCIF_RTLREADING` The text of **pszText** is displayed using right-to-left reading order on Hebrew or Arabic systems.  
  
- `TCIF_STATE` The **dwState** member is valid.  
  
 `lParam`  
 Application-defined data associated with the tab.  
  
 `dwState`  
 Specifies values for the item's states. For more information, see [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *dwStateMask*  
 Specifies which states are to be set. For more information, see [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Zero-based index of the new tab if successful; otherwise – 1.  
  
### Example  
 [!code-cpp[NVC_MFC_CTabCtrl#5](../../mfc/reference/codesnippet/cpp/ctabctrl-class_5.cpp)]  
  
##  <a name="ctabctrl__removeimage"></a>  CTabCtrl::RemoveImage  
 Removes the specified image from a tab control's image list.  
  
```  
void RemoveImage(int nImage);
```  
  
### Parameters  
 `nImage`  
 Zero-based index of the image to remove.  
  
### Remarks  
 The tab control updates each tab's image index so that each tab remains associated with the same image.  
  
##  <a name="ctabctrl__setcurfocus"></a>  CTabCtrl::SetCurFocus  
 Sets the focus to a specified tab in a tab control.  
  
```  
void SetCurFocus(int nItem);
```  
  
### Parameters  
 `nItem`  
 Specifies the index of the tab that gets the focus.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TCM_SETCURFOCUS](http://msdn.microsoft.com/library/windows/desktop/bb760610), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__setcursel"></a>  CTabCtrl::SetCurSel  
 Selects a tab in a tab control.  
  
```  
int SetCurSel(int nItem);
```  
  
### Parameters  
 `nItem`  
 The zero-based index of the item to be selected.  
  
### Return Value  
 Zero-based index of the previously selected tab if successful, otherwise – 1.  
  
### Remarks  
 A tab control does not send a **TCN_SELCHANGING** or **TCN_SELCHANGE** notification message when a tab is selected using this function. These notifications are sent, using **WM_NOTIFY**, when the user clicks or uses the keyboard to change tabs.  
  
##  <a name="ctabctrl__setextendedstyle"></a>  CTabCtrl::SetExtendedStyle  
 Sets the extended styles for a tab control.  
  
```  
DWORD SetExtendedStyle(
    DWORD dwNewStyle,   DWORD dwExMask = 0);
```  
  
### Parameters  
 `dwNewStyle`  
 Value specifying a combination of tab control extended styles.  
  
 `dwExMask`  
 A `DWORD` value that indicates which styles in `dwNewStyle` are to be affected. Only the extended styles in `dwExMask` will be changed. All other styles will be maintained as is. If this parameter is zero, then all of the styles in `dwNewStyle` will be affected.  
  
### Return Value  
 A `DWORD` value that contains the previous [tab control extended styles](http://msdn.microsoft.com/library/windows/desktop/bb760546), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 This member function implements the behavior of the Win32 message [TCM_SETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb760627), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__setimagelist"></a>  CTabCtrl::SetImageList  
 Assigns an image list to a tab control.  
  
```  
CImageList* SetImageList(CImageList* pImageList);
```  
  
### Parameters  
 `pImageList`  
 Pointer to the image list to be assigned to the tab control.  
  
### Return Value  
 Returns a pointer to the previous image list or **NULL** if there is no previous image list.  
  
##  <a name="ctabctrl__setitem"></a>  CTabCtrl::SetItem  
 Sets some or all of a tab's attributes.  
  
```  
BOOL SetItem(
    int nItem,   TCITEM* pTabCtrlItem);
```  
  
### Parameters  
 `nItem`  
 Zero-based index of the item.  
  
 `pTabCtrlItem`  
 Pointer to a [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure that contains the new item attributes. The **mask** member specifies which attributes to set. If the **mask** member specifies the `TCIF_TEXT` value, the **pszText** member is the address of a null-terminated string and the **cchTextMax** member is ignored.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Example  
  See the example for [GetItem](#ctabctrl__getitem).  
  
##  <a name="ctabctrl__setitemextra"></a>  CTabCtrl::SetItemExtra  
 Sets the number of bytes per tab reserved for application-defined data in a tab control.  
  
```  
BOOL SetItemExtra(int nBytes);
```  
  
### Parameters  
 `nBytes`  
 The number of extra bytes to set.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TCM_SETITEMEXTRA](http://msdn.microsoft.com/library/windows/desktop/bb760633), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__setitemsize"></a>  CTabCtrl::SetItemSize  
 Sets the width and height of the tab control items.  
  
```  
CSize SetItemSize(CSize size);
```  
  
### Parameters  
 `size`  
 The new width and height, in pixels, of the tab control items.  
  
### Return Value  
 Returns the old width and height of the tab control items.  
  
##  <a name="ctabctrl__setitemstate"></a>  CTabCtrl::SetItemState  
 Sets the state of the tab control item identified by `nItem`.  
  
```  
BOOL SetItemState(
    int nItem,
    DWORD dwMask,
    DWORD dwState);
```  
  
### Parameters  
 `nItem`  
 The zero-based index number of the item for which to set state information.  
  
 `dwMask`  
 Mask specifying which of the item's state flags to set. For a list of values, see the mask member of the [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwState`  
 A reference to a `DWORD` value containing the state information. Can be one of the following values:  
  
|Value|Description|  
|-----------|-----------------|  
|**TCIS_BUTTONPRESSED**|The tab control item is selected.|  
|**TCIS_HIGHLIGHTED**|The tab control item is highlighted, and the tab and text are drawn using the current highlight color. When using highlight color, this will be a true interpolation, not a dithered color.|  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="ctabctrl__setmintabwidth"></a>  CTabCtrl::SetMinTabWidth  
 Sets the minimum width of items in a tab control.  
  
```  
int SetMinTabWidth(int cx);
```  
  
### Parameters  
 `cx`  
 Minimum width to be set for a tab control item. If this parameter is set to -1, the control will use the default tab width.  
  
### Return Value  
 The previous minimum tab width.  
  
### Return Value  
 This member function implements the behavior of the Win32 message [TCM_SETMINTABWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760637), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ctabctrl__setpadding"></a>  CTabCtrl::SetPadding  
 Sets the amount of space (padding) around each tab's icon and label in a tab control.  
  
```  
void SetPadding(CSize size);
```  
  
### Parameters  
 `size`  
 Sets the amount of space (padding) around each tab's icon and label in a tab control.  
  
##  <a name="ctabctrl__settooltips"></a>  CTabCtrl::SetToolTips  
 Assigns a tool tip control to a tab control.  
  
```  
void SetToolTips(CToolTipCtrl* pWndTip);
```  
  
### Parameters  
 `pWndTip`  
 Handle of the tool tip control.  
  
### Remarks  
 You can get the tool tip control associated with a tab control by making a call to `GetToolTips`.  
  
### Example  
  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__gettabcontrol).  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CHeaderCtrl Class](../../mfc/reference/cheaderctrl-class.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)
