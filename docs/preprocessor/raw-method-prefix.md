---
title: "raw_method_prefix"
ms.date: "10/18/2018"
f1_keywords: ["raw_method_prefix"]
helpviewer_keywords: ["raw_method_prefix attribute"]
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
---
# raw_method_prefix

**C++ Specific**

Specifies a different prefix to avoid name collisions.

## Syntax

```
raw_method_prefix("Prefix")
```

### Parameters

*Prefix*<br/>
The prefix to be used.

## Remarks

Low-level properties and methods are exposed by member functions named with a default prefix of **raw_** to avoid name collisions with the high-level error-handling member functions.

> [!NOTE]
> The effects of the **raw_method_prefix** attribute will not be changed by the presence of the [raw_interfaces_only](#_predir_raw_interfaces_only) attribute. The **raw_method_prefix** always takes precedence over `raw_interfaces_only` in specifying a prefix. If both attributes are used in the same `#import` statement, then the prefix specified by the **raw_method_prefix** attribute is used.

**END C++ Specific**

## See also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)
