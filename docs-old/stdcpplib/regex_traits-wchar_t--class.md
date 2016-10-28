---
title: "regex_traits&lt;wchar_t&gt; Class"
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
  - "std::tr1::regex_traits<wchar_t>"
  - "regex_traits<wchar_t>"
  - "std.tr1.regex_traits<wchar_t>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex_traits<wchar_t> class [TR1]"
ms.assetid: 288d6fdb-fb8e-4a4d-904a-53916be7f95b
caps.latest.revision: 16
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# regex_traits&lt;wchar_t&gt; Class
Specialization of regex_traits for wchar_t.  
  
## Syntax  
  
```  
template <>  
    class regex_traits<wchar_t>  
```  
  
## Remarks  
 The class is an explicit specialization of template class [regex_traits Class](../stdcpplib/regex_traits-class.md) for elements of type `wchar_t` (so that it can take advantage of library functions that manipulate objects of this type).  
  
## Requirements  
 **Header:** \<regex>  
  
 **Namespace:** std  
  
## See Also  
 [\<regex>](../stdcpplib/-regex-.md)   
 [regex_traits Class](../stdcpplib/regex_traits-class.md)