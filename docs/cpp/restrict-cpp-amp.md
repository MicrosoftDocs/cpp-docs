---
description: "Learn more about: restrict (C++ AMP)"
title: "restrict (C++ AMP)"
ms.date: "11/04/2016"
f1_keywords: ["cpu_CPP", "amp_CPP"]
helpviewer_keywords: ["restrict clause (C++ AMP)"]
ms.assetid: 07d3291f-7edf-456b-8828-283ac8673661
---
# restrict (C++ AMP)

The restriction specifier can be applied to function and lambda declarations. It enforces restrictions on the code in the function and on the behavior of the function in applications that use the C++ Accelerated Massive Parallelism (C++ AMP) runtime.

> [!NOTE]
> For information about the **`restrict`** keyword that is part of the **`__declspec`** storage-class attributes, see [restrict](../cpp/restrict.md).

The **`restrict`** clause takes the following forms:

|Clause|Description|
|------------|-----------------|
|`restrict(cpu)`|The function can use the full C++ language. Only other functions that are declared by using restrict(cpu) functions can call the function.|
|`restrict(amp)`|The function can only use the subset of the C++ language that C++ AMP can accelerate.|
|A sequence of `restrict(cpu)` and `restrict(amp)`.|The function must adhere to the limitations of both `restrict(cpu)` and   `restrict(amp)`. The function can be called by functions that are declared by using `restrict(cpu)`,  `restrict(amp)`, `restrict(cpu, amp)`, or `restrict(amp, cpu)`.<br /><br /> The form `restrict(A) restrict(B)` can be written as `restrict(A,B)`.|

## Remarks

The **`restrict`** keyword is a contextual keyword. The restriction specifiers, `cpu` and `amp` are not reserved words. The list of specifiers is not extensible. A function that does not have a **`restrict`** clause is the same as a function that has the `restrict(cpu)` clause.

A function that has the `restrict(amp)` clause has the following limitations:

- The function can call only functions that have the `restrict(amp)` clause.

- The function must be inlinable.

- The function can declare only **`int`**, **`unsigned int`**, **`float`**, and **`double`** variables, and classes and structures that contain only these types. **`bool`** is also allowed, but it must be 4-byte-aligned if you use it in a compound type.

- Lambda functions cannot capture by reference and cannot capture pointers.

- References and single-indirection pointers are supported only as local variables, function arguments, and return types.

- The following are not allowed:

  - Recursion.

  - Variables declared with the [volatile](../cpp/volatile-cpp.md) keyword.

  - Virtual functions.

  - Pointers to functions.

  - Pointers to member functions.

  - Pointers in structures.

  - Pointers to pointers.

  - **`goto`** statements.

  - Labeled statements.

  - **`try`**, **`catch`**, or **`throw`** statements.

  - Global variables.

  - Static variables. Use [tile_static Keyword](../cpp/tile-static-keyword.md) instead.

  - **`dynamic_cast`** casts.

  - The **`typeid`** operator.

  - asm declarations.

  - Varargs.

For a discussion of function limitations, see [restrict(amp) restrictions](/archive/blogs/nativeconcurrency/restrictamp-restrictions-part-0-of-n-introduction).

## Example

The following example shows how to use the `restrict(amp)`clause.

```cpp
void functionAmp() restrict(amp) {}
void functionNonAmp() {}

void callFunctions() restrict(amp)
{
    // int is allowed.
    int x;
    // long long int is not allowed in an amp-restricted function. This generates a compiler error.
    // long long int y;

    // Calling an amp-restricted function is allowed.
    functionAmp();

    // Calling a non-amp-restricted function is not allowed.
    // functionNonAmp();
}
```

## See also

[C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)
