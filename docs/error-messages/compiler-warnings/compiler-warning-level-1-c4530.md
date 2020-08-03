---
title: "Compiler Warning (level 1) C4530"
description: "Reference guide to Microsoft C++ compiler warning C4530."
ms.date: "04/02/2020"
f1_keywords: ["C4530"]
helpviewer_keywords: ["C4530"]
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
---
# Compiler Warning (level 1) C4530

> C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

The code uses C++ exception handling, but [/EHsc](../../build/reference/eh-exception-handling-model.md) wasn't included in the compiler options.

## Remarks

The compiler requires the **`/EHsc`** option to build C++ code that follows the C++ standard for exception handling. Standard C++ *unwind semantics* specifies that objects and stack frames constructed between where an exception is thrown and where it's caught must be destroyed and their resources recovered. This process is known as *unwinding the stack*.

The **`/EHsc`** option tells the compiler to generate code that calls the destructors on automatic storage objects when an exception passes through the containing stack frame. *Automatic storage* objects are objects allocated on the stack, such as local variables. It's called automatic storage because it's allocated automatically when functions are called, and released automatically when they return. A *stack frame* is the data placed on the stack when a function is called, along with its automatic storage.

When an exception is thrown, it may travel through several stack frames before it's caught. These stack frames must be unwound as the exception passes through them in reverse calling order. The automatic storage objects in each stack frame must be destroyed to recover their resources cleanly. It's the same destruction and recovery process that happens automatically when a function returns normally.

When the **`/EHsc`** option isn't enabled, automatic storage objects in the stack frames between the throwing function and the function where the exception is caught don't get destroyed. Only the automatic storage objects created in a **`try`** or **`catch`** block get destroyed, which can lead to significant resource leaks and other unexpected behavior.

If no exceptions can possibly be thrown in your executable, you may safely ignore this warning. Some code may require other exception handling options. For more information, see [/EH](../../build/reference/eh-exception-handling-model.md).

## Example

The following sample generates C4530:

```cpp
// C4530.cpp
// compile with: /W1
int main() {
   try{} catch(int*) {}   // C4530
}
```

Compile the sample with **`/EHsc`** to resolve the warning.
