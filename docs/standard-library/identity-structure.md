---
title: "identity Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::identity"
  - "utility/std::identity"
  - "identity"
  - "std.identity"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "identity class"
  - "identity structure"
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
caps.latest.revision: 15
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
# identity Structure
A struct that provides a type definition as the template parameter.  
  
## Syntax  
```  
struct identity {
   typedef Type type;
   Type operator()(const Type& left) const;
   };  
```  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|The value to identify.|  
  
## Remarks  
 The class contains the public type definition `type`, which is the same as the template parameter Type. It is used in conjunction with template function [forward](../standard-library/utility-functions.md#forward) to ensure that a function parameter has the desired type.  
  
 For compatibility with older code, the class also defines the identity function `operator()` which returns its argument `left`.  
  
## Requirements  
 **Header:** \<utility>  
  
 **Namespace:** std  
  
## See Also  
 [\<utility>](../standard-library/utility.md)



