---
title: "CListCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CListCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListCtrl class"
  - "LVS_REPORT"
  - "LVS_LIST"
  - "LVS_ICON"
  - "list view controls"
  - "list view controls, CListCtrl class"
  - "Windows common controls [C++], CListCtrl"
  - "LVS_SMALLICON"
ms.assetid: fe08a1ca-4b05-4ff7-a12a-ee4c765a2197
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
# CListCtrl Class
Encapsulates the functionality of a "list view control," which displays a collection of items each consisting of an icon (from an image list) and a label.  
  
## Syntax  
  
```  
class CListCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CListCtrl::CListCtrl](#clistctrl__clistctrl)|Constructs a `CListCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CListCtrl::ApproximateViewRect](#clistctrl__approximateviewrect)|Determines the width and height required to display the items of a list view control.|  
|[CListCtrl::Arrange](#clistctrl__arrange)|Aligns items on a grid.|  
|[CListCtrl::CancelEditLabel](#clistctrl__canceleditlabel)|Cancels item text editing operation.|  
|[CListCtrl::Create](#clistctrl__create)|Creates a list control and attaches it to a `CListCtrl` object.|  
|[CListCtrl::CreateDragImage](#clistctrl__createdragimage)|Creates a drag image list for a specified item.|  
|[CListCtrl::CreateEx](#clistctrl__createex)|Creates a list control with the specified Windows extended styles and attaches it to a `CListCtrl` object.|  
|[CListCtrl::DeleteAllItems](#clistctrl__deleteallitems)|Deletes all items from the control.|  
|[CListCtrl::DeleteColumn](#clistctrl__deletecolumn)|Deletes a column from the list view control.|  
|[CListCtrl::DeleteItem](#clistctrl__deleteitem)|Deletes an item from the control.|  
|[CListCtrl::DrawItem](#clistctrl__drawitem)|Called when a visual aspect of an owner-draw control changes.|  
|[CListCtrl::EditLabel](#clistctrl__editlabel)|Begins in-place editing of an item's text.|  
|[CListCtrl::EnableGroupView](#clistctrl__enablegroupview)|Enables or disables whether the items in a list view control display as a group.|  
|[CListCtrl::EnsureVisible](#clistctrl__ensurevisible)|Ensures that an item is visible.|  
|[CListCtrl::FindItem](#clistctrl__finditem)|Searches for a list view item having specified characteristics.|  
|[CListCtrl::GetBkColor](#clistctrl__getbkcolor)|Retrieves the background color of a list view control.|  
|[CListCtrl::GetBkImage](#clistctrl__getbkimage)|Retrieves the current background image of a list view control.|  
|[CListCtrl::GetCallbackMask](#clistctrl__getcallbackmask)|Retrieves the callback mask for a list view control.|  
|[CListCtrl::GetCheck](#clistctrl__getcheck)|Retrieves the current display status of the state image associated with an item.|  
|[CListCtrl::GetColumn](#clistctrl__getcolumn)|Retrieves the attributes of a control's column.|  
|[CListCtrl::GetColumnOrderArray](#clistctrl__getcolumnorderarray)|Retrieves the column order (left to right) of a list view control.|  
|[CListCtrl::GetColumnWidth](#clistctrl__getcolumnwidth)|Retrieves the width of a column in report view or list view.|  
|[CListCtrl::GetCountPerPage](#clistctrl__getcountperpage)|Calculates the number of items that can fit vertically in a list view control.|  
|[CListCtrl::GetEditControl](#clistctrl__geteditcontrol)|Retrieves the handle of the edit control used to edit an item's text.|  
|[CListCtrl::GetEmptyText](#clistctrl__getemptytext)|Retrieves the string to display if the current list-view control is empty.|  
|[CListCtrl::GetExtendedStyle](#clistctrl__getextendedstyle)|Retrieves the current extended styles of a list view control.|  
|[CListCtrl::GetFirstSelectedItemPosition](#clistctrl__getfirstselecteditemposition)|Retrieves the position of the first selected list view item in a list view control.|  
|[CListCtrl::GetFocusedGroup](#clistctrl__getfocusedgroup)|Retrieves the group that has the keyboard focus in the current list-view control.|  
|[CListCtrl::GetGroupCount](#clistctrl__getgroupcount)|Retrieves the number of groups in the current list-view control.|  
|[CListCtrl::GetGroupInfo](#clistctrl__getgroupinfo)|Gets the information for a specified group of the list view control.|  
|[CListCtrl::GetGroupInfoByIndex](#clistctrl__getgroupinfobyindex)|Retrieves information about a specified group in the current list-view control.|  
|[CListCtrl::GetGroupMetrics](#clistctrl__getgroupmetrics)|Retrieves the metrics of a group.|  
|[CListCtrl::GetGroupRect](#clistctrl__getgrouprect)|Retrieves the bounding rectangle for a specified group in the current list-view control.|  
|[CListCtrl::GetGroupState](#clistctrl__getgroupstate)|Retrieves the state for a specified group in the current list-view control.|  
|[CListCtrl::GetHeaderCtrl](#clistctrl__getheaderctrl)|Retrieves the header control of a list view control.|  
|[CListCtrl::GetHotCursor](#clistctrl__gethotcursor)|Retrieves the cursor used when hot tracking is enabled for a list view control.|  
|[CListCtrl::GetHotItem](#clistctrl__gethotitem)|Retrieves the list view item currently under the cursor.|  
|[CListCtrl::GetHoverTime](#clistctrl__gethovertime)|Retrieves the current hover time of a list view control.|  
|[CListCtrl::GetImageList](#clistctrl__getimagelist)|Retrieves the handle of an image list used for drawing list view items.|  
|[CListCtrl::GetInsertMark](#clistctrl__getinsertmark)|Retrieves the current position of the insertion mark.|  
|[CListCtrl::GetInsertMarkColor](#clistctrl__getinsertmarkcolor)|Retrieves the current color of the insertion mark.|  
|[CListCtrl::GetInsertMarkRect](#clistctrl__getinsertmarkrect)|Retrieves the rectangle that bounds the insertion point.|  
|[CListCtrl::GetItem](#clistctrl__getitem)|Retrieves a list view item's attributes.|  
|[CListCtrl::GetItemCount](#clistctrl__getitemcount)|Retrieves the number of items in a list view control.|  
|[CListCtrl::GetItemData](#clistctrl__getitemdata)|Retrieves the application-specific value associated with an item.|  
|[CListCtrl::GetItemIndexRect](#clistctrl__getitemindexrect)|Retrieves the bounding rectangle for all or part of a subitem in the current list-view control.|  
|[CListCtrl::GetItemPosition](#clistctrl__getitemposition)|Retrieves the position of a list view item.|  
|[CListCtrl::GetItemRect](#clistctrl__getitemrect)|Retrieves the bounding rectangle for an item.|  
|[CListCtrl::GetItemSpacing](#clistctrl__getitemspacing)|Calculates the spacing between items in the current list-view control.|  
|[CListCtrl::GetItemState](#clistctrl__getitemstate)|Retrieves the state of a list view item.|  
|[CListCtrl::GetItemText](#clistctrl__getitemtext)|Retrieves the text of a list view item or subitem.|  
|[CListCtrl::GetNextItem](#clistctrl__getnextitem)|Searches for a list view item with specified properties and with specified relationship to a given item.|  
|[CListCtrl::GetNextItemIndex](#clistctrl__getnextitemindex)|Retrieves the index of the item in the current list-view control that has a specified set of properties.|  
|[CListCtrl::GetNextSelectedItem](#clistctrl__getnextselecteditem)|Retrieves the index of a list view item position, and the position of the next selected list view item for iterating.|  
|[CListCtrl::GetNumberOfWorkAreas](#clistctrl__getnumberofworkareas)|Retrieves the current number of working areas for a list view control.|  
|[CListCtrl::GetOrigin](#clistctrl__getorigin)|Retrieves the current view origin for a list view control.|  
|[CListCtrl::GetOutlineColor](#clistctrl__getoutlinecolor)|Retrieves the color of the border of a list view control.|  
|[CListCtrl::GetSelectedColumn](#clistctrl__getselectedcolumn)|Retrieves the index of the currently selected column in the list control.|  
|[CListCtrl::GetSelectedCount](#clistctrl__getselectedcount)|Retrieves the number of selected items in the list view control.|  
|[CListCtrl::GetSelectionMark](#clistctrl__getselectionmark)|Retrieves the selection mark of a list view control.|  
|[CListCtrl::GetStringWidth](#clistctrl__getstringwidth)|Determines the minimum column width necessary to display all of a given string.|  
|[CListCtrl::GetSubItemRect](#clistctrl__getsubitemrect)|Retrieves the bounding rectangle of an item in a list view control.|  
|[CListCtrl::GetTextBkColor](#clistctrl__gettextbkcolor)|Retrieves the text background color of a list view control.|  
|[CListCtrl::GetTextColor](#clistctrl__gettextcolor)|Retrieves the text color of a list view control.|  
|[CListCtrl::GetTileInfo](#clistctrl__gettileinfo)|Retrieves information about a tile in a list view control.|  
|[CListCtrl::GetTileViewInfo](#clistctrl__gettileviewinfo)|Retrieves information about a list view control in tile view.|  
|[CListCtrl::GetToolTips](#clistctrl__gettooltips)|Retrieves the tooltip control that the list view control uses to display tooltips.|  
|[CListCtrl::GetTopIndex](#clistctrl__gettopindex)|Retrieves the index of the topmost visible item.|  
|[CListCtrl::GetView](#clistctrl__getview)|Gets the view of the list view control.|  
|[CListCtrl::GetViewRect](#clistctrl__getviewrect)|Retrieves the bounding rectangle of all items in the list view control.|  
|[CListCtrl::GetWorkAreas](#clistctrl__getworkareas)|Retrieves the current working areas of a list view control.|  
|[CListCtrl::HasGroup](#clistctrl__hasgroup)|Determines if the list view control has the specified group.|  
|[CListCtrl::HitTest](#clistctrl__hittest)|Determines which list view item is at a specified position.|  
|[CListCtrl::InsertColumn](#clistctrl__insertcolumn)|Inserts a new column in a list view control.|  
|[CListCtrl::InsertGroup](#clistctrl__insertgroup)|Inserts a group into the list view control.|  
|[CListCtrl::InsertGroupSorted](#clistctrl__insertgroupsorted)|Inserts the specified group into an ordered list of groups.|  
|[CListCtrl::InsertItem](#clistctrl__insertitem)|Inserts a new item in a list view control.|  
|[CListCtrl::InsertMarkHitTest](#clistctrl__insertmarkhittest)|Retrieves the insertion point closest to a specified point.|  
|[CListCtrl::IsGroupViewEnabled](#clistctrl__isgroupviewenabled)|Determines whether group view is enabled for a list view control.|  
|[CListCtrl::IsItemVisible](#clistctrl__isitemvisible)|Indicates whether a specified item in the current list-view control is visible.|  
|[CListCtrl::MapIDToIndex](#clistctrl__mapidtoindex)|Maps the unique ID of an item in the current list-view control to an index.|  
|[CListCtrl::MapIndexToID](#clistctrl__mapindextoid)|Maps the index of an item in the current list-view control to a unique ID.|  
|[CListCtrl::MoveGroup](#clistctrl__movegroup)|Moves the specified group.|  
|[CListCtrl::MoveItemToGroup](#clistctrl__moveitemtogroup)|Moves the specified group to the specified zero based index of the list view control.|  
|[CListCtrl::RedrawItems](#clistctrl__redrawitems)|Forces a list view control to repaint a range of items.|  
|[CListCtrl::RemoveAllGroups](#clistctrl__removeallgroups)|Removes all groups from a list view control.|  
|[CListCtrl::RemoveGroup](#clistctrl__removegroup)|Removes the specified group from the list view control.|  
|[CListCtrl::Scroll](#clistctrl__scroll)|Scrolls the content of a list view control.|  
|[CListCtrl::SetBkColor](#clistctrl__setbkcolor)|Sets the background color of the list view control.|  
|[CListCtrl::SetBkImage](#clistctrl__setbkimage)|Sets the current background image of a list view control.|  
|[CListCtrl::SetCallbackMask](#clistctrl__setcallbackmask)|Sets the callback mask for a list view control.|  
|[CListCtrl::SetCheck](#clistctrl__setcheck)|Sets the current display status of the state image associated with an item.|  
|[CListCtrl::SetColumn](#clistctrl__setcolumn)|Sets the attributes of a list view column.|  
|[CListCtrl::SetColumnOrderArray](#clistctrl__setcolumnorderarray)|Sets the column order (left to right) of a list view control.|  
|[CListCtrl::SetColumnWidth](#clistctrl__setcolumnwidth)|Changes the width of a column in report view or list view.|  
|[CListCtrl::SetExtendedStyle](#clistctrl__setextendedstyle)|Sets the current extended styles of a list view control.|  
|[CListCtrl::SetGroupInfo](#clistctrl__setgroupinfo)|Sets the information for the specified group of a list view control.|  
|[CListCtrl::SetGroupMetrics](#clistctrl__setgroupmetrics)|Sets the group metrics of a list view control.|  
|[CListCtrl::SetHotCursor](#clistctrl__sethotcursor)|Sets the cursor used when hot tracking is enabled for a list view control.|  
|[CListCtrl::SetHotItem](#clistctrl__sethotitem)|Sets the current hot item of a list view control.|  
|[CListCtrl::SetHoverTime](#clistctrl__sethovertime)|Sets the current hover time of a list view control.|  
|[CListCtrl::SetIconSpacing](#clistctrl__seticonspacing)|Sets the spacing between icons in a list view control.|  
|[CListCtrl::SetImageList](#clistctrl__setimagelist)|Assigns an image list to a list view control.|  
|[CListCtrl::SetInfoTip](#clistctrl__setinfotip)|Sets the tooltip text.|  
|[CListCtrl::SetInsertMark](#clistctrl__setinsertmark)|Sets the insertion point to the defined position.|  
|[CListCtrl::SetInsertMarkColor](#clistctrl__setinsertmarkcolor)|Sets the color of the insertion point.|  
|[CListCtrl::SetItem](#clistctrl__setitem)|Sets some or all of a list view item's attributes.|  
|[CListCtrl::SetItemCount](#clistctrl__setitemcount)|Prepares a list view control for adding a large number of items.|  
|[CListCtrl::SetItemCountEx](#clistctrl__setitemcountex)|Sets the item count for a virtual list view control.|  
|[CListCtrl::SetItemData](#clistctrl__setitemdata)|Sets the item's application-specific value.|  
|[CListCtrl::SetItemIndexState](#clistctrl__setitemindexstate)|Sets the state of an item in the current list-view control.|  
|[CListCtrl::SetItemPosition](#clistctrl__setitemposition)|Moves an item to a specified position in a list view control.|  
|[CListCtrl::SetItemState](#clistctrl__setitemstate)|Changes the state of an item in a list view control.|  
|[CListCtrl::SetItemText](#clistctrl__setitemtext)|Changes the text of a list view item or subitem.|  
|[CListCtrl::SetOutlineColor](#clistctrl__setoutlinecolor)|Sets the color of the border of a list view control.|  
|[CListCtrl::SetSelectedColumn](#clistctrl__setselectedcolumn)|Sets the selected column of the list view control.|  
|[CListCtrl::SetSelectionMark](#clistctrl__setselectionmark)|Sets the selection mark of a list view control.|  
|[CListCtrl::SetTextBkColor](#clistctrl__settextbkcolor)|Sets the background color of text in a list view control.|  
|[CListCtrl::SetTextColor](#clistctrl__settextcolor)|Sets the text color of a list view control.|  
|[CListCtrl::SetTileInfo](#clistctrl__settileinfo)|Sets the information for a tile of the list view control.|  
|[CListCtrl::SetTileViewInfo](#clistctrl__settileviewinfo)|Sets information that a list view control uses in tile view.|  
|[CListCtrl::SetToolTips](#clistctrl__settooltips)|Sets the tooltip control that the list view control will use to display tooltips.|  
|[CListCtrl::SetView](#clistctrl__setview)|Sets the view of the list view control.|  
|[CListCtrl::SetWorkAreas](#clistctrl__setworkareas)|Sets the area where icons can be displayed in a list view control.|  
|[CListCtrl::SortGroups](#clistctrl__sortgroups)|Sorts the groups of a list view control with a user-defined function.|  
|[CListCtrl::SortItems](#clistctrl__sortitems)|Sorts list view items using an application-defined comparison function.|  
|[CListCtrl::SortItemsEx](#clistctrl__sortitemsex)|Sorts list view items using an application-defined comparison function.|  
|[CListCtrl::SubItemHitTest](#clistctrl__subitemhittest)|Determines which list view item, if any, is at a given position.|  
|[CListCtrl::Update](#clistctrl__update)|Forces the control to repaint a specified item.|  
  
## Remarks  
 In addition to an icon and label, each item can have information displayed in columns to the right of the icon and label. This control (and therefore the `CListCtrl` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.  
  
 The following is a brief overview of the `CListCtrl` class. For a detailed, conceptual discussion, see [Using CListCtrl](../../mfc/using-clistctrl.md) and [Controls](../../mfc/controls-mfc.md).  
  
## Views  
 List view controls can display their contents in four different ways, called "views."  
  
-   Icon view  
  
     Each item appears as a full-sized icon (32 x 32 pixels) with a label below it. The user can drag the items to any location in the list view window.  
  
-   Small icon view  
  
     Each item appears as a small icon (16 x 16 pixels) with the label to the right of it. The user can drag the items to any location in the list view window.  
  
-   List view  
  
     Each item appears as a small icon with a label to the right of it. Items are arranged in columns and cannot be dragged to any location in the list view window.  
  
-   Report view  
  
     Each item appears on its own line, with additional information arranged in columns to the right. The leftmost column contains the small icon and label, and subsequent columns contain subitems as specified by the application. An embedded header control (class [CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)) implements these columns. For more information on the header control and columns in a report view, see [Using CListCtrl: Adding Columns to the Control (Report View)](../../mfc/adding-columns-to-the-control-report-view.md).  
  
 Also see:  
  
-   Knowledge Base article Q250614: HOWTO: Sort Items in a CListCtrl in Report View  
  
-   Knowledge Base article Q200054: PRB: OnTimer() Is Not Called Repeatedly for a List Control  
  
 The style of the control's current list view determines the current view. For more information on these styles and their usage, see [Using CListCtrl: Changing List Control Styles](../../mfc/changing-list-control-styles.md).  
  
## Extended Styles  
 In addition to the standard list styles, class `CListCtrl` supports a large set of extended styles, providing enriched functionality. Some examples of this functionality include:  
  
-   Hover selection  
  
     When enabled, allows automatic selection of an item when the cursor remains over the item for a certain period of time.  
  
-   Virtual list views  
  
     When enabled, allows the control to support up to `DWORD` items. This is possible by placing the overhead of managing item data on the application. Except for the item selection and focus information, all item information must be managed by the application. For more information, see [Using CListCtrl: Virtual List Controls](../../mfc/virtual-list-controls.md).  
  
-   One– and two– click activation  
  
     When enabled, allows hot tracking (automatic highlighting of the item text) and one– or two– click activation of the highlighted item.  
  
-   Drag and drop column ordering  
  
     When enabled, allows drag-and-drop reordering of columns in a list view control. Only available in report view.  
  
 For information on using these new extended styles, see [Using CListCtrl: Changing List Control Styles](../../mfc/changing-list-control-styles.md).  
  
## Items and Subitems  
 Each item in a list view control consists of an icon (from an image list), a label, a current state, and an application-defined value (referred to as "item data"). One or more subitems can also be associated with each item. A "subitem" is a string that, in report view, can be displayed in a column to the right of an item's icon and label. All items in a list view control must have the same number of subitems.  
  
 Class **CListCtrl** provides several functions for inserting, deleting, finding, and modifying these items. For more information, see [CListCtrl::GetItem](#clistctrl__getitem), [CListCtrl::InsertItem](#clistctrl__insertitem), and [CListCtrl::FindItem](#clistctrl__finditem), [Adding Items to the Control](../adding-items-to-the-control.md), and [Scrolling, Arranging, Sorting, and Finding in list controls](../scrolling-arranging-sorting-and-finding-in-list-controls.md).  
  
 By default, the list view control is responsible for storing an item's icon and text attributes. However, in addition to these item types, class `CListCtrl` supports "callback items." A "callback item" is a list view item for which the application — rather than the control — stores the text, icon, or both. A callback mask is used to specify which item attributes (text and/or icon) are supplied by the application. If an application uses callback items, it must be able to supply the text and/or icon attributes on demand. Callback items are helpful when your application already maintains some of this information. For more information, see [Using CListCtrl: Callback Items and the Callback Mask](../callback-items-and-the-callback-mask.md).  
  
## Image Lists  
 The icons, header item images, and application– defined states for list view items are contained in several image lists (implemented by class [CImageList](cimagelist-class.md)), which you create and assign to the list view control. Each list view control can have up to four different types of image lists:  
  
-   Large icon  
  
     Used in the icon view for full-sized icons.  
  
-   Small icon  
  
     Used in the small icon, list, and report views for smaller versions of the icons used in the icon view.  
  
-   Application-defined state  
  
     Contains state images, which are displayed next to an item's icon to indicate an application-defined state.  
  
-   Header item  
  
     Used in the report view for small images that appear in each header control item.  
  
 By default, a list view control destroys the image lists assigned to it when it is destroyed; however, the developer can customize this behavior by destroying each image list when it is no longer used, as determined by the application. For more information, see [Using CListCtrl: List Items and Image Lists](../list-items-and-image-lists.md).  
  
## Inheritance Hierarchy  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 `CListCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="clistctrl__approximateviewrect"></a>  CListCtrl::ApproximateViewRect  
 Determines the width and height required to display the items of a list view control.  
  
```  
CSize ApproximateViewRect(
    CSize sz = CSize(-1,  
 -1),  
    int iCount = -1) const;

 
```  
  
### Parameters  
 `sz`  
 The proposed dimensions of the control, in pixels. If dimensions are not specified, the framework uses the current width or height values of the control.  
  
 `iCount`  
 Number of items to be displayed in the control. If this parameter is -1, the framework uses the total number of items currently in the control.  
  
### Return Value  
 A `CSize` object that contains the approximate width and height needed to display the items, in pixels.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_ApproximateViewRect](http://msdn.microsoft.com/library/windows/desktop/bb761231), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__arrange"></a>  CListCtrl::Arrange  
 Repositions items in an icon view so that they align on a grid.  
  
```  
BOOL Arrange(UINT nCode);
```  
  
### Parameters  
 `nCode`  
 Specifies the alignment style for the items. It can be one of the following values:  
  
- `LVA_ALIGNLEFT` Aligns items along the left edge of the window.  
  
- `LVA_ALIGNTOP` Aligns items along the top edge of the window.  
  
- `LVA_DEFAULT` Aligns items according to the list view's current alignment styles (the default value).  
  
- `LVA_SNAPTOGRID` Snaps all icons to the nearest grid position.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The `nCode` parameter specifies the alignment style.  
  
### Example  

   

```cpp
	// Align all of the list view control items along the top
	// of the window (the list view control must be in icon or
	// small icon mode).
	m_myListCtrl.Arrange(LVA_ALIGNTOP);
```

  
##  <a name="clistctrl__canceleditlabel"></a>  CListCtrl::CancelEditLabel  
 Cancels item text editing operation.  
  
```  
void CancelEditLabel();
```  
  
### Remarks  
 This member function emulates the functionality of the [LVM_CANCELEDITLABEL](http://msdn.microsoft.com/library/windows/desktop/bb774886) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__clistctrl"></a>  CListCtrl::CListCtrl  
 Constructs a `CListCtrl` object.  
  
```  
CListCtrl();
```  
  
##  <a name="clistctrl__create"></a>  CListCtrl::Create  
 Creates a list control and attaches it to a `CListCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the list control's style. Apply any combination of list control styles to the control. See [List view window styles](http://msdn.microsoft.com/library/windows/desktop/bb774739) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)] for a complete list of these styles. Set extended styles specific to a control using [SetExtendedStyle](#clistctrl__setextendedstyle).  
  
 `rect`  
 Specifies the list control's size and position. It can be either a `CRect` object or a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
 `pParentWnd`  
 Specifies the list control's parent window, usually a `CDialog`. It must not be **NULL**.  
  
 `nID`  
 Specifies the list control's ID.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 You construct a `CListCtrl` in two steps. First, call the constructor and then call **Create**, which creates the list view control and attaches it to the `CListCtrl` object.  
  
 To apply extended Windows styles to the list control object, call [CreateEx](#clistctrl__createex) instead of **Create**.  
  
### Example  

```cpp
	m_myListCtrl.Create(
		WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT|LVS_EDITLABELS,
		CRect(10,10,400,200), pParentWnd, IDD_MYLISTCTRL);   
```

  
##  <a name="clistctrl__createex"></a>  CListCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CListCtrl` object.  
  
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
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the `dwExStyle` parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifies the list control's style. Apply any combination of list control styles to the control. For a complete list of these styles, see [List view window styles](http://msdn.microsoft.com/library/windows/desktop/bb774739) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of `pParentWnd`.  
  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `nID`  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#clistctrl__create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
 `CreateEx` creates the control with the extended Windows styles specified by `dwExStyle`. To set extended styles specific to a control, call [SetExtendedStyle](#clistctrl__setextendedstyle). For example, use `CreateEx` to set such styles as **WS_EX_CONTEXTHELP**, but use `SetExtendedStyle` to set such styles as **LVS_EX_FULLROWSELECT**. For more information, see the styles described in the topic [Extended List View Styles](http://msdn.microsoft.com/library/windows/desktop/bb774732) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__createdragimage"></a>  CListCtrl::CreateDragImage  
 Creates a drag image list for the item specified by `nItem`.  
  
```  
CImageList* CreateDragImage(
    int nItem,  
    LPPOINT lpPoint);
```  
  
### Parameters  
 `nItem`  
 Index of the item whose drag image list is to be created.  
  
 `lpPoint`  
 Address of a [POINT](http://msdn.microsoft.com/library/windows/desktop/dd162805) structure that receives the initial location of the upper-left corner of the image, in view coordinates.  
  
### Return Value  
 A pointer to the drag image list if successful; otherwise **NULL**.  
  
### Remarks  
 The `CImageList` object is permanent, and you must delete it when finished. For example:  
  

```cpp
		CImageList* pImageList = m_myListCtrl.CreateDragImage(nItem, &point);

		// do something

		delete pImageList;
```

  
##  <a name="clistctrl__deleteallitems"></a>  CListCtrl::DeleteAllItems  
 Deletes all items from the list view control.  
  
```  
BOOL DeleteAllItems();
```  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

```cpp
	// Delete all of the items from the list view control.
	m_myListCtrl.DeleteAllItems();
	ASSERT(m_myListCtrl.GetItemCount() == 0);
```

  
##  <a name="clistctrl__deletecolumn"></a>  CListCtrl::DeleteColumn  
 Deletes a column from the list view control.  
  
```  
BOOL DeleteColumn(int nCol);
```  
  
### Parameters  
 `nCol`  
 Index of the column to be deleted.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

```cpp
		int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

		// Delete all of the columns.
		for (int i=0; i < nColumnCount; i++)
		{
			m_myListCtrl.DeleteColumn(0);
		}
```

  
##  <a name="clistctrl__deleteitem"></a>  CListCtrl::DeleteItem  
 Deletes an item from a list view control.  
  
```  
BOOL DeleteItem(int nItem);
```  
  
### Parameters  
 `nItem`  
 Specifies the index of the item to be deleted.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
```cpp
		int nCount = m_myListCtrl.GetItemCount();

		// Delete all of the items from the list view control.
		for (int i=0; i < nCount; i++)
		{
			m_myListCtrl.DeleteItem(0);
		}
```

  
##  <a name="clistctrl__drawitem"></a>  CListCtrl::DrawItem  
 Called by the framework when a visual aspect of an owner-draw list view control changes.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### Parameters  
 `lpDrawItemStruct`  
 A long pointer to a `DRAWITEMSTRUCT` structure that contains information about the type of drawing required.  
  
### Remarks  
 The **itemAction** member of the [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) structure defines the drawing action that is to be performed.  
  
 By default, this member function does nothing. Override this member function to implement drawing for an owner-draw `CListCtrl` object.  
  
 The application should restore all graphics device interface (GDI) objects selected for the display context supplied in `lpDrawItemStruct` before this member function terminates.  
  
##  <a name="clistctrl__editlabel"></a>  CListCtrl::EditLabel  
 Begins in-place editing of an item's text.  
  
```  
CEdit* EditLabel(int nItem);
```  
  
### Parameters  
 `nItem`  
 Index of the list view item that is to be edited.  
  
### Return Value  
 If successful, a pointer to the `CEdit` object that is used to edit the item text; otherwise **NULL**.  
  
### Remarks  
 A list view control that has the `LVS_EDITLABELS` window style enables a user to edit item labels in place. The user begins editing by clicking the label of an item that has the focus.  
  
 Use this function to begin in-place editing of the specified list view item's text.  
  
### Example  
```cpp
		// Make sure the focus is set to the list view control.
		m_myListCtrl.SetFocus();

		// Show the edit control on the label of the first
		// item in the list view control.
		CEdit* pmyEdit = m_myListCtrl.EditLabel(1);
		ASSERT(pmyEdit != NULL);
```

  
##  <a name="clistctrl__enablegroupview"></a>  CListCtrl::EnableGroupView  
 Enables or disables whether the items in a list view control display as a group.  
  
```  
LRESULT EnableGroupView(BOOL fEnable);
```  
  
### Parameters  
 `fEnable`  
 Indicates whether to enable a listview control to group displayed items. **TRUE** to enable grouping; **FALSE** to disable it.  
  
### Return Value  
 Returns one of the following values:  
  
- **0** The ability to display list view items as a group is already enabled or disabled.  
  
- **1** The state of the control was successfully changed.  
  
- **-1** The operation failed.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_ENABLEGROUPVIEW](http://msdn.microsoft.com/library/windows/desktop/bb774900) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__ensurevisible"></a>  CListCtrl::EnsureVisible  
 Ensures that a list view item is at least partially visible.  
  
```  
BOOL EnsureVisible(
    int nItem,  
    BOOL bPartialOK);
```  
  
### Parameters  
 `nItem`  
 Index of the list view item that is to be visible.  
  
 `bPartialOK`  
 Specifies whether partial visibility is acceptable.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The list view control is scrolled if necessary. If the `bPartialOK` parameter is nonzero, no scrolling occurs if the item is partially visible.  
  
### Example  
```cpp
		// Ensure that the last item is visible.
		int nCount = m_myListCtrl.GetItemCount();
		if (nCount > 0)
			m_myListCtrl.EnsureVisible(nCount-1, FALSE);
```

  
##  <a name="clistctrl__finditem"></a>  CListCtrl::FindItem  
 Searches for a list view item having specified characteristics.  
  
```  
int FindItem(
    LVFINDINFO* pFindInfo,  
    int nStart = -1) const;

 
```  
  
### Parameters  
 `pFindInfo`  
 A pointer to an [LVFINDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774745) structure containing information about the item to be searched for.  
  
 `nStart`  
 Index of the item to begin the search with, or -1 to start from the beginning. The item at `nStart` is excluded from the search if `nStart` is not equal to -1.  
  
### Return Value  
 The index of the item if successful or -1 otherwise.  
  
### Remarks  
 The `pFindInfo` parameter points to an **LVFINDINFO** structure, which contains information used to search for a list view item.  
  
### Example  

```cpp
		LVFINDINFO info;
		int nIndex;

		info.flags = LVFI_PARTIAL|LVFI_STRING;
		info.psz = _T("item");

		// Delete all of the items that begin with the string.
		while ((nIndex = m_myListCtrl.FindItem(&info)) != -1)
		{
			m_myListCtrl.DeleteItem(nIndex);
		}
```

  
##  <a name="clistctrl__getbkcolor"></a>  CListCtrl::GetBkColor  
 Retrieves the background color of a list view control.  
  
```  
COLORREF GetBkColor() const;

 
```  
  
### Return Value  
 A 32-bit value used to specify an RGB color.  
  
### Example  
  See the example for [CListCtrl::SetBkColor](#clistctrl__setbkcolor).  
  
##  <a name="clistctrl__getbkimage"></a>  CListCtrl::GetBkImage  
 Retrieves the current background image of a list view control.  
  
```  
BOOL GetBkImage(LVBKIMAGE* plvbkImage) const;

 
```  
  
### Parameters  
 `plvbkImage`  
 A pointer to an **LVBKIMAGE** structure containing the current background image of the list view.  
  
### Return Value  
 Returns nonzero if successful, or zero otherwise.  
  
### Remarks  
 This method implements the behavior of the Win32 macro, [ListView_GetBkImage](http://msdn.microsoft.com/library/windows/desktop/bb761246), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

```cpp
		LVBKIMAGE bki;

		// If no background image is set for the list view control use
		// the Microsoft homepage image as the background image.
		if (m_myListCtrl.GetBkImage(&bki) && (bki.ulFlags == LVBKIF_SOURCE_NONE))
		{
			m_myListCtrl.SetBkImage(
				_T("http://www.microsoft.com/library/images/gifs/homepage/microsoft.gif"),
				TRUE);
		}
```

  
##  <a name="clistctrl__getcallbackmask"></a>  CListCtrl::GetCallbackMask  
 Retrieves the callback mask for a list view control.  
  
```  
UINT GetCallbackMask() const;

 
```  
  
### Return Value  
 The list view control's callback mask.  
  
### Remarks  
 A "callback item" is a list view item for which the application — rather than the control — stores the text, icon, or both. Although a list view control can store these attributes for you, you may want to use callback items if your application already maintains some of this information. The callback mask specifies which item state bits are maintained by the application, and it applies to the whole control rather than to a specific item. The callback mask is zero by default, meaning that the control tracks all item states. If an application uses callback items or specifies a nonzero callback mask, it must be able to supply list view item attributes on demand.  
  
### Example  
  See the example for [CListCtrl::SetCallbackMask](#clistctrl__setcallbackmask).  
  
##  <a name="clistctrl__getcheck"></a>  CListCtrl::GetCheck  
 Retrieves the current display status of the state image that is associated with an item.  
  
```  
BOOL GetCheck(int nItem) const;

 
```  
  
### Parameters  
 `nItem`  
 The zero-based index of a list control item.  
  
### Return Value  
 Nonzero if the item is selected, otherwise 0.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetCheckState](http://msdn.microsoft.com/library/windows/desktop/bb761250), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::SetCheck](#clistctrl__setcheck).  
  
##  <a name="clistctrl__getcolumn"></a>  CListCtrl::GetColumn  
 Retrieves the attributes of a list view control's column.  
  
```  
BOOL GetColumn(
    int nCol,  
    LVCOLUMN* pColumn) const;

 
```  
  
### Parameters  
 `nCol`  
 Index of the column whose attributes are to be retrieved.  
  
 `pColumn`  
 Address of an [LVCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) structure that specifies the information to retrieve and receives information about the column. The **mask** member specifies which column attributes to retrieve. If the **mask** member specifies the `LVCF_TEXT` value, the **pszText** member must contain the address of the buffer that receives the item text and the **cchTextMax** member must specify the size of the buffer.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The **LVCOLUMN** structure contains information about a column in report view.  
  
### Example  

```cpp
		LVCOLUMN col;

		col.mask = LVCF_WIDTH;

		// Double the column width of the first column.
		if (m_myListCtrl.GetColumn(0, &col))
		{
			col.cx *= 2;
			m_myListCtrl.SetColumn(0, &col);
		}
```

  
##  <a name="clistctrl__getcolumnorderarray"></a>  CListCtrl::GetColumnOrderArray  
 Retrieves the column order (left to right) of a list view control.  
  
```  
BOOL GetColumnOrderArray(
    LPINT piArray,  
    int iCount = -1);
```  
  
### Parameters  
 `piArray`  
 A pointer to a buffer that will contain the index values of the columns in the list view control. The buffer must be large enough to contain the total number of columns in the list view control.  
  
 `iCount`  
 Number of columns in the list view control. If this parameter is -1, the number of columns is automatically retrieved by the framework.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetColumnOrderArray](http://msdn.microsoft.com/library/windows/desktop/bb761254), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

```cpp
		// Reverse the order of the columns in the list view control
		// (i.e. make the first column the last, the last column
		// the first, and so on...).
		CHeaderCtrl* pHeaderCtrl = m_myListCtrl.GetHeaderCtrl();

		if (pHeaderCtrl != NULL)
		{
			int  nColumnCount = pHeaderCtrl->GetItemCount();
			LPINT pnOrder = (LPINT) malloc(nColumnCount*sizeof(int));
			ASSERT(pnOrder != NULL);

			m_myListCtrl.GetColumnOrderArray(pnOrder, nColumnCount);

			int i, j, nTemp;
			for (i = 0, j = nColumnCount-1; i < j; i++, j--)
			{
				nTemp = pnOrder[i];
				pnOrder[i] = pnOrder[j];
				pnOrder[j] = nTemp;
			}

			m_myListCtrl.SetColumnOrderArray(nColumnCount, pnOrder);
			free(pnOrder);
		}
```

  
##  <a name="clistctrl__getcolumnwidth"></a>  CListCtrl::GetColumnWidth  
 Retrieves the width of a column in report view or list view.  
  
```  
int GetColumnWidth(int nCol) const;

 
```  
  
### Parameters  
 `nCol`  
 Specifies the index of the column whose width is to be retrieved.  
  
### Return Value  
 The width, in pixels, of the column specified by `nCol`.  
  
### Example  

```cpp
		// Increase the column width of the second column by 20.
		int nWidth = m_myListCtrl.GetColumnWidth(1);
		m_myListCtrl.SetColumnWidth(1, 20 + nWidth);
```

  
##  <a name="clistctrl__getcountperpage"></a>  CListCtrl::GetCountPerPage  
 Calculates the number of items that can fit vertically in the visible area of a list view control when in list view or report view.  
  
```  
int GetCountPerPage() const;

 
```  
  
### Return Value  
 The number of items that can fit vertically in the visible area of a list view control when in list view or report view.  
  
### Example  
  See the example for [CListCtrl::GetTopIndex](#clistctrl__gettopindex).  
  
##  <a name="clistctrl__geteditcontrol"></a>  CListCtrl::GetEditControl  
 Retrieves the handle of the edit control used to edit a list view item's text.  
  
```  
CEdit* GetEditControl() const;

 
```  
  
### Return Value  
 If successful, a pointer to the [CEdit](cedit-class.md) object that is used to edit the item text; otherwise **NULL**.  
  
### Example  

```cpp
		// The string replacing the text in the edit control.
		LPCTSTR lpszmyString = _T("custom label!");

		// If possible, replace the text in the label edit control.
		CEdit* pEdit = m_myListCtrl.GetEditControl();

		if (pEdit != NULL)
		{
			pEdit->SetWindowText(lpszmyString);
		}
```

  
##  <a name="clistctrl__getemptytext"></a>  CListCtrl::GetEmptyText  
 Retrieves the string to display if the current list-view control is empty.  
  
```  
CString GetEmptyText() const;

 
```  
  
### Return Value  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that contains the text to display if the control is empty.  
  
### Remarks  
 This method sends the [LVM_GETEMPTYTEXT](http://msdn.microsoft.com/library/windows/desktop/bb774921) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getextendedstyle"></a>  CListCtrl::GetExtendedStyle  
 Retrieves the current extended styles of a list view control.  
  
```  
DWORD GetExtendedStyle();
```  
  
### Return Value  
 A combination of the extended styles currently in use by the list view control. For a descriptive list of these extended styles, see the [Extended List View Styles](http://msdn.microsoft.com/library/windows/desktop/bb774732) topic in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetExtendedListViewStyle](http://msdn.microsoft.com/library/windows/desktop/bb761264), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::SetExtendedStyle](#clistctrl__setextendedstyle).  
  
##  <a name="clistctrl__getfirstselecteditemposition"></a>  CListCtrl::GetFirstSelectedItemPosition  
 Gets the position of the first selected item in the list view control.  
  
```  
POSITION GetFirstSelectedItemPosition() const;

 
```  
  
### Return Value  
 A **POSITION** value that can be used for iteration or object pointer retrieval; **NULL** if no items are selected.  
  
### Example  
 The following code sample demonstrates the usage of this function.  
  

```cpp
		POSITION pos = m_myListCtrl.GetFirstSelectedItemPosition();
		if (pos == NULL)
		{
			TRACE(_T("No items were selected!\n"));
		}
		else
		{
			while (pos)
			{
				int nItem = m_myListCtrl.GetNextSelectedItem(pos);
				TRACE(_T("Item %d was selected!\n"), nItem);
				// you could do your own processing on nItem here
			}
		}
```

  
##  <a name="clistctrl__getfocusedgroup"></a>  CListCtrl::GetFocusedGroup  
 Retrieves the group that has the keyboard focus in the current list-view control.  
  
```  
int GetFocusedGroup() const;

 
```  
  
### Return Value  
 The index of the group whose state is `LVGS_FOCUSED`, if there is such a group; otherwise, -1.  
  
### Remarks  
 This method sends the [LVM_GETFOCUSEDGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774925) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. For more information, see the `LVGS_FOCUSED` value of the `state` member of the [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure.  
  
##  <a name="clistctrl__getgroupcount"></a>  CListCtrl::GetGroupCount  
 Retrieves the number of groups in the current list-view control.  
  
```  
int GetGroupCount()const;

 
```  
  
### Return Value  
 The number of groups in the list-view control.  
  
### Remarks  
 This method sends the [LVM_GETGROUPCOUNT](http://msdn.microsoft.com/library/windows/desktop/bb774931) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)] -->.  
  
##  <a name="clistctrl__getgroupinfo"></a>  CListCtrl::GetGroupInfo  
 Gets the information for a specified group of the list view control.  
  
```  
int GetGroupInfo(
    int iGroupId,  
    PLVGROUP pgrp) const;

 
```  
  
### Parameters  
 `iGroupId`  
 The identifier of the group whose information is to be retrieved.  
  
 `pgrp`  
 A pointer to the [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) containing information on the group specified.  
  
### Return Value  
 Returns the ID of the group if successful, or -1 otherwise.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETGROUPINFO](http://msdn.microsoft.com/library/windows/desktop/bb774932) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getgroupinfobyindex"></a>  CListCtrl::GetGroupInfoByIndex  
 Retrieves information about a specified group in the current list-view control.  
  
```  
BOOL GetGroupInfoByIndex(
    int iIndex,   
    PLVGROUP pGroup) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iIndex`|Zero-based index of a group.|  
|[out] `pGroup`|Pointer to an [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure that receives information about the group specified by the `iIndex` parameter.<br /><br /> The caller is responsible for initializing the members of the [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure. Set the `cbSize` member to the size of the structure, and the flags of the `mask` member to specify the information to retrieve.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 This method sends the [LVM_GETGROUPINFOBYINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774933) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)] -->.  
  
### Example  
 The following code example defines a variable, `m_listCtrl`, that is used to access the current list-view control. This variable is used in the next example.  

```cpp
public:
	// Variable used to access the list control.
	CListCtrl m_listCtrl; 
```

  
### Example  
 The following code example demonstrates the `GetGroupInfoByIndex` method. In an earlier section of this code example we created a list-view control that displays two columns titled "ClientID" and "Grade" in a report view. The following code example retrieves information about the group whose index is 0, if such a group exists.  
  

 
```cpp
	// GetGroupInfoByIndex
	const int GROUP_HEADER_BUFFER_SIZE = 40;

// Initialize the structure 
	LVGROUP gInfo = {0};
	gInfo.cbSize = sizeof(LVGROUP);
	wchar_t wstrHeadGet[GROUP_HEADER_BUFFER_SIZE] = {0};
	gInfo.cchHeader = GROUP_HEADER_BUFFER_SIZE;
	gInfo.pszHeader = wstrHeadGet;
	gInfo.mask = (LVGF_ALIGN | LVGF_STATE | LVGF_HEADER | LVGF_GROUPID);
	gInfo.state = LVGS_NORMAL;
	gInfo.uAlign  = LVGA_HEADER_LEFT;

	BOOL bRet = m_listCtrl.GetGroupInfoByIndex( 0, &gInfo );
	if (bRet == TRUE) {
		CString strHeader = CString( gInfo.pszHeader );
		CString str;
		str.Format(_T("Header: '%s'"), strHeader);
		AfxMessageBox(str, MB_ICONINFORMATION);
	}
	else
	{
		AfxMessageBox(_T("No group information was retrieved."));
	}
```

  
##  <a name="clistctrl__getgroupmetrics"></a>  CListCtrl::GetGroupMetrics  
 Retrieves the metrics of a group.  
  
```  
void GetGroupMetrics(PLVGROUPMETRICS pGroupMetrics) const;

 
```  
  
### Parameters  
 `pGroupMetrics`  
 A pointer to a [LVGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb774752) containing the group metrics information.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb774934) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getgrouprect"></a>  CListCtrl::GetGroupRect  
 Retrieves the bounding rectangle for a specified group in the current list-view control.  
  
```  
BOOL GetGroupRect(
    int iGroupId,   
    LPRECT lpRect,   
    int iCoords = LVGGR_GROUP) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iGroupId`|Specifies a group.|  
|[in, out] `lpRect`|Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure. If this method is successful, the structure receives the rectangle coordinates of the group that is specified by `iGroupId`.|  
|[in] `iCoords`|Specifies the rectangle coordinates to retrieve. Use one of these values:<br /><br /> - `LVGGR_GROUP` - (Default) Coordinates of the entire expanded group.<br />- `LVGGR_HEADER` - Coordinates of only the header (collapsed group).<br />- `LVGGR_SUBSETLINK` - Coordinates of only the subset link (markup subset).|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 The caller is responsible for allocating the [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure pointed to by the `pRect` parameter.  
  
 This method sends the [LVM_GETGROUPRECT](http://msdn.microsoft.com/library/windows/desktop/bb774935) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
 The following code example defines a variable, `m_listCtrl`, that is used to access the current list-view control. This variable is used in the next example.  
  

   

```cpp
public:
	// Variable used to access the list control.
	CListCtrl m_listCtrl; 
```

  
### Example  
 The following code example demonstrates the `GetGroupRect` method. In an earlier section of this code example, we created a list-view control that displays two columns titled "ClientID" and "Grade" in a report view. The following code example draws a 3D rectangle around the group whose index is 0, if such a group exists.  
  

 
```cpp
	// GetGroupRect

	// Get the graphics rectangle that surrounds group 0.
	CRect rect;
	BOOL bRet = m_listCtrl.GetGroupRect( 0, &rect, LVGGR_GROUP); 
	// Draw a blue rectangle around group 0.
	if (bRet == TRUE) {
		m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(0, 0, 255), RGB(0, 0, 255));
	}
	else {
		AfxMessageBox(_T("No group information was retrieved."), MB_ICONINFORMATION);
	}
```

  
##  <a name="clistctrl__getgroupstate"></a>  CListCtrl::GetGroupState  
 Retrieves the state for a specified group in the current list-view control.  
  
```  
UINT GetGroupState(
    int iGroupId,   
    DWORD dwMask) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `iGroupId`|Zero-based index of a group.|  
|[in] `dwMask`|Mask that specifies the state value to retrieve for the specified group. For more information, see the `mask` member of the [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure.|  
  
### Return Value  
 The requested state for the specified group, or 0 if the group cannot be found.  
  
### Remarks  
 The return value is the result of a bitwise AND operation on the `dwMask` parameter and the value of the `state` member of an [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure that represents the current list-view control.  
  
 This method sends the [LVM_GETGROUPSTATE](http://msdn.microsoft.com/library/windows/desktop/bb774936) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. For more information, see the [ListView_GetGroupState](http://msdn.microsoft.com/library/windows/desktop/bb761288) macro.  
  
##  <a name="clistctrl__getheaderctrl"></a>  CListCtrl::GetHeaderCtrl  
 Retrieves the header control of a list view control.  
  
```  
CHeaderCtrl* GetHeaderCtrl();
```  
  
### Return Value  
 A pointer to the header control, used by the list view control.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetHeader](http://msdn.microsoft.com/library/windows/desktop/bb761290), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::GetColumnOrderArray](#clistctrl__getcolumnorderarray).  
  
##  <a name="clistctrl__gethotcursor"></a>  CListCtrl::GetHotCursor  
 Retrieves the cursor used when hot tracking is enabled for a list view control.  
  
```  
HCURSOR GetHotCursor();
```  
  
### Return Value  
 The handle to the current hot cursor resource being used by the list view control.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetHotCursor](http://msdn.microsoft.com/library/windows/desktop/bb761292), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The hot cursor, only visible when hover selection is enabled, appears when the cursor passes over any list view item. Hover selection is enabled by setting the **LVS_EX_TRACKSELECT** extended style.  
  
### Example  

   

```cpp
		// Set the hot cursor to be the system app starting cursor.
		HCURSOR hCursor = ::LoadCursor(NULL, IDC_APPSTARTING);
		m_myListCtrl.SetHotCursor(hCursor);
		ASSERT(m_myListCtrl.GetHotCursor() == hCursor);
```

  
##  <a name="clistctrl__gethotitem"></a>  CListCtrl::GetHotItem  
 Retrieves the list view item currently under the cursor.  
  
```  
int GetHotItem();
```  
  
### Return Value  
 The index of the current hot item of the list view control.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetHotItem](http://msdn.microsoft.com/library/windows/desktop/bb761294), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The hot item is defined as the currently selected item when hot tracking (and hover selection) is enabled.  
  
 If hot tracking is enabled, when a user pauses over a list view item, the item label is automatically highlighted without the use of a mouse button.  
  
### Example  

   

```cpp
	// Set the hot item to the first item only if no other item is 
	// highlighted.
	if (m_myListCtrl.GetHotItem() == -1)
		m_myListCtrl.SetHotItem(0);
```

  
##  <a name="clistctrl__gethovertime"></a>  CListCtrl::GetHoverTime  
 Retrieves the current hover time of a list view control.  
  
```  
DWORD GetHoverTime() const;

 
```  
  
### Return Value  
 Returns the delay, in milliseconds, which the mouse cursor must hover over an item before it is selected. If the return value is -1, then the hover time is the default hover time.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetHoverTime](http://msdn.microsoft.com/library/windows/desktop/bb761296), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

   

```cpp
		// If the hover time is the default set to 1 sec.
		DWORD dwTime = m_myListCtrl.GetHoverTime();
		if (dwTime == -1)
			m_myListCtrl.SetHoverTime(1000);
```

  
##  <a name="clistctrl__getimagelist"></a>  CListCtrl::GetImageList  
 Retrieves the handle of an image list used for drawing list view items.  
  
```  
CImageList* GetImageList(int nImageList) const;

 
```  
  
### Parameters  
 `nImageList`  
 Value specifying which image list to retrieve. It can be one of these values:  
  
- `LVSIL_NORMAL` Image list with large icons.  
  
- `LVSIL_SMALL` Image list with small icons.  
  
- `LVSIL_STATE` Image list with state images.  
  
### Return Value  
 A pointer to the image list used for drawing list view items.  
  
### Example  

   

```cpp
		ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == NULL);

		m_myListCtrl.SetImageList(&m_lcImageList, LVSIL_NORMAL);
		ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == &m_lcImageList);
```

  
##  <a name="clistctrl__getinsertmark"></a>  CListCtrl::GetInsertMark  
 Retrieves the current position of the insertion mark.  
  
```  
BOOL GetInsertMark(LPLVINSERTMARK lvim) const;

 
```  
  
### Parameters  
 `lvim`  
 A pointer to an [LVINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774758) structure containing the information for the insert mark.  
  
### Return Value  
 Returns **TRUE** if successful, or **FALSE** otherwise. **FALSE** is returned if the size in the `cbSize` member of the **LVINSERTMARK** structure does not equal the actual size of the structure.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774945) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getinsertmarkcolor"></a>  CListCtrl::GetInsertMarkColor  
 Retrieves the current color of the insertion mark.  
  
```  
COLORREF GetInsertMarkColor() const;

 
```  
  
### Return Value  
 Returns a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) structure that contains the color of the insertion point.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETINSERTMARKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774947) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getinsertmarkrect"></a>  CListCtrl::GetInsertMarkRect  
 Retrieves the rectangle that bounds the insertion point.  
  
```  
int GetInsertMarkRect(LPRECT pRect) const;

 
```  
  
### Parameters  
 `pRect`  
 Pointer to a `RECT` structure that contains the coordinates of a rectangle that bounds the insertion point.  
  
### Return Value  
 Returns one of the following values:  
  
- **0** No insertion point found.  
  
- **1** Insertion point found.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETINSERTMARKRECT](http://msdn.microsoft.com/library/windows/desktop/bb774949) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getitem"></a>  CListCtrl::GetItem  
 Retrieves some or all of a list view item's attributes.  
  
```  
BOOL GetItem(LVITEM* pItem) const;

 
```  
  
### Parameters  
 `pItem`  
 Pointer to an [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure that receives the item's attributes.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The **LVITEM** structure specifies or receives the attributes of a list view item.  
  
##  <a name="clistctrl__getitemcount"></a>  CListCtrl::GetItemCount  
 Retrieves the number of items in a list view control.  
  
```  
int GetItemCount() const;

 
```  
  
### Return Value  
 The number of items in the list view control.  
  
### Example  
  See the example for [CListCtrl::DeleteItem](#clistctrl__deleteitem).  
  
##  <a name="clistctrl__getitemdata"></a>  CListCtrl::GetItemData  
 Retrieves the 32-bit application-specific value associated with the item specified by `nItem`.  
  
```  
DWORD_PTR GetItemData(int nItem) const;

 
```  
  
### Parameters  
 `nItem`  
 Index of the list item whose data is to be retrieved.  
  
### Return Value  
 A 32-bit application-specific value associated with the specified item.  
  
### Remarks  
 This value is the **lParam** member of the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]  
  
### Example  

```cpp
	// If any item's data is equal to zero then reset it to -1.
	for (int i=0; i < m_myListCtrl.GetItemCount(); i++)
	{
		if (m_myListCtrl.GetItemData(i) == 0)
		{
			m_myListCtrl.SetItemData(i, (DWORD) -1);
		}
	}
```

  
##  <a name="clistctrl__getitemindexrect"></a>  CListCtrl::GetItemIndexRect  
 Retrieves the bounding rectangle for all or part of a subitem in the current list-view control.  
  
```  
BOOL GetItemIndexRect(
    PLVITEMINDEX pItemIndex,   
    int iColumn,   
    int rectType,   
    LPRECT pRect) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pItemIndex`|Pointer to an [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) structure for the parent item of the subitem.<br /><br /> The caller is responsible for allocating and setting the members of the [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) structure. This parameter cannot be `NULL`.|  
|[in] `iColumn`|Zero-based index of a column in the control.|  
|[in] `rectType`|Portion of the list-view subitem for which the bounding rectangle is retrieved. Specify one of the following values:<br /><br /> `LVIR_BOUNDS` - Returns the bounding rectangle of the entire subitem, including the icon and label.<br /><br /> `LVIR_ICON` - Returns the bounding rectangle of the icon or small icon of the subitem.<br /><br /> `LVIR_LABEL` - Returns the bounding rectangle of the subitem text.|  
|[out] `pRect`|Pointer to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that receives information about the bounding rectangle of the subitem.<br /><br /> The caller is responsible for allocating the [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure. This parameter cannot be `NULL`.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 This method sends the [LVM_GETITEMINDEXRECT](http://msdn.microsoft.com/library/windows/desktop/bb761046) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. For more information, see [ListView_GetItemIndexRect Macro](http://msdn.microsoft.com/library/windows/desktop/bb774959).  
  
### Example  
 The following code example defines a variable, `m_listCtrl`, that is used to access the current list-view control. This variable is used in the next example.  
  

   

```cpp
public:
	// Variable used to access the list control.
	CListCtrl m_listCtrl; 
```

  
### Example  
 The following code example demonstrates the `GetGroupRect` method. Prior to entering this code example we created a list-view control that displays two columns titled "ClientID" and "Grade" in a report view. The following code example draws a 3D rectangle around the second subitem in both columns.  
  

 
```cpp
	// GetItemIndexRect
	// Get the rectangle that bounds the second item in the first group.
	LVITEMINDEX lvItemIndex;
	lvItemIndex.iGroup = 0;
	lvItemIndex.iItem = 1;
	CRect rect;
	BOOL bRet = m_listCtrl.GetItemIndexRect(
		&lvItemIndex, 0, LVIR_BOUNDS, &rect);

	// Draw a red rectangle around the item.
	m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(255, 0, 0), RGB(255, 0, 0) );
```

  
##  <a name="clistctrl__getitemposition"></a>  CListCtrl::GetItemPosition  
 Retrieves the position of a list view item.  
  
```  
BOOL GetItemPosition(
    int nItem,  
    LPPOINT lpPoint) const;

 
```  
  
### Parameters  
 `nItem`  
 The index of the item whose position is to be retrieved.  
  
 `lpPoint`  
 Address of a [POINT](http://msdn.microsoft.com/library/windows/desktop/dd162805) structure that receives the position of the item's upper-left corner, in view coordinates.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

   

```cpp
		POINT pt;

		// Move all items in the list control 100 pixels to the right.
		UINT i, nCount = m_myListCtrl.GetItemCount();

		for (i=0; i < nCount; i++)
		{
			m_myListCtrl.GetItemPosition(i, &pt);
			pt.x += 100;
			m_myListCtrl.SetItemPosition(i, pt);
		}   
```

  
##  <a name="clistctrl__getitemrect"></a>  CListCtrl::GetItemRect  
 Retrieves the bounding rectangle for all or part of an item in the current view.  
  
```  
BOOL GetItemRect(
    int nItem,  
    LPRECT lpRect,  
    UINT nCode) const;

 
```  
  
### Parameters  
 `nItem`  
 The index of the item whose position is to be retrieved.  
  
 `lpRect`  
 Address of a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that receives the bounding rectangle.  
  
 `nCode`  
 Portion of the list view item for which to retrieve the bounding rectangle. It can be one of these values:  
  
- `LVIR_BOUNDS` Returns the bounding rectangle of the entire item, including the icon and label.  
  
- `LVIR_ICON` Returns the bounding rectangle of the icon or small icon.  
  
- `LVIR_LABEL` Returns the bounding rectangle of the item text.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

   

```cpp
// OnClick is the handler for the NM_CLICK notification
void CListCtrlDlg::OnClick(NMHDR* pNMHDR, LRESULT* pResult)
{
	UNREFERENCED_PARAMETER(pResult);

	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;

	// Get the current mouse location and convert it to client
	// coordinates.
	CPoint pos( ::GetMessagePos() ); 
	ScreenToClient(&pos);

	// Get indexes of the first and last visible items in 
	// the listview control.
	int index = m_myListCtrl.GetTopIndex();
	int last_visible_index = index + m_myListCtrl.GetCountPerPage();
	if (last_visible_index > m_myListCtrl.GetItemCount())
		last_visible_index = m_myListCtrl.GetItemCount();

	// Loop until number visible items has been reached.
	while (index <= last_visible_index)
	{
		// Get the bounding rectangle of an item. If the mouse
		// location is within the bounding rectangle of the item,
		// you know you have found the item that was being clicked.
		CRect r;
		m_myListCtrl.GetItemRect(index, &r, LVIR_BOUNDS);
		if (r.PtInRect(pia->ptAction))
		{
			UINT flag = LVIS_SELECTED | LVIS_FOCUSED;
			m_myListCtrl.SetItemState(index, flag, flag);
			break;
		}

		// Get the next item in listview control.
		index++;
	}
}
```

  
##  <a name="clistctrl__getitemspacing"></a>  CListCtrl::GetItemSpacing  
 Calculates the spacing between items in the current list-view control.  
  
```  
BOOL GetItemSpacing(
    BOOL fSmall,   
    int* pnHorzSpacing,   
    int* pnVertSpacing) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `fSmall`|View for which to retrieve the item spacing. Specify `true` for small icon view, or `false` for icon view.|  
|[out] `pnHorzSpacing`|Contains the horizontal spacing between items.|  
|[out] `pnVertSpacing`|Contains the vertical spacing between items.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 This method sends the [LVM_GETITEMSPACING](http://msdn.microsoft.com/library/windows/desktop/bb761051) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getitemstate"></a>  CListCtrl::GetItemState  
 Retrieves the state of a list view item.  
  
```  
UINT GetItemState(
    int nItem,  
    UINT nMask) const;

 
```  
  
### Parameters  
 `nItem`  
 The index of the item whose state is to be retrieved.  
  
 `nMask`  
 Mask specifying which of the item's state flags to return.  
  
### Return Value  
 The state flags for the specified list view item.  
  
### Remarks  
 An item's state is specified by the **state** member of the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. When you specify or change an item's state, the **stateMask** member specifies which state bits you want to change.  
  
### Example  
  See the example for [CListCtrl::GetTopIndex](#clistctrl__gettopindex).  
  
##  <a name="clistctrl__getitemtext"></a>  CListCtrl::GetItemText  
 Retrieves the text of a list view item or subitem.  
  
```  
int GetItemText(
    int nItem,  
    int nSubItem,  
    LPTSTR lpszText,  
    int nLen) const;

 
 
CString GetItemText(
    int nItem,  
    int nSubItem) const;

 
```  
  
### Parameters  
 `nItem`  
 The index of the item whose text is to be retrieved.  
  
 `nSubItem`  
 Specifies the subitem whose text is to be retrieved.  
  
 `lpszText`  
 Pointer to a string that is to receive the item text.  
  
 `nLen`  
 Length of the buffer pointed to by `lpszText`.  
  
### Return Value  
 The version returning `int` returns the length of the retrieved string.  
  
 The version returning a `CString` returns the item text.  
  
### Remarks  
 If `nSubItem` is zero, this function retrieves the item label; if `nSubItem` is nonzero, it retrieves the text of the subitem. For more information on the subitem argument, see the discussion of the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getnextitem"></a>  CListCtrl::GetNextItem  
 Searches for a list view item that has the specified properties and that bears the specified relationship to a given item.  
  
```  
int GetNextItem(
    int nItem,  
    int nFlags) const;

 
```  
  
### Parameters  
 `nItem`  
 Index of the item to begin the searching with, or -1 to find the first item that matches the specified flags. The specified item itself is excluded from the search.  
  
 `nFlags`  
 Geometric relation of the requested item to the specified item, and the state of the requested item. The geometric relation can be one of these values:  
  
- `LVNI_ABOVE` Searches for an item that is above the specified item.  
  
- `LVNI_ALL` Searches for a subsequent item by index (the default value).  
  
- `LVNI_BELOW` Searches for an item that is below the specified item.  
  
- `LVNI_TOLEFT` Searches for an item to the left of the specified item.  
  
- `LVNI_TORIGHT` Searches for an item to the right of the specified item.  
  
 The state can be zero, or it can be one or more of these values:  
  
- `LVNI_DROPHILITED` The item has the `LVIS_DROPHILITED` state flag set.  
  
- `LVNI_FOCUSED` The item has the `LVIS_FOCUSED` state flag set.  
  
- `LVNI_SELECTED` The item has the `LVIS_SELECTED` state flag set.  
  
 If an item does not have all of the specified state flags set, the search continues with the next item.  
  
### Return Value  
 The index of the next item if successful, or -1 otherwise.  
  
##  <a name="clistctrl__getnextitemindex"></a>  CListCtrl::GetNextItemIndex  
 Retrieves the index of the item in the current list-view control that has a specified set of properties.  
  
```  
BOOL GetNextItemIndex(
    PLVITEMINDEX pItemIndex,   
    int nFlags) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in, out] `pItemIndex`|Pointer to the [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) structure that describes the item where the search begins, or -1 to find the first item that matches the flags in the `nFlags` parameter.<br /><br /> If this method is successful, the `LVITEMINDEX` structure describes the item found by the search.|  
|[in] `nFlags`|A bitwise combination (OR) of flags that specify how to perform the search.<br /><br /> The search can depend on the index, state, or appearance of the target item, or the target item's physical position relative to the item specified by the `pItemIndex` parameter. For more information, see the `flags` parameter in the [LVM_GETNEXTITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761059) message.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 The caller is responsible for allocating and setting the members of the `LVITEMINDEX` structure pointed to by the `pItemIndex` parameter.  
  
 This method sends the [LVM_GETNEXTITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761059) message, which is described in the Windows SDK.  
  
##  <a name="clistctrl__getnextselecteditem"></a>  CListCtrl::GetNextSelectedItem  
 Gets the index of the list item identified by `pos`, then sets *pos* to the **POSITION** value.  
  
```  
int GetNextSelectedItem(POSITION& pos) const;

 
```  
  
### Parameters  
 `pos`  
 A reference to a **POSITION** value returned by a previous call to `GetNextSelectedItem` or `GetFirstSelectedItemPosition`. The value is updated to the next position by this call.  
  
### Return Value  
 The index of the list item identified by `pos`.  
  
### Remarks  
 You can use `GetNextSelectedItem` in a forward iteration loop if you establish the initial position with a call to `GetFirstSelectedItemPosition`.  
  
 You must ensure that your **POSITION** value is valid. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
### Example  
 The following code sample demonstrates the usage of this function.  
  

   

```cpp
		POSITION pos = m_myListCtrl.GetFirstSelectedItemPosition();
		if (pos == NULL)
		{
			TRACE(_T("No items were selected!\n"));
		}
		else
		{
			while (pos)
			{
				int nItem = m_myListCtrl.GetNextSelectedItem(pos);
				TRACE(_T("Item %d was selected!\n"), nItem);
				// you could do your own processing on nItem here
			}
		}
```

  
##  <a name="clistctrl__getnumberofworkareas"></a>  CListCtrl::GetNumberOfWorkAreas  
 Retrieves the current number of working areas for a list view control.  
  
```  
UINT GetNumberOfWorkAreas() const;

 
```  
  
### Return Value  
 Not used at this time.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetNumberOfWorkAreas](http://msdn.microsoft.com/library/windows/desktop/bb774988), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

   

```cpp
		UINT i, uCount = m_myListCtrl.GetNumberOfWorkAreas();
		LPRECT lpRects = (LPRECT) malloc(uCount*sizeof(RECT));

		if (lpRects != NULL)
		{
			// Dump all of the work area dimensions.
			m_myListCtrl.GetWorkAreas(uCount, lpRects);

			for (i=0; i < uCount; i++)
			{
				TRACE(_T("Work area %d; left = %d, top = %d, right = %d, ")
					_T("bottom = %d\r\n"),
					i, lpRects[i].left, lpRects[i].top, lpRects[i].right, 
					lpRects[i].bottom);
			}

			free(lpRects);
		}
		else
		{
			TRACE(_T("Couldn't allocate enough memory!"));   
		}

```

  
##  <a name="clistctrl__getoutlinecolor"></a>  CListCtrl::GetOutlineColor  
 Retrieves the color of the border of a list view control.  
  
```  
COLORREF GetOutlineColor() const;

 
```  
  
### Return Value  
 Returns a [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) structure containing the outline color.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETOUTLINECOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761065) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getorigin"></a>  CListCtrl::GetOrigin  
 Retrieves the current view origin for a list view control.  
  
```  
BOOL GetOrigin(LPPOINT lpPoint) const;

 
```  
  
### Parameters  
 `lpPoint`  
 Address of a [POINT](http://msdn.microsoft.com/library/windows/desktop/dd162805) structure that receives the view origin.  
  
### Return Value  
 Nonzero if successful; otherwise zero. However, if the control is in report view, the return value is always zero.  
  
##  <a name="clistctrl__getselectedcolumn"></a>  CListCtrl::GetSelectedColumn  
 Retrieves the index of the currently-selected column in the list control.  
  
```  
UINT GetSelectedColumn() const;

 
```  
  
### Return Value  
 The index of the selected column.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETSELECTEDCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb761067) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getselectedcount"></a>  CListCtrl::GetSelectedCount  
 Retrieves the number of selected items in the list view control.  
  
```  
UINT GetSelectedCount() const;

 
```  
  
### Return Value  
 The number of selected items in the list view control.  
  
### Example  

   

```cpp
		UINT i, uSelectedCount = m_myListCtrl.GetSelectedCount();
		int  nItem = -1;

		// Update all of the selected items.
		if (uSelectedCount > 0)
		{
			for (i=0; i < uSelectedCount; i++)
			{
				nItem = m_myListCtrl.GetNextItem(nItem, LVNI_SELECTED);
				ASSERT(nItem != -1);
				m_myListCtrl.Update(nItem); 
			}
		}
```

  
##  <a name="clistctrl__getselectionmark"></a>  CListCtrl::GetSelectionMark  
 Retrieves the selection mark of a list view control.  
  
```  
int GetSelectionMark();
```  
  
### Return Value  
 The zero-based selection mark, or -1 if there is no selection mark.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetSelectionMark](http://msdn.microsoft.com/library/windows/desktop/bb774998), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

```cpp
	// Set the selection mark to the first item only if no other item is 
	// selected.
	if (m_myListCtrl.GetSelectionMark() == -1)
		m_myListCtrl.SetSelectionMark(0);
```

  
##  <a name="clistctrl__getstringwidth"></a>  CListCtrl::GetStringWidth  
 Determines the minimum column width necessary to display all of a given string.  
  
```  
int GetStringWidth(LPCTSTR lpsz) const;

 
```  
  
### Parameters  
 `lpsz`  
 Address of a null-terminated string whose width is to be determined.  
  
### Return Value  
 The width, in pixels, of the string pointed to by `lpsz`.  
  
### Remarks  
 The returned width takes into account the control's current font and column margins, but not the width of a small icon.  
  
### Example  

```cpp
		CString strColumn;
		int nWidth;

		// Insert six columns in the list view control. Make the width of
		// the column be the width of the column header plus 50%.
		for (int i = 0; i < 6; i++)
		{
			strColumn.Format(_T("column %d"), i);
			nWidth = 3*m_myListCtrl.GetStringWidth(strColumn)/2;
			m_myListCtrl.InsertColumn(i, strColumn, LVCFMT_LEFT, nWidth);
		}
```

  
##  <a name="clistctrl__getsubitemrect"></a>  CListCtrl::GetSubItemRect  
 Retrieves the bounding rectangle of an item in a list view control.  
  
```  
BOOL GetSubItemRect(
    int iItem,  
    int iSubItem,  
    int nArea,  
    CRect& ref);
```  
  
### Parameters  
 *iItem*  
 Index of the subitem's parent item.  
  
 *iSubItem*  
 The one-based index of the subitem.  
  
 *nArea*  
 Determines the portion of the bounding rectangle (of the list view subitem) to be retrieved. The portion (icon, label, or both) of the bounding rectangle is specified by applying the bitwise OR operator to one or more of the following values:  
  
- `LVIR_BOUNDS` Returns the bounding rectangle of the entire item, including the icon and label.  
  
- `LVIR_ICON` Returns the bounding rectangle of the icon or small icon.  
  
- `LVIR_LABEL` Returns the bounding rectangle of the entire item, including the icon and label. This is identical to `LVIR_BOUNDS`.  
  
 `ref`  
 Reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the coordinates of the subitem's bounding rectangle.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetSubItemRect](http://msdn.microsoft.com/library/windows/desktop/bb775004), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__gettextbkcolor"></a>  CListCtrl::GetTextBkColor  
 Retrieves the text background color of a list view control.  
  
```  
COLORREF GetTextBkColor() const;

 
```  
  
### Return Value  
 A 32-bit value used to specify an RGB color.  
  
### Example  
  See the example for [CListCtrl::SetTextBkColor](#clistctrl__settextbkcolor).  
  
##  <a name="clistctrl__gettextcolor"></a>  CListCtrl::GetTextColor  
 Retrieves the text color of a list view control.  
  
```  
COLORREF GetTextColor() const;

 
```  
  
### Return Value  
 A 32-bit value used to specify an RGB color.  
  
### Example  
  See the example for [CListCtrl::SetTextColor](#clistctrl__settextcolor).  
  
##  <a name="clistctrl__gettileinfo"></a>  CListCtrl::GetTileInfo  
 Retrieves information about a tile in a list view control.  
  
```  
BOOL GetTileInfo(PLVTILEINFO pti) const;

 
```  
  
### Parameters  
 *pti*  
 A pointer to an [LVTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb774766) structure that receives the tile information.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb761081) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__gettileviewinfo"></a>  CListCtrl::GetTileViewInfo  
 Retrieves information about a list view control in tile view.  
  
```  
BOOL GetTileViewInfo(PLVTILEVIEWINFO ptvi) const;

 
```  
  
### Parameters  
 `ptvi`  
 A pointer to an [LVTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb774768) structure that receives the retrieved information.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb761083) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__gettooltips"></a>  CListCtrl::GetToolTips  
 Retrieves the tooltip control that the list view control uses to display tooltips.  
  
```  
CToolTipCtrl* GetToolTips() const;

 
```  
  
### Return Value  
 A pointer to a [CToolTipCtrl](ctooltipctrl-class.md) object to be used by the list control. If the [Create](#clistctrl__create) member function uses the style **LVS_NOTOOLTIPS**, no tooltips are used, and **NULL** is returned.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [LVM_GETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb761085), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The MFC implementation of `GetToolTips` returns a `CToolTipCtrl` object, which is used by the list control, rather than a handle to a tooltip control.  
  
### Example  

```cpp
		CToolTipCtrl* pTip = m_myListCtrl.GetToolTips();
		if (NULL != pTip)
		{
			pTip->UpdateTipText(_T("I'm a list view!"), &m_myListCtrl,
				IDD_MYLISTCTRL);
		}
```

  
##  <a name="clistctrl__gettopindex"></a>  CListCtrl::GetTopIndex  
 Retrieves the index of the topmost visible item when in list view or report view.  
  
```  
int GetTopIndex() const;

 
```  
  
### Return Value  
 The index of the topmost visible item.  
  
### Example  

 
```cpp
		// Make sure the focus is set to the list view control.
		m_myListCtrl.SetFocus();

		// Select all of the items that are completely visible.
		int n = m_myListCtrl.GetTopIndex();
		int nLast = n + m_myListCtrl.GetCountPerPage();

		for (; n < nLast; n++)
		{
			m_myListCtrl.SetItemState(n, LVIS_SELECTED, LVIS_SELECTED);
			ASSERT(m_myListCtrl.GetItemState(n, LVIS_SELECTED) == LVIS_SELECTED); 
		}
```

  
##  <a name="clistctrl__getview"></a>  CListCtrl::GetView  
 Gets the view of the list view control.  
  
```  
DWORD GetView() const;

 
```  
  
### Return Value  
 The current view of the list view control.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_GETVIEW](http://msdn.microsoft.com/library/windows/desktop/bb761091) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__getviewrect"></a>  CListCtrl::GetViewRect  
 Retrieves the bounding rectangle of all items in the list view control.  
  
```  
BOOL GetViewRect(LPRECT lpRect) const;

 
```  
  
### Parameters  
 `lpRect`  
 Address of a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The list view must be in icon view or small icon view.  
  
##  <a name="clistctrl__getworkareas"></a>  CListCtrl::GetWorkAreas  
 Retrieves the current working areas of a list view control.  
  
```  
void GetWorkAreas(
    int nWorkAreas,  
    LPRECT prc) const;

 
```  
  
### Parameters  
 `nWorkAreas`  
 The number of `RECT` structures contained in the *prc* array.  
  
 `prc`  
 A pointer to an array of `RECT` structures (or [CRect](../../atl-mfc-shared/reference/crect-class.md) objects) that receive the working areas of the list view control. Values in these structures are in client coordinates.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_GetWorkAreas](http://msdn.microsoft.com/library/windows/desktop/bb775024), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::GetNumberOfWorkAreas](#clistctrl__getnumberofworkareas).  
  
##  <a name="clistctrl__hasgroup"></a>  CListCtrl::HasGroup  
 Determines if the list view control has the specified group.  
  
```  
BOOL HasGroup(int iGroupId) const;

 
```  
  
### Parameters  
 `iGroupId`  
 The identifier of the group being requested.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_HASGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761097) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__hittest"></a>  CListCtrl::HitTest  
 Determines which list view item, if any, is at a specified position.  
  
```  
int HitTest(
    LVHITTESTINFO* pHitTestInfo) const;

 
 
int HitTest(
    CPoint pt,  
    UINT* pFlags = NULL) const;

 
```  
  
### Parameters  
 `pHitTestInfo`  
 Address of an **LVHITTESTINFO** structure that contains the position to hit test and that receives information about the results of the hit test.  
  
 `pt`  
 Point to be tested.  
  
 `pFlags`  
 Pointer to an integer that receives information about the results of the test. See the explanation of the **flags** member of the [LVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb774754) structure in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Return Value  
 The index of the item at the position specified by `pHitTestInfo`, if any, or -1 otherwise.  
  
### Remarks  
 You can use the `LVHT_ABOVE`, `LVHT_BELOW`, `LVHT_TOLEFT`, and `LVHT_TORIGHT` values of the structure's **flag** member to determine whether to scroll the contents of a list view control. Two of these flags can be combined, for example, if the position is above and to the left of the client area.  
  
 You can test for the **LVHT_ONITEM** value of the structure's **flag** member to determine whether a given position is over a list view item. This value is a bitwise-OR operation on the `LVHT_ONITEMICON`, `LVHT_ONITEMLABEL`, and `LVHT_ONITEMSTATEICON` values of the structure's **flag** member.  
  
### Example  

```cpp
void CListCtrlDlg::OnRClick(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
	CPoint point(pia->ptAction);

	// Select the item the user clicked on.
	UINT uFlags;
	int nItem = m_myListCtrl.HitTest(point, &uFlags);

	if (uFlags & LVHT_ONITEMLABEL)
	{
		m_myListCtrl.SetItem(nItem, 0, LVIF_STATE, NULL, 0, LVIS_SELECTED, 
			LVIS_SELECTED, 0);
	}

	*pResult = 0;
}
```

  
##  <a name="clistctrl__insertcolumn"></a>  CListCtrl::InsertColumn  
 Inserts a new column in a list view control.  
  
```  
int InsertColumn(
    int nCol,  
    const LVCOLUMN* pColumn);

 
int InsertColumn(
    int nCol,  
    LPCTSTR lpszColumnHeading,  
    int nFormat = LVCFMT_LEFT,  
    int nWidth = -1,  
    int nSubItem = -1);
```  
  
### Parameters  
 `nCol`  
 The index of the new column.  
  
 `pColumn`  
 Address of an **LVCOLUMN** structure that contains the attributes of the new column.  
  
 *lpszColumnHeading*  
 Address of a string containing the column's heading.  
  
 `nFormat`  
 Integer specifying the alignment of the column. It can be one of these values: **LVCFMT_LEFT**, **LVCFMT_RIGHT**, or **LVCFMT_CENTER**.  
  
 `nWidth`  
 Width of the column, in pixels. If this parameter is -1, the column width is not set.  
  
 `nSubItem`  
 Index of the subitem associated with the column. If this parameter is -1, no subitem is associated with the column.  
  
### Return Value  
 The index of the new column if successful or -1 otherwise.  
  
### Remarks  
 The leftmost column in a list view control must be left-aligned.  
  
 The [LVCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) structure contains the attributes of a column in report view. It is also used to receive information about a column. This structure is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__insertgroup"></a>  CListCtrl::InsertGroup  
 Inserts a group into the list view control.  
  
```  
LRESULT InsertGroup(
    int index,  
    PLVGROUP pgrp);
```  
  
### Parameters  
 *index*  
 The index of the item where the group is to be inserted.  
  
 `pgrp`  
 A pointer to an [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure containing the group to be added.  
  
### Return Value  
 Returns the index of the item that the group was added to, or -1 if the operation failed.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_INSERTGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761103) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__insertgroupsorted"></a>  CListCtrl::InsertGroupSorted  
 Inserts the specified group into an ordered list of groups.  
  
```  
LRESULT InsertGroupSorted(PLVINSERTGROUPSORTED pStructInsert);
```  
  
### Parameters  
 *pStructInsert*  
 A pointer to an [LVINSERTGROUPSORTED](http://msdn.microsoft.com/library/windows/desktop/bb774756) structure that contains the group to insert.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_INSERTGROUPSORTED](http://msdn.microsoft.com/library/windows/desktop/bb761105) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__insertitem"></a>  CListCtrl::InsertItem  
 Inserts an item into the list view control.  
  
```  
int InsertItem(
    const LVITEM* pItem);

 
int InsertItem(
    int nItem,  
    LPCTSTR lpszItem);

 
int InsertItem(
    int nItem,  
    LPCTSTR lpszItem,  
    int nImage);

 
int InsertItem(
    UINT nMask,  
    int nItem,  
    LPCTSTR lpszItem,  
    UINT nState,  
    UINT nStateMask,  
    int nImage,  
    LPARAM lParam);
```  
  
### Parameters  
 `pItem`  
 Pointer to an [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure that specifies the item's attributes, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `nItem`  
 Index of the item to be inserted.  
  
 `lpszItem`  
 Address of a string containing the item's label, or `LPSTR_TEXTCALLBACK` if the item is a callback item. For information on callback items, see [CListCtrl::GetCallbackMask](#clistctrl__getcallbackmask).  
  
 `nImage`  
 Index of the item's image, or `I_IMAGECALLBACK` if the item is a callback item. For information on callback items, see [CListCtrl::GetCallbackMask](#clistctrl__getcallbackmask).  
  
 `nMask`  
 The `nMask` parameter specifies which item attributes passed as parameters are valid. It can be one or more of the mask values described in [LVITEM Structure](http://msdn.microsoft.com/library/windows/desktop/bb774760) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The valid values can be combined with the bitwise OR operator.  
  
 `nState`  
 Indicates the item's state, state image, and overlay image. See the [!INCLUDE[winSDK](./includes/winsdk_md.md)] topics [LVITEM Structure](http://msdn.microsoft.com/library/windows/desktop/bb774760) for more information and [List-View Item States](http://msdn.microsoft.com/library/windows/desktop/bb774733) for a list of valid flags.  
  
 `nStateMask`  
 Indicates which bits of the state member will be retrieved or modified. See [LVITEM Structure](http://msdn.microsoft.com/library/windows/desktop/bb774760) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)] for more information.  
  
 `lParam`  
 A 32-bit application-specific value associated with the item. If this parameter is specified, you must set the `nMask` attribute `LVIF_PARAM`.  
  
### Return Value  
 The index of the new item if successful or -1 otherwise.  
  
### Remarks  
 Calling this method may cause the **LVM_INSERTITEM** message to be sent to your control window. The associated message handler for the control may fail to set the item text under certain conditions (such as using window styles such as **LVS_OWNERDRAW**). For more information on these conditions, refer to [LVM_INSERTITEM](http://msdn.microsoft.com/library/windows/desktop/bb761107) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

```cpp
		CString strText;
		int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

		// Insert 10 items in the list view control.
		for (int i = 0; i < 10; i++)
		{
			strText.Format(TEXT("item %d"), i);

			// Insert the item, select every other item.
			m_myListCtrl.InsertItem(LVIF_TEXT | LVIF_STATE, i, strText, 
				(i % 2) == 0 ? LVIS_SELECTED : 0, LVIS_SELECTED, 0, 0);

			// Initialize the text of the subitems.
			for (int j = 1; j < nColumnCount; j++)
			{
				strText.Format(TEXT("sub-item %d %d"), i, j);
				m_myListCtrl.SetItemText(i, j, strText);
			}
		}
```

  
##  <a name="clistctrl__insertmarkhittest"></a>  CListCtrl::InsertMarkHitTest  
 Retrieves the insertion point closest to a specified point.  
  
```  
int InsertMarkHitTest(
    LPPOINT pPoint,  
    LPLVINSERTMARK lvim) const;

 
```  
  
### Parameters  
 `pPoint`  
 A pointer to a [POINT](http://msdn.microsoft.com/library/windows/desktop/dd162805) structure that contains the hit test coordinates, relative to the client area of the list control.  
  
 `lvim`  
 A pointer to an [LVINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774758) structure that specifies the insertion point closest to the coordinates defined by the point parameter.  
  
### Return Value  
 The insertion point closest to the specified point.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_INSERTMARKHITTEST](http://msdn.microsoft.com/library/windows/desktop/bb761131) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__isgroupviewenabled"></a>  CListCtrl::IsGroupViewEnabled  
 Determines whether group view is enabled for a list view control.  
  
```  
BOOL IsGroupViewEnabled() const;

 
```  
  
### Return Value  
 Returns **TRUE** if group view is enabled, or **FALSE** otherwise.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_ISGROUPVIEWENABLED](http://msdn.microsoft.com/library/windows/desktop/bb761133) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__isitemvisible"></a>  CListCtrl::IsItemVisible  
 Indicates whether a specified item in the current list-view control is visible.  
  
```  
BOOL IsItemVisible(int index) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `index`|Zero-based index of an item in the current list-view control.|  
  
### Return Value  
 `true` if the specified item is visible;otherwise, `false`.  
  
### Remarks  
 This method sends the [LVM_ISITEMVISIBLE](http://msdn.microsoft.com/library/windows/desktop/bb761135) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__mapidtoindex"></a>  CListCtrl::MapIDToIndex  
 Maps the unique ID of an item in the current list-view control to an index.  
  
```  
UINT MapIDToIndex(UINT id) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `id`|The unique ID of an item.|  
  
### Return Value  
 The current index for the specified ID.  
  
### Remarks  
 A list-view control internally tracks items by index. This can present problems because indexes can change during the control's lifetime. The list-view control can tag an item with an ID when the item is created and you can use this ID to guarantee uniqueness during the lifetime of the list-view control.  
  
 Note that in a multithreaded environment the index is guaranteed only on the thread that hosts the list-view control, not on background threads.  
  
 This method sends the [LVM_MAPIDTOINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761137) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__mapindextoid"></a>  CListCtrl::MapIndexToID  
 Maps the index of an item in the current list-view control to a unique ID.  
  
```  
UINT MapIndexToID(UINT index) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `index`|The zero-based index of an item.|  
  
### Return Value  
 A unique ID for the specified item.  
  
### Remarks  
 A list-view control internally tracks items by index. This can present problems because indexes can change during the control's lifetime. The list-view control can tag an item with an ID when the item is created. You can use this ID to access a specific item for the lifetime of the list-view control.  
  
 Note that in a multithreaded environment the index is guaranteed only on the thread that hosts the list-view control, not on background threads.  
  
 This method sends the [LVM_MAPINDEXTOID](http://msdn.microsoft.com/library/windows/desktop/bb761139) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
 The following code example defines a variable, `m_listCtrl`, that is used to access the current list-view control. This variable is used in the next example.  
  

 
```cpp
public:
	// Variable used to access the list control.
	CListCtrl m_listCtrl; 
```

  
### Example  
 The following code example demonstrates the `MapIndexToID` method. In an earlier section of this code example, we created a list-view control that displays two columns titled "ClientID" and "Grade" in a report view. The following example maps the index of each list-view item to an identification number, and then retrieves the index for each identification number. Finally, the example reports whether the original indexes were retrieved.  
  

   

```cpp
	// MapIndexToID
	int iCount = m_listCtrl.GetItemCount();
	UINT nId = 0;
	UINT nIndex = 0;
	for (int iIndexOriginal = 0; iIndexOriginal < iCount; iIndexOriginal++)
	{
		// Map index to ID.
		nId = m_listCtrl.MapIndexToID((UINT)iIndexOriginal);

		// Map ID to index.
		nIndex = m_listCtrl.MapIDToIndex(nId);

		if (nIndex != (UINT)(iIndexOriginal))
		{
			CString str;
			str.Format(_T("Mapped index (%d) is not equal to original index (%d)"),
				nIndex, (UINT)(iIndexOriginal));
			AfxMessageBox(str);
			return;
		}
	}
	AfxMessageBox(_T("The mapped indexes and original indexes are equal."), 
		MB_ICONINFORMATION);
```

  
##  <a name="clistctrl__movegroup"></a>  CListCtrl::MoveGroup  
 Moves the specified group to the specified zero based index of the list view control.  
  
```  
LRESULT MoveGroup(
    int iGroupId,  
    int toIndex);
```  
  
### Parameters  
 `iGroupId`  
 The identifier of the group to be moved.  
  
 `toIndex`  
 The zero-based index where the group is to be moved.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_MOVEGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761141) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__moveitemtogroup"></a>  CListCtrl::MoveItemToGroup  
 Moves the specified item into the specified group.  
  
```  
void MoveItemToGroup(
    int idItemFrom,  
    int idGroupTo);
```  
  
### Parameters  
 [in] `idItemFrom`  
 The index of the item to be moved.  
  
 [in] `idGroupTo`  
 The identifier of the group the item will be moved to.  
  
### Remarks  
  
> [!NOTE]
>  This method currently is not implemented.  
  
 This method emulates the functionality of the [LVM_MOVEITEMTOGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761143) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__redrawitems"></a>  CListCtrl::RedrawItems  
 Forces a list view control to repaint a range of items.  
  
```  
BOOL RedrawItems(
    int nFirst,  
    int nLast);
```  
  
### Parameters  
 `nFirst`  
 Index of the first item to be repainted.  
  
 `nLast`  
 Index of the last item to be repainted.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The specified items are not actually repainted until the list view window receives a `WM_PAINT` message. To repaint immediately, call the Windows [UpdateWindow](http://msdn.microsoft.com/library/windows/desktop/dd145167) function after using this function.  
  
##  <a name="clistctrl__removeallgroups"></a>  CListCtrl::RemoveAllGroups  
 Removes all groups from a list view control.  
  
```  
void RemoveAllGroups();
```  
  
### Remarks  
 This member function emulates the functionality of the [LVM_REMOVEALLGROUPS](http://msdn.microsoft.com/library/windows/desktop/bb761147) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__removegroup"></a>  CListCtrl::RemoveGroup  
 Removes the specified group from the list view control.  
  
```  
LRESULT RemoveGroup(int iGroupId);
```  
  
### Parameters  
 `iGroupId`  
 The identifier of the group to be removed.  
  
### Return Value  
 Returns the index of the group if successful, or -1 otherwise.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_REMOVEGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761149) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__scroll"></a>  CListCtrl::Scroll  
 Scrolls the content of a list view control.  
  
```  
BOOL Scroll(CSize size);
```  
  
### Parameters  
 `size`  
 A `CSize` object specifying the amount of horizontal and vertical scrolling, in pixels. The **y** member of `size` is divided by the height, in pixels, of the list view control's line, and the control is scrolled by the resulting number of lines.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="clistctrl__setbkcolor"></a>  CListCtrl::SetBkColor  
 Sets the background color of the list view control.  
  
```  
BOOL SetBkColor(COLORREF cr);
```  
  
### Parameters  
 `cr`  
 Background color to set, or the `CLR_NONE` value for no background color. List view controls with background colors redraw themselves significantly faster than those without background colors. For information, see [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

 
```cpp
		// Use the 3D button face color for the background.
		COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
		m_myListCtrl.SetBkColor(crBkColor);
		ASSERT(m_myListCtrl.GetBkColor() == crBkColor);
```

  
##  <a name="clistctrl__setbkimage"></a>  CListCtrl::SetBkImage  
 Sets the background image of a list view control.  
  
```  
BOOL SetBkImage(
    LVBKIMAGE* plvbkImage);

 
BOOL SetBkImage(
    HBITMAP hbm,  
    BOOL fTile = TRUE,  
    int xOffsetPercent = 0,  
    int yOffsetPercent = 0);

 
BOOL SetBkImage(
    LPTSTR pszUrl,  
    BOOL fTile = TRUE,  
    int xOffsetPercent = 0,  
    int yOffsetPercent = 0);
```  
  
### Parameters  
 `plvbkImage`  
 Address of an **LVBKIMAGE** structure, containing the new background image information.  
  
 `hbm`  
 Handle to a bitmap.  
  
 `pszUrl`  
 A **NULL**-terminated string that contains the URL of the background image.  
  
 *fTile*  
 Nonzero if the image is to be tiled in the background of the list view control; otherwise 0.  
  
 *xOffsetPercent*  
 The offset, in pixels, of the image's left edge, from origin of the list view control.  
  
 *yOffsetPercent*  
 The offset, in pixels, of the image's top edge, from origin of the list view control.  
  
### Return Value  
 Returns nonzero if successful, or zero otherwise.  
  
### Remarks  
  
> [!NOTE]
>  Because `CListCtrl::SetBkImage` makes use of OLE COM functionality, the OLE libraries must be initialized before using `SetBkImage`. It is best to initialize the COM libraries when the application is initialized and uninitialize the libraries when the application terminates. This is automatically done in MFC applications that make use of ActiveX technology, OLE Automation, OLE Linking/Embedding, or ODBC/DAO operations.  
  
### Example  
  See the example for [CListCtrl::GetBkImage](#clistctrl__getbkimage).  
  
##  <a name="clistctrl__setcallbackmask"></a>  CListCtrl::SetCallbackMask  
 Sets the callback mask for a list view control.  
  
```  
BOOL SetCallbackMask(UINT nMask);
```  
  
### Parameters  
 `nMask`  
 New value of the callback mask.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

 
```cpp
	// Set the callback mask so that only the selected and focused states
	// are stored for each item.
	m_myListCtrl.SetCallbackMask(LVIS_SELECTED|LVIS_FOCUSED);
	ASSERT(m_myListCtrl.GetCallbackMask() == 
		(LVIS_SELECTED|LVIS_FOCUSED));
```


##  <a name="clistctrl__setcheck"></a>  CListCtrl::SetCheck  
 Determines if the state image of a list control item is visible.  
  
```  
BOOL SetCheck(
    int nItem,  
    BOOL fCheck = TRUE);
```  
  
### Parameters  
 `nItem`  
 The zero-based index of a list control item.  
  
 `fCheck`  
 Specifies whether the state image of the item should be visible or not. By default, *fCheck* is **TRUE** and the state image is visible. If `fCheck` is **FALSE**, it is not visible.  
  
### Return Value  
 Nonzero if the item is checked, otherwise 0.  
  
### Example  

 
```cpp
		int nCount = m_myListCtrl.GetItemCount();
		BOOL fCheck = FALSE;

		// Set the check state of every other item to TRUE and 
		// all others to FALSE.
		for (int i = 0; i < nCount; i++)
		{
			m_myListCtrl.SetCheck(i, fCheck);
			ASSERT((m_myListCtrl.GetCheck(i) && fCheck) || 
				(!m_myListCtrl.GetCheck(i) && !fCheck));
			fCheck = !fCheck;
		}
```

  
##  <a name="clistctrl__setcolumn"></a>  CListCtrl::SetColumn  
 Sets the attributes of a list view column.  
  
```  
BOOL SetColumn(
    int nCol,  
    const LVCOLUMN* pColumn);
```  
  
### Parameters  
 `nCol`  
 Index of the column whose attributes are to be set.  
  
 `pColumn`  
 Address of an [LVCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) structure that contains the new column attributes, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The structure's **mask** member specifies which column attributes to set. If the **mask** member specifies the `LVCF_TEXT` value, the structure's **pszText** member is the address of a null-terminated string and the structure's **cchTextMax** member is ignored.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  
  See the example for [CListCtrl::GetColumn](#clistctrl__getcolumn).  
  
##  <a name="clistctrl__setcolumnorderarray"></a>  CListCtrl::SetColumnOrderArray  
 Sets the column order (left to right) of a list view control.  
  
```  
BOOL SetColumnOrderArray(
    int iCount,  
    LPINT piArray);
```  
  
### Parameters  
 `piArray`  
 A pointer to a buffer containing the index values of the columns in the list view control (from left to right). The buffer must be large enough to contain the total number of columns in the list view control.  
  
 `iCount`  
 Number of columns in the list view control.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetColumnOrderArray](http://msdn.microsoft.com/library/windows/desktop/bb775072), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::GetColumnOrderArray](#clistctrl__getcolumnorderarray).  
  
##  <a name="clistctrl__setcolumnwidth"></a>  CListCtrl::SetColumnWidth  
 Changes the width of a column in report view or list view.  
  
```  
BOOL SetColumnWidth(
    int nCol,  
    int cx);
```  
  
### Parameters  
 `nCol`  
 Index of the column for which the width is to be set. In list view, this parameter must be 0.  
  
 `cx`  
 The new width of the column. Can be either **LVSCW_AUTOSIZE** or **LVSCW_AUTOSIZE_USEHEADER**, as described in [LVM_SETCOLUMNWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb761163) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
##  <a name="clistctrl__setextendedstyle"></a>  CListCtrl::SetExtendedStyle  
 Sets the current extended styles of a list view control.  
  
```  
DWORD SetExtendedStyle(DWORD dwNewStyle);
```  
  
### Parameters  
 `dwNewStyle`  
 A combination of extended styles to be used by the list view control. For a descriptive list of these styles, see the [Extended List View Styles](http://msdn.microsoft.com/library/windows/desktop/bb774732) topic in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Return Value  
 A combination of the previous extended styles used by the list view control.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetExtendedListViewStyle](http://msdn.microsoft.com/library/windows/desktop/bb775076), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

 
```cpp
	// Allow the header controls item to be movable by the user.
	m_myListCtrl.SetExtendedStyle
		(m_myListCtrl.GetExtendedStyle()|LVS_EX_HEADERDRAGDROP);
```

  
##  <a name="clistctrl__setgroupinfo"></a>  CListCtrl::SetGroupInfo  
 Sets the information that describes the specified group of the current list-view control.  
  
```  
int SetGroupInfo(
    int iGroupId,  
    PLVGROUP pgrp);
```  
  
### Parameters  
 `iGroupId`  
 The identifier of the group whose information is set.  
  
 `pgrp`  
 Pointer to an [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) structure that contains the information to set. The caller is responsible for allocating this structure and setting its members.  
  
### Return Value  
 The ID of the group if the method is successful; otherwise, -1.  
  
### Remarks  
 This method sends the [LVM_SETGROUPINFO](http://msdn.microsoft.com/library/windows/desktop/bb761167) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setgroupmetrics"></a>  CListCtrl::SetGroupMetrics  
 Sets the group metrics of a list view control.  
  
```  
void SetGroupMetrics(PLVGROUPMETRICS pGroupMetrics);
```  
  
### Parameters  
 `pGroupMetrics`  
 A pointer to an [LVGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb774752) structure containing the group metrics information to be set.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb761168) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__sethotcursor"></a>  CListCtrl::SetHotCursor  
 Sets the cursor used when hot tracking is enabled for a list view control.  
  
```  
HCURSOR SetHotCursor(HCURSOR hc);
```  
  
### Parameters  
 *hc*  
 A handle to a cursor resource, used to represent the hot cursor.  
  
### Return Value  
 The handle to the previous hot cursor resource being used by the list view control.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetHotCursor](http://msdn.microsoft.com/library/windows/desktop/bb775082), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 The hot cursor, only visible when hover selection is enabled, appears as the cursor passes over any list view item. Hover selection is enabled by setting the **LVS_EX_TRACKSELECT** extended style.  
  
### Example  
  See the example for [CListCtrl::GetHotCursor](#clistctrl__gethotcursor).  
  
##  <a name="clistctrl__sethotitem"></a>  CListCtrl::SetHotItem  
 Sets the current hot item of a list view control.  
  
```  
int SetHotItem(int iIndex);
```  
  
### Parameters  
 `iIndex`  
 Zero-based index of the item to be set as the hot item.  
  
### Return Value  
 The zero-based index of the previously hot item.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetHotItem](http://msdn.microsoft.com/library/windows/desktop/bb775083), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::GetHotItem](#clistctrl__gethotitem).  
  
##  <a name="clistctrl__sethovertime"></a>  CListCtrl::SetHoverTime  
 Sets the current hover time of a list view control.  
  
```  
DWORD SetHoverTime(DWORD dwHoverTime = (DWORD)-1);
```  
  
### Parameters  
 *dwHoverTime*  
 The new delay, in milliseconds, which the mouse cursor must hover over an item before it is selected. If the default value is passed, the time is set to the default hover time.  
  
### Return Value  
 The previous hover time, in milliseconds.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetHoverTime](http://msdn.microsoft.com/library/windows/desktop/bb775084), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::GetHoverTime](#clistctrl__gethovertime).  
  
##  <a name="clistctrl__seticonspacing"></a>  CListCtrl::SetIconSpacing  
 Sets the spacing between icons in a list view control.  
  
```  
CSize SetIconSpacing(
    int cx,  
    int cy);

 
CSize SetIconSpacing(
    CSize size);
```  
  
### Parameters  
 `cx`  
 The distance (in pixels) between icons on the x-axis.  
  
 `cy`  
 The distance (in pixels) between icons on the y-axis.  
  
 `size`  
 A `CSize` object specifying the distance (in pixels) between icons on the x- and y-axes.  
  
### Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) object containing the previous values for icon spacing.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetIconSpacing](http://msdn.microsoft.com/library/windows/desktop/bb775085), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

 
```cpp
	// Leave lots of space between icons.
	m_myListCtrl.SetIconSpacing(CSize(100, 100));
```

  
##  <a name="clistctrl__setimagelist"></a>  CListCtrl::SetImageList  
 Assigns an image list to a list view control.  
  
```  
CImageList* SetImageList(
    CImageList* pImageList,  
    int nImageListType);
```  
  
### Parameters  
 `pImageList`  
 Pointer to the image list to assign.  
  
 `nImageListType`  
 Type of image list. It can be one of these values:  
  
- `LVSIL_NORMAL` Image list with large icons.  
  
- `LVSIL_SMALL` Image list with small icons.  
  
- `LVSIL_STATE` Image list with state images.  
  
### Return Value  
 A pointer to the previous image list.  
  
### Example  
  See the example for [CListCtrl::GetImageList](#clistctrl__getimagelist).  
  
##  <a name="clistctrl__setinfotip"></a>  CListCtrl::SetInfoTip  
 Sets the tooltip text.  
  
```  
BOOL SetInfoTip(PLVSETINFOTIP plvInfoTip);
```  
  
### Parameters  
 *plvInfoTip*  
 A pointer to an [LVFSETINFOTIP](http://msdn.microsoft.com/library/windows/desktop/bb774764) structure containing the information to be set.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETINFOTIP](http://msdn.microsoft.com/library/windows/desktop/bb761180) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setinsertmark"></a>  CListCtrl::SetInsertMark  
 Sets the insertion point to the defined position.  
  
```  
BOOL SetInsertMark(LPLVINSERTMARK lvim);
```  
  
### Parameters  
 `lvim`  
 A pointer to an [LVINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774758) structure specifying where to set the insertion point.  
  
### Return Value  
 Returns **TRUE** if successful, or **FALSE** otherwise. **FALSE** is returned if the size in the `cbSize` member of the **LVINSERTMARK** structure does not equal the actual size of the structure, or when an insertion point does not apply in the current view.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb761182) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setinsertmarkcolor"></a>  CListCtrl::SetInsertMarkColor  
 Sets the color of the insertion point.  
  
```  
COLORREF SetInsertMarkColor(COLORREF color);
```  
  
### Parameters  
 `color`  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) structure specifying the color to set the insertion point.  
  
### Return Value  
 Returns a **COLORREF** structure containing the previous color.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETINSERTMARKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761184) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setitem"></a>  CListCtrl::SetItem  
 Sets some or all of a list view item's attributes.  
  
```  
BOOL SetItem(
    const LVITEM* pItem);

 
BOOL SetItem(
    int nItem,  
    int nSubItem,  
    UINT nMask,  
    LPCTSTR lpszItem,  
    int nImage,  
    UINT nState,  
    UINT nStateMask,  
    LPARAM lParam);

 
BOOL SetItem(
    int nItem,  
    int nSubItem,  
    UINT nMask,  
    LPCTSTR lpszItem,  
    int nImage,  
    UINT nState,  
    UINT nStateMask,  
    LPARAM lParam,  
    int nIndent);
```  
  
### Parameters  
 `pItem`  
 Address of an [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure that contains the new item attributes, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The structure's **iItem** and **iSubItem** members identify the item or subitem, and the structure's **mask** member specifies which attributes to set. For more information on the **mask** member, see the **Remarks**.  
  
 `nItem`  
 Index of the item whose attributes are to be set.  
  
 `nSubItem`  
 Index of the subitem whose attributes are to be set.  
  
 `nMask`  
 Specifies which attributes are to be set (see the Remarks).  
  
 `lpszItem`  
 Address of a null-terminated string specifying the item's label.  
  
 `nImage`  
 Index of the item's image within the image list.  
  
 `nState`  
 Specifies values for states to be changed (see the Remarks).  
  
 `nStateMask`  
 Specifies which states are to be changed (see the Remarks).  
  
 `lParam`  
 A 32-bit application-specific value to be associated with the item.  
  
 `nIndent`  
 Width, in pixels, of the indentation. If `nIndent` is less than the system-defined minimum width, the new width is set to the system-defined minimum  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The **iItem** and **iSubItem** members of the **LVITEM** structure and the `nItem` and `nSubItem` parameters identify the item and subitem whose attributes are to be set.  
  
 The **mask** member of the **LVITEM** structure and the `nMask` parameter specify which item attributes are to be set:  
  
- `LVIF_TEXT` The **pszText** member or the `lpszItem` parameter is the address of a null-terminated string; the **cchTextMax** member is ignored.  
  
- `LVIF_STATE` The **stateMask** member or `nStateMask` parameter specifies which item states to change and the **state** member or `nState` parameter contains the values for those states.  
  
### Example  
  See the example for [CListCtrl::HitTest](#clistctrl__hittest).  
  
##  <a name="clistctrl__setitemcount"></a>  CListCtrl::SetItemCount  
 Prepares a list view control for adding a large number of items.  
  
```  
void SetItemCount(int nItems);
```  
  
### Parameters  
 `nItems`  
 Number of items that the control will ultimately contain.  
  
### Remarks  
 To set the item count for a virtual list view control, see [CListCtrl::SetItemCountEx](#clistctrl__setitemcountex).  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetItemCount](http://msdn.microsoft.com/library/windows/desktop/bb775093), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

 
```cpp
		CString str;

		// Add 1024 items to the list view control.
		m_myListCtrl.SetItemCount(1024);

		for (int i = 0; i < 1024; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myListCtrl.InsertItem(i, str);
		}
```

  
##  <a name="clistctrl__setitemcountex"></a>  CListCtrl::SetItemCountEx  
 Sets the item count for a virtual list view control.  
  
```  
BOOL SetItemCountEx(
    int iCount,  
    DWORD dwFlags = LVSICF_NOINVALIDATEALL);
```  
  
### Parameters  
 `iCount`  
 Number of items that the control will ultimately contain.  
  
 `dwFlags`  
 Specifies the behavior of the list view control after resetting the item count. This value can be a combination of the following:  
  
- **LVSICF_NOINVALIDATEALL** The list view control will not repaint unless affected items are currently in view. This is the default value.  
  
- **LVSICF_NOSCROLL** The list view control will not change the scroll position when the item count changes.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetItemCountEx](http://msdn.microsoft.com/library/windows/desktop/bb775095), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]and should only be called for virtual list views.  
  
### Example  

 
```cpp
		CString str;

		// Add 1024 items to the list view control.

		// Force my virtual list view control to allocate 
		// enough memory for my 1024 items.
		m_myVirtualListCtrl.SetItemCountEx(1024, LVSICF_NOSCROLL|
			LVSICF_NOINVALIDATEALL);

		for (int i = 0; i < 1024; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myVirtualListCtrl.InsertItem(i, str);
		}
```

  
##  <a name="clistctrl__setitemdata"></a>  CListCtrl::SetItemData  
 Sets the 32-bit application-specific value associated with the item specified by `nItem`.  
  
```  
BOOL SetItemData(
    int nItem, DWORD_PTR dwData);
```  
  
### Parameters  
 `nItem`  
 Index of the list item whose data is to be set.  
  
 `dwData`  
 A 32-bit value to be associated with the item.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This value is the **lParam** member of the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

 
```cpp
	// Set the data of each item to be equal to its index.
	for (int i = 0; i < m_myListCtrl.GetItemCount(); i++)
	{
		m_myListCtrl.SetItemData(i, i);
	}
```

  
##  <a name="clistctrl__setitemindexstate"></a>  CListCtrl::SetItemIndexState  
 Sets the state of an item in the current list-view control.  
  
```  
BOOL SetItemIndexState(
    PLVITEMINDEX pItemIndex,   
    DWORD dwState,   
    DWORD dwMask) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pItemIndex`|Pointer to an [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) structure that describes an item. The caller is responsible for allocating this structure and setting its members.|  
|[in] `dwState`|The state to set the item, which is a bitwise combination of [list view item states](http://msdn.microsoft.com/library/windows/desktop/bb774733). Specify zero to reset, or one to set, a state.|  
|[in] `dwMask`|A mask of the valid bits of the state specified by the `dwState` parameter. Specify a bitwise combination (OR) of [list view item states](http://msdn.microsoft.com/library/windows/desktop/bb774733).|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 For more information about the `dwState` parameter, see [List View Item States](http://msdn.microsoft.com/library/windows/desktop/bb774733).  
  
 For more information about the `dwMask` parameter, see the `stateMask` member of the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure.  
  
 This method sends the [LVM_SETITEMINDEXSTATE](http://msdn.microsoft.com/library/windows/desktop/bb761190) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setitemposition"></a>  CListCtrl::SetItemPosition  
 Moves an item to a specified position in a list view control.  
  
```  
BOOL SetItemPosition(
    int nItem,  
    POINT pt);
```  
  
### Parameters  
 `nItem`  
 Index of the item whose position is to be set.  
  
 `pt`  
 A [POINT](http://msdn.microsoft.com/library/windows/desktop/dd162805) structure specifying the new position, in view coordinates, of the item's upper-left corner.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 The control must be in icon or small icon view.  
  
 If the list view control has the `LVS_AUTOARRANGE` style, the list view is arranged after the position of the item is set.  
  
### Example  
  See the example for [CListCtrl::GetItemPosition](#clistctrl__getitemposition).  
  
##  <a name="clistctrl__setitemstate"></a>  CListCtrl::SetItemState  
 Changes the state of an item in a list view control.  
  
```  
BOOL SetItemState(
    int nItem,  
    LVITEM* pItem);

 
BOOL SetItemState(
    int nItem,  
    UINT nState,  
    UINT nMask);
```  
  
### Parameters  
 `nItem`  
 Index of the item whose state is to be set.  
  
 `pItem`  
 Address of an [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)]. The structure's **stateMask** member specifies which state bits to change, and the structure's **state** member contains the new values for those bits. The other members are ignored.  
  
 `nState`  
 New values for the state bits. For a list of possible values, see [CListCtrl::GetNextItem](#clistctrl__getnextitem) and the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) state member.  
  
 `nMask`  
 Mask specifying which state bits to change. This value corresponds to the stateMask member of  the [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 An item's "state" is a value that specifies the item's availability, indicates user actions, or otherwise reflects the item's status. A list view control changes some state bits, such as when the user selects an item. An application might change other state bits to disable or hide the item, or to specify an overlay image or state image.  
  
### Example  
  See the example for [CListCtrl::GetTopIndex](#clistctrl__gettopindex).  
  
##  <a name="clistctrl__setitemtext"></a>  CListCtrl::SetItemText  
 Changes the text of a list view item or subitem.  
  
```  
BOOL SetItemText(
    int nItem,  
    int nSubItem,  
    LPCTSTR lpszText);
```  
  
### Parameters  
 `nItem`  
 Index of the item whose text is to be set.  
  
 `nSubItem`  
 Index of the subitem, or zero to set the item label.  
  
 `lpszText`  
 Pointer to a string that contains the new item text.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This method is not intended for use with controls containing the LVS_OWNERDATA window style (in fact, this will cause an assertion in Debug builds). For more information about this list control style, see [List-View Controls Overview](http://msdn.microsoft.com/library/windows/desktop/bb774735).  
  
### Example  
  See the example for [CListCtrl::InsertItem](#clistctrl__insertitem).  
  
##  <a name="clistctrl__setoutlinecolor"></a>  CListCtrl::SetOutlineColor  
 Sets the color of the border of a list-view control if the [LVS_EX_BORDERSELECT](http://msdn.microsoft.com/library/windows/desktop/bb774739) extended window style is set.  
  
```  
COLORREF SetOutlineColor(COLORREF color);
```  
  
### Parameters  
 `color`  
 The new [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) structure containing the outline color.  
  
### Return Value  
 The previous **COLORREF** structure containing the outline color  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETOUTLINECOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761200) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setselectedcolumn"></a>  CListCtrl::SetSelectedColumn  
 Sets the selected column of the list view control.  
  
```  
LRESULT SetSelectedColumn(int iCol);
```  
  
### Parameters  
 *iCol*  
 The index of the column to be selected.  
  
### Return Value  
 The return value is not used.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETSELECTEDCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb761202) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setselectionmark"></a>  CListCtrl::SetSelectionMark  
 Sets the selection mark of a list view control.  
  
```  
int SetSelectionMark(int iIndex);
```  
  
### Parameters  
 `iIndex`  
 The zero-based index of the first item in a multiple selection.  
  
### Return Value  
 The previous selection mark, or -1 if there was no selection mark.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetSelectionMark](http://msdn.microsoft.com/library/windows/desktop/bb775112), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
  See the example for [CListCtrl::GetSelectionMark](#clistctrl__getselectionmark).  
  
##  <a name="clistctrl__settextbkcolor"></a>  CListCtrl::SetTextBkColor  
 Sets the background color of text in a list view control.  
  
```  
BOOL SetTextBkColor(COLORREF cr);
```  
  
### Parameters  
 `cr`  
 A **COLORREF** specifying the new text background color. For information, see [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

 
```cpp
		// Use the 3D button face color for the background.
		COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
		m_myListCtrl.SetTextBkColor(crBkColor);
		ASSERT(m_myListCtrl.GetTextBkColor() == crBkColor);
```

  
##  <a name="clistctrl__settextcolor"></a>  CListCtrl::SetTextColor  
 Sets the text color of a list view control.  
  
```  
BOOL SetTextColor(COLORREF cr);
```  
  
### Parameters  
 `cr`  
 A **COLORREF** specifying the new text color. For information, see [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Example  

 
```cpp
	// Use the window text color for
	// the item text of the list view control.
	COLORREF crTextColor = ::GetSysColor(COLOR_WINDOWTEXT);
	m_myListCtrl.SetTextColor(crTextColor);
	ASSERT(m_myListCtrl.GetTextColor() == crTextColor);
```

  
##  <a name="clistctrl__settileinfo"></a>  CListCtrl::SetTileInfo  
 Sets the information for a tile of the list view control.  
  
```  
BOOL SetTileInfo(PLVTILEINFO pti);
```  
  
### Parameters  
 *pti*  
 A pointer to an [LVTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb774766) structure containing the information to be set.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb761210) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__settileviewinfo"></a>  CListCtrl::SetTileViewInfo  
 Sets information that a list view control uses in tile view.  
  
```  
BOOL SetTileViewInfo(PLVTILEVIEWINFO ptvi);
```  
  
### Parameters  
 `ptvi`  
 A pointer to an [LVTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb774768) structure containing the information to set.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb761212) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__settooltips"></a>  CListCtrl::SetToolTips  
 Sets the tooltip control that the list view control will use to display tooltips.  
  
```  
CToolTipCtrl* SetToolTips(CToolTipCtrl* pWndTip);
```  
  
### Parameters  
 `pWndTip`  
 A pointer to a `CToolTipCtrl` object that the list control will use.  
  
### Return Value  
 A pointer to a [CToolTipCtrl](ctooltipctrl-class.md) object containing the tooltip previously used by the control, or `NULL` if no tooltips were used previously.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [LVM_SETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb761216), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 To not use tooltips, indicate the `LVS_NOTOOLTIPS` style when you create the `CListCtrl` object.  
  
##  <a name="clistctrl__setview"></a>  CListCtrl::SetView  
 Sets the view of the list view control.  
  
```  
DWORD SetView(int iView);
```  
  
### Parameters  
 *iView*  
 The view to be selected.  
  
### Return Value  
 Returns 1 if successful, or -1 otherwise. For example, -1 is returned if the view is invalid.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SETVIEW](http://msdn.microsoft.com/library/windows/desktop/bb761220) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__setworkareas"></a>  CListCtrl::SetWorkAreas  
 Sets the area where icons can be displayed in a list view control.  
  
```  
void SetWorkAreas(
    int nWorkAreas,  
    LPRECT lpRect);
```  
  
### Parameters  
 `nWorkAreas`  
 The number of `RECT` structures (or [CRect](../../atl-mfc-shared/reference/crect-class.md) objects) in the array pointed to by `lpRect`.  
  
 `lpRect`  
 The address of an array of `RECT` structures (or `CRect` objects) that specify the new work areas of the list view control. These areas must be specified in client coordinates. If this parameter is **NULL**, the working area will be set to the client area of the control.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SetWorkAreas](http://msdn.microsoft.com/library/windows/desktop/bb775128), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

 
```cpp
	// Remove all working areas.
	m_myListCtrl.SetWorkAreas(0, NULL);
```

  
##  <a name="clistctrl__sortgroups"></a>  CListCtrl::SortGroups  
 Uses an application-defined comparison function to sort groups by ID within a list view control.  
  
```  
BOOL SortGroups(
    PFNLVGROUPCOMPARE _pfnGroupCompare,  
    LPVOID _plv);
```  
  
### Parameters  
 `_pfnGroupCompare`  
 A pointer to the group comparison function.  
  
 `_plv`  
 A void pointer.  
  
### Return Value  
 Returns `true` on success, `false` on failure.  
  
### Remarks  
 This member function emulates the functionality of the [LVM_SORTGROUPS](http://msdn.microsoft.com/library/windows/desktop/bb761225) message, as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="clistctrl__sortitems"></a>  CListCtrl::SortItems  
 Sorts list view items by using an application-defined comparison function.  
  
```  
BOOL SortItems(
    PFNLVCOMPARE pfnCompare,  
    DWORD_PTR dwData);
```  
  
### Parameters  
 [in] `pfnCompare`  
 Address of the application-defined comparison function.  
  
 The sort operation calls the comparison function each time the relative order of two list items needs to be determined. The comparison function must be either a static member of a class or a stand-alone function that is not a member of any class.  
  
 [in] `dwData`  
 Application-defined value that is passed to the comparison function.  
  
### Return Value  
 `true` if the method successful; otherwise `false`.  
  
### Remarks  
 This method changes the index of each item to reflect the new sequence.  
  
 The comparison function, `pfnCompare`, has the following form:  
  
```  
int CALLBACK CompareFunc(LPARAM lParam1,
    LPARAM lParam2,
    LPARAM lParamSort);
```  
  
 The comparison function must return a negative value if the first item should precede the second, a positive value if the first item should follow the second, or zero if the two items are equal.  
  
 The `lParam1` parameter is the 32-bit value associated with the first item that is compared, and the `lParam2` parameter is the value associated with the second item. These are the values that were specified in the `lParam` member of the items' [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure when they were inserted into the list. The `lParamSort` parameter is the same as the `dwData` value.  
  
 This method sends the [LVM_SORTITEMS](http://msdn.microsoft.com/library/windows/desktop/bb761227) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
 The following is a simple comparison function that results in items being sorted by their `lParam` values.  
  
```cpp
// Sort items by associated lParam
int CALLBACK CListCtrlDlg::MyCompareProc(LPARAM lParam1, LPARAM lParam2, 
	LPARAM lParamSort)
{
	UNREFERENCED_PARAMETER(lParamSort);

	return (int)(lParam1 - lParam2);
}
```
  
```cpp
// Sort the items by passing in the comparison function.
void CListCtrlDlg::Sort()
{
	m_myListCtrl.SortItems(&CListCtrlDlg::MyCompareProc, 0);
}
```
  
##  <a name="clistctrl__sortitemsex"></a>  CListCtrl::SortItemsEx  
 Sorts the items of the current list-view control by using an application-defined comparison function.  
  
```  
BOOL SortItemsEx(
    PFNLVCOMPARE pfnCompare,   
    DWORD_PTR dwData);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pfnCompare`|Address of the application-defined comparison function.<br /><br /> The sort operation calls the comparison function each time the relative order of two list items needs to be determined. The comparison function must be either a static member of a class or a stand-alone function that is not a member of any class.|  
|[in] `dwData`|Application-defined value passed to the comparison function.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 This method changes the index of each item to reflect the new sequence.  
  
 The comparison function, `pfnCompare`, has the following form:  
  
```  
int CALLBACK CompareFunc(LPARAM lParam1,
    LPARAM lParam2,
    LPARAM lParamSort);
```  
  
 This message is like [LVM_SORTITEMS](http://msdn.microsoft.com/library/windows/desktop/bb761227), except for the type of information passed to the comparison function. In [LVM_SORTITEMS](http://msdn.microsoft.com/library/windows/desktop/bb761227), `lParam1` and `lParam2` are the values of the items to compare. In [LVM_SORTITEMSEX](http://msdn.microsoft.com/library/windows/desktop/bb761228), `lParam1` is the current index of the first item to compare and `lParam2` is the current index of the second item. You can send an [LVM_GETITEMTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761055) message to retrieve more information about an item.  
  
 The comparison function must return a negative value if the first item should precede the second, a positive value if the first item should follow the second, or zero if the two items are equal.  
  
> [!NOTE]
>  During the sorting process, the list-view contents are unstable. If the callback function sends any messages to the list-view control other than [LVM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb774953), the results are unpredictable.  
  
 This method sends the [LVM_SORTITEMSEX](http://msdn.microsoft.com/library/windows/desktop/bb761228) message, which is described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  
 The following code example defines a variable, `m_listCtrl`, that is used to access the current list-view control. This variable is used in the next example.  
  
```cpp
public:
	// Variable used to access the list control.
	CListCtrl m_listCtrl; 
```

  
### Example  
 The following code example demonstrates the `SortItemEx` method. In an earlier section of this code example, we created a list-view control that displays two columns titled "ClientID" and "Grade" in a report view. The following code example sorts the table by using the values in the "Grade" column.  
  

```cpp
// The ListCompareFunc() method is a global function used by SortItemEx().
int CALLBACK ListCompareFunc(
							 LPARAM lParam1, 
							 LPARAM lParam2, 
							 LPARAM lParamSort)
{
	CListCtrl* pListCtrl = (CListCtrl*) lParamSort;
	CString    strItem1 = pListCtrl->GetItemText(static_cast<int>(lParam1), 1);
	CString    strItem2 = pListCtrl->GetItemText(static_cast<int>(lParam2), 1);

	int x1 = _tstoi(strItem1.GetBuffer());
	int x2 = _tstoi(strItem2.GetBuffer());
	int result = 0;
	if ((x1 - x2) < 0)
		result = -1;
	else if ((x1 - x2) == 0)
		result = 0;
	else
		result = 1;

	return result;
}

void CCListCtrl_s2Dlg::OnBnClickedButton1()
{
	// SortItemsEx
	m_listCtrl.SortItemsEx( ListCompareFunc, (LPARAM)&m_listCtrl );
}
```

  
##  <a name="clistctrl__subitemhittest"></a>  CListCtrl::SubItemHitTest  
 Determines which list view item, if any, is at a given position.  
  
```  
int SubItemHitTest(LPLVHITTESTINFO pInfo);
```  
  
### Parameters  
 `pInfo`  
 A pointer to the [LVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb774754) structure.  
  
### Return Value  
 The one-based index of the item, or subitem, being tested (if any), or -1 otherwise.  
  
### Remarks  
 This member function implements the behavior of the Win32 macro, [ListView_SubItemHitTest](http://msdn.microsoft.com/library/windows/desktop/bb775135), as described in the [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### Example  

```cpp
void CListCtrlDlg::OnDblClk(NMHDR* pNMHDR, LRESULT* pResult)
{
	UNREFERENCED_PARAMETER(pResult);

	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
	LVHITTESTINFO lvhti;

	// Clear the subitem text the user clicked on.
	lvhti.pt = pia->ptAction;
	m_myListCtrl.SubItemHitTest(&lvhti);

	if (lvhti.flags & LVHT_ONITEMLABEL)
	{
		m_myListCtrl.SetItemText(lvhti.iItem, lvhti.iSubItem, NULL);
	}
}
```

  
##  <a name="clistctrl__update"></a>  CListCtrl::Update  
 Forces the list view control to repaint the item specified by `nItem`.  
  
```  
BOOL Update(int nItem);
```  
  
### Parameters  
 `nItem`  
 Index of the item to be updated.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 This function also arranges the list view control if it has the `LVS_AUTOARRANGE` style.  
  
### Example  
  See the example for [CListCtrl::GetSelectedCount](#clistctrl__getselectedcount).  
  
## See Also  
 [MFC Sample ROWLIST](../../visual-cpp-samples.md)   
 [CWnd Class](cwnd-class.md)   
 [Hierarchy Chart](../hierarchy-chart.md)   
 [CImageList Class](cimagelist-class.md)

