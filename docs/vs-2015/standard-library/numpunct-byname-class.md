---
title: "numpunct_byname Class | Microsoft Docs"
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
  - "std.numpunct_byname"
  - "numpunct_byname"
  - "xlocnum/std::numpunct_byname"
  - "std::numpunct_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numpunct_byname class"
ms.assetid: 18412924-e085-4771-b5e9-7a200cbdd7c0
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# numpunct_byname Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [numpunct_byname Class](https://docs.microsoft.com/cpp/standard-library/numpunct-byname-class).  
  
The derived template class describes an object that can serve as a `numpunct` facet of a given locale enabling the formatting and punctuation of numeric and Boolean expressions.  
  
## Syntax  
  
```
template <class CharType>
class numpunct_byname : public numpunct<Elem> {
public:
    explicit numpunct_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit numpunct_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~numpunct_byname();

 };
```  
  
## Remarks  
 Its behavior is determined by the [named](../standard-library/locale-class.md#locale__name) locale `_Locname`. The constructor initializes its base object with [numpunct](../standard-library/numpunct-class.md#numpunct__numpunct)\<CharType>( `_Refs`).  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







