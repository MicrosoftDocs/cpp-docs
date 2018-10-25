---
title: "no_smart_pointers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["no_search_pointers"]
dev_langs: ["C++"]
helpviewer_keywords: ["no_smart_pointers attribute"]
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# no_smart_pointers
**C++ Specific**  

Suppresses the creation of smart pointers for all interfaces in the type library.  

## Syntax  

```
no_smart_pointers
```  

## Remarks  

By default, when you use `#import`, you get a smart pointer declaration for all interfaces in the type library. These smart pointers are of type [_com_ptr_t Class](../cpp/com-ptr-t-class.md).  

**END C++ Specific**  

## See Also  

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)