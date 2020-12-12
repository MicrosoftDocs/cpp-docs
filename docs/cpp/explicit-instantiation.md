---
description: "Learn more about: Explicit Instantiation"
title: "Explicit Instantiation"
ms.date: "11/04/2016"
helpviewer_keywords: ["templates, instantiation", "explicit instantiation", "instantiation, explicit"]
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
---
# Explicit Instantiation

You can use explicit instantiation to create an instantiation of a templated class or function without actually using it in your code. Because this is useful when you are creating library (.lib) files that use templates for distribution, uninstantiated template definitions are not put into object (.obj) files.

This code explicitly instantiates `MyStack` for **`int`** variables and six items:

```cpp
template class MyStack<int, 6>;
```

This statement creates an instantiation of `MyStack` without reserving any storage for an object. Code is generated for all members.

The next line explicitly instantiates only the constructor member function:

```cpp
template MyStack<int, 6>::MyStack( void );
```

You can explicitly instantiate function templates by using a specific type argument to re-declare them, as shown in the example in [Function Template Instantiation](../cpp/function-template-instantiation.md).

You can use the **`extern`** keyword to prevent the automatic instantiation of members. For example:

```cpp
extern template class MyStack<int, 6>;
```

Similarly, you can mark specific members as being external and not instantiated:

```cpp
extern template MyStack<int, 6>::MyStack( void );
```

You can use the **`extern`** keyword to keep the compiler from generating the same instantiation code in more than one object module. You must instantiate the template function by using the specified explicit template parameters in at least one linked module if the function is called, or you will get a linker error when the program is built.

> [!NOTE]
> The **`extern`** keyword in the specialization only applies to member functions defined outside of the body of the class. Functions defined inside the class declaration are considered inline functions and are always instantiated.

## See also

[Function Templates](../cpp/function-templates.md)
