---
title: "messages_byname Class | Microsoft Docs"
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
  - "messages_byname"
  - "std::messages_byname"
  - "std.messages_byname"
  - "xlocmes/std::messages_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messages_byname class"
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# messages_byname Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [messages_byname Class](https://docs.microsoft.com/cpp/standard-library/messages-byname-class).  
  
The derived template class describes an object that can serve as a message facet of a given locale, enabling the retrieval of localized messages.  
  
## Syntax  
  
```
template <class CharType>
class messages_byname : public messages<CharType> {
public:
    explicit messages_byname(
    const char *_Locname,
    size_t _Refs = 0);

    explicit messages_byname(
    const string& _Locname,
    size_t _Refs = 0);

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
 Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [messages](../standard-library/messages-class.md#messages__messages)\<CharType>( `_Refs`).  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







