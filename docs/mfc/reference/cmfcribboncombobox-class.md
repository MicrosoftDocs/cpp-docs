---
title: "CMFCRibbonComboBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonComboBox class"
ms.assetid: 9b29a6a4-cf17-4152-9b13-0bf90784b30d
caps.latest.revision: 35
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
# CMFCRibbonComboBox Class
The `CMFCRibbonComboBox` class implements a combo box control that you can add to a ribbon bar, a ribbon panel, or a ribbon popup menu.  
  
## Syntax  
  
```  
class CMFCRibbonComboBox : public CMFCRibbonEdit  
```  
  
## Members  
  
### Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonComboBox::CMFCRibbonComboBox](#cmfcribboncombobox__cmfcribboncombobox)|Constructs a CMFCRibbonComboBox object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonComboBox::AddItem](#cmfcribboncombobox__additem)|Appends a unique item to the list box.|  
|[CMFCRibbonComboBox::DeleteItem](#cmfcribboncombobox__deleteitem)|Deletes a specified item from the list box.|  
|[CMFCRibbonComboBox::EnableDropDownListResize](#cmfcribboncombobox__enabledropdownlistresize)|Specifies whether the list box can change size when it drops down.|  
|[CMFCRibbonComboBox::FindItem](#cmfcribboncombobox__finditem)|Returns the index of the first item in the list box that matches a specified string.|  
|[CMFCRibbonComboBox::GetCount](#cmfcribboncombobox__getcount)|Returns the number of items in the list box.|  
|[CMFCRibbonComboBox::GetCurSel](#cmfcribboncombobox__getcursel)|Gets the index of the currently selected item in the list box.|  
|[CMFCRibbonComboBox::GetDropDownHeight](#cmfcribboncombobox__getdropdownheight)|Gets the height of the list box when the list box is dropped down.|  
|[CMFCRibbonComboBox::GetIntermediateSize](#cmfcribboncombobox__getintermediatesize)|Returns the size of the combo box as displayed in intermediate mode.|  
|[CMFCRibbonComboBox::GetItem](#cmfcribboncombobox__getitem)|Returns the string associated with an item at a specified index in the list box.|  
|[CMFCRibbonComboBox::GetItemData](#cmfcribboncombobox__getitemdata)|Returns the data associated with an item at a specified index in the list box.|  
|[CMFCRibbonComboBox::HasEditBox](#cmfcribboncombobox__haseditbox)|Indicates whether the control contains an edit box.|  
|[CMFCRibbonComboBox::IsResizeDropDownList](#cmfcribboncombobox__isresizedropdownlist)|Indicates whether or not the list box can be resized.|  
|[CMFCRibbonComboBox::OnSelectItem](#cmfcribboncombobox__onselectitem)|Called by the framework when the user selects an item in the list box.|  
|[CMFCRibbonComboBox::RemoveAllItems](#cmfcribboncombobox__removeallitems)|Deletes all items from the list box and clears the edit box.|  
|[CMFCRibbonComboBox::SelectItem](#cmfcribboncombobox__selectitem)|Selects an item in the list box.|  
|[CMFCRibbonComboBox::SetDropDownHeight](#cmfcribboncombobox__setdropdownheight)|Sets the height of the list box when it is dropped down.|  
  
## Remarks  
 The ribbon combo box consists of a list box combined with either a static label or label that can be edited by the user. You must specify which type you want when you create your ribbon combo box.  
  
## Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonComboBox` class, add an item to the combo box, select an item in the combo box, and add a combo box to a panel.  
  
 [!code-cpp[NVC_MFC_RibbonApp#11](../../mfc/reference/codesnippet/cpp/cmfcribboncombobox-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)  
  
## Requirements  
 **Header:** afxribboncombobox.h  
  
##  <a name="cmfcribboncombobox__additem"></a>  CMFCRibbonComboBox::AddItem  
 Appends a unique item to the list box.  
  
```  
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### Parameters  
 [in] `lpszItem`  
 The string of the item to add.  
  
 [in] `dwData`  
 The data associated with the item to add.  
  
### Return Value  
 The zero-based index of the appended item.  
  
##  <a name="cmfcribboncombobox__cmfcribboncombobox"></a>  CMFCRibbonComboBox::CMFCRibbonComboBox  
 Constructs a `CMFCRibbonComboBox` object.  
  
```  
public:  
CMFCRibbonComboBox(
    UINT nID,  
    BOOL bHasEditBox=TRUE,  
    Int nWidth=-1,  
    LPCTSTR lpszLabel=NULL,  
    Int nImage=-1);

protected:  
CMFCRibbonComboBox();
```  
  
### Parameters  
 [in] `nID`  
 The ID of the combo box.  
  
 [in] `bHasEditBox`  
 `TRUE` if you want an edit box within the control; `FALSE` otherwise.  
  
 [in] `nWidth`  
 Width of the combo box in pixels; or -1 for the default width.  
  
 [in] `lpszLabel`  
 The display label of the combo box.  
  
 [in] `nImage`  
 The small image index of the combo box.  
  
### Remarks  
 The default width is 108 pixels.  
  
##  <a name="cmfcribboncombobox__deleteitem"></a>  CMFCRibbonComboBox::DeleteItem  
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
 The string of the item to be deleted. If there are multiple items with the same string, the first item is deleted.  
  
### Return Value  
 `TRUE` if the specified item has been deleted; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__enabledropdownlistresize"></a>  CMFCRibbonComboBox::EnableDropDownListResize  
 Specifies whether the list box can change size when it drops down.  
  
```  
void EnableDropDownListResize(BOOL bEnable=FALSE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable resizing; `FALSE` to disable resizing.  
  
### Remarks  
 When resizing is enabled, the list box will change size to fit the items it displays.  
  
##  <a name="cmfcribboncombobox__finditem"></a>  CMFCRibbonComboBox::FindItem  
 Returns the index of the first item in the list box that matches a specified string.  
  
```  
int FindItem(LPCTSTR lpszText) const;

 
```  
  
### Parameters  
 [in] `lpszText`  
 The string of an item in the list box.  
  
### Return Value  
 The zero-based index of the item; or -1 if the item is not found.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__getcount"></a>  CMFCRibbonComboBox::GetCount  
 Returns the number of items in the list box.  
  
```  
INT_PTR GetCount() const;

 
```  
  
### Return Value  
 The number of items in the list box, or 0 if the list box contains no items.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__getcursel"></a>  CMFCRibbonComboBox::GetCurSel  
 Gets the index of the currently selected item in the list box.  
  
```  
int GetCurSel() const;

 
```  
  
### Return Value  
 The zero-based index of the currently selected item in the list box; or -1 if no item is selected.  
  
##  <a name="cmfcribboncombobox__getdropdownheight"></a>  CMFCRibbonComboBox::GetDropDownHeight  
 Gets the height of the list box when the list box is dropped down.  
  
```  
int GetDropDownHeight();
```  
  
### Return Value  
 The height, in pixels, of the list box.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__getintermediatesize"></a>  CMFCRibbonComboBox::GetIntermediateSize  
 Returns the size of the combo box as displayed in intermediate mode.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the combo box.  
  
### Return Value  
 The size of the combo box.  
  
### Remarks  
 The size returned is based on the size of the combo box when it displays small images.  
  
##  <a name="cmfcribboncombobox__getitem"></a>  CMFCRibbonComboBox::GetItem  
 Returns the string associated with an item at a specified index in the list box.  
  
```  
LPCTSTR GetItem(int iIndex) const;

 
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### Return Value  
 A pointer to the string that is associated with the item; otherwise, `NULL` if the index parameter is invalid, or if the index parameter is -1 and there is no item selected in the combo box.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__getitemdata"></a>  CMFCRibbonComboBox::GetItemData  
 Returns the data associated with an item at a specified index in the list box.  
  
```  
DWORD_PTR GetItemData(int iIndex) const;

 
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### Return Value  
 The data associated with the item; or 0 if the item does not exist, or if the index parameter is -1 and there is no selected item in the list box.  
  
##  <a name="cmfcribboncombobox__haseditbox"></a>  CMFCRibbonComboBox::HasEditBox  
 Indicates whether the control contains an edit box.  
  
```  
BOOL HasEditBox() const;

 
```  
  
### Return Value  
 `TRUE` if the control contains an edit box; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__isresizedropdownlist"></a>  CMFCRibbonComboBox::IsResizeDropDownList  
 Indicates whether or not the list box can be resized.  
  
```  
BOOL IsResizeDropDownList() const;

 
```  
  
### Return Value  
 `TRUE` if the list box can be resized; otherwise `FALSE`. [CMFCRibbonComboBox::EnableDropDownListResize](#cmfcribboncombobox__enabledropdownlistresize)  
  
### Remarks  
 You can enable list box resizing by using the [CMFCRibbonComboBox::EnableDropDownListResize](#cmfcribboncombobox__enabledropdownlistresize) method.  
  
##  <a name="cmfcribboncombobox__onselectitem"></a>  CMFCRibbonComboBox::OnSelectItem  
 Called by the framework when a user selects an item in the list box.  
  
```  
virtual void OnSelectItem(int nItem);
```  
  
### Parameters  
 [in] `nItem`  
 The index of the selected item.  
  
### Remarks  
 Override this method if you want to process a user input selection.  
  
##  <a name="cmfcribboncombobox__removeallitems"></a>  CMFCRibbonComboBox::RemoveAllItems  
 Deletes all items from the list box and clears the edit box.  
  
```  
void RemoveAllItems();
```  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__selectitem"></a>  CMFCRibbonComboBox::SelectItem  
 Selects an item in the list box.  
  
```  
BOOL SelectItem(int iIndex);

BOOL SelectItem(DWORD_PTR dwData);

BOOL SelectItem(LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
 [in] `dwData`  
 The data associated with an item in the list box.  
  
 [in] `lpszText`  
 The string of an item in the list box.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncombobox__setdropdownheight"></a>  CMFCRibbonComboBox::SetDropDownHeight  
 Sets the height of the list box when it is dropped down.  
  
```  
void SetDropDownHeight(int nHeight);
```  
  
### Parameters  
 [in] `nHeight`  
 The height, in pixels, of the list box.  
  
### Remarks  
 The default height is 150 pixels.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonEdit Class](../../mfc/reference/cmfcribbonedit-class.md)
