---
title: "&lt;system_error&gt;"
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
  - "std.<system_error>"
  - "std::<system_error>"
  - "<system_error>"
  - "system_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "system_error header"
ms.assetid: 5e046c6e-48d9-4740-8c8a-05f3727c1215
caps.latest.revision: 14
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
# &lt;system_error&gt;
Include the header `<system_error>` to define the exception class `system_error` and related templates for processing low-level system errors.  
  
## Syntax  
  
```  
#include <system_error>  
```  
  
### Objects  
  
|||  
|-|-|  
|[generic_category](../stdcpplib/-system_error--functions.md#generic_category)|Represents the category for generic errors.|  
|[system_category](../stdcpplib/-system_error--functions.md#system_category)|Represents the category for errors caused by low-level system overflows.|  
  
### Typedefs  
  
|||  
|-|-|  
|[generic_errno](../stdcpplib/-system_error--typedefs.md#generic_errno)|A type that represents the enumeration that provides the symbolic names for all the error-code macros defined by Posix in `<errno.h>`.|  
  
### Functions  
  
|||  
|-|-|  
|[make_error_code](../stdcpplib/-system_error--functions.md#make_error_code)|Creates an `error_code` object.|  
|[make_error_condition](../stdcpplib/-system_error--functions.md#make_error_condition)|Creates an `error_condition` object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](../stdcpplib/-system_error--operators.md#operator_eq_eq)|Tests if the object on the left side of the operator is equal to the object on the right side.|  
|[operator!=](../stdcpplib/-system_error--operators.md#operator_neq)|Tests if the object on the left side of the operator is not equal to the object on the right side.|  
|[operator<](../stdcpplib/-system_error--operators.md#operator_lt_)|Tests if an object is less than the object passed in for comparison.|  
  
### Enumerations  
  
|||  
|-|-|  
|[errc](../stdcpplib/-system_error--enums.md#errc_enumeration)|Provides symbolic names for all the error-code macros defined by Posix in `<errno.h>`.|  
  
### Classes and Structs  
  
|||  
|-|-|  
|[error_category](../stdcpplib/error_category-class.md)|Represents the abstract, common base for objects that describes a category of error codes.|  
|[error_code](../stdcpplib/error_code-class.md)|Represents low-level system errors that are implementation-specific.|  
|[error_condition](../stdcpplib/error_condition-class.md)|Represents user-defined error codes.|  
|[is_error_code_enum](../stdcpplib/is_error_code_enum-class.md)|Represents a type predicate that tests for the [error_code Class](../stdcpplib/error_code-class.md) enumeration.|  
|[is_error_condition_enum](../stdcpplib/is_error_condition_enum-class.md)|Represents a type predicate that tests for the [error_condition Class](../stdcpplib/error_condition-class.md) enumeration.|  
|[system_error](../stdcpplib/system_error-class.md)|Represents the base class for all exceptions thrown to report a low-level system overflow.|  
  
## Requirements  
 **Header:** <system_error>  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)

