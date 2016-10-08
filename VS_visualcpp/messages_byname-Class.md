---
title: "messages_byname Class"
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
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
caps.latest.revision: 20
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
# messages_byname Class
The derived template class describes an object that can serve as a message facet of a given locale, enabling the retrieval of localized messages.  
  
## Syntax  
  
```  
template<class CharType>  
    class messages_byname : public messages<CharType> {  
public:  
    explicit messages_byname(  
        const char *_Locname,  
        size_t _Refs = 0  
    );  
    explicit messages_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );   
protected:  
    virtual ~messages_byname();  
};  
```  
  
#### Parameters  
 `_Locname`  
 A named locale.  
  
 `_Refs`  
 An initial reference count.  
  
## Remarks  
 Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [messages](../VS_visualcpp/messages-Class.md#messages__messages)<CharType\>( `_Refs`).  
  
## Requirements  
 **Header:** <locale\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)