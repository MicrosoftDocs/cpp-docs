---
title: "char_traits&lt;wchar_t&gt; Struct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.char_traits<wchar_t>"
  - "char_traits<wchar_t>"
  - "string/std::char_traits<wchar_t>"
  - "std::char_traits<wchar_t>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits<wchar_t> class"
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
caps.latest.revision: 21
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
# char_traits&lt;wchar_t&gt; Struct
A class that is a specialization of the template struct **char_traits\<CharType>** to an element of type `wchar_t`.  
  
## Syntax  
  
```
template <>  
struct char_traits<wchar_t>;
```  
  
## Remarks  
 Specialization allows the struct to take advantage of library functions that manipulate objects of this type `wchar_t`.  
  
## Requirements  
 **Header:** \<string>  
  
 **Namespace:** std  
  
## See Also  
 [char_traits Struct](../standard-library/char-traits-struct.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



