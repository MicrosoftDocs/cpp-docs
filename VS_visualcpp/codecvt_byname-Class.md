---
title: "codecvt_byname Class"
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
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
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
# codecvt_byname Class
A derived template class that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning conversions.  
  
## Syntax  
  
```  
template<Class CharType, class Byte, class StateType>  
    class codecvt_byname: public codecvt<CharType, Byte, StateType> {  
public:  
    explicit codecvt_byname(  
        const char* _Locname,  
        size_t _Refs = 0  
    );  
```  
  
```  
explicit codecvt_byname(  
    const string& _Locname,  
    size_t _Refs = 0  
);  
```  
  
```  
protected:  
    virtual ~codecvt_byname( );  
};  
```  
  
#### Parameters  
 `_Locname`  
 A named locale.  
  
 `_Refs`  
 An initial reference count.  
  
## Remarks  
 Byname facets are automatically created when a named locale is constructed.  
  
 Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [codecvt](../VS_visualcpp/codecvt-Class.md)<CharType, Byte, StateType>( `_Refs`).  
  
## Requirements  
 **Header:** <locale\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)