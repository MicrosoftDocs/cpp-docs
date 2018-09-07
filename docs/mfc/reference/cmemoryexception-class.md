---
title: "CMemoryException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMemoryException", "AFX/CMemoryException", "AFX/CMemoryException::CMemoryException"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMemoryException [MFC], CMemoryException"]
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CMemoryException::CMemoryException](#cmemoryexception)|Constructs a `CMemoryException` object.|  
  
## Remarks  
 No further qualification is necessary or possible. Memory exceptions are thrown automatically by **new**. If you write your own memory functions, using `malloc`, for example, then you are responsible for throwing memory exceptions.  
  
 For more information on `CMemoryException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CMemoryException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cmemoryexception"></a>  CMemoryException::CMemoryException  
 Constructs a `CMemoryException` object.  
  
```  
CMemoryException();  
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). this global function can succeed in an out-of-memory situation because it constructs the exception object in previously allocated memory. for more information about exception processing, see the article [exceptions](../exception-handling-in-mfc.md).  
  
## See Also  
 [CException Class](cexception-class.md)   
 [Hierarchy Chart](../hierarchy-chart.md)



