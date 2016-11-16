---
title: "ctype_byname Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xlocale/std::ctype_byname"
  - "std::ctype_byname"
  - "ctype_byname"
  - "std.ctype_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ctype_byname class"
ms.assetid: a5cec021-a1f8-425f-8757-08e6f064b604
caps.latest.revision: 22
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
# ctype_byname Class
The derived template class describes an object that can serve as a ctype facet of a given locale, enabling the classification of characters and conversion of characters between case and native and locale specified character sets.  
  
## Syntax  
  
```
template <class _Elem>
class ctype_byname : public ctype<_Elem>
{
public:
    explicit ctype_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit ctype_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual __CLR_OR_THIS_CALL ~ctype_byname();

};
```  
  
## Remarks  
 Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [ctype](../standard-library/ctype-class.md)\<CharType>( `_Refs`) or the equivalent for base class `ctype<char>`.  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



