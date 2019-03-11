---
title: "rename_namespace"
ms.date: "10/18/2018"
f1_keywords: ["rename_namespace"]
helpviewer_keywords: ["rename_namespace attribute"]
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
---
# rename_namespace

**C++ Specific**

Renames the namespace that contains the contents of the type library.

## Syntax

```
rename_namespace("NewName")
```

### Parameters

*NewName*<br/>
The new name of the namespace.

## Remarks

It takes a single argument, *NewName*, which specifies the new name for the namespace.

To remove the namespace, use the [no_namespace](../preprocessor/no-namespace.md) attribute instead.

**END C++ Specific**

## See also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)
