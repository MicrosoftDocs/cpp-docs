---
title: "Exception Handling Macros"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception handling, macros"
  - "C++ exception handling, macros"
ms.assetid: a8385d34-3fb0-4006-a42a-de045cacf0f4
caps.latest.revision: 12
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
# Exception Handling Macros
These macros provide support for exception handling.  
  
|||  
|-|-|  
|[_ATLCATCH](../Topic/_ATLCATCH.md)|Statement(s) to handle errors occurring in the associated `_ATLTRY`.|  
|[_ATLCATCHALL](../Topic/_ATLCATCHALL.md)|Statement(s) to handle errors occurring in the associated `_ATLTRY`.|  
|[_ATLTRY](../Topic/_ATLTRY.md)|Marks a guarded code section where an error could possibly occur.|  
  
##  <a name="_atlcatch"></a>  _ATLCATCH  
 Statement(s) to handle errors occurring in the associated `_ATLTRY`.  
  
```
_ATLCATCH(e)
```  
  
### Parameters  
 *e*  
 The exception to catch.  
  
### Remarks  
 Used in conjunction with `_ATLTRY`. Resolves to C++ [catch(CAtlException e)](../cpp/try--throw--and-catch-statements--c---.md) for handling a given type of C++ exceptions.  
  
##  <a name="_atlcatchall"></a>  _ATLCATCHALL  
 Statement(s) to handle errors occurring in the associated `_ATLTRY`.  
  
```
_ATLCATCHALL
```  
  
### Remarks  
 Used in conjunction with `_ATLTRY`. Resolves to C++ [catch(...)](../cpp/try--throw--and-catch-statements--c---.md) for handling all types of C++ exceptions.  
  
##  <a name="_atltry"></a>  _ATLTRY  
 Marks a guarded code section where an error could possibly occur.  
  
```
_ATLTRY
```  
  
### Remarks  
 Used in conjunction with [_ATLCATCH](../Topic/_ATLCATCH.md) or [_ATLCATCHALL](../Topic/_ATLCATCHALL.md). Resolves to the C++ symbol [try](../cpp/try--throw--and-catch-statements--c---.md).  
  
## See Also  
 [Macros](../atl/atl-macros.md)

