---
title: "is_error_code_enum Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "system_error/std::is_error_code_enum"
  - "std.is_error_code_enum"
  - "is_error_code_enum"
  - "std::is_error_code_enum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_error_code_enum class"
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
caps.latest.revision: 15
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
# is_error_code_enum Class
Represents a type predicate that tests for the [error_code](../standard-library/error-code-class.md) enumeration.  
  
## Syntax  
  
```
template <_Enum>
class is_error_code_enum;
```  
  
## Remarks  
 An instance of this [type predicate](../standard-library/type-traits.md) holds true if the type `_Enum` is an enumeration value suitable for storing in an object of type `error_code`.  
  
 It is permissible to add specializations to this type for user-defined types.  
  
## Requirements  
 **Header:** <system_error>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [<system_error>](../standard-library/system-error.md)



