---
description: "Learn more about: Lifetime"
title: "Lifetime"
ms.date: "11/04/2016"
helpviewer_keywords: ["local variables, lifetime", "variables, automatic", "storage classes, lifetime", "variables, lifetime", "automatic storage class", "automatic storage class, duration", "storage class specifiers, storage duration", "memory allocation, dynamic allocation", "functions [C++], lifetime", "storage duration", "dynamic memory allocation", "memory allocation, dynamic", "lifetime", "global variables, lifetime"]
ms.assetid: ff0b42cb-3f0f-49a3-a94f-d1d825d8ddfe
---
# Lifetime

"Lifetime" is the period during execution of a program in which a variable or function exists. The storage duration of the identifier determines its lifetime.

An identifier declared with the *storage-class-specifier* **`static`** has static storage duration. Identifiers with static storage duration (also called "global") have storage and a defined value for the duration of a program. Storage is reserved and the identifier's stored value is initialized only once, before program startup. An identifier declared with external or internal linkage also has static storage duration (see [Linkage](../c-language/linkage.md)).

An identifier declared without the **`static`** storage-class specifier has automatic storage duration if it is declared inside a function. An identifier with automatic storage duration (a "local identifier") has storage and a defined value only within the block where the identifier is defined or declared. An automatic identifier is allocated new storage each time the program enters that block, and it loses its storage (and its value) when the program exits the block. Identifiers declared in a function with no linkage also have automatic storage duration.

The following rules specify whether an identifier has global (static) or local (automatic) lifetime:

- All functions have static lifetime. Therefore they exist at all times during program execution. Identifiers declared at the external level (that is, outside all blocks in the program at the same level of function definitions) always have global (static) lifetimes.

- If a local variable has an initializer, the variable is initialized each time it is created (unless it is declared as **`static`**). Function parameters also have local lifetime. You can specify global lifetime for an identifier within a block by including the **`static`** storage-class specifier in its declaration. Once declared **`static`**, the variable retains its value from one entry of the block to the next.

Although an identifier with a global lifetime exists throughout the execution of the source program (for example, an externally declared variable or a local variable declared with the **`static`** keyword), it may not be visible in all parts of the program. See [Scope and Visibility](../c-language/scope-and-visibility.md) for information about visibility, and see [Storage Classes](../c-language/c-storage-classes.md) for a discussion of the *storage-class-specifier* nonterminal.

Memory can be allocated as needed (dynamic) if created through the use of special library routines such as `malloc`. Since dynamic memory allocation uses library routines, it is not considered part of the language. See the [malloc](../c-runtime-library/reference/malloc.md) function in the *Run-Time Library Reference*.

## See also

[Lifetime, Scope, Visibility, and Linkage](../c-language/lifetime-scope-visibility-and-linkage.md)
