---
title: "CMFCStandardColorsPropertyPage Class"
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
  - "CMFCStandardColorsPropertyPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCStandardColorsPropertyPage class"
ms.assetid: b84b7cfb-bb24-4c65-804a-5b642cb64400
caps.latest.revision: 18
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
# CMFCStandardColorsPropertyPage Class
Represents a property page that users use to select standard colors in a color dialog box.  
  
## Syntax  
  
```  
class CMFCStandardColorsPropertyPage : public CPropertyPage  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCStandardColorsPropertyPage::CMFCStandardColorsPropertyPage`|Default constructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCStandardColorsPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCStandardColorsPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object that is associated with this class type.|  
  
### Remarks  
 The `CMFCColorDialog` class uses this class to display the standard color property page. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../mfcref/cmfccolordialog-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CDialog](../mfcref/cdialog-class.md)  
  
 [CPropertyPage](../mfcref/cpropertypage-class.md)  
  
 [CMFCStandardColorsPropertyPage](../mfcref/cmfcstandardcolorspropertypage-class.md)  
  
## Requirements  
 **Header:** afxstandardcolorspropertypage.h  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCColorDialog Class](../mfcref/cmfccolordialog-class.md)   
 [CMFCCustomColorsPropertyPage Class](../mfcref/cmfccustomcolorspropertypage-class.md)