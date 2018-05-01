---
title: "is_error_condition_enum Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::is_error_condition_enum"
  - "std.is_error_condition_enum"
  - "is_error_condition_enum"
  - "system_error/std::is_error_condition_enum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_error_condition_enum class"
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_error_condition_enum Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_error_condition_enum Class](https://docs.microsoft.com/cpp/standard-library/is-error-condition-enum-class).  
  
Represents a type predicate that tests for the [error_condition](../standard-library/error-condition-class.md) enumeration.  
  
## Syntax  
  
```
template <_Enum>
class is_error_condition_enum;
```  
  
## Remarks  
 An instance of this [type predicate](../standard-library/type-traits.md) holds true if the type `_Enum` is an enumeration value suitable for storing in an object of type `error_condition`.  
  
 It is permissible to add specializations to this type for user-defined types.  
  
## Requirements  
 **Header:** <system_error>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [<system_error>](../standard-library/system-error.md)







