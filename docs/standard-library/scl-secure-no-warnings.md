---
description: "Learn more about: _SCL_SECURE_NO_WARNINGS"
title: "_SCL_SECURE_NO_WARNINGS"
ms.date: "11/04/2016"
f1_keywords: ["_SCL_SECURE_NO_DEPRECATE", "_SCL_SECURE_NO_WARNINGS"]
helpviewer_keywords: ["_SCL_SECURE_NO_DEPRECATE", "_SCL_SECURE_NO_WARNINGS"]
ms.assetid: ef0ddea9-7c62-4b53-8b64-5f4fd369776f
---
# _SCL_SECURE_NO_WARNINGS

Calling any of the potentially unsafe methods in the C++ Standard Library results in [Compiler Warning (level 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). To disable this warning, define the macro _SCL_SECURE_NO_WARNINGS in your code:

```cpp
#define _SCL_SECURE_NO_WARNINGS
```

If you use precompiled headers, put this directive in your precompiled header file before you include any C runtime library or standard library headers. If you put it in an individual source code file before you include the precompiled header file, it is ignored by the compiler.

## Remarks

Other ways to disable warning C4996 include:

- Using the [/D (Preprocessor Definitions)](../build/reference/d-preprocessor-definitions.md) compiler option:

   > cl /D_SCL_SECURE_NO_WARNINGS [other compiler options] myfile.cpp

- Using the [/w](../build/reference/compiler-option-warning-level.md) compiler option:

   > cl /wd4996 [other compiler options] myfile.cpp

- Using the [#pragma warning](../preprocessor/warning.md) directive:

   ```cpp
   #pragma warning(disable:4996)
   ```

Also, you can manually change the level of warning C4996 with the **/w\<l>\<n>** compiler option. For example, to set warning C4996 to level 4:

> cl /w44996 [other compiler options] myfile.cpp

For more information, see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../build/reference/compiler-option-warning-level.md).

## See also

[Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)
