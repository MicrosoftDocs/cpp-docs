---
description: "Learn more about: `selectany`"
title: "selectany"
ms.date: "11/04/2016"
f1_keywords: ["selectany_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], selectany", "selectany __declspec keyword"]
ms.assetid: 9c353017-5a42-4f50-b741-bd13da1ce84d
---
# `selectany`

**Microsoft Specific**

Tells the compiler that the declared global data item (variable or object) is a pick-any COMDAT (a packaged function).

## Syntax

> **`__declspec( selectany )`** *declarator*

## Remarks

At link time, if multiple definitions of a COMDAT are seen, the linker picks one and discards the rest. If the linker option [`/OPT:REF`](../build/reference/opt-optimizations.md) (Optimizations) is selected, then COMDAT elimination will occur to remove all the unreferenced data items in the linker output.

Constructors and assignment by global function or static methods in the declaration do not create a reference and will not prevent /OPT:REF elimination. Side effects from such code should not be depended on when no other references to the data exist.

For dynamically initialized, global objects, **`selectany`** will discard an unreferenced object's initialization code, as well.

A global data item can normally be initialized only once in an EXE or DLL project. **`selectany`** can be used in initializing global data defined by headers, when the same header appears in more than one source file. **`selectany`** is available in both the C and C++ compilers.

> [!NOTE]
> **`selectany`** can only be applied to the actual initialization of global data items that are externally visible.

## Example: `selectany` attribute

This code shows how to use the **`selectany`** attribute:

```cpp
//Correct - x1 is initialized and externally visible
__declspec(selectany) int x1=1;

//Incorrect - const is by default static in C++, so
//x2 is not visible externally (This is OK in C, since
//const is not by default static in C)
const __declspec(selectany) int x2 =2;

//Correct - x3 is extern const, so externally visible
extern const __declspec(selectany) int x3=3;

//Correct - x4 is extern const, so it is externally visible
extern const int x4;
const __declspec(selectany) int x4=4;

//Incorrect - __declspec(selectany) is applied to the uninitialized
//declaration of x5
extern __declspec(selectany) int x5;

// OK: dynamic initialization of global object
class X {
public:
X(int i){i++;};
int i;
};

__declspec(selectany) X x(1);
```

## Example: Use `selectany` attribute to ensure data COMDAT folding

This code shows how to use the **`selectany`** attribute to ensure data COMDAT folding when you also use the [`/OPT:ICF`](../build/reference/opt-optimizations.md) linker option. Note that data must be marked with **`selectany`** and placed in a **`const`** (readonly) section. You must explicitly specify the read-only section.

```cpp
// selectany2.cpp
// in the following lines, const marks the variables as read only
__declspec(selectany) extern const int ix = 5;
__declspec(selectany) extern const int jx = 5;
int main() {
   int ij;
   ij = ix + jx;
}
```

**END Microsoft Specific**

## See also

[`__declspec`](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
