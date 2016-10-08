---
title: "CInvalidArgException Class"
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
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
caps.latest.revision: 15
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
# CInvalidArgException Class
This class represents an invalid argument exception condition.  
  
## Syntax  
  
```  
class CInvalidArgException : public CSimpleException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInvalidArgException::CInvalidArgException](#cinvalidargexception__cinvalidargexception)|The constructor.|  
  
## Remarks  
 A `CInvalidArgException` object represents an invalid argument exception condition.  
  
 For more information on Exception Handling, see the [CException Class](../VS_visualcpp/CException-Class.md) topic and [Exception Handling (MFC)](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CException](../VS_visualcpp/CException-Class.md)  
  
 [CSimpleException](../VS_visualcpp/CSimpleException-Class.md)  
  
 `CInvalidArgException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cinvalidargexception__cinvalidargexception"></a>  CInvalidArgException::CInvalidArgException  
 The constructor.  
  
```  
CInvalidArgException();  
```  
  
### Remarks  
 Do not use this constructor directly; call the global function **AfxThrowInvalidArgException**.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CSimpleException Class](../VS_visualcpp/CSimpleException-Class.md)