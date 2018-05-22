---
title: "make_signed Class | Microsoft Docs"
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
  - "std::tr1::make_signed"
  - "make_signed"
  - "std.tr1.make_signed"
  - "std.make_signed"
  - "std::make_signed"
  - "type_traits/std::make_signed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_signed class[TR1]"
  - "make_signed"
ms.assetid: 686247c0-247c-496b-9b1b-ba9dcd633621
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# make_signed Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [make_signed Class](https://docs.microsoft.com/cpp/standard-library/make-signed-class).  
  
Makes type or the smallest signed type greater than or equal in size to type.  
  
## Syntax  
  
```
template <class T>
struct make_signed;

template <class T>
using make_signed_t = typename make_signed<T>::type;
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `T` if `is_signed<T>` holds true. Otherwise it is the smallest unsigned type `UT` for which `sizeof (T) <= sizeof (UT)`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







