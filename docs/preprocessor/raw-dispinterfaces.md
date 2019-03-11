---
title: "raw_dispinterfaces"
ms.date: "11/04/2016"
f1_keywords: ["raw_dispinterfaces"]
helpviewer_keywords: ["raw_dispinterfaces attribute"]
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
---
# raw_dispinterfaces
**C++ Specific**

Tells the compiler to generate low-level wrapper functions for dispinterface methods and properties that call `IDispatch::Invoke` and return the HRESULT error code.

## Syntax

```
raw_dispinterfaces
```

## Remarks

If this attribute is not specified, only high-level wrappers are generated, which throw C++ exceptions in case of failure.

**END C++ Specific**

## See also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)
