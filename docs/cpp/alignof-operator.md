---
description: "Learn more about: alignof Operator"
title: "alignof Operator"
ms.date: "12/17/2018" 
f1_keywords: ["__alignof_cpp", "alignof_cpp", "__alignof", "_alignof"]
helpviewer_keywords: ["alignas [C++]", "alignment of structures", "__alignof keyword [C++]", "alignof [C++]", "types [C++], alignment requirements"]
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
---
# alignof Operator

The **`alignof`** operator returns the alignment in bytes of the specified type as a value of type **`size_t`**.

## Syntax

```cpp
alignof( type )
```

## Remarks

For example:

| Expression | Value |
|--|--|
| **`alignof( char )`** | 1 |
| **`alignof( short )`** | 2 |
| **`alignof( int )`** | 4 |
| **`alignof( long long )`** | 8 |
| **`alignof( float )`** | 4 |
| **`alignof( double )`** | 8 |

The **`alignof`** value is the same as the value for **`sizeof`** for basic types. Consider, however, this example:

```cpp
typedef struct { int a; double b; } S;
// alignof(S) == 8
```

In this case, the **`alignof`** value is the alignment requirement of the largest element in the structure.

Similarly, for

```cpp
typedef __declspec(align(32)) struct { int a; } S;
```

`alignof(S)` is equal to `32`.

One use for **`alignof`** would be as a parameter to one of your own memory-allocation routines. For example, given the following defined structure `S`, you could call a memory-allocation routine named `aligned_malloc` to allocate memory on a particular alignment boundary.

```cpp
typedef __declspec(align(32)) struct { int a; double b; } S;
int n = 50; // array size
S* p = (S*)aligned_malloc(n * sizeof(S), alignof(S));
```

For more information on modifying alignment, see:

- [pack](../preprocessor/pack.md)

- [align](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md)

- [Examples of Structure Alignment](../build/x64-software-conventions.md#examples-of-structure-alignment) (x64 specific)

For more information on differences in alignment in code for x86 and x64, see:

- [Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)

### Microsoft-specific

**`alignof`** and **`__alignof`** are synonyms in the Microsoft compiler. Before it became part of the standard in C++11, the Microsoft-specific **`__alignof`** operator provided this functionality. For maximum portability, you should use the **`alignof`** operator instead of the Microsoft-specific **`__alignof`** operator.

For compatibility with previous versions, **`_alignof`** is a synonym for **`__alignof`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
