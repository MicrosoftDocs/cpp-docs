---
title: "&lt;new&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<new>"
  - "<new>"
  - "std.<new>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "new header"
ms.assetid: 218e2a15-34e8-4ef3-9122-1e90eccf8559
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
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
# &lt;new&gt;
Defines several types and functions that control the allocation and freeing of storage under program control. It also defines components for reporting on storage management errors.  
  
## Syntax  
  
```  
#include <new>  
  
```  
  
## Remarks  
 Some of the functions declared in this header are replaceable. The implementation supplies a default version, whose behavior is described in this document. A program can, however, define a function with the same signature to replace the default version at link time. The replacement version must satisfy the requirements described in this document.  
  
### Objects  
  
|||  
|-|-|  
|[nothrow](../standard-library/new-functions.md#nothrow)|Provides an object to be used as an argument for the `nothrow` versions of **new** and **delete**.|  
  
### Typedefs  
  
|||  
|-|-|  
|[new_handler](../standard-library/new-typedefs.md#new_handler)|A type that points to a function suitable for use as a new handler.|  
  
### Functions  
  
|||  
|-|-|  
|[set_new_handler](../standard-library/new-functions.md#set_new_handler)|Installs a user function that is called when new fails in its attempt to allocate memory.|  
  
### Operators  
  
|||  
|-|-|  
|[operator delete](../standard-library/new-operators.md#operator_delete)|The function called by a delete expression to deallocate storage for individual of objects.|  
|[operator delete&#91;&#93;](../standard-library/new-operators.md#operator_delete_arr)|The function called by a delete expression to deallocate storage for an array of objects.|  
|[operator new](../standard-library/new-operators.md#operator_new)|The function called by a new expression to allocate storage for individual objects.|  
|[operator new&#91;&#93;](../standard-library/new-operators.md#operator_new_arr)|The function called by a new expression to allocate storage for an array of objects.|  
  
### Classes  
  
|||  
|-|-|  
|[bad_alloc Class](../standard-library/bad-alloc-class.md)|The class describes an exception thrown to indicate that an allocation request did not succeed.|  
|[nothrow_t Class](../standard-library/nothrow-t-structure.md)|The class is used as a function parameter to operator new to indicate that the function should return a null pointer to report an allocation failure, rather than throw an exception.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



