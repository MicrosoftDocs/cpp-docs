---
title: "no_smart_pointers"
ms.date: "11/04/2016"
f1_keywords: ["no_search_pointers"]
helpviewer_keywords: ["no_smart_pointers attribute"]
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
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

## See also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)