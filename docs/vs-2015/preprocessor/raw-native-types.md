---
title: "raw_native_types | Microsoft Docs"
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
  - "raw_native_types"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "raw_native_types attribute"
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# raw_native_types
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [raw_native_types](https://docs.microsoft.com/cpp/preprocessor/raw-native-types).  
  
**C++ Specific**  
  
 Disables the use of COM support classes in the high-level wrapper functions and forces the use of low-level data types instead.  
  
## Syntax  
  
```  
raw_native_types  
```  
  
## Remarks  
 By default, the high-level error-handling methods use the COM support classes [_bstr_t](../cpp/bstr-t-class.md) and [_variant_t](../cpp/variant-t-class.md) in place of the `BSTR` and **VARIANT** data types and raw COM interface pointers. These classes encapsulate the details of allocating and deallocating memory storage for these data types, and greatly simplify type casting and conversion operations.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



