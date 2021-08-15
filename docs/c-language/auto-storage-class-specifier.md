---
description: "Learn more about: `auto` Storage-Class Specifier"
title: "auto Storage-Class Specifier"
ms.date: "11/04/2016"
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
---
# `auto` Storage-Class Specifier

The **`auto`** storage-class specifier declares an automatic variable, a variable with a local lifetime. An **`auto`** variable is visible only in the block in which it is declared. Declarations of **`auto`** variables can include initializers, as discussed in [Initialization](../c-language/initialization.md). Since variables with **`auto`** storage class are not initialized automatically, you should either explicitly initialize them when you declare them, or assign them initial values in statements within the block. The values of uninitialized **`auto`** variables are undefined. (A local variable of **`auto`** or **`register`** storage class is initialized each time it comes in scope if an initializer is given.)

An internal **`static`** variable (a static variable with local or block scope) can be initialized with the address of any external or **`static`** item, but not with the address of another **`auto`** item, because the address of an **`auto`** item is not a constant.

## See also

[`auto` Keyword](../cpp/auto-cpp.md)
