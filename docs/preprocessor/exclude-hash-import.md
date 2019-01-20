---
title: "exclude (#import)"
ms.date: "10/18/2018"
f1_keywords: ["exclude"]
helpviewer_keywords: ["exclude attribute"]
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
---
# exclude (\#import)

**C++ Specific**

Excludes items from the type library header files being generated.

## Syntax

```
exclude("Name1"[, "Name2",...])
```

### Parameters

*Name1*<br/>
First item to be excluded.

*Name2*<br/>
Second item to be excluded (if necessary).

## Remarks

Type libraries may include definitions of items defined in system headers or other type libraries. This attribute can take any number of arguments, each being a top-level type library item to be excluded.

**END C++ Specific**

## See also

- [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)
- [#import Directive](../preprocessor/hash-import-directive-cpp.md)
