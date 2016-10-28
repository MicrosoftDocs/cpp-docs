---
title: "&lt;exception&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "<exception>"
  - "std::<exception>"
  - "std.<exception>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception header"
ms.assetid: 28900768-5dd7-4834-b907-5e37ab3407db
caps.latest.revision: 18
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
# &lt;exception&gt;
Defines several types and functions related to the handling of exceptions. Exception handling is used in situations in which the system can recover from an error. It provides a means for control to be returned from a function to the program. The objective of incorporating exception handling is to increase the program's robustness while providing a way to recover from an error in an orderly fashion.  
  
## Syntax  
  
```  
#include <exception>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[exception_ptr](../stdcpplib/-exception--typedefs.md#exception_ptr)|A type that describes a pointer to an exception.|  
|[terminate_handler](../stdcpplib/-exception--typedefs.md#terminate_handler)|A type that describes a pointer to a function suitable for use as a `terminate_handler`.|  
|[unexpected_handler](../stdcpplib/-exception--typedefs.md#unexpected_handler)|A type that describes a pointer to a function suitable for use as an `unexpected_handler`.|  
  
### Functions  
  
|||  
|-|-|  
|[current_exception](../stdcpplib/-exception--functions.md#current_exception)|Obtains a pointer to the current exception.|  
|[get_terminate](../stdcpplib/-exception--functions.md#get_terminate)|Obtains the current `terminate_handler` function.|  
|[get_unexpected](../stdcpplib/-exception--functions.md#get_unexpected)|Obtains the current `unexpected_handler` function.|  
|[make_exception_ptr](../stdcpplib/-exception--functions.md#make_exception_ptr)|Creates an `exception_ptr` object that holds a copy of an exception.|  
|[rethrow_exception](../stdcpplib/-exception--functions.md#rethrow_exception)|Throws an exception passed as a parameter.|  
|[set_terminate](../stdcpplib/-exception--functions.md#set_terminate)|Establishes a new `terminate_handler` to be called at the termination of the program.|  
|[set_unexpected](../stdcpplib/-exception--functions.md#set_unexpected)|Establishes a new `unexpected_handler` to be when an unexpected exception is encountered.|  
|[terminate](../stdcpplib/-exception--functions.md#terminate)|Calls a terminate handler.|  
|[uncaught_exception](../stdcpplib/-exception--functions.md#uncaught_exception)|Returns **true** only if a thrown exception is being currently processed.|  
|[unexpected](../stdcpplib/-exception--functions.md#unexpected)|Calls an unexpected handler.|  
  
### Classes  
  
|||  
|-|-|  
|[bad_exception Class](../stdcpplib/bad_exception-class.md)|The class describes an exception that can be thrown from an `unexpected_handler`.|  
|exception Class|The class serves as the base class for all exceptions thrown by certain expressions and by the Standard C++ Library.|  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)