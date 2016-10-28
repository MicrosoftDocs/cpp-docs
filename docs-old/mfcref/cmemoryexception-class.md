---
title: "CMemoryException Class"
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
  - "CMemoryException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMemoryException class"
  - "memory exceptions"
  - "exceptions, memory type"
  - "C++ exception handling, memory"
  - "memory, exception handling"
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
caps.latest.revision: 17
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
  
 For more information on `CMemoryException`, see the article [Exception Handling (MFC)](../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CException](../mfcref/cexception-class.md)  
  
 [CSimpleException](../mfcref/csimpleexception-class.md)  
  
 `CMemoryException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cmemoryexception__cmemoryexception"></a>  CMemoryException::CMemoryException  
 Constructs a `CMemoryException` object.  
  
```  
CMemoryException();  
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowMemoryException](../Topic/AfxThrowMemoryException.md). This global function can succeed in an out-of-memory situation because it constructs the exception object in previously allocated memory. For more information about exception processing, see the article [Exceptions](../mfc/exception-handling-in-mfc.md).  
  
## See Also  
 [CException Class](../mfcref/cexception-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)