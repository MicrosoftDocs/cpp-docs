---
description: "Learn more about: empty_bases"
title: "empty_bases"
ms.date: 03/01/2022
f1_keywords: ["empty_bases_cpp", "empty_bases"]
helpviewer_keywords: ["__declspec keyword (C++), empty_bases", "empty_bases __declspec keyword"]
---
# `empty_bases`

**Microsoft Specific**

The C++ Standard requires that a most-derived object must have a non-zero size and must occupy one or more bytes of storage. Because the requirement only extends to most-derived objects, base class subobjects aren't subject to this constraint. The Empty Base Class Optimization (EBCO) takes advantage of this liberty. It results in reduced memory consumption, which can improve performance. The Microsoft Visual C++ compiler has historically had limited support for EBCO. In Visual Studio 2015 Update 3 and later versions, we've added a new `__declspec(empty_bases)` attribute for class types that takes full advantage of this optimization.

> [!IMPORTANT]
> Use of `__declspec(empty_bases)` can cause an ABI-breaking change in structure and class layout where it's applied. Make sure that all client code uses the same definitions for structures and classes as your code when you make use of this storage class attribute.

## Syntax

> **`__declspec( empty_bases )`**

## Remarks

In Visual Studio, absent any `__declspec(align())` or `alignas()` specifications, an empty class is 1 byte in size:

```cpp
struct Empty1 {};
static_assert(sizeof(Empty1) == 1, "Empty1 should be 1 byte");
```

A class with a single non-static data member of type `char` is also 1 byte in size:

```cpp
struct Struct1
{
  char c;
};
static_assert(sizeof(Struct1) == 1, "Struct1 should be 1 byte");
```

Combining these classes in a class hierarchy also results in a class that's 1 byte in size:

```cpp
struct Derived1 : Empty1
{
  char c;
};
static_assert(sizeof(Derived1) == 1, "Derived1 should be 1 byte");
```

This result is the Empty Base Class Optimization at work, as without it `Derived1` would be 2 bytes in size: 1 byte for `Empty1` and 1 byte for `Derived1::c`. The class layout is also optimal when there's a chain of empty classes:

```cpp
struct Empty2 : Empty1 {};
struct Derived2 : Empty2
{
  char c;
};
static_assert(sizeof(Derived2) == 1, "Derived2 should be 1 byte");
```

However, the default class layout in Visual Studio doesn't take advantage of EBCO in multiple inheritance scenarios:

```cpp
struct Empty3 {};
struct Derived3 : Empty2, Empty3
{
  char c;
};
static_assert(sizeof(Derived3) == 1, "Derived3 should be 1 byte"); // Error
```

Although `Derived3` could be 1 byte in size, the default class layout results in it being 2 bytes in size. The class layout algorithm is adding 1 byte of padding between any two consecutive empty base classes, effectively resulting in `Empty2` consuming an extra byte within `Derived3`:

````
class Derived3  size(2):
   +---
0  | +--- (base class Empty2)
0  | | +--- (base class Empty1)
   | | +---
   | +---
1  | +--- (base class Empty3)
   | +---
1  | c
   +---
````

The effects of this suboptimal layout are compounded when the alignment requirements of a later base class or member subobject force extra padding:

```cpp
struct Derived4 : Empty2, Empty3
{
  int i;
};
static_assert(sizeof(Derived4) == 4, "Derived4 should be 4 bytes"); // Error
```

The natural alignment for an object of type `int` is 4 bytes, so 3 bytes of extra padding must be added after `Empty3` to correctly align `Derived4::i`:

````
class Derived4 size(8):
   +---
0  | +--- (base class Empty2)
0  | | +--- (base class Empty1)
   | | +---
   | +---
1  | +--- (base class Empty3)
   | +---
   | <alignment member> (size=3)
4  | i
   +---
````

Another issue with the default class layout is that an empty base class may be laid out at an offset past the end of the class:

```cpp
struct Struct2 : Struct1, Empty1
{
};
static_assert(sizeof(Struct2) == 1, "Struct2 should be 1 byte");
```

````
class Struct2 size(1):
   +---
0  | +--- (base class Struct1)
0  | | c
   | +---
1  | +--- (base class Empty1)
   | +---
   +---
````

Although `Struct2` is the optimal size, `Empty1` is laid out at offset 1 within `Struct2` but the size of `Struct2` isn't increased to account for it. As a result, for an array `A` of `Struct2` objects, the address of the `Empty1` subobject of `A[0]` will be the same as the address of `A[1]`, which shouldn't be the case. This issue wouldn't occur if `Empty1` were laid out at offset 0 within `Struct2`, thereby overlapping the `Struct1` subobject.

The default layout algorithm hasn't been modified to address these limitations and fully take advantage of EBCO. Such a change would break binary compatibility. If the default layout for a class changed as a result of EBCO, every object file and library that contains the class definition would need to be recompiled so they all agree on the class layout. This requirement would also extend to libraries obtained from external sources. The developers of such libraries would have to provide independent versions compiled both with and without the EBCO layout to support customers who use different versions of the compiler. Although we can't change the default layout, we can provide a means to change the layout on a per-class basis with the addition of the `__declspec(empty_bases)` class attribute. A class defined with this attribute can make full use of EBCO.

```cpp
struct __declspec(empty_bases) Derived3 : Empty2, Empty3
{
  char c;
};
static_assert(sizeof(Derived3) == 1, "Derived3 should be 1 byte"); // No Error
```

````
class Derived3  size(1):
   +---
0  | +--- (base class Empty2)
0  | | +--- (base class Empty1)
   | | +---
   | +---
0  | +--- (base class Empty3)
   | +---
0  | c
   +---
````

All of the subobjects of `Derived3` are laid out at offset 0, and its size is the optimal 1 byte. One important point to remember is that `__declspec(empty_bases)` only affects the layout of the class to which it's applied. It isn't applied recursively to base classes:

```cpp
struct __declspec(empty_bases) Derived5 : Derived4
{
};
static_assert(sizeof(Derived5) == 4, "Derived5 should be 4 bytes"); // Error
```

````
class Derived5  size(8):
   +---
0  | +--- (base class Derived4)
0  | | +--- (base class Empty2)
0  | | | +--- (base class Empty1)
   | | | +---
   | | +---
1  | | +--- (base class Empty3)
   | | +---
   | | <alignment member> (size=3)
4  | | i
   | +---
   +---
````

Although `__declspec(empty_bases)` is applied to `Derived5`, it isn't eligible for EBCO because it doesn't have any direct empty base classes, so it has no effect. However, if instead it's applied to the `Derived4` base class, which is eligible for EBCO, both `Derived4` and `Derived5` will have optimal layout:

```cpp
struct __declspec(empty_bases) Derived4 : Empty2, Empty3
{
  int i;
};
static_assert(sizeof(Derived4) == 4, "Derived4 should be 4 bytes"); // No Error

struct Derived5 : Derived4
{
};
static_assert(sizeof(Derived5) == 4, "Derived5 should be 4 bytes"); // No Error
```

````
class Derived5  size(4):
   +---
0  | +--- (base class Derived4)
0  | | +--- (base class Empty2)
0  | | | +--- (base class Empty1)
   | | | +---
   | | +---
0  | | +--- (base class Empty3)
   | | +---
0  | | i
   | +---
   +---
````

Because of the requirement that all object files and libraries agree on the class layout, `__declspec(empty_bases)` can only be applied to classes that you control. It can't be applied to classes in the standard library, or to classes included in libraries that aren't also recompiled with the EBCO layout.

**END Microsoft Specific**

## See also

[`__declspec`](../cpp/declspec.md)\
[Keywords](../cpp/keywords-cpp.md)
