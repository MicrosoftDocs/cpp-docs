---
title: "identity Structure | Microsoft Docs"
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
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# identity Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [identity Structure](https://docs.microsoft.com/cpp/standard-library/identity-structure).  
  
A struct that provides a type definition as the template parameter.  
  
## Syntax  
  
struct identity {
   typedef Type type;
   Type operator()(const Type& left) const;
   };  
  
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







