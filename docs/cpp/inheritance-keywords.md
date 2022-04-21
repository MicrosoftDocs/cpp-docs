---
description: "Learn more about: Inheritance Keywords"
title: "Inheritance keywords"
ms.date: 04/12/2021
f1_keywords: ["__multiple_inheritance", "__single_inheritance_cpp", "__virtual_inheritance_cpp", "__virtual_inheritance", "__multiple_inheritance_cpp", "__single_inheritance"]
helpviewer_keywords: ["__single_inheritance keyword [C++]", "declaring derived classes [C++]", "keywords [C++], inheritance keywords", "__multiple_inheritance keyword [C++]", "__virtual_inheritance keyword [C++]", "inheritance, declaring derived classes", "derived classes [C++], declaring", "inheritance, keywords"]
---
# Inheritance keywords

**Microsoft Specific**

> **`class`** *`class-name`*\
> **`class __single_inheritance`** *`class-name`*\
> **`class __multiple_inheritance`** *`class-name`*\
> **`class __virtual_inheritance`** *`class-name`*

where:

*`class-name`*<br/>
The name of the class being declared.

C++ allows you to declare a pointer to a class member before the definition of the class. For example:

```cpp
class S;
int S::*p;
```

In the code above, `p` is declared to be a pointer to integer member of class S. However, `class S` hasn't been defined yet in this code; it's only been declared. When the compiler encounters such a pointer, it must make a generalized representation of the pointer. The size of the representation is dependent on the inheritance model specified. There are three ways to specify an inheritance model to the compiler:

- At the command line using the [`/vmg`](../build/reference/vmb-vmg-representation-method.md) switch

- Using the [`pointers_to_members`](../preprocessor/pointers-to-members.md) pragma

- Using the inheritance keywords **`__single_inheritance`**, **`__multiple_inheritance`**, and **`__virtual_inheritance`**. This technique controls the inheritance model on a per-class basis.

    > [!NOTE]
    >  If you always declare a pointer to a member of a class after defining the class, you don't need to use any of these options.

If you declare a pointer to a class member before the class is defined, it can negatively affect the size and speed of the resulting executable file. The more complex the inheritance used by a class, the greater the number of bytes required to represent a pointer to a member of the class. And, the larger the code required to interpret the pointer. Single (or no) inheritance is least complex, and virtual inheritance is most complex. Pointers to members you declare before the class is defined always use the largest, most complex representation.

If the example above is changed to:

```cpp
class __single_inheritance S;
int S::*p;
```

then no matter the command-line options or pragmas you specify, pointers to members of `class S` will use the smallest possible representation.

> [!NOTE]
> The same forward declaration of a class pointer-to-member representation should occur in every translation unit that declares pointers to members of that class, and the declaration should occur before the pointers to members are declared.

For compatibility with previous versions, **`_single_inheritance`**, **`_multiple_inheritance`**, and **`_virtual_inheritance`** are synonyms for **`__single_inheritance`**, **`__multiple_inheritance`**, and **`__virtual_inheritance`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

**END Microsoft Specific**

## See also

[Keywords](../cpp/keywords-cpp.md)
