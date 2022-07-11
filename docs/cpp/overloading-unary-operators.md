---
description: "Learn more about: Overloading unary operators"
title: "Overloading unary operators"
ms.date: 07/08/2022
helpviewer_keywords: ["unary operators [C++], plus", "increment operators [C++], overloaded", "unary operators [C++], minus", "operators [C++], unary", "redefinable unary operators [C++]", "unary operators [C++]", "pointer dereference operator overloading", "plus operator"]
ms.assetid: 7683ef08-42a4-4283-928f-d3dd4f3ab4c0
---
# Overloading unary operators

Unary operators produce a result from a single operand. You can define overloads of a standard set of unary operators to work on user-defined types.

## Overloadable unary operators

You can overload the following unary operators on user-defined types:

- **`!`** ([logical NOT](../cpp/logical-negation-operator-exclpt.md))

- **`&`** ([address-of](../cpp/address-of-operator-amp.md))

- **`~`** ([complement](../cpp/one-s-complement-operator-tilde.md))

- **`*`** ([pointer dereference](../cpp/indirection-operator-star.md))

- **`+`** ([unary plus](../cpp/unary-plus-and-negation-operators-plus-and.md))

- **`-`** ([unary negation](../cpp/unary-plus-and-negation-operators-plus-and.md))

- **`++`** ([prefix increment](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)) or ([postfix increment](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md))

- **`--`** ([prefix decrement](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)) or ([postfix decrement](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md))

- [Conversion operators](../cpp/user-defined-type-conversions-cpp.md)

## Unary operator overload declarations

You can declare overloaded unary operators either as non-static member functions or as nonmember functions. Overloaded unary member functions take no argument because they implicitly operate on **`this`**. Nonmember functions are declared with one argument. When both forms are declared, the compiler follows the rules for overload resolution to determine which function to use, if any.

The following rules apply to all prefix unary operators. To declare a unary operator function as a non-static member function, use this declaration form:

> *`return-type`* **`operator`** *`op`* **`();`**

In this form, *`return-type`* is the return type and *`op`* is one of the operators listed in the preceding table.

To declare a unary operator function as a nonmember function, use this declaration form:

> *`return-type`* **`operator`** *`op`* **`(`** *`class-type`* **`);`**

In this form, *`return-type`* is the return type, *`op`* is one of the operators listed in the preceding table, and *`class-type`* is the class type of the argument on which to operate.

The postfix forms of **`++`** and **`--`** take an extra **`int`** argument to distinguish them from the prefix forms. For more information about the prefix and postfix forms of **`++`** and **`--`**, see [Increment and decrement operator overloading](../cpp/increment-and-decrement-operator-overloading-cpp.md).

> [!NOTE]
> There's no restriction on the return types of the unary operators. For example, it makes sense for logical NOT (**`!`**) to return a **`bool`** value, but this behavior isn't enforced.

## See also

[Operator overloading](../cpp/operator-overloading.md)
