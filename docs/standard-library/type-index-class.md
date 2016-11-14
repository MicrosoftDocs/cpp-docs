---
title: "type_index Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "typeindex/std::type_index"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "type_index class"
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
caps.latest.revision: 14
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
# type_index Class
The `type_index` class wraps a pointer to [type_info Class](../cpp/type-info-class.md) to assist in indexing by such objects.  
  
class type_index {
   public:
   type_index(const type_info& tinfo);
   const char *name() const;
   size_t hash_code() const;
   bool operator==(const type_info& right) const;
   bool operator!=(const type_info& right) const;
   bool operator<(const type_info& right) const;
   bool operator\<=(const type_info& right) const;
   bool operator>(const type_info& right) const;
   bool operator>=(const type_info& right) const;
   };  
  
 The constructor initializes `ptr` to `&tinfo`.  
  
 `name` returns `ptr->name()`.  
  
 `hash_code` returns `ptr->hash_code().`  
  
 `operator==` returns `*ptr == right.ptr`.  
  
 `operator!=` returns `!(*this == right)`.  
  
 `operator<` returns `*ptr->before(*right.ptr)`.  
  
 `operator<=` returns `!(right < *this).`  
  
 `operator>` returns `right < *this`.  
  
 `operator>=` returns `!(*this < right)`.  
  
## See Also  
 [Run-Time Type Information](../cpp/run-time-type-information.md)   
 [\<typeindex>](../standard-library/typeindex.md)



