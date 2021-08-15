---
description: "Learn more about: private (C++)"
title: "private (C++)"
ms.date: "11/04/2016"
f1_keywords: ["private_cpp"]
helpviewer_keywords: ["private keyword [C++]"]
ms.assetid: 94e99983-46a5-4e21-800c-28f8a7c6a8ff
---
# private (C++)

## Syntax

```
private:
   [member-list]
private base-class
```

## Remarks

When preceding a list of class members, the **`private`** keyword specifies that those members are accessible only from member functions and friends of the class. This applies to all members declared up to the next access specifier or the end of the class.

When preceding the name of a base class, the **`private`** keyword specifies that the public and protected members of the base class are private members of the derived class.

Default access of members in a class is private. Default access of members in a structure or union is public.

Default access of a base class is private for classes and public for structures. Unions cannot have base classes.

For related information, see [friend](../cpp/friend-cpp.md), [public](../cpp/public-cpp.md), [protected](../cpp/protected-cpp.md), and the member-access table in [Controlling Access to Class Members](member-access-control-cpp.md).

## /clr Specific

In CLR types, the C++ access specifier keywords (**`public`**, **`private`**, and **`protected`**) can affect the visibility of types and methods with regard to assemblies. For more information, see [Member Access Control](member-access-control-cpp.md).

> [!NOTE]
> Files compiled with [/LN](../build/reference/ln-create-msil-module.md) are not affected by this behavior. In this case, all managed classes (either public or private) will be visible.

## END /clr Specific

## Example

```cpp
// keyword_private.cpp
class BaseClass {
public:
   // privMem accessible from member function
   int pubFunc() { return privMem; }
private:
   void privMem;
};

class DerivedClass : public BaseClass {
public:
   void usePrivate( int i )
      { privMem = i; }   // C2248: privMem not accessible
                         // from derived class
};

class DerivedClass2 : private BaseClass {
public:
   // pubFunc() accessible from derived class
   int usePublic() { return pubFunc(); }
};

int main() {
   BaseClass aBase;
   DerivedClass aDerived;
   DerivedClass2 aDerived2;
   aBase.privMem = 1;     // C2248: privMem not accessible
   aDerived.privMem = 1;  // C2248: privMem not accessible
                          //    in derived class
   aDerived2.pubFunc();   // C2247: pubFunc() is private in
                          //    derived class
}
```

## See also

[Controlling Access to Class Members](member-access-control-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
