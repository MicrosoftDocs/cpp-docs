---
description: "Learn more about: volatile (C++)"
title: "volatile (C++)"
ms.date: "05/07/2019"
f1_keywords: ["volatile_cpp"]
helpviewer_keywords: ["interrupt handlers and volatile keyword [C++]", "volatile keyword [C++]", "volatile objects", "objects [C++], volatile"]
ms.assetid: 81db4a85-ed5a-4a2c-9a53-5d07a771d2de
---
# volatile (C++)

A type qualifier that you can use to declare that an object can be modified in the program by the hardware.

## Syntax

```
volatile declarator ;
```

## Remarks

You can use the [/volatile](../build/reference/volatile-volatile-keyword-interpretation.md) compiler switch to modify how the compiler interprets this keyword.

Visual Studio interprets the **`volatile`** keyword differently depending on the target architecture. For ARM, if no **/volatile** compiler option is specified, the compiler performs as if **/volatile:iso** were specified. For architectures other than ARM, if no **/volatile** compiler option is specified, the compiler performs as if **/volatile:ms** were specified; therefore, for architectures other than ARM we strongly recommend that you specify **/volatile:iso**, and use explicit synchronization primitives and compiler intrinsics when you are dealing with memory that is shared across threads.

You can use the **`volatile`** qualifier to provide access to memory locations that are used by asynchronous processes such as interrupt handlers.

When **`volatile`** is used on a variable that also has the [__restrict](../cpp/extension-restrict.md) keyword, **`volatile`** takes precedence.

If a **`struct`** member is marked as **`volatile`**, then **`volatile`** is propagated to the whole structure. If a structure does not have a length that can be copied on the current architecture by using one instruction, **`volatile`** may be completely lost on that structure.

The **`volatile`** keyword may have no effect on a field if one of the following conditions is true:

- The length of the volatile field exceeds the maximum size that can be copied on the current architecture by using one instruction.

- The length of the outermost containing **`struct`**—or if it's a member of a possibly nested **`struct`**—exceeds the maximum size that can be copied on the current architecture by using one instruction.

Although the processor does not reorder un-cacheable memory accesses, un-cacheable variables must be marked as **`volatile`** to guarantee that the compiler does not reorder the memory accesses.

Objects that are declared as **`volatile`** are not used in certain optimizations because their values can change at any time.  The system always reads the current value of a volatile object when it is requested, even if a previous instruction asked for a value from the same object.  Also, the value of the object is written immediately on assignment.

## ISO Compliant

If you are familiar with the C# volatile keyword, or familiar with the behavior of **`volatile`** in earlier versions of the Microsoft C++ compiler (MSVC), be aware that the C++11 ISO Standard **`volatile`** keyword is different and is supported in MSVC when the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option is specified. (For ARM, it's specified by default). The **`volatile`** keyword in C++11 ISO Standard code is to be used only for hardware access; do not use it for inter-thread communication. For inter-thread communication, use mechanisms such as [std::atomic\<T>](../standard-library/atomic.md) from the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md).

## End of ISO Compliant

**Microsoft Specific**

When the **/volatile:ms** compiler option is used—by default when architectures other than ARM are targeted—the compiler generates extra code to maintain ordering among references to volatile objects in addition to maintaining ordering to references to other global objects. In particular:

- A write to a volatile object (also known as volatile write) has Release semantics; that is, a reference to a global or static object that occurs before a write to a volatile object in the instruction sequence will occur before that volatile write in the compiled binary.

- A read of a volatile object (also known as volatile read) has Acquire semantics; that is, a reference to a global or static object that occurs after a read of volatile memory in the instruction sequence will occur after that volatile read in the compiled binary.

This enables volatile objects to be used for memory locks and releases in multithreaded applications.

> [!NOTE]
> When it relies on the enhanced guarantee that's provided when the **/volatile:ms** compiler option is used, the code is non-portable.

**END Microsoft Specific**

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[const](../cpp/const-cpp.md)<br/>
[const and volatile Pointers](../cpp/const-and-volatile-pointers.md)
