---
title: "include()"
ms.date: "10/18/2018"
f1_keywords: ["include()"]
helpviewer_keywords: ["include() attribute"]
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
---
# include()

**C++ Specific**

Disables automatic exclusion.

## Syntax

```
include("Name1"[,"Name2", ...])
```

### Parameters

*Name1*<br/>
First item to be forcibly included.

*Name2*<br/>
Second item to be forcibly included (if necessary).

## Remarks

Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. If items have been excluded, as indicated by [Compiler Warning (level 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md), and they should not have been, this attribute can be used to disable the automatic exclusion. This attribute can take any number of arguments, each being the name of the type-library item to be included.

**END C++ Specific**

## See also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)
