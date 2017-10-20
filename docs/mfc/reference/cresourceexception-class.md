---
title: "CResourceException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CResourceException", "AFXWIN/CResourceException", "AFXWIN/CResourceException::CResourceException"]
dev_langs: ["C++"]
helpviewer_keywords: ["CResourceException [MFC], CResourceException"]
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CResourceException Class
Generated when Windows cannot find or allocate a requested resource.  
  
## Syntax  
  
```  
class CResourceException : public CSimpleException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CResourceException::CResourceException](#cresourceexception)|Constructs a `CResourceException` object.|  
  
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
  
##  <a name="cresourceexception"></a>  CResourceException::CResourceException  
 Constructs a `CResourceException` object.  
  
```  
CResourceException();
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). for more information about exceptions, see the article [Exception Handling in MFC](../exception-handling-in-mfc.md).  
  
## See Also  
 [CException Class](cexception-class.md)   
 [Hierarchy Chart](../hierarchy-chart.md)


