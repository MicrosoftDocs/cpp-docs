---
description: "Learn more about: Inheritance Keywords"
title: "Inheritance Keywords"
ms.date: "11/04/2016"
f1_keywords: ["__multiple_inheritance", "__single_inheritance_cpp", "__virtual_inheritance_cpp", "__virtual_inheritance", "__multiple_inheritance_cpp", "__single_inheritance"]
helpviewer_keywords: ["__single_inheritance keyword [C++]", "declaring derived classes [C++]", "keywords [C++], inheritance keywords", "__multiple_inheritance keyword [C++]", "__virtual_inheritance keyword [C++]", "inheritance, declaring derived classes", "derived classes [C++], declaring", "inheritance, keywords"]
ms.assetid: bb810f56-7720-4fea-b8b6-9499edd141df
---
# Inheritance Keywords

**Microsoft Specific**

```
class [__single_inheritance] class-name;
class [__multiple_inheritance] class-name;
class [__virtual_inheritance] class-name;
```

where:

*class-name*<br/>
The name of the class being declared.

C++ allows you to declare a pointer to a class member prior to the definition of the class. For example:

```cpp
class S;
int S::*p;
```

In the code above, `p` is declared to be a pointer to integer member of class S. However, `class S` has not yet been defined in this code; it has only been declared. When the compiler encounters such a pointer, it must make a generalized representation of the pointer. The size of the representation is dependent on the inheritance model specified. There are four ways to specify an inheritance model to the compiler:

- In the IDE under **Pointer-to-member representation**

- At the command line using the [/vmg](../build/reference/vmb-vmg-representation-method.md) switch

- Using the [pointers_to_members](../preprocessor/pointers-to-members.md) pragma

- Using the inheritance keywords **`__single_inheritance`**, **`__multiple_inheritance`**, and **`__virtual_inheritance`**. This technique controls the inheritance model on a per-class basis.

    > [!NOTE]
    >  If you always declare a pointer to a member of a class after defining the class, you don't need to use any of these options.

Declaring a pointer to a member of a class prior to the class definition affects the size and speed of the resulting executable file. The more complex the inheritance used by a class, the greater the number of bytes required to represent a pointer to a member of the class and the larger the code required to interpret the pointer. Single inheritance is least complex, and virtual inheritance is most complex.

If the example above is changed to:

```cpp
class __single_inheritance S;
int S::*p;
```

regardless of command-line options or pragmas, pointers to members of `class S` will use the smallest possible representation.

> [!NOTE]
> The same forward declaration of a class pointer-to-member representation should occur in every translation unit that declares pointers to members of that class, and the declaration should occur before the pointers to members are declared.

For compatibility with previous versions, **_single_inheritance**, **_multiple_inheritance**, and **_virtual_inheritance** are synonyms for **`__single_inheritance`**, **`__multiple_inheritance`**, and **`__virtual_inheritance`** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

**END Microsoft Specific**

## See also

[Keywords](../cpp/keywords-cpp.md)
