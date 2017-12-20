---
title: "char_traits&lt;char32_t&gt; Struct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["iosfwd/std::char_traits<char_32t>", "char_traits<char32_t>"]
dev_langs: ["C++"]
helpviewer_keywords: ["char_traits<char32_t> class"]
ms.assetid: c0315466-45d0-4a99-b83e-3b1dbfbfbbc3
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# char_traits&lt;char32_t&gt; Struct
A struct that is a specialization of the template struct **char_traits\<CharType>** to an element of type `char32_t`.  
  
## Syntax  
  
```
template <>  
struct char_traits<char32_t>;
```  
  
## Remarks  
 Specialization allows the struct to take advantage of library functions that manipulate objects of this type `char32_t`.  
  
## Requirements  
 **Header:** \<string>  
  
 **Namespace:** std  
  
## See Also  
 [\<string>](../standard-library/string.md)   
 [char_traits Struct](../standard-library/char-traits-struct.md)
