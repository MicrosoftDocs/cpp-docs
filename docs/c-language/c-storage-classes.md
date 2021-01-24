---
description: "Learn more about: C Storage Classes"
title: "C Storage Classes"
ms.date: "08/31/2018"
helpviewer_keywords: ["static variables, lifetime", "storage classes", "lifetime, variables", "specifiers, storage class", "storage class specifiers, C storage classes", "storage duration"]
ms.assetid: 893fb929-f7a9-43dc-a0b3-29cb1ef845c1
---
# C Storage Classes

The "storage class" of a variable determines whether the item has a "global" or "local" lifetime. C calls these two lifetimes "static" and "automatic." An item with a global lifetime exists and has a value throughout the execution of the program. All functions have global lifetimes.

Automatic variables, or variables with local lifetimes, are allocated new storage each time execution control passes to the block in which they are defined. When execution returns, the variables no longer have meaningful values.

C provides the following storage-class specifiers:

## Syntax

*storage-class-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`auto`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`register`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`static`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`extern`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`typedef`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__declspec (`** *extended-decl-modifier-seq* **`)`** /\* Microsoft-specific \*/

Except for **`__declspec`**, you can use only one *storage-class-specifier* in the *declaration-specifier* in a declaration. If no storage-class specification is made, declarations within a block create automatic objects.

Items declared with the **`auto`** or **`register`** specifier have local lifetimes. Items declared with the **`static`** or **`extern`** specifier have global lifetimes.

Since **`typedef`** and **`__declspec`** are semantically different from the other four *storage-class-specifier* terminals, they are discussed separately. For specific information on **`typedef`**, see [`typedef` Declarations](../c-language/typedef-declarations.md). For specific information on **`__declspec`**, see [Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md).

The placement of variable and function declarations within source files also affects storage class and visibility. Declarations outside all function definitions are said to appear at the "external level." Declarations within function definitions appear at the "internal level."

The exact meaning of each storage-class specifier depends on two factors:

- Whether the declaration appears at the external or internal level

- Whether the item being declared is a variable or a function

[Storage-Class Specifiers for External-Level Declarations](../c-language/storage-class-specifiers-for-external-level-declarations.md) and [Storage-Class Specifiers for Internal-Level Declarations](../c-language/storage-class-specifiers-for-internal-level-declarations.md) describe the *storage-class-specifier* terminals in each kind of declaration and explain the default behavior when the *storage-class-specifier* is omitted from a variable. [Storage-Class Specifiers with Function Declarations](../c-language/storage-class-specifiers-with-function-declarations.md) discusses storage-class specifiers used with functions.

## See also

[Declarations and Types](../c-language/declarations-and-types.md)
