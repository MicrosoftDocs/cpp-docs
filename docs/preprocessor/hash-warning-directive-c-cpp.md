---
description: "Learn more about: #warning directive (C/C++)"
title: "#warning directive (C/C++)"
ms.date: 10/15/2025
f1_keywords: ["#warning"]
helpviewer_keywords: ["#warning directive", "preprocessor, directives", "warning directive (#warning directive)"]
---
# #warning directive (C/C++)

The **#warning** directive emits a user-specified warning message at compile time. It doesn't stop compilation. This directive is available starting in C23 and C++23.

## Syntax

> **#warning** *token-string*

## Remarks

The warning message is the *token-string* parameter. The *token-string* parameter isn't subject to macro expansion and can be optionally enclosed in quotes.\
Use this directive to inform the developer of a nonfatal issue or to communicate other important information during compilation.

The following example shows how to use the **#warning** directive:

```cpp
#if defined(_LEGACY_FEATURE_FLAG)
#warning "_LEGACY_FEATURE is deprecated and should not be used."
#endif
```

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)\
[#error directive](../preprocessor/hash-error-directive-c-cpp.md)