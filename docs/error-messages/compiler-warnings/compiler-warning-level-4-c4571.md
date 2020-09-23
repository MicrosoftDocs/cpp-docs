---
title: "Compiler Warning (level 4) C4571"
description: "Documents the Microsoft C++ compiler warning C4571."
ms.date: 08/24/2020
f1_keywords: ["C4571"]
helpviewer_keywords: ["C4571"]
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
---
# Compiler Warning (level 4) C4571

> Informational: `catch(...)` semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught

C4571 is generated for every `catch(...)` block when you specify the **`/EHs`** compiler option.

## Remarks

When you specify the **`/EHs`** compiler option, `catch(...)` blocks don't catch structured exceptions. (Divide by zero, or null pointer exceptions, for example.) A `catch(...)` block only catches explicitly thrown C++ exceptions. For more information, see [Exception Handling](../../cpp/exception-handling-in-visual-cpp.md).

This warning is off by default.  Turn this warning on to ensure that when you compile with **`/EHs`** your `catch (...)` blocks don't catch structured exceptions. For more information, see [Compiler warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

You can resolve C4571 in one of the following ways:

- Compile with **`/EHa`** if you still want your `catch(...)` blocks to catch structured exceptions.

- Don't enable C4571 if you don't want your `catch(...)` blocks to catch structured exceptions, but you still want to use `catch(...)` blocks.  You can still catch structured exceptions using the structured exception handling keywords (**`__try`**, **`__except`**, and **`__finally`**).  But remember, when compiled using **`/EHs`**, destructors are only called when a C++ exception is thrown, not when an SEH exception occurs.

- Replace `catch(...)` blocks with catch blocks for specific C++ exceptions, and optionally, add structured exception handling around the C++ exception handling (**`__try`**, **`__except`**, and **`__finally`**).   for more information, see [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md) and [`/EH` (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md).

## Example

The following sample generates C4571.

```cpp
// C4571.cpp
// compile with: /EHs /W4 /c
#pragma warning(default : 4571)
int main() {
   try {
      int i = 0, j = 1;
      j /= i;   // this will throw a SE (divide by zero)
   }
   catch(...) {}   // C4571 warning
}
```
