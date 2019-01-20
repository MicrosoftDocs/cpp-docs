---
title: "__alignof Operator"
ms.date: "12/17/2018" 
f1_keywords: ["alignas_cpp", "__alignof_cpp", "alignof_cpp", "__alignof", "_alignof"]
helpviewer_keywords: ["alignas [C++]", "alignment of structures", "__alignof keyword [C++]", "alignof [C++]", "types [C++], alignment requirements"]
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
---
# __alignof Operator

C++11 introduces the **alignof** operator that returns the alignment, in bytes, of the specified type. For maximum portability, you should use the alignof operator instead of the Microsoft-specific __alignof operator.

**Microsoft Specific**

Returns a value of type `size_t` that is the alignment requirement of the type.

## Syntax

```cpp
  __alignof( type )
```

## Remarks

For example:

|Expression|Value|
|----------------|-----------|
|**__alignof( char )**|1|
|**__alignof( short )**|2|
|**__alignof( int )**|4|
|**__alignof( \__int64 )**|8|
|**__alignof( float )**|4|
|**__alignof( double )**|8|
|**__alignof( char\* )**|4|

The **__alignof** value is the same as the value for `sizeof` for basic types. Consider, however, this example:

```cpp
typedef struct { int a; double b; } S;
// __alignof(S) == 8
```

In this case, the **__alignof** value is the alignment requirement of the largest element in the structure.

Similarly, for

```cpp
typedef __declspec(align(32)) struct { int a; } S;
```

`__alignof(S)` is equal to `32`.

One use for **__alignof** would be as a parameter to one of your own memory-allocation routines. For example, given the following defined structure `S`, you could call a memory-allocation routine named `aligned_malloc` to allocate memory on a particular alignment boundary.

```cpp
typedef __declspec(align(32)) struct { int a; double b; } S;
int n = 50; // array size
S* p = (S*)aligned_malloc(n * sizeof(S), __alignof(S));
```

For compatibility with previous versions, **_alignof** is a synonym for **__alignof** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

For more information on modifying alignment, see:

- [pack](../preprocessor/pack.md)

- [align](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md)

- [Examples of Structure Alignment](../build/x64-software-conventions.md#examples-of-structure-alignment) (x64 specific)

For more information on differences in alignment in code for x86 and x64, see:

- [Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)

**END Microsoft Specific**

## See also

- [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)
- [Keywords](../cpp/keywords-cpp.md)
