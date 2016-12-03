---
title: "CMFCRibbonButtonsGroup Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonButtonsGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonButtonsGroup class"
ms.assetid: b993d93e-fc1a-472f-a87f-1d7b7b499845
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CMFCRibbonButtonsGroup Class
The `CMFCRibbonButtonsGroup` class allows you to organize a set of ribbon buttons into a group. All buttons in the group are directly adjacent to each other horizontally and enclosed in a border.  
  
## Syntax  
  
```  
class CMFCRibbonButtonsGroup : public CMFCRibbonBaseElement  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup](#cmfcribbonbuttonsgroup__cmfcribbonbuttonsgroup)|Constructs a `CMFCRibbonButtonsGroup` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonButtonsGroup::AddButton](#cmfcribbonbuttonsgroup__addbutton)|Adds a button to a group.|  
|[CMFCRibbonButtonsGroup::AddButtons](#cmfcribbonbuttonsgroup__addbuttons)|Adds a list of buttons to a group.|  
|[CMFCRibbonButtonsGroup::GetButton](#cmfcribbonbuttonsgroup__getbutton)|Returns a pointer to the button that is located at a specified index.|  
|[CMFCRibbonButtonsGroup::GetCount](#cmfcribbonbuttonsgroup__getcount)|Returns the number of buttons in the group.|  
|[CMFCRibbonButtonsGroup::GetImageSize](#cmfcribbonbuttonsgroup__getimagesize)|Returns the image size of the normal images in the ribbon group (overrides [CMFCRibbonBaseElement::GetImageSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getimagesize).)|  
|[CMFCRibbonButtonsGroup::GetRegularSize](#cmfcribbonbuttonsgroup__getregularsize)|Returns the regular size of the ribbon element (overrides [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getregularsize).)|  
|[CMFCRibbonButtonsGroup::HasImages](#cmfcribbonbuttonsgroup__hasimages)|Reports whether the `CMFCRibbonButtonsGroup` object contains toolbar images.|  
|[CMFCRibbonButtonsGroup::OnDrawImage](#cmfcribbonbuttonsgroup__ondrawimage)|Draws the appropriate image for a specified button, depending on whether the button is normal, highlighted or disabled.|  
|[CMFCRibbonButtonsGroup::RemoveAll](#cmfcribbonbuttonsgroup__removeall)|Removes all buttons from the `CMFCRibbonButtonsGroup` object.|  
|[CMFCRibbonButtonsGroup::SetImages](#cmfcribbonbuttonsgroup__setimages)|Assigns images to the group.|  
|[CMFCRibbonButtonsGroup::SetParentCategory](#cmfcribbonbuttonsgroup__setparentcategory)|Sets the parent `CMFCRibbonCategory` of the `CMFCRibbonButtonsGroup` object and all the buttons within it (overrides [CMFCRibbonBaseElement::SetParentCategory](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__setparentcategory).)|  
  
## Remarks  
 The group is derived from [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) and can be manipulated as a single entity. You can position the group on any panel or popup menu.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonButtonsGroup` class. The example shows how to construct a `CMFCRibbonButtonsGroup` object, assign images to the group of ribbon buttons, and add a button to the group of ribbon buttons. This code snippet is part of the [Draw Client sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#2](../../mfc/reference/codesnippet/cpp/cmfcribbonbuttonsgroup-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)  
  
## Requirements  
 **Header:** afxribbonbuttonsgroup.h  
  
##  <a name="cmfcribbonbuttonsgroup__addbutton"></a>  CMFCRibbonButtonsGroup::AddButton  
 Adds a button to a group.  
  
```  
void AddButton(CMFCRibbonBaseElement* pButton);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to a button to add.  
  
##  <a name="cmfcribbonbuttonsgroup__addbuttons"></a>  CMFCRibbonButtonsGroup::AddButtons  
 Adds a list of buttons to a group.  
  
```  
void AddButtons(
    const CList<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& lstButtons);
```  
  
### Parameters  
 [in] `lstButtons`  
 A list of pointers to the buttons that you want to add.  
  
##  <a name="cmfcribbonbuttonsgroup__cmfcribbonbuttonsgroup"></a>  CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup  
 Constructs a `CMFCRibbonButtonsGroup` object.  
  
```  
CMFCRibbonButtonsGroup();

CMFCRibbonButtonsGroup(CMFCRibbonBaseElement* pButton);
```  
  
### Parameters  
 [in] `pButton`  
 Specifies a button to add to the newly created `CMFCRibbonButtonsGroup` object.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__getbutton"></a>  CMFCRibbonButtonsGroup::GetButton  
 Returns a pointer to the button that is located at a specified index.  
  
```  
CMFCRibbonBaseElement* GetButton(int i) const;

 
```  
  
### Parameters  
 [in] `i`  
 A zero-based index of a button to return.  
  
### Return Value  
 A pointer to the button that is located at the specified index. `NULL` if the specified index is out of range.  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__getcount"></a>  CMFCRibbonButtonsGroup::GetCount  
 Returns the number of buttons in the group.  
  
```  
int GetCount() const;

 
```  
  
### Return Value  
 The number of buttons in the group.  
  
##  <a name="cmfcribbonbuttonsgroup__getimagesize"></a>  CMFCRibbonButtonsGroup::GetImageSize  
 Retrieves the source image size of the protected `CMFCToolBarImages` member `m_Images`.  
  
```  
const CSize GetImageSize() const;

 
```  
  
### Return Value  
 Returns the source image size of the toolbar images, if any are present, or a `CSize` of zero if not.  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__getregularsize"></a>  CMFCRibbonButtonsGroup::GetRegularSize  
 Retrieves the maximum possible size of the ribbon group element.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context of the ribbon group.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__hasimages"></a>  CMFCRibbonButtonsGroup::HasImages  
 Reports whether the `CMFCRibbonButtonsGroup` object contains toolbar images.  
  
```  
BOOL HasImages() const;

 
```  
  
### Return Value  
 Returns TRUE if the protected `CMFCToolBarImages` member `m_Images` contains any images, or FALSE if not.  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__ondrawimage"></a>  CMFCRibbonButtonsGroup::OnDrawImage  
 Draws the appropriate image for a specified button, depending on whether the button is normal, highlighted or disabled.  
  
```  
virtual void OnDrawImage(
    CDC* pDC,  
    CRect rectImage,  
    CMFCRibbonBaseElement* pButton,  
    int nImageIndex);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context of the `CMFCRibbonButtonsGroup` object.  
  
 [in] `rectImage`  
 The rectangle within which to draw the image.  
  
 [in] `pButton`  
 The button for which to draw the image.  
  
 [in] `nImageIndex`  
 The index of the image to draw on the button (in one of the three image arrays for normal, highlighted or disabled buttons).  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__removeall"></a>  CMFCRibbonButtonsGroup::RemoveAll  
 Removes all buttons from the `CMFCRibbonButtonsGroup` object.  
  
```  
void RemoveAll();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbuttonsgroup__setimages"></a>  CMFCRibbonButtonsGroup::SetImages  
 Assigns images to the group of ribbon buttons.  
  
```  
void SetImages(
    CMFCToolBarImages* pImages,  
    CMFCToolBarImages* pHotImages,  
    CMFCToolBarImages* pDisabledImages);
```  
  
### Parameters  
 [in] `pImages`  
 Regular images.  
  
 [in] `pHotImages`  
 Hot images.  
  
 [in] `pDisabledImages`  
 Disabled images.  
  
### Remarks  
 Call `SetImages` before you add buttons to a group. The number of images must be greater or equal to the number of buttons to be added to the group.  
  
> [!NOTE]
>  Hot images are images that are displayed when the user hovers over the button. Disabled images are images that are displayed when the button is disabled.  
  
##  <a name="cmfcribbonbuttonsgroup__setparentcategory"></a>  CMFCRibbonButtonsGroup::SetParentCategory  
 Sets the parent `CMFCRibbonCategory` of the `CMFCRibbonButtonsGroup` object and all the buttons within it.  
  
```  
virtual void SetParentCategory(CMFCRibbonCategory* pCategory);
```  
  
### Parameters  
 [in] `pCategory`  
 Pointer to the parent category to set (the tabbed groups in ribbon controls are called categories).  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
