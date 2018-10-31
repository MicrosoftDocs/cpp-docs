---
title: "inject_statement"
ms.date: "10/18/2018"
f1_keywords: ["inject_statement"]
helpviewer_keywords: ["inject_statement attribute"]
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
---
# inject_statement

**C++ Specific**

Inserts its argument as source text into the type-library header.

## Syntax

```
inject_statement("source_text")
```

### Parameters

*source_text*<br/>
Source text to be inserted into the type library header file.

## Remarks

The text is placed at the beginning of the namespace declaration that wraps the type-library contents in the header file.

**END C++ Specific**

## See Also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)