---
title: "CResourceException Class"
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
|[CResourceException::CResourceException](#cresourceexception__cresourceexception)|Constructs a `CResourceException` object.|  
  
## Remarks  
 No further qualification is necessary or possible.  
  
 For more information on using `CResourceException`, see the article [Exception Handling (MFC)](../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CException](../mfcref/cexception-class.md)  
  
 [CSimpleException](../mfcref/csimpleexception-class.md)  
  
 `CResourceException`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cresourceexception__cresourceexception"></a>  CResourceException::CResourceException  
 Constructs a `CResourceException` object.  
  
```  
CResourceException();  
```  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowResourceException](../Topic/AfxThrowResourceException.md). For more information about exceptions, see the article [Exception Handling (MFC)](../mfc/exception-handling-in-mfc.md).  
  
## See Also  
 [CException Class](../mfcref/cexception-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)