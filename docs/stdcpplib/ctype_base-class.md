---
title: "ctype_base Class"
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
  - "locale/std::ctype_base"
  - "std.ctype_base"
  - "ctype_base"
  - "std::ctype_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ctype_base class"
ms.assetid: ccffe891-d7ab-4d22-baf8-8eb6d438a96d
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
# ctype_base Class
The class serves as a base class for facets of template class [ctype](../stdcpplib/ctype-class.md). A base class for the ctype class that is used to define enumeration types used to classify or test characters either individually or within entire ranges.  
  
## Syntax  
  
```
struct ctype_base : public locale::facet
{
    enum
 {
    alnum,
    alpha,
    cntrl,
    digit,
    graph,
    lower,
    print,
    punct,
    space,
    upper,
    xdigit
 };
    typedef short mask;
    ctype_base(
 size_t _Refs = 0);

 ~ctype_base();

};
```  
  
## Remarks  
 It defines an enumeration mask. Each enumeration constant characterizes a different way to classify characters, as defined by the functions with similar names declared in the header \<ctype.h>. The constants are:  
  
- **space** (function [isspace](../stdcpplib/-locale--functions.md#isspace))  
  
- **print** (function [isprint](../stdcpplib/-locale--functions.md#isprint))  
  
- **cntrl** (function [iscntrl](../stdcpplib/-locale--functions.md#iscntrl))  
  
- **upper** (function [isupper](../stdcpplib/-locale--functions.md#isupper))  
  
- **lower** (function [islower](../stdcpplib/-locale--functions.md#islower))  
  
- **digit** (function [isdigit](../stdcpplib/-locale--functions.md#isdigit))  
  
- **punct** (function [ispunct](../stdcpplib/-locale--functions.md#ispunct))  
  
- **xdigit** (function [isxdigit](../stdcpplib/-locale--functions.md#isxdigit))  
  
- **alpha** (function [isalpha](../stdcpplib/-locale--functions.md#isalpha))  
  
- **alnum** (function [isalnum](../stdcpplib/-locale--functions.md#isalnum))  
  
- **graph** (function [isgraph](../stdcpplib/-locale--functions.md#isgraph))  
  
 You can characterize a combination of classifications by ORing these constants. In particular, it is always true that **alnum** == ( **alpha**``&#124; **digit**\) and **graph** \=\= \( **alnum**``&#124; **punct**).  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)

