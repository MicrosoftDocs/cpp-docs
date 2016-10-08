---
title: "numpunct_byname Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 18412924-e085-4771-b5e9-7a200cbdd7c0
caps.latest.revision: 22
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# numpunct_byname Class
The derived template class describes an object that can serve as a `numpunct` facet of a given locale enabling the formatting and punctuation of numeric and Boolean expressions.  
  
## Syntax  
  
```  
template<Class CharType>  
    class numpunct_byname : public numpunct<Elem> {  
public:  
    explicit numpunct_byname(  
        const char* _Locname,  
        size_t _Refs = 0  
    );  
    explicit numpunct_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );  
protected:  
    virtual ~numpunct_byname( );  
   };  
```  
  
## Remarks  
 Its behavior is determined by the [named](../VS_visualcpp/locale-Class.md#locale__name) locale `_Locname`. The constructor initializes its base object with [numpunct](../VS_visualcpp/numpunct-Class.md#numpunct__numpunct)<CharType\>( `_Refs`).  
  
## Requirements  
 **Header:** <locale\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)