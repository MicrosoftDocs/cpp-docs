---
description: "Learn more about: #warning directive (C/C++)"
title: "#warning directive (C/C++)"
ms.date: "11/08/2023"
f1_keywords: ["#warning"]
helpviewer_keywords: ["#warning directive", "preprocessor, directives", "warning directive (#warning directive)"]
---
# #warning directive (C/C++)

The **#warning** directive emits a user-specified warning message at compile time, and does not stop the compilation. This directive is a standard feature since C23 and C++23.

## Syntax

> **#warning** *token-string*

## Remarks

The warning message that this directive emits includes the *token-string* parameter. The *token-string* parameter is not subject to macro expansion and can be optionally enclosed in quotes. This directive is used to inform the developer of a non-fatal issue that may have occured, or to disseminate important information. The following example shows how the **#warning** directive is used:

```cpp
#if defined(_LEGACY_FEATURE_FLAG)
#warning "_LEGACY_FEATURE is deprecated and should not be used."
#endif
```

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)\
[#error directive](../preprocessor/hash-error-directive-c-cpp.md)