---
description: "Learn more about: Anonymous Class Types"
title: "Anonymous Class Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["class types [C++], anonymous", "anonymous class types"]
ms.assetid: 9ba667b2-8c2a-4c29-82a6-fa120b9233c8
---
# Anonymous Class Types

Classes can be anonymous — that is, they can be declared without an *identifier*. This is useful when you replace a class name with a **`typedef`** name, as in the following:

```cpp
typedef struct
{
    unsigned x;
    unsigned y;
} POINT;
```

> [!NOTE]
> The use of anonymous classes shown in the previous example is useful for preserving compatibility with existing C code. In some C code, the use of **`typedef`** in conjunction with anonymous structures is prevalent.

Anonymous classes are also useful when you want a reference to a class member to appear as though it were not contained in a separate class, as in the following:

```cpp
struct PTValue
{
    POINT ptLoc;
    union
    {
        int  iValue;
        long lValue;
    };
};

PTValue ptv;
```

In the preceding code, `iValue` can be accessed using the object member-selection operator (**.**) as follows:

```cpp
int i = ptv.iValue;
```

Anonymous classes are subject to certain restrictions. (For more information about anonymous unions, see [Unions](../cpp/unions.md).) Anonymous classes:

- Cannot have a constructor or destructor.

- Cannot be passed as arguments to functions (unless type checking is defeated using ellipsis).

- Cannot be returned as return values from functions.

## Anonymous structs

**Microsoft Specific**

A Microsoft C extension allows you to declare a structure variable within another structure without giving it a name. These nested structures are called anonymous structures. C++ does not allow anonymous structures.

You can access the members of an anonymous structure as if they were members in the containing structure.

```cpp
// anonymous_structures.c
#include <stdio.h>

struct phone
{
    int  areacode;
    long number;
};

struct person
{
    char   name[30];
    char   gender;
    int    age;
    int    weight;
    struct phone;    // Anonymous structure; no name needed
} Jim;

int main()
{
    Jim.number = 1234567;
    printf_s("%d\n", Jim.number);
}
//Output: 1234567
```

**END Microsoft Specific**
