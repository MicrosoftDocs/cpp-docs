---
description: "Learn more about: Templates and Name Resolution"
title: "Templates and Name Resolution"
ms.date: "11/04/2016"
ms.assetid: 519ba7b5-cd25-4549-865a-9a7b9dffdc28
---
# Templates and Name Resolution

In template definitions, there are three types of names.

- Locally declared names, including the name of the template itself and any names declared inside the template definition.

- Names from the enclosing scope outside the template definition.

- Names that depend in some way on the template arguments, referred to as dependent names.

While the first two names also pertain to class and function scopes, special rules for name resolution are required in template definitions to deal with the added complexity of dependent names. This is because the compiler knows little about these names until the template is instantiated, because they could be totally different types depending on which template arguments are used. Nondependent names are looked up according to the usual rules and at the point of definition of the template. These names, being independent of the template arguments, are looked up once for all template specializations. Dependent names are not looked up until the template is instantiated and are looked up separately for each specialization.

A type is dependent if it depends on the template arguments. Specifically, a type is dependent if it is:

- The template argument itself:

    ```cpp
    T
    ```

- A qualified name with a qualification including a dependent type:

    ```cpp
    T::myType
    ```

- A qualified name if the unqualified part identifies a dependent type:

    ```cpp
    N::T
    ```

- A const or volatile type for which the base type is a dependent type:

    ```cpp
    const T
    ```

- A pointer, reference, array, or function pointer type based on a dependent type:

    ```cpp
    T *, T &, T [10], T (*)()
    ```

- An array whose size is based on a template parameter:

    ```cpp
    template <int arg> class X {
    int x[arg] ; // dependent type
    }
    ```

- a template type constructed from a template parameter:

    ```cpp
    T<int>, MyTemplate<T>
    ```

## Type Dependence and Value Dependence

Names and expressions dependent on a template parameter are categorized as type dependent or value dependent, depending on whether the template parameter is a type parameter or a value parameter. Also, any identifiers declared in a template with a type dependent on the template argument are considered value dependent, as is a integral or enumeration type initialized with a value-dependent expression.

Type-dependent and value-dependent expressions are expressions that involve variables that are type dependent or value dependent. These expressions can have semantics that differ, depending on the parameters used for the template.

## See also

[Templates](../cpp/templates-cpp.md)
