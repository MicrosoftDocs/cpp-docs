---
description: "Learn more about: Common Visual C++ ARM Migration Issues"
title: "Common Visual C++ ARM Migration Issues"
ms.date: "05/06/2019"
ms.assetid: 0f4c434e-0679-4331-ba0a-cc15dd435a46
---
# Common Visual C++ ARM Migration Issues

When using the Microsoft C++ compiler (MSVC), the same C++ source code might produce different results on the ARM architecture than it does on x86 or x64 architectures.

## Sources of migration issues

Many issues that you might encounter when you migrate code from the x86 or x64 architectures to the ARM architecture are related to source-code constructs that might invoke undefined, implementation-defined, or unspecified behavior.

*Undefined behavior* is behavior that the C++ standard does not define, and that's caused by an operation that has no reasonable result: for example, converting a floating-point value to an unsigned integer, or shifting a value by a number of positions that is negative or exceeds the number of bits in its promoted type.

*Implementation-defined behavior* is behavior that the C++ standard requires the compiler vendor to define and document. A program can safely rely on implementation-defined behavior, even though doing so might not be portable. Examples of implementation-defined behavior include the sizes of built-in data types and their alignment requirements. An example of an operation that might be affected by implementation-defined behavior is accessing the variable arguments list.

*Unspecified behavior* is behavior that the C++ standard leaves intentionally non-deterministic. Although the behavior is considered non-deterministic, particular invocations of unspecified behavior are determined by the compiler implementation. However, there is no requirement for a compiler vendor to predetermine the result or guarantee consistent behavior between comparable invocations, and there is no requirement for documentation. An example of unspecified behavior is the order in which sub-expressions, which include arguments to a function call, are evaluated.

Other migration issues can be attributed to hardware differences between ARM and x86 or x64 architectures that interact with the C++ standard differently. For example, the strong memory model of the x86 and x64 architecture gives **`volatile`**-qualified variables some additional properties that have been used to facilitate certain kinds of inter-thread communication in the past. But the ARM architecture's weak memory model doesn't support this use, nor does the C++ standard require it.

> [!IMPORTANT]
> Although **`volatile`** gains some properties that can be used to implement limited forms of inter-thread communication on x86 and x64, these additional properties are not sufficient to implement inter-thread communication in general. The C++ standard recommends that such communication be implemented by using appropriate synchronization primitives instead.

Because different platforms might express these kinds of behavior differently, porting software between platforms can be difficult and bug-prone if it depends on the behavior of a specific platform. Although many of these kinds of behavior can be observed and might appear stable, relying on them is at least non-portable, and in the cases of undefined or unspecified behavior, is also an error. Even the behavior that's cited in this document should not be relied on, and could change in future compilers or CPU implementations.

## Example migration issues

The rest of this document describes how the different behavior of these C++ language elements can produce different results on different platforms.

### Conversion of floating-point to unsigned integer

On the ARM architecture, conversion of a floating-point value to a 32-bit integer saturates to the nearest value that the integer can represent if the floating-point value is outside the range that the integer can represent. On the x86 and x64 architectures, the conversion wraps around if the integer is unsigned, or is set to -2147483648 if the integer is signed. None of these architectures directly support the conversion of floating-point values to smaller integer types; instead, the conversions are performed to 32 bits, and the results are truncated to a smaller size.

For the ARM architecture, the combination of saturation and truncation means that conversion to unsigned types correctly saturates smaller unsigned types when it saturates a 32-bit integer, but produces a truncated result for values that are larger than the smaller type can represent but too small to saturate the full 32-bit integer. Conversion also saturates correctly for 32-bit signed integers, but truncation of saturated, signed integers results in -1 for positively-saturated values and 0 for negatively-saturated values. Conversion to a smaller signed integer produces a truncated result that's unpredictable.

For the x86 and x64 architectures, the combination of wrap-around behavior for unsigned integer conversions and explicit valuation for signed integer conversions on overflow, together with truncation, make the results for most shifts unpredictable if they are too large.

These platforms also differ in how they handle conversion of NaN (Not-a-Number) to integer types. On ARM, NaN converts to 0x00000000; on x86 and x64, it converts to 0x80000000.

Floating-point conversion can only be relied on if you know that the value is within the range of the integer type that it's being converted to.

### Shift operator (\<\< >>) behavior

On the ARM architecture, a value can be shifted left or right up to 255 bits before the pattern begins to repeat. On x86 and x64 architectures, the pattern is repeated at every multiple of 32 unless the source of the pattern is a 64-bit variable; in that case, the pattern repeats at every multiple of 64 on x64, and every multiple of 256 on x86, where a software implementation is employed. For example, for a 32-bit variable that has a value of 1 shifted left by 32 positions, on ARM the result is 0, on x86 the result is 1, and on x64 the result is also 1. However, if the source of the value is a 64-bit variable, then the result on all three platforms is 4294967296, and the value doesn't "wrap around" until it's shifted 64 positions on x64, or 256 positions on ARM and x86.

Because the result of a shift operation that exceeds the number of bits in the source type is undefined, the compiler is not required to have consistent behavior in all situations. For example, if both operands of a shift are known at compile time, the compiler may optimize the program by using an internal routine to precompute the result of the shift and then substituting the result in place of the shift operation. If the shift amount is too large, or negative, the result of the internal routine might be different than the result of the same shift expression as executed by the CPU.

### Variable arguments (varargs) behavior

On the ARM architecture, parameters from the variable arguments list that are passed on the stack are subject to alignment. For example, a 64-bit parameter is aligned on a 64-bit boundary. On x86 and x64, arguments that are passed on the stack are not subject to alignment and pack tightly. This difference can cause a variadic function like `printf` to read memory addresses that were intended as padding on ARM if the expected layout of the variable arguments list is not matched exactly, even though it might work for a subset of some values on the x86 or x64 architectures. Consider this example:

```C
// notice that a 64-bit integer is passed to the function, but '%d' is used to read it.
// on x86 and x64 this may work for small values because %d will "parse" the low-32 bits of the argument.
// on ARM the calling convention will align the 64-bit value and the code will print a random value
printf("%d\n", 1LL);
```

In this case, the bug can be fixed by making sure that the correct format specification is used so that the alignment of the argument is considered. This code is correct:

```C
// CORRECT: use %I64d for 64-bit integers
printf("%I64d\n", 1LL);
```

### Argument evaluation order

Because ARM, x86, and x64 processors are so different, they can present different requirements to compiler implementations, and also different opportunities for optimizations. Because of this, together with other factors like calling-convention and optimization settings, a compiler might evaluate function arguments in a different order on different architectures or when the other factors are changed. This can cause the behavior of an app that relies on a specific evaluation order to change unexpectedly.

This kind of error can occur when arguments to a function have side effects that impact other arguments to the function in the same call. Usually this kind of dependency is easy to avoid, but it can sometimes be obscured by dependencies that are difficult to discern, or by operator overloading. Consider this code example:

```cpp
handle memory_handle;

memory_handle->acquire(*p);
```

This appears well-defined, but if `->` and `*` are overloaded operators, then this code is translated to something that resembles this:

```cpp
Handle::acquire(operator->(memory_handle), operator*(p));
```

And if there's a dependency between `operator->(memory_handle)` and `operator*(p)`, the code might rely on a specific evaluation order, even though the original code looks like there is no possible dependency.

### volatile keyword default behavior

The MSVC compiler supports two different interpretations of the **`volatile`** storage qualifier that you can specify by using compiler switches. The [/volatile:ms](reference/volatile-volatile-keyword-interpretation.md) switch selects the Microsoft extended volatile semantics that guarantee strong ordering, as has been the traditional case for x86 and x64 because of the strong memory model on those architectures. The [/volatile:iso](reference/volatile-volatile-keyword-interpretation.md) switch selects the strict C++ standard volatile semantics that don't guarantee strong ordering.

On the ARM architecture, the default is **/volatile:iso** because ARM processors have a weakly ordered memory model, and because ARM software doesn't have a legacy of relying on the extended semantics of **/volatile:ms** and doesn't usually have to interface with software that does. However, it's still sometimes convenient or even required to compile an ARM program to use the extended semantics. For example, it may be too costly to port a program to use the ISO C++ semantics, or driver software might have to adhere to the traditional semantics to function correctly. In these cases, you can use the **/volatile:ms** switch; however, to recreate the traditional volatile semantics on ARM targets, the compiler must insert memory barriers around each read or write of a **`volatile`** variable to enforce strong ordering, which can have a negative impact on performance.

On the x86 and x64 architectures, the default is **/volatile:ms** because much of the software that has already been created for these architectures by using MSVC relies on them. When you compile x86 and x64 programs, you can specify the **/volatile:iso** switch to help avoid unnecessary reliance on the traditional volatile semantics, and to promote portability.

## See also

[Configure Visual C++ for ARM processors](configuring-programs-for-arm-processors-visual-cpp.md)
