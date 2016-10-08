---
title: "AFX_GLOBAL_DATA::IsAccessibilitySupport"
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
ms.topic: article
ms.assetid: 59241f9d-2e07-4e7f-8c95-43f645f22136
caps.latest.revision: 10
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
# AFX_GLOBAL_DATA::IsAccessibilitySupport
Indicates whether Microsoft Active Accessibility support is enabled.  
  
## Syntax  
  
```  
BOOL IsAccessibilitySupport() const;  
```  
  
## Return Value  
 `TRUE` if accessibility support is enabled; otherwise, `FALSE`.  
  
## Remarks  
 Microsoft Active Accessibility was the earlier solution for making applications accessible. Microsoft UI Automation is the new accessibility model for Microsoft Windows and is intended to address the needs of assistive technology products and automated testing tools. For more information, see [UI Automation and Microsoft Active Accessibility](../Topic/UI%20Automation%20and%20Microsoft%20Active%20Accessibility.md).  
  
 Use the [AFX_GLOBAL_DATA::EnableAccessibilitySupport](../VS_visualcpp/AFX_GLOBAL_DATA--EnableAccessibilitySupport.md) method to enable or disable Active Accessibility support.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [AFX_GLOBAL_DATA::EnableAccessibilitySupport](../VS_visualcpp/AFX_GLOBAL_DATA--EnableAccessibilitySupport.md)   
 [UI Automation and Microsoft Active Accessibility](../Topic/UI%20Automation%20and%20Microsoft%20Active%20Accessibility.md)