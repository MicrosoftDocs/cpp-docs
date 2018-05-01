---
title: "char_traits&lt;char16_t&gt; Struct | Microsoft Docs"
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
  - "std::char_traits<char16_t>"
  - "std.char_traits<char16_t>"
  - "char_traits<char16_t>"
  - "string/std::char_traits<char16_t>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits<char16_t> class"
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# char_traits&lt;char16_t&gt; Struct
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [char_traits&lt;char16_t&gt; Struct](https://docs.microsoft.com/cpp/standard-library/char-traits-char16-t-struct).  
  
A struct that is a specialization of the template struct **char_traits\<CharType>** to an element of type `char16_t`.  
  
## Syntax  
  
```
template <>  
struct char_traits<char16_t>;
```  
  
## Remarks  
 Specialization allows the struct to take advantage of library functions that manipulate objects of the type `char16_t`.  
  
## Requirements  
 **Header:** \<string>  
  
 **Namespace:** std  
  
## See Also  
 [\<string>](../standard-library/string.md)   
 [char_traits Struct](../standard-library/char-traits-struct.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







