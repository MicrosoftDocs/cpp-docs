---
title: "CMFCRibbonUndoButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCRibbonUndoButton", "AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton", "AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::CMFCRibbonUndoButton", "AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::AddUndoAction", "AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::CleanUpUndoList", "AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::GetActionNumber", "AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::HasMenu"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCRibbonUndoButton [MFC], CMFCRibbonUndoButton", "CMFCRibbonUndoButton [MFC], AddUndoAction", "CMFCRibbonUndoButton [MFC], CleanUpUndoList", "CMFCRibbonUndoButton [MFC], GetActionNumber", "CMFCRibbonUndoButton [MFC], HasMenu"]
ms.assetid: 5c42adf7-871d-4239-901e-47ae7fb816fc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCRibbonUndoButton Class
The `CMFCRibbonUndoButton` class implements a drop-down list button that contains the most recent user commands. Users can select one or more of the most recent commands from the drop-down list to either redo or undo them.  
  
## Syntax  
  
```  
class CMFCRibbonUndoButton : public CMFCRibbonGallery  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::CMFCRibbonUndoButton](#cmfcribbonundobutton)|Constructs a new `CMFCRibbonUndoButton` object by using the command ID that you specify, text label and images from the image list of the parent object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::AddUndoAction](#addundoaction)|Adds a new action to the list of actions.|  
|[CMFCRibbonUndoButton::CleanUpUndoList](#cleanupundolist)|Clears the action list, which is the drop-down list.|  
|[CMFCRibbonUndoButton::GetActionNumber](#getactionnumber)|Determines the number of items that a user selected from the drop-down list.|  
|[CMFCRibbonUndoButton::HasMenu](#hasmenu)|Indicates whether the object contains a menu.|  
  
## Remarks  
 The `CMFCRibbonUndoButton` class uses a stack to represent the drop-down list.  
  
## Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonUndoButton` class, and add a new action to the list of actions. This code snippet is part of the [Ribbon Gadgets sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RibbonGadgets#2](../../mfc/reference/codesnippet/cpp/cmfcribbonundobutton-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
 [CMFCRibbonUndoButton](../../mfc/reference/cmfcribbonundobutton-class.md)  
  
## Requirements  
 **Header:** afxribbonundobutton.h  
  
##  <a name="addundoaction"></a>  CMFCRibbonUndoButton::AddUndoAction  
 Adds a new action to the list of actions.  
  
```  
void AddUndoAction(LPCTSTR lpszLabel);
```  
  
### Parameters  
 [in] *lpszLabel*  
 The action label that will be displayed in the drop-down list.  
  
##  <a name="cleanupundolist"></a>  CMFCRibbonUndoButton::CleanUpUndoList  
 Clears the action list, which is the drop-down list.  
  
```  
void CleanUpUndoList();
```  
  
##  <a name="cmfcribbonundobutton"></a>  CMFCRibbonUndoButton::CMFCRibbonUndoButton  
 Constructs a new `CMFCRibbonUndoButton` object by using the command ID that you specify, text label and images from the image list of the parent object.  
  
```  
CMFCRibbonUndoButton(
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex=-1,  
    int nLargeImageIndex=-1);

 
CMFCRibbonUndoButton(
    UINT nID,  
    LPCTSTR lpszText,  
    HICON hIcon);
```  
  
### Parameters  
 [in] *nID*  
 Specifies the command identifier.  
  
 [in] *lpszText*  
 Specifies the text label of the button.  
  
 [in] *nSmallImageIndex*  
 Zero-based index in the image list of the parent object for the button's small image.  
  
 [in] *nLargeImageIndex*  
 Zero-based index in the image list of the parent object for the of button's large image.  
  
 [in] *hIcon*  
 A handle to an icon that you can use as a button's image.  
  
##  <a name="getactionnumber"></a>  CMFCRibbonUndoButton::GetActionNumber  
 Determines the number of items that a user selected from the drop-down list.  
  
```  
int GetActionNumber() const;  
```  
  
### Return Value  
 The number of items that a user selected.  
  
##  <a name="hasmenu"></a>  CMFCRibbonUndoButton::HasMenu  
 Indicates whether the object contains a menu.  
  
```  
virtual BOOL HasMenu() const;  
```  
  
### Return Value  
 Always returns TRUE.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonGallery Class](../../mfc/reference/cmfcribbongallery-class.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)
