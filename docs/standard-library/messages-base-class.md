---
title: "messages_base Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.messages_base"
  - "messages_base"
  - "std::messages_base"
  - "locale/std::messages_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messages_base class"
ms.assetid: 9aad38c6-4c13-445d-b096-364bd0836efb
caps.latest.revision: 19
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
# messages_base Class
The base class describes an `int` type for the catalog of messages.  
  
## Syntax  
  
```
struct messages_base : locale::facet {
    typedef int catalog;
    explicit messages_base(size_t _Refs = 0)
};
```  
  
## Remarks  
 The type catalog is a synonym for type `int` that describes the possible return values from messages:: [do_open](../standard-library/messages-class.md#messages__do_open).  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



