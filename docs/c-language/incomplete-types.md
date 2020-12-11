---
description: "Learn more about: Incomplete Types"
title: "Incomplete Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["void keyword [C], incomplete", "types [C], incomplete", "incomplete types", "unions, incomplete", "arrays [C], incomplete types", "void keyword [C]", "structures, incomplete"]
ms.assetid: 01bc0cf6-9fa7-458c-9371-ecbe54ea6aee
---
# Incomplete Types

An *incomplete type* is a type that describes an identifier but lacks information needed to determine the size of the identifier. An incomplete type can be:

- A structure type whose members you have not yet specified.

- A union type whose members you have not yet specified.

- An array type whose dimension you have not yet specified.

The **`void`** type is an incomplete type that cannot be completed. To complete an incomplete type, specify the missing information. The following examples show how to create and complete the incomplete types.

- To create an incomplete structure type, declare a structure type without specifying its members. In this example, the `ps` pointer points to an incomplete structure type called `student`.

    ```C
    struct student *ps;
    ```

- To complete an incomplete structure type, declare the same structure type later in the same scope with its members specified, as in

    ```C
    struct student
    {
        int num;
    }                   /* student structure now completed */
    ```

- To create an incomplete array type, declare an array type without specifying its repetition count. For example:

    ```C
    char a[];  /* a has incomplete type */
    ```

- To complete an incomplete array type, declare the same name later in the same scope with its repetition count specified, as in

    ```C
    char a[25]; /* a now has complete type */
    ```

## See also

[Declarations and Types](../c-language/declarations-and-types.md)
