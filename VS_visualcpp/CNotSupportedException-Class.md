---
title: "CNotSupportedException Class"
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
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
caps.latest.revision: 17
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
# CNotSupportedException Class
Represents an exception that is the result of a request for an unsupported feature.  
  
## Syntax  
  
```  
class CNotSupportedException : public CSimpleException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CNotSupportedException::CNotSupportedException](#cnotsupportedexception__cnotsupportedexception)|Constructs a `CNotSupportedException` object.|  
  
## Remarks  
 No further qualification is necessary or possible.  
  
 For more information on using `CNotSupportedException`, see the article [Exception Handling (MFC)](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CException](../VS_visualcpp/CException-Class.md)  
  
 [CSimpleException](../VS_visualcpp/CSimpleException-Class.md)  
  
 `CNotSupportedException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cnotsupportedexception__cnotsupportedexception"></a>  CNotSupportedException::CNotSupportedException  
 Constructs a `CNotSupportedException` object.  
  
```  
CNotSupportedException();  
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowNotSupportedException](../Topic/AfxThrowNotSupportedException.md). For more information about exception processing, see the article [Exceptions](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## See Also  
 [CException Class](../VS_visualcpp/CException-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)