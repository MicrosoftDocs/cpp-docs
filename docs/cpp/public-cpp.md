---
description: "Learn more about: public (C++)"
title: "public (C++)"
ms.date: "11/04/2016"
f1_keywords: ["public_cpp"]
helpviewer_keywords: ["public keyword [C++]"]
ms.assetid: f3e10a59-39f6-4bcd-827e-3e99f8f89497
---
# public (C++)

## Syntax

```
public:
   [member-list]
public base-class
```

## Remarks

When preceding a list of class members, the **`public`** keyword specifies that those members are accessible from any function. This applies to all members declared up to the next access specifier or the end of the class.

When preceding the name of a base class, the **`public`** keyword specifies that the public and protected members of the base class are public and protected members, respectively, of the derived class.

Default access of members in a class is private. Default access of members in a structure or union is public.

Default access of a base class is private for classes and public for structures. Unions cannot have base classes.

For more information, see [private](../cpp/private-cpp.md), [protected](../cpp/protected-cpp.md), [friend](../cpp/friend-cpp.md), and the member-access table in [Controlling Access to Class Members](member-access-control-cpp.md).

## /clr Specific

In CLR types, the C++ access specifier keywords (**`public`**, **`private`**, and **`protected`**) can affect the visibility of types and methods with regard to assemblies. For more information, see [Member Access Control](member-access-control-cpp.md).

> [!NOTE]
> Files compiled with [/LN](../build/reference/ln-create-msil-module.md) are not affected by this behavior. In this case, all managed classes (either public or private) will be visible.

## END /clr Specific

## Example

```cpp
// keyword_public.cpp
class BaseClass {
public:
   int pubFunc() { return 0; }
};

class DerivedClass : public BaseClass {};

int main() {
   BaseClass aBase;
   DerivedClass aDerived;
   aBase.pubFunc();       // pubFunc() is accessible
                          //    from any function
   aDerived.pubFunc();    // pubFunc() is still public in
                          //    derived class
}
```

## See also

[Controlling Access to Class Members](member-access-control-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
