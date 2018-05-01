---
title: "CNotSupportedException Class | Microsoft Docs"
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
  - "CNotSupportedException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNotSupportedException class"
  - "unsupported features"
  - "exceptions, not supported"
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CNotSupportedException Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CNotSupportedException Class](https://docs.microsoft.com/cpp/mfc/reference/cnotsupportedexception-class).  
  
  
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
  
 For more information on using `CNotSupportedException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CNotSupportedException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cnotsupportedexception__cnotsupportedexception"></a>  CNotSupportedException::CNotSupportedException  
 Constructs a `CNotSupportedException` object.  
  
```  
CNotSupportedException();
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowNotSupportedException](../Topic/Exception%20Processing.md#not_found.md#afxthrownotsupportedexception. for more information about exception processing, see the article [exceptions]--brokenlink--(../topic/exception_handling_in_mfc).  
  
## See Also  
 [CException Class](../Topic/CException%20Class.md)   
 [Hierarchy Chart](../Topic/Hierarchy%20Chart.md)










