---
description: "Learn more about: Temporary objects"
title: "Temporary objects"
ms.date: 03/21/2022
helpviewer_keywords: ["temporary objects", "objects [C++], temporary"]
---
# Temporary objects

A temporary object is an unnamed object created by the compiler to store a temporary value.

## Remarks

In some cases, it's necessary for the compiler to create temporary objects. These temporary objects can be created for the following reasons:

- To initialize a **`const`** reference with an initializer of a type different from the underlying type of the reference being initialized.

- To store the return value of a function that returns a user-defined type (UDT). These temporaries are created only if your program doesn't copy the return value to an object. For example:

    ```cpp
    UDT Func1();    //  Declare a function that returns a user-defined
                    //   type.

    ...

    Func1();        //  Call Func1, but discard return value.
                    //  A temporary object is created to store the return
                    //   value.
    ```

   Because the return value isn't copied to another object, a temporary object is created. A more common case where temporaries are created is during the evaluation of an expression where overloaded operator functions must be called. These overloaded operator functions return a user-defined type that often isn't copied to another object.

   Consider the expression `ComplexResult = Complex1 + Complex2 + Complex3`. The expression `Complex1 + Complex2` is evaluated, and the result is stored in a temporary object. Next, the expression *temporary* `+ Complex3` is evaluated, and the result is copied to `ComplexResult` (assuming the assignment operator isn't overloaded).

- To store the result of a cast to a user-defined type. When an object of a given type is explicitly converted to a user-defined type, that new object is constructed as a temporary object.

Temporary objects have a lifetime, defined by their point of creation and the point at which they're destroyed. Any expression that creates more than one temporary object eventually destroys them in reverse order of creation.

When destruction of a temporary occurs depends on how it's used:

- Temporaries used for initializing **`const`** references:\
  If an initializer isn't an l-value of the same type as the reference being initialized, a temporary of the underlying object type is created. It's initialized by the initialization expression. This temporary object is destroyed immediately after the reference object to which it's bound is destroyed. As this destruction can happen well after the expression that created the temporary, it's sometimes referred to as *lifetime extension*.

- Temporaries created as an effect of expression evaluation:\
  All temporaries that don't fit in the first category, and that are created as an effect of expression evaluation, are destroyed at the end of the expression statement (that is, at the semicolon), or at the end of the controlling expressions for **`for`**, **`if`**, **`while`**, **`do`**, and **`switch`** statements.

## See also

Herb Sutter's blog on [References, simply](https://herbsutter.com/2020/02/23/references-simply/)
