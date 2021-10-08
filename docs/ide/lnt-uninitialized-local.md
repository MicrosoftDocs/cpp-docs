---
title: lnt-uninitialized-local
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-uninitialized-local."
ms.date: 09/29/2021
f1_keywords: ["lnt-uninitialized-local"]
helpviewer_keywords: ["lnt-uninitialized-local"]
monikerRange: ">=msvc-160"
---
# `lnt-uninitialized-local`

Local variables should be initialized when they're declared.

This guidance comes from the [C++ Core Guideline ES.20](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es20-always-initialize-an-object).

The `lnt-uninitialized-local` check is controlled by the **Uninitialized Local Variable** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Examples

```cpp
#include <string>

void example() {
  int i;     // Flagged: 'i' is not initialized when declared.

  std::string s;  // OK: The type is default initialized.

  int j;     // OK: The local is immediately assigned after declaration.
  j = 0;     // This is allowed as as a slight relaxation of the C++ Core Guideline.
}
```

## How to fix the issue

The fix the linter suggests is to initialize the local at declaration. The suggestions are type-specific for types that have literals. For types without literals, an empty brace-initializer is used.

```cpp
struct MyStruct { int x; };

void example() {
  int i =  0;
  bool b = false;
  int* p = nullptr;
  MyStruct s{};
}
```

## Remarks

This check isn't an uninitialized use check. The C++ Core Guidelines recommend that all variables are initialized when they're declared.

The current implementation does allow for assignment after declaration, as long as assignment immediately follows the declaration.

Using "Almost Always Auto" for declarations requires initialization at declaration.

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)\
[C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es20-always-initialize-an-object)\
[Almost Always Auto - Herb Sutter](https://herbsutter.com/2013/08/12/gotw-94-solution-aaa-style-almost-always-auto/)
