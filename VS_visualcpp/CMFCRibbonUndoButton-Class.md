---
title: "CMFCRibbonUndoButton Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 5c42adf7-871d-4239-901e-47ae7fb816fc
caps.latest.revision: 31
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|[CMFCRibbonUndoButton::CMFCRibbonUndoButton](#cmfcribbonundobutton__cmfcribbonundobutton)|Constructs a new `CMFCRibbonUndoButton` object by using the command ID that you specify, text label and images from the image list of the parent object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::AddUndoAction](#cmfcribbonundobutton__addundoaction)|Adds a new action to the list of actions.|  
|[CMFCRibbonUndoButton::CleanUpUndoList](#cmfcribbonundobutton__cleanupundolist)|Clears the action list, which is the drop-down list.|  
|[CMFCRibbonUndoButton::GetActionNumber](#cmfcribbonundobutton__getactionnumber)|Determines the number of items that a user selected from the drop-down list.|  
|[CMFCRibbonUndoButton::HasMenu](#cmfcribbonundobutton__hasmenu)|Indicates whether the object contains a menu.|  
  
## Remarks  
 The `CMFCRibbonUndoButton` class uses a stack to represent the drop-down list.  
  
## Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonUndoButton` class, and add a new action to the list of actions. This code snippet is part of the [Ribbon Gadgets sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_RibbonGadgets#2](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonGadgets#2)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCRibbonBaseElement](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)  
  
 [CMFCRibbonButton](../VS_visualcpp/CMFCRibbonButton-Class.md)  
  
 [CMFCRibbonGallery](../VS_visualcpp/CMFCRibbonGallery-Class.md)  
  
 [CMFCRibbonUndoButton](../VS_visualcpp/CMFCRibbonUndoButton-Class.md)  
  
## Requirements  
 **Header:** afxribbonundobutton.h  
  
##  <a name="cmfcribbonundobutton__addundoaction"></a>  CMFCRibbonUndoButton::AddUndoAction  
 Adds a new action to the list of actions.  
  
```  
void AddUndoAction( LPCTSTR lpszLabel );  
```  
  
### Parameters  
 [in] `lpszLabel`  
 The action label that will be displayed in the drop-down list.  
  
##  <a name="cmfcribbonundobutton__cleanupundolist"></a>  CMFCRibbonUndoButton::CleanUpUndoList  
 Clears the action list, which is the drop-down list.  
  
```  
void CleanUpUndoList();  
```  
  
##  <a name="cmfcribbonundobutton__cmfcribbonundobutton"></a>  CMFCRibbonUndoButton::CMFCRibbonUndoButton  
 Constructs a new `CMFCRibbonUndoButton` object by using the command ID that you specify, text label and images from the image list of the parent object.  
  
```  
CMFCRibbonUndoButton(  
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex=-1,  
    int nLargeImageIndex=-1 );  
  
CMFCRibbonUndoButton(  
    UINT nID,  
    LPCTSTR lpszText,  
    HICON hIcon );  
```  
  
### Parameters  
 [in] `nID`  
 Specifies the command identifier.  
  
 [in] `lpszText`  
 Specifies the text label of the button.  
  
 [in] `nSmallImageIndex`  
 Zero-based index in the image list of the parent object for the button's small image.  
  
 [in] `nLargeImageIndex`  
 Zero-based index in the image list of the parent object for the of button's large image.  
  
 [in] `hIcon`  
 A handle to an icon that you can use as a button's image.  
  
##  <a name="cmfcribbonundobutton__getactionnumber"></a>  CMFCRibbonUndoButton::GetActionNumber  
 Determines the number of items that a user selected from the drop-down list.  
  
```  
int GetActionNumber() const;  
```  
  
### Return Value  
 The number of items that a user selected.  
  
##  <a name="cmfcribbonundobutton__hasmenu"></a>  CMFCRibbonUndoButton::HasMenu  
 Indicates whether the object contains a menu.  
  
```  
virtual BOOL HasMenu() const;  
```  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCRibbonGallery Class](../VS_visualcpp/CMFCRibbonGallery-Class.md)   
 [CMFCRibbonButton Class](../VS_visualcpp/CMFCRibbonButton-Class.md)