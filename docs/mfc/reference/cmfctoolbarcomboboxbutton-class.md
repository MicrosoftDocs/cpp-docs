---
title: "CMFCToolBarComboBoxButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarComboBoxButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarComboBoxButton class"
ms.assetid: 32fa39f7-8e4e-4f0a-a31d-7b540d969a6c
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
# CMFCToolBarComboBoxButton Class
A toolbar button that contains a combo box control ( [CComboBox Class](../../mfc/reference/ccombobox-class.md)).  
  
## Syntax  
  
```  
class CMFCToolBarComboBoxButton : public CMFCToolBarButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton](#cmfctoolbarcomboboxbutton__cmfctoolbarcomboboxbutton)|Constructs a `CMFCToolBarComboBoxButton`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::AddItem](#cmfctoolbarcomboboxbutton__additem)|Adds an item to the end of the combo box list.|  
|[CMFCToolBarComboBoxButton::AddSortedItem](#cmfctoolbarcomboboxbutton__addsorteditem)|Adds an item to the combo box list. The order of items in the list is specified by `Compare`.|  
|[CMFCToolBarComboBoxButton::Compare](#cmfctoolbarcomboboxbutton__compare)|Compares two items. Called to sort items that `AddSortedItems` adds to the combo box list.|  
|[CMFCToolBarComboBoxButton::CreateEdit](#cmfctoolbarcomboboxbutton__createedit)|Creates a new edit control for the combo box button.|  
|[CMFCToolBarComboBoxButton::DeleteItem](#cmfctoolbarcomboboxbutton__deleteitem)|Deletes an item from the combo box list.|  
|[CMFCToolBarComboBoxButton::FindItem](#cmfctoolbarcomboboxbutton__finditem)|Returns the index of the item that contains a specified string.|  
|[CMFCToolBarComboBoxButton::GetByCmd](#cmfctoolbarcomboboxbutton__getbycmd)|Returns a pointer to the combo box button with a specified command ID.|  
|[CMFCToolBarComboBoxButton::GetComboBox](#cmfctoolbarcomboboxbutton__getcombobox)|Returns a pointer to the combo box control that is embedded in the combo box button.|  
|[CMFCToolBarComboBoxButton::GetCount](#cmfctoolbarcomboboxbutton__getcount)|Returns the number of items in the combo box list.|  
|[CMFCToolBarComboBoxButton::GetCountAll](#cmfctoolbarcomboboxbutton__getcountall)|Finds the combo box button that has a specified command ID. Returns the number of items in the combo box list of that button.|  
|[CMFCToolBarComboBoxButton::GetCurSel](#cmfctoolbarcomboboxbutton__getcursel)|Returns the index of the selected item in the combo box list.|  
|[CMFCToolBarComboBoxButton::GetCurSelAll](#cmfctoolbarcomboboxbutton__getcurselall)|Finds the combo box button that has a specified command ID, and returns the index of the selected item in the combo box list of that button.|  
|[CMFCToolBarComboBoxButton::GetEditCtrl](#cmfctoolbarcomboboxbutton__geteditctrl)|Returns a pointer to the edit control that is embedded in the combo box button.|  
|[CMFCToolBarComboBoxButton::GetItem](#cmfctoolbarcomboboxbutton__getitem)|Returns the string that is associated with a specified index in the combo box list.|  
|[CMFCToolBarComboBoxButton::GetItemAll](#cmfctoolbarcomboboxbutton__getitemall)|Finds the combo box button that has a specified command ID, and returns the string that is associated with an index in the combo box list of that button.|  
|[CMFCToolBarComboBoxButton::GetItemData](#cmfctoolbarcomboboxbutton__getitemdata)|Returns the 32-bit value that is associated with a specified index in the combo box list.|  
|[CMFCToolBarComboBoxButton::GetItemDataAll](#cmfctoolbarcomboboxbutton__getitemdataall)|Finds the combo box button that has a specified command ID, and returns the 32-bit value that is associated with an index in the combo box list of that button.|  
|[CMFCToolBarComboBoxButton::GetItemDataPtrAll](#cmfctoolbarcomboboxbutton__getitemdataptrall)|Finds the combo box button that has a specified command ID. Retrieves the 32-bit value that is associated an index in the combo box list of that button, and returns the 32-bit value as a pointer.|  
|[CMFCToolBarComboBoxButton::GetText](#cmfctoolbarcomboboxbutton__gettext)|Returns the text from the edit control of the combo box.|  
|[CMFCToolBarComboBoxButton::GetTextAll](#cmfctoolbarcomboboxbutton__gettextall)|Finds the combo box button that has a specified command ID, and returns the text from edit control of that button.|  
|[CMFCToolBarComboBoxButton::IsCenterVert](#cmfctoolbarcomboboxbutton__iscentervert)|Determines whether combo box buttons in the application are centered or aligned with the top of the toolbar.|  
|[CMFCToolBarComboBoxButton::IsFlatMode](#cmfctoolbarcomboboxbutton__isflatmode)|Determines whether combo box buttons in the application have a flat appearance.|  
|[CMFCToolBarComboBoxButton::RemoveAllItems](#cmfctoolbarcomboboxbutton__removeallitems)|Removes all items from the list box and edit control of the combo box.|  
|[CMFCToolBarComboBoxButton::SelectItem](#cmfctoolbarcomboboxbutton__selectitem)|Selects an item in the combo box according to its index, 32-bit value, or string, and notifies the combo box control about the selection.|  
|[CMFCToolBarComboBoxButton::SelectItemAll](#cmfctoolbarcomboboxbutton__selectitemall)|Finds the combo box button that has a specified command ID. Calls `SelectItem` to select an item in the combo box of that button according to its string, index, or 32-bit value.|  
|[CMFCToolBarComboBoxButton::SetCenterVert](#cmfctoolbarcomboboxbutton__setcentervert)|Specifies whether combo box buttons in the application are centered vertically or aligned with the top of the toolbar.|  
|[CMFCToolBarComboBoxButton::SetDropDownHeight](#cmfctoolbarcomboboxbutton__setdropdownheight)|Sets the height of the drop-down list box.|  
|[CMFCToolBarComboBoxButton::SetFlatMode](#cmfctoolbarcomboboxbutton__setflatmode)|Specifies whether combo box buttons in the application have a flat appearance.|  
  
## Remarks  
 To add a combo box button to a toolbar, follow these steps:  
  
 1. Reserve a dummy resource ID for the button in the parent toolbar resource.  
  
 2. Construct a `CMFCToolBarComboBoxButton` object.  
  
 3. In the message handler that processes the `AFX_WM_RESETTOOLBAR` message, replace the dummy button with the new combo box button by using [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton).  
  
 For more information, see [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md). For an example of a combo box toolbar button, see the example project VisualStudioDemo.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCToolBarComboBoxButton` class. The example shows how to enable the edit and combo boxes, set the vertical position of combo box buttons in the application, set the height of the list box when it is dropped down, set the flat style appearance of combo box buttons in the application, and set the text in the edit box of the combo box button. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#36](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_1.cpp)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#37](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
## Requirements  
 **Header:** afxtoolbarcomboboxbutton.h  
  
##  <a name="cmfctoolbarcomboboxbutton__additem"></a>  CMFCToolBarComboBoxButton::AddItem  
 Appends a unique item to the list box.  
  
```  
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### Parameters  
 [in] `lpszItem`  
 The text of the item to add to the list box.  
  
 [in] `dwData`  
 The data associated with the item to add to the list box.  
  
### Return Value  
 The index of the last item in the list box.  
  
### Remarks  
 Do not use this method when the list box style is sorted.  
  
 If the item text is already in the list box, the new data is stored with the existing item. The search for the item is case sensitive.  
  
##  <a name="cmfctoolbarcomboboxbutton__addsorteditem"></a>  CMFCToolBarComboBoxButton::AddSortedItem  
 Adds an item to the list box in the order that is defined by the [Compare](#cmfctoolbarcomboboxbutton__compare) method.  
  
```  
virtual INT_PTR AddSortedItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### Parameters  
 [in] `lpszItem`  
 The text of the item to add to the list box.  
  
 [in] `dwData`  
 The data associated with the item to add to the list box.  
  
### Return Value  
 Index of the item that was added to the list box.  
  
### Remarks  
 Use this function to add items to the list box in a specific order.  
  
##  <a name="cmfctoolbarcomboboxbutton__canbestretched"></a>  CMFCToolBarComboBoxButton::CanBeStretched  
 Indicates whether the combo box button size can change.  
  
```  
virtual BOOL CanBeStretched() const;

 
```  
  
### Return Value  
 Returns `TRUE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__cmfctoolbarcomboboxbutton"></a>  CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton  
 Constructs a [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) object.  
  
```  
CMFCToolBarComboBoxButton(
    UINT uiID,  
    int iImage,  
    DWORD dwStyle=CBS_DROPDOWNLIST,  
    int iWidth=0);
```  
  
### Parameters  
 [in] `uiID`  
 The command ID of the new button.  
  
 [in] `iImage`  
 The image index of the image associated with the new button.  
  
 [in] `dwStyle`  
 The style of the new button.  
  
 [in] `iWidth`  
 The width, in pixels, of the new button.  
  
### Remarks  
 The default width is 150 pixels.  
  
 For a list of toolbar button styles see [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md)  
  
##  <a name="cmfctoolbarcomboboxbutton__cleardata"></a>  CMFCToolBarComboBoxButton::ClearData  
 Deletes user-defined data.  
  
```  
virtual void ClearData();
```  
  
### Remarks  
 By default this method does nothing. Override this method in a derived class if you want to delete any user-defined data.  
  
##  <a name="cmfctoolbarcomboboxbutton__compare"></a>  CMFCToolBarComboBoxButton::Compare  
 Compares two strings.  
  
```  
virtual int Compare(
    LPCTSTR lpszItem1,  
    LPCTSTR lpszItem2);
```  
  
### Parameters  
 [in] `lpszItem1`  
 The first string to compare.  
  
 [in] `lpszItem2`  
 The second string to compare.  
  
### Return Value  
 A value that indicates the case-sensitive lexicographic relationship between the strings. The following table lists the possible values:  
  
|Value|Description|  
|-----------|-----------------|  
|\<0|The first string is less than the second.|  
|0|The first string equals the second.|  
|>0|The first string is greater than the second.|  
  
### Remarks  
 Override this method to change how items are sorted in the list box.  
  
 The comparison is case-sensitive.  
  
 This method is called only from the [AddSortedItem](#cmfctoolbarcomboboxbutton__addsorteditem) method.  
  
##  <a name="cmfctoolbarcomboboxbutton__copyfrom"></a>  CMFCToolBarComboBoxButton::CopyFrom  
 Copies the state of the specified `CMFCToolBarComboBoxButton` to the current object.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### Parameters  
 [in] `src`  
 The source `CMFCToolBarComboBoxButton` object.  
  
##  <a name="cmfctoolbarcomboboxbutton__createcombo"></a>  CMFCToolBarComboBoxButton::CreateCombo  
 Creates a new combo box for the combo box button.  
  
```  
virtual CComboBox* CreateCombo(
    CWnd* pWndParent,  
    const CRect& rect);
```  
  
### Parameters  
 [in] `pWndParent`  
 A pointer to the parent window of the button.  
  
 [in] `rect`  
 Bounding rectangle of the combo box.  
  
### Return Value  
 A pointer to the new combo box if the method was successful; otherwise, `NULL`.  
  
##  <a name="cmfctoolbarcomboboxbutton__createedit"></a>  CMFCToolBarComboBoxButton::CreateEdit  
 Creates a new edit box for the combo box button.  
  
```  
virtual CMFCToolBarComboBoxEdit* CreateEdit(
    CWnd* pWndParent,  
    const CRect& rect,  
    DWORD dwEditStyle);
```  
  
### Parameters  
 [in] `pWndParent`  
 A pointer to the parent window of the button.  
  
 [in] `rect`  
 Bounding rectangle of the new edit box.  
  
 [in] `dwEditStyle`  
 Control style of the new edit box.  
  
### Return Value  
 A pointer to the new edit box if the method was successful; otherwise, `NULL`.  
  
### Remarks  
 The framework calls this method when it creates a new edit box for a combo box button. Override this method to change how [CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md) is created.  
  
##  <a name="cmfctoolbarcomboboxbutton__deleteitem"></a>  CMFCToolBarComboBoxButton::DeleteItem  
 Deletes a specified item from the list box.  
  
```  
BOOL DeleteItem(int iIndex);

 
BOOL DeleteItem(DWORD_PTR dwData);

 
BOOL DeleteItem(LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of the item to be deleted.  
  
 [in] `dwData`  
 The data associated with the item to be deleted.  
  
 [in] `lpszText`  
 The text of the item to be deleted. If there are multiple items with the same text, the first item is deleted.  
  
### Return Value  
 `TRUE` if the item was located and successfully deleted; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__duplicatedata"></a>  CMFCToolBarComboBoxButton::DuplicateData  
 Duplicates user-defined data.  
  
```  
virtual void DuplicateData();
```  
  
### Remarks  
 By default this method does nothing. Override this method in a derived class if you want to copy any user-defined data.  
  
##  <a name="cmfctoolbarcomboboxbutton__enablewindow"></a>  CMFCToolBarComboBoxButton::EnableWindow  
 Enables or disables the edit and combo boxes.  
  
```  
virtual void EnableWindow(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the edit and combo boxes; `FALSE` to disable the edit and combo boxes.  
  
### Remarks  
 When disabled, the controls cannot become active and cannot accept user input.  
  
##  <a name="cmfctoolbarcomboboxbutton__exporttomenubutton"></a>  CMFCToolBarComboBoxButton::ExportToMenuButton  
 Copies a string from the application string table to the specified menu using the combo box button command ID.  
  
```  
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;

 
```  
  
### Parameters  
 [out] `menuButton`  
 Reference to a menu button.  
  
### Return Value  
 Always `TRUE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__finditem"></a>  CMFCToolBarComboBoxButton::FindItem  
 Returns the index of the first item in the list box that contains a specified string.  
  
```  
int FindItem(LPCTSTR lpszText) const;

 
```  
  
### Parameters  
 [in] `lpszText`  
 The text for which to search in the list box.  
  
### Return Value  
 The index of the item; or `CB_ERR` if the item is not found.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__getbycmd"></a>  CMFCToolBarComboBoxButton::GetByCmd  
 Gets a pointer to the combo box button that has a specified command ID.  
  
```  
static CMFCToolBarComboBoxButton* GetByCmd(
    UINT uiCmd,  
    BOOL bIsFocus=FALSE);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of a combo box button.  
  
 [in] `bIsFocus`  
 `TRUE` to search only focused buttons; `FALSE` to search all buttons.  
  
### Return Value  
 A pointer to a combo box button; or `NULL` if the button is not found.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__getcombobox"></a>  CMFCToolBarComboBoxButton::GetComboBox  
 Returns a pointer to the combo box in the combo box button.  
  
```  
CComboBox* GetComboBox() const;

 
```  
  
### Return Value  
 A pointer to the [CComboBox Class](../../mfc/reference/ccombobox-class.md) object if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__getcontextmenuid"></a>  CMFCToolBarComboBoxButton::GetContextMenuID  
 Gets the shortcut menu resource ID for the combo box button.  
  
```  
UINT GetContextMenuID();
```  
  
### Return Value  
 The shortcut menu resource ID.  
  
##  <a name="cmfctoolbarcomboboxbutton__getcount"></a>  CMFCToolBarComboBoxButton::GetCount  
 Returns the number of items in the list box.  
  
```  
INT_PTR GetCount() const;

 
```  
  
### Return Value  
 The number of items in the list box.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__getcountall"></a>  CMFCToolBarComboBoxButton::GetCountAll  
 Gets the number of items in the list box of a combo box button that has a specified command ID.  
  
```  
static int GetCountAll(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of a combo box button.  
  
### Return Value  
 The number of items in the list box; otherwise, `CB_ERR` if the combo box button is not found.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__getcursel"></a>  CMFCToolBarComboBoxButton::GetCurSel  
 Gets the index of the currently selected item in the list box.  
  
```  
int GetCurSel() const;

 
```  
  
### Return Value  
 The index of the currently selected item in the list box; or `CB_ERR` if no item is selected.  
  
### Remarks  
 The list box index is zero-based.  
  
##  <a name="cmfctoolbarcomboboxbutton__getcurselall"></a>  CMFCToolBarComboBoxButton::GetCurSelAll  
 Returns the index of the currently selected item in the list box of a combo box button that has a specified command ID.  
  
```  
static int GetCurSelAll(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of a combo box button.  
  
### Return Value  
 The index of the currently selected item in the list box; otherwise, `CB_ERR` if no item is selected or a combo box button is not found.  
  
### Remarks  
 The list box index is zero-based.  
  
##  <a name="cmfctoolbarcomboboxbutton__geteditctrl"></a>  CMFCToolBarComboBoxButton::GetEditCtrl  
 Returns a pointer to the edit box in the combo box button.  
  
```  
virtual CEdit* GetEditCtrl();
```  
  
### Return Value  
 A pointer to the edit box if the method was successful; otherwise, `NULL`.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__gethwnd"></a>  CMFCToolBarComboBoxButton::GetHwnd  
 Returns the window handle for the combo box.  
  
```  
virtual HWND GetHwnd();
```  
  
### Return Value  
 The window handle, or `NULL` if the combo box is not associated with a window object.  
  
##  <a name="cmfctoolbarcomboboxbutton__getitem"></a>  CMFCToolBarComboBoxButton::GetItem  
 Returns the string associated with an item at a specified index in the list box.  
  
```  
LPCTSTR GetItem(int iIndex=-1) const;

 
```  
  
### Parameters  
 [in] `iIndex`  
 Zero-based index of an item in the list box.  
  
### Return Value  
 A pointer to the string that is associated with the item; otherwise, `NULL` if the index parameter is invalid, or if the index parameter is -1 and there is no selected item in the combo box.  
  
### Remarks  
 An index parameter of -1 returns the string of the item that is currently selected.  
  
##  <a name="cmfctoolbarcomboboxbutton__getitemall"></a>  CMFCToolBarComboBoxButton::GetItemAll  
 Returns the string associated with an item at a specified index in the list box of a combo box button that has a specified command ID.  
  
```  
static LPCTSTR GetItemAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of a combo box button.  
  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### Return Value  
 A pointer to the item's string if the method was successful; otherwise, `NULL` if the index is invalid, a combo box button is not found, or if index is -1 and there is no selected item in the combo box.  
  
### Remarks  
 An index value of -1 returns the string of the item that is currently selected.  
  
##  <a name="cmfctoolbarcomboboxbutton__getitemdata"></a>  CMFCToolBarComboBoxButton::GetItemData  
 Returns the data associated with an item at a specific index in the list box.  
  
```  
DWORD_PTR GetItemData(int iIndex=-1) const;

 
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### Return Value  
 The data associated with the item; or 0 if the item does not exist.  
  
### Remarks  
 An index parameter of -1 returns the data associated with the currently selected item.  
  
##  <a name="cmfctoolbarcomboboxbutton__getitemdataall"></a>  CMFCToolBarComboBoxButton::GetItemDataAll  
 Returns the data associated with an item at a specific index in the list box of a combo box button that has a specific command ID.  
  
```  
static DWORD_PTR GetItemDataAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of a combo box button.  
  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### Return Value  
 The data associated with the item if the method was successful; otherwise, 0 if the specified index is not valid, or CB_ERR if the combo box button is not found.  
  
### Remarks  
 An index parameter of -1 returns the data associated with the currently selected item.  
  
##  <a name="cmfctoolbarcomboboxbutton__getitemdataptrall"></a>  CMFCToolBarComboBoxButton::GetItemDataPtrAll  
 Returns the data associated with an item at a specific index in the list box of a combo box button that has a specific command ID. This data is returned as a pointer.  
  
```  
static void* GetItemDataPtrAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the combo box button.  
  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### Return Value  
 A pointer associated with the item if the method was successful; otherwise, -1 if an error occurs, or `NULL` if the combo box button is not found.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__getprompt"></a>  CMFCToolBarComboBoxButton::GetPrompt  
 Returns the prompt string for the combo box button.  
  
```  
virtual CString GetPrompt() const;

 
```  
  
### Return Value  
 The prompt string.  
  
### Remarks  
 This method is currently not implemented.  
  
##  <a name="cmfctoolbarcomboboxbutton__gettext"></a>  CMFCToolBarComboBoxButton::GetText  
 Gets the text in the edit box.  
  
```  
LPCTSTR GetText() const;

 
```  
  
### Return Value  
 The text in the edit box.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__gettextall"></a>  CMFCToolBarComboBoxButton::GetTextAll  
 Gets the text in the edit box of a combo box button that has a specified command ID.  
  
```  
static LPCTSTR GetTextAll(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of a specific combo box button.  
  
### Return Value  
 The text in the edit box if the method was successful; otherwise, `NULL`.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__hasfocus"></a>  CMFCToolBarComboBoxButton::HasFocus  
 Indicates whether the combo box currently has the focus.  
  
```  
virtual BOOL HasFocus() const;

 
```  
  
### Return Value  
 `TRUE` if the combo box currently has the focus; otherwise, `FALSE`.  
  
### Remarks  
 This method also returns `TRUE` if any child window of the combo box currently has the focus.  
  
##  <a name="cmfctoolbarcomboboxbutton__iscentervert"></a>  CMFCToolBarComboBoxButton::IsCenterVert  
 Returns the vertical position of combo box buttons in the application.  
  
```  
static BOOL IsCenterVert();
```  
  
### Return Value  
 `TRUE` if the buttons are centered; `FALSE` if the buttons are aligned at the top.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__isflatmode"></a>  CMFCToolBarComboBoxButton::IsFlatMode  
 Returns the flat style appearance of combo box buttons in the application.  
  
```  
static BOOL IsFlatMode();
```  
  
### Return Value  
 `TRUE` if the buttons have a flat style; otherwise, `FALSE`.  
  
### Remarks  
 The default flat style for combo box buttons is `FALSE.`  
  
##  <a name="cmfctoolbarcomboboxbutton__isownerof"></a>  CMFCToolBarComboBoxButton::IsOwnerOf  
 Indicates whether the specified handle is associated with the combo box button, or one of its children.  
  
```  
virtual BOOL IsOwnerOf(HWND hwnd);
```  
  
### Parameters  
 [in] `hwnd`  
 A window handle.  
  
### Return Value  
 `TRUE` if the handle is assocated with the combo box button, or one of its children; otherwise, `FALSE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__isribbonbutton"></a>  CMFCToolBarComboBoxButton::IsRibbonButton  
 Indicates whether the combo box button resides on a ribbon panel.  
  
```  
BOOL IsRibbonButton() const;

 
```  
  
### Return Value  
 Always `FALSE`.  
  
### Remarks  
 By default, this method always returns `FALSE`, which means the combo box button is never displayed on a ribbon panel.  
  
##  <a name="cmfctoolbarcomboboxbutton__iswindowvisible"></a>  CMFCToolBarComboBoxButton::IsWindowVisible  
 Returns the visibility state of the combo box button.  
  
```  
virtual BOOL IsWindowVisible();
```  
  
### Return Value  
 The visibility state of the combo box button.  
  
##  <a name="cmfctoolbarcomboboxbutton__notifycommand"></a>  CMFCToolBarComboBoxButton::NotifyCommand  
 Indicates whether the combo box button processes the  message.  
  
```  
virtual BOOL NotifyCommand(int iNotifyCode);
```  
  
### Parameters  
 [in] `iNotifyCode`  
 The notification message that is associated with the command.  
  
### Return Value  
 Whether the combo box button processes the  message.  
  
##  <a name="cmfctoolbarcomboboxbutton__onaddtocustomizepage"></a>  CMFCToolBarComboBoxButton::OnAddToCustomizePage  
 Called by the framework when the button is added to the **Customize** dialog box.  
  
```  
virtual void OnAddToCustomizePage();
```  
  
##  <a name="cmfctoolbarcomboboxbutton__oncalculatesize"></a>  CMFCToolBarComboBoxButton::OnCalculateSize  
 Called by the framework to calculate the size of the button.  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the combo box button.  
  
 [in] `sizeDefault`  
 The default size of the combo box button.  
  
 [in] `bHorz`  
 The dock state of the parent toolbar. `TRUE` when the toolbar is docked horizontally and `FALSE` when the toolbar is docked vertically.  
  
### Return Value  
 A `SIZE` structure that contains the dimensions of the combo box button, in pixels.  
  
##  <a name="cmfctoolbarcomboboxbutton__onchangeparentwnd"></a>  CMFCToolBarComboBoxButton::OnChangeParentWnd  
 Called by the framework when the combo box button is inserted into a new toolbar.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### Parameters  
 [in] `pWndParent`  
 Pointer to the new parent toolbar.  
  
##  <a name="cmfctoolbarcomboboxbutton__onclick"></a>  CMFCToolBarComboBoxButton::OnClick  
 Called by the framework when the user clicks the combo box button.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### Parameters  
 [in] `pWnd`  
 Pointer to the parent window of the combo box button.  
  
 [in] `bDelay`  
 Reserved for use in a derived class.  
  
### Return Value  
 `TRUE` if the method handles the event; otherwise, `FALSE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__onctlcolor"></a>  CMFCToolBarComboBoxButton::OnCtlColor  
 Called by the framework when the user changes the parent toolbar color to set the combo box button color.  
  
```  
virtual HBRUSH OnCtlColor(
    CDC* pDC,  
    UINT nCtlColor);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the combo box button.  
  
 [in] `nCtlColor`  
 Unused.  
  
### Return Value  
 Handle to the brush that the framework uses to paint the background of the combo box button.  
  
### Remarks  
 This method also sets the combo box button text color.  
  
##  <a name="cmfctoolbarcomboboxbutton__ondraw"></a>  CMFCToolBarComboBoxButton::OnDraw  
 Called by the framework to draw the combo box button by using the specified styles and options.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    CMFCToolBarImages* pImages,  
    BOOL bHorz = TRUE,  
    BOOL bCustomizeMode = FALSE,  
    BOOL bHighlight = FALSE,  
    BOOL bDrawBorder = TRUE,  
    BOOL bGrayDisabledButtons = TRUE);
```  
  
### Parameters  
 [in] `Pdc`  
 The device context that displays the button.  
  
 [in] `rect`  
 The bounding rectangle of the button.  
  
 [in] `pImages`  
 The collection of images that is associated with the button.  
  
 [in] `bHorz`  
 The dock state of the parent toolbar. `TRUE` when the toolbar is docked horizontally and `FALSE` when the toolbar is docked vertically.  
  
 [in] `bCustomizeMode`  
 Whether the application is in customization mode.  
  
 [in] `bHighlight`  
 Whether to draw the combo box button highlighted.  
  
 [in] `bDrawBorder`  
 Whether to draw the combo box button with a border.  
  
 [in] `bGrayDisabledButtons`  
 `TRUE` to draw shaded disabled buttons; `FALSE` to use the disabled images collection.  
  
##  <a name="cmfctoolbarcomboboxbutton__ondrawoncustomizelist"></a>  CMFCToolBarComboBoxButton::OnDrawOnCustomizeList  
 Called by the framework to draw the combo box button in the **Commands** pane of the **Customize** dialog box.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the combo box button.  
  
 [in] `rect`  
 The bounding rectangle of the combo box button.  
  
 [in] `bSelected`  
 `TRUE` if the combo box button is selected; otherwise, `FALSE`.  
  
### Return Value  
 The width, in pixels, of the combo box button.  
  
##  <a name="cmfctoolbarcomboboxbutton__onglobalfontschanged"></a>  CMFCToolBarComboBoxButton::OnGlobalFontsChanged  
 Called by the framework to set the combo box button font when the application font changes.  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
##  <a name="cmfctoolbarcomboboxbutton__onmove"></a>  CMFCToolBarComboBoxButton::OnMove  
 Called by the framework to change the location of the combo box button when the parent toolbar moves.  
  
```  
virtual void OnMove();
```  
  
##  <a name="cmfctoolbarcomboboxbutton__onshow"></a>  CMFCToolBarComboBoxButton::OnShow  
 Called by the framework when the combo box button is hidden or displayed.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 Whether to hide or display the combo box button.  
  
##  <a name="cmfctoolbarcomboboxbutton__onsize"></a>  CMFCToolBarComboBoxButton::OnSize  
 Called by the framework to change the size of the combo box button when the parent toolbar changes size.  
  
```  
virtual void OnSize(int iSize);
```  
  
### Parameters  
 [in] `iSize`  
 The new width of the combo box button.  
  
##  <a name="cmfctoolbarcomboboxbutton__onupdatetooltip"></a>  CMFCToolBarComboBoxButton::OnUpdateToolTip  
 Called by the framework when the user changes the tool tip for the combo box button.  
  
```  
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,  
    int iButtonIndex,  
    CToolTipCtrl& wndToolTip,  
    CString& str);
```  
  
### Parameters  
 [in] `pWndParent`  
 Pointer to the parent window for the combo box button.  
  
 [in] `iButtonIndex`  
 ID of the combo box button.  
  
 [in] `wndToolTip`  
 The tool tip to associate with the combo box button.  
  
 [in] `str`  
 The tool tip text.  
  
### Return Value  
 `TRUE` if the method handles the event; otherwise, `FALSE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__removeallitems"></a>  CMFCToolBarComboBoxButton::RemoveAllItems  
 Deletes all items from the list and edit boxes.  
  
```  
void RemoveAllItems();
```  
  
### Remarks  
 Removes all items from the list box and edit control of a combo box.  
  
##  <a name="cmfctoolbarcomboboxbutton__selectitem"></a>  CMFCToolBarComboBoxButton::SelectItem  
 Selects an item in the list box.  
  
```  
BOOL SelectItem(
    int iIndex,  
    BOOL bNotify=TRUE);

 
BOOL SelectItem(
    DWORD_PTR dwData);

 
BOOL SelectItem(
    LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
 [in] `bNotify`  
 `TRUE` to notify the combo box button of the selection; otherwise `FALSE`.  
  
 [in] `dwData`  
 The data associated with an item in the list box.  
  
 [in] `lpszText`  
 The text of an item in the list box.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__selectitemall"></a>  CMFCToolBarComboBoxButton::SelectItemAll  
 Selects an item in the list box of a combo box button that has a specified command ID.  
  
```  
static BOOL SelectItemAll(
    UINT uiCmd,  
    int iIndex);

 
static BOOL SelectItemAll(
    UINT uiCmd,  
    DWORD_PTR dwData);

 
static BOOL SelectItemAll(
    UINT uiCmd,  
    LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the combo box button that contains the list box.  
  
 [in] `iIndex`  
 The zero-based index of the item in the list box. A value of -1 removes any current selection in the list box and clears the edit box.  
  
 [in] `dwData`  
 The data of an item in the list box.  
  
 [in] `lpszText`  
 The text of an item in the list box.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbarcomboboxbutton__serialize"></a>  CMFCToolBarComboBoxButton::Serialize  
 Reads this object from an archive or writes it to an archive.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in, out] `ar`  
 The `CArchive` object to serialize.  
  
### Remarks  
 Settings in the `CArchive` object determine whether this method reads or writes to the archive.  
  
##  <a name="cmfctoolbarcomboboxbutton__setaccdata"></a>  CMFCToolBarComboBoxButton::SetACCData  
 Populates the specified `CAccessibilityData` object by using accessibility data from the combo box button.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### Parameters  
 [in] `pParent`  
 The parent window of the combo box button.  
  
 [out] `data`  
 A `CAccessibilityData` object that receives the accessibility data from the combo box button.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__setcentervert"></a>  CMFCToolBarComboBoxButton::SetCenterVert  
 Sets the vertical position of combo box buttons in the application.  
  
```  
static void SetCenterVert(BOOL bCenterVert=TRUE);
```  
  
### Parameters  
 [in] `bCenterVert`  
 `TRUE` to center the combo box button in the toolbar; `FALSE` to align the combo box button to the top of the toolbar.  
  
### Remarks  
 By default, combo box buttons are aligned to the top.  
  
##  <a name="cmfctoolbarcomboboxbutton__setcontextmenuid"></a>  CMFCToolBarComboBoxButton::SetContextMenuID  
 Sets the shortcut menu resource ID for the combo box button.  
  
```  
void SetContextMenuID(UINT uiResID);
```  
  
### Parameters  
 [in] `uiResID`  
 The shortcut menu resource ID.  
  
##  <a name="cmfctoolbarcomboboxbutton__setdropdownheight"></a>  CMFCToolBarComboBoxButton::SetDropDownHeight  
 Sets the height of the list box when it is dropped down.  
  
```  
void SetDropDownHeight(int nHeight);
```  
  
### Parameters  
 [in] `nHeight`  
 The height, in pixels, of the list box.  
  
### Remarks  
 The default height is 150 pixels.  
  
##  <a name="cmfctoolbarcomboboxbutton__setflatmode"></a>  CMFCToolBarComboBoxButton::SetFlatMode  
 Sets the flat style appearance of combo box buttons in the application.  
  
```  
static void SetFlatMode(BOOL bFlat=TRUE);
```  
  
### Parameters  
 [in] `bFlat`  
 `TRUE` for a flat style appearance; otherwise `FALSE`.  
  
### Remarks  
 The default flat style for combo box buttons is `FALSE`.  
  
##  <a name="cmfctoolbarcomboboxbutton__setstyle"></a>  CMFCToolBarComboBoxButton::SetStyle  
 Sets the specified style for the combo box button and redraws the control if it is not disabled.  
  
```  
virtual void SetStyle(UINT nStyle);
```  
  
### Parameters  
 [in] `nStyle`  
 A bitwise combination (OR) of toolbar styles.  
  
### Remarks  
 For a list of toolbar button styles see [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md)  
  
##  <a name="cmfctoolbarcomboboxbutton__settext"></a>  CMFCToolBarComboBoxButton::SetText  
 Sets the text in the edit box of the combo box button.  
  
```  
void SetText(LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `lpszText`  
 Pointer to a string that that contains the text for the edit box.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton)   
 [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)



