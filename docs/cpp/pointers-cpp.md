---
title: "Pointers (C++)"
ms.date: "11/19/2019"
description: "About raw pointers and smart pointers in Microsoft C++."
helpviewer_keywords: ["pointers (C++)"]
ms.assetid: 595387c5-8e58-4670-848f-344c7caf985e
---
# Pointers (C++)

A pointer is a variable that stores the memory address of an object. Pointers are used extensively in both C and C++ for three main purposes:

- to allocate new objects on the heap,
- to pass functions to other functions
- to iterate over elements in arrays or other data structures.

In C-style programming, *raw pointers* are used for all these scenarios. However, raw pointers are the source of many serious programming errors. Therefore, their use is strongly discouraged except where they provide a significant performance benefit and there is no ambiguity as to which pointer is the *owning pointer* that is responsible for deleting the object. Modern C++ provides *smart pointers* for allocating objects, *iterators* for traversing data structures, and *lambda expressions* for passing functions. By using these language and library facilities instead of raw pointers, you will make your program safer, easier to debug, and simpler to understand and maintain. See [Smart pointers](smart-pointers-modern-cpp.md), [Iterators](../standard-library/iterators.md), and [Lambda expressions](lambda-expressions-in-cpp.md) for more information.

## In this section

- [Raw pointers](raw-pointers.md)
- [Const and volatile pointers](const-and-volatile-pointers.md)
- [new and delete operators](new-and-delete-operators.md)
- [Smart pointers](smart-pointers-modern-cpp.md)
- [How to: Create and use unique_ptr instances](how-to-create-and-use-unique-ptr-instances.md)
- [How to: Create and use shared_ptr instances](how-to-create-and-use-shared-ptr-instances.md)
- [How to: Create and use weak_ptr instances](how-to-create-and-use-weak-ptr-instances.md)
- [How to: Create and use CComPtr and CComQIPtr instances](how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md)

## See also

[Iterators](../standard-library/iterators.md)</br>
[Lambda expressions](lambda-expressions-in-cpp.md)
