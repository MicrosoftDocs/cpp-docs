---
title: "CResourceException Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CResourceException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resource allocation exception"
  - "resources [C++], allocating"
  - "resource exceptions"
  - "exceptions, resource"
  - "CResourceException class"
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CResourceException Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CResourceException Class](https://docs.microsoft.com/cpp/mfc/reference/cresourceexception-class).  
  
  
Generated when Windows cannot find or allocate a requested resource.  
  
## Syntax  
  
```  
class CResourceException : public CSimpleException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CResourceException::CResourceException](#cresourceexception__cresourceexception)|Constructs a `CResourceException` object.|  
  
## Remarks  
 No further qualification is necessary or possible.  
  
 For more information on using `CResourceException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CResourceException`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cresourceexception__cresourceexception"></a>  CResourceException::CResourceException  
 Constructs a `CResourceException` object.  
  
```  
CResourceException();
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowResourceException](../Topic/Exception%20Processing.md#not_found.md#afxthrowresourceexception. for more information about exceptions, see the article [exception handling (mfc)]---brokenlink--(../topic/exception_handling_in_mfc).  
  
## See Also  
 [CException Class](../Topic/CException%20Class.md)   
 [Hierarchy Chart](../Topic/Hierarchy%20Chart.md)






