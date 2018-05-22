---
title: "Exception Handling Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception handling, macros"
  - "C++ exception handling, macros"
ms.assetid: a8385d34-3fb0-4006-a42a-de045cacf0f4
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Exception Handling Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Exception Handling Macros](https://docs.microsoft.com/cpp/atl/reference/exception-handling-macros).  
  
  
These macros provide support for exception handling.  
  
|||  
|-|-|  
|[_ATLCATCH](#_atlcatch)|Statement(s) to handle errors occurring in the associated `_ATLTRY`.|  
|[_ATLCATCHALL](#_atlcatchall)|Statement(s) to handle errors occurring in the associated `_ATLTRY`.|  
|[_ATLTRY](#_atltry)|Marks a guarded code section where an error could possibly occur.|  
  
##  <a name="_atlcatch"></a>  _ATLCATCH  
 Statement(s) to handle errors occurring in the associated `_ATLTRY`.  
  
```
_ATLCATCH(e)
```  
  
### Parameters  
 *e*  
 The exception to catch.  
  
### Remarks  
 Used in conjunction with `_ATLTRY`. Resolves to C++ [catch(CAtlException e)](../../cpp/try-throw-and-catch-statements-cpp.md) for handling a given type of C++ exceptions.  
  
##  <a name="_atlcatchall"></a>  _ATLCATCHALL  
 Statement(s) to handle errors occurring in the associated `_ATLTRY`.  
  
```
_ATLCATCHALL
```  
  
### Remarks  
 Used in conjunction with `_ATLTRY`. Resolves to C++ [catch(...)](../../cpp/try-throw-and-catch-statements-cpp.md) for handling all types of C++ exceptions.  
  
##  <a name="_atltry"></a>  _ATLTRY  
 Marks a guarded code section where an error could possibly occur.  
  
```
_ATLTRY
```  
  
### Remarks  
 Used in conjunction with [_ATLCATCH](#_atlcatch) or [_ATLCATCHALL](#_atlcatchall). Resolves to the C++ symbol [try](../../cpp/try-throw-and-catch-statements-cpp.md).  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)






