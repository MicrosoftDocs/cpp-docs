---
title: "CMemoryException Class"
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
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
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
# CMemoryException Class
Represents an out-of-memory exception condition.  
  
## Syntax  
  
```  
class CMemoryException : public CSimpleException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMemoryException::CMemoryException](#cmemoryexception__cmemoryexception)|Constructs a `CMemoryException` object.|  
  
## Remarks  
 No further qualification is necessary or possible. Memory exceptions are thrown automatically by **new**. If you write your own memory functions, using `malloc`, for example, then you are responsible for throwing memory exceptions.  
  
 For more information on `CMemoryException`, see the article [Exception Handling (MFC)](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CException](../VS_visualcpp/CException-Class.md)  
  
 [CSimpleException](../VS_visualcpp/CSimpleException-Class.md)  
  
 `CMemoryException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cmemoryexception__cmemoryexception"></a>  CMemoryException::CMemoryException  
 Constructs a `CMemoryException` object.  
  
```  
CMemoryException();  
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowMemoryException](../Topic/AfxThrowMemoryException.md). This global function can succeed in an out-of-memory situation because it constructs the exception object in previously allocated memory. For more information about exception processing, see the article [Exceptions](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## See Also  
 [CException Class](../VS_visualcpp/CException-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)