---
title: "CMFCRibbonContextCaption Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonContextCaption"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonContextCaption class"
ms.assetid: cce2c0a2-8370-4266-997e-f8d0eeb3d616
caps.latest.revision: 20
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
# CMFCRibbonContextCaption Class
Implements a colored caption that appears at the top of a ribbon category or a context category.  
  
## Syntax  
  
```  
class CMFCRibbonContextCaption : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonContextCaption::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCRibbonContextCaption::GetColor](#cmfcribboncontextcaption__getcolor)|Returns the color of the caption.|  
|[CMFCRibbonContextCaption::GetRightTabX](#cmfcribboncontextcaption__getrighttabx)||  
|`CMFCRibbonContextCaption::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object that is associated with this class type.|  
  
## Remarks  
 This class cannot be directly instantiated. The [CMFCRibbonBar Class](../mfcref/cmfcribbonbar-class.md) class uses this class internally to add color to ribbon categories.  
  
 To set the color for ribbon categories, call [CMFCRibbonCategory::SetTabColor](../mfcref/cmfcribboncategory-class.md#cmfcribboncategory__settabcolor). To set the color for context categories, call [CMFCRibbonBar::AddContextCategory](../mfcref/cmfcribbonbar-class.md#cmfcribbonbar__addcontextcategory).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../mfcref/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../mfcref/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonContextCaption](../mfcref/cmfcribboncontextcaption-class.md)  
  
## Requirements  
 **Header:** afxRibbonBar.h  
  
##  <a name="cmfcribboncontextcaption__getcolor"></a>  CMFCRibbonContextCaption::GetColor  
 Returns the background color of the caption.  
  
```  
AFX_RibbonCategoryColor GetColor() const;  
```  
  
### Return Value  
 The returned value can be one of the following enumerated values:  
  
-   `AFX_CategoryColor_None`  
  
-   `AFX_CategoryColor_Red`  
  
-   `AFX_CategoryColor_Orange`  
  
-   `AFX_CategoryColor_Yellow`  
  
-   `AFX_CategoryColor_Green`  
  
-   `AFX_CategoryColor_Blue`  
  
-   `AFX_CategoryColor_Indigo`  
  
-   `AFX_CategoryColor_Violet`  
  
### Remarks  
 The color of the caption can be set by calling [CMFCRibbonCategory::SetTabColor](../mfcref/cmfcribboncategory-class.md#cmfcribboncategory__settabcolor) or [CMFCRibbonBar::AddContextCategory](../mfcref/cmfcribbonbar-class.md#cmfcribbonbar__addcontextcategory).  
  
##  <a name="cmfcribboncontextcaption__getrighttabx"></a>  CMFCRibbonContextCaption::GetRightTabX  
 Retrieves the position of the right-hand edge of the category’s ribbon tab.  
  
```  
int GetRightTabX() const;  
```  
  
### Return Value  
 Returns the right-hand X-value of the enclosing rectangle of the `CMFCRibbonCategory` object’s ribbon tab, or a value of -1 if the tab is truncated.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCRibbonButton Class](../mfcref/cmfcribbonbutton-class.md)   
 [CMFCRibbonCategory Class](../mfcref/cmfcribboncategory-class.md)   
 [CMFCRibbonBar Class](../mfcref/cmfcribbonbar-class.md)