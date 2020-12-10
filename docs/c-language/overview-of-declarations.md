---
description: "Learn more about: Overview of Declarations"
title: "Overview of Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["declarations, about declarations", "type qualifiers"]
ms.assetid: fcd2364c-c2a5-4fbf-9027-19dac4144cb5
---
# Overview of Declarations

A "declaration" specifies the interpretation and attributes of a set of identifiers. A declaration that also causes storage to be reserved for the object or function named by the identifier is called a "definition." C declarations for variables, functions, and types have this syntax:

## Syntax

*`declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`* *`attribute-seq`*<sub>opt</sub> *`init-declarator-list`*<sub>opt</sub>**`;`**

/\* *`attribute-seq`*<sub>opt</sub> is Microsoft-specific */

*`declaration-specifiers`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`init-declarator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator-list`* **`,`** *`init-declarator`*

*`init-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`* **`=`** *`initializer`*

> [!NOTE]
> This syntax for *`declaration`* is not repeated in the following sections. Syntax in the following sections usually begins with the *`declarator`* nonterminal.

The declarations in the *`init-declarator-list`* contain the identifiers being named; *`init`* is an abbreviation for initializer. The *`init-declarator-list`* is a comma-separated sequence of declarators, each of which can have additional type information, or an initializer, or both. The *`declarator`* contains the identifiers, if any, being declared. The *`declaration-specifiers`* nonterminal consists of a sequence of type and storage-class specifiers that indicate the linkage, storage duration, and at least part of the type of the entities that the declarators denote. Declarations are made up of some combination of storage-class specifiers, type specifiers, type qualifiers, declarators, and initializers.

Declarations can contain one or more of the optional attributes listed in *`attribute-seq`*; *`seq`* is an abbreviation for sequence. These Microsoft-specific attributes perform several functions, which are discussed in detail throughout this book.

In the general form of a variable declaration, *`type-specifier`* gives the data type of the variable. The *`type-specifier`* can be a compound, as when the type is modified by **`const`** or **`volatile`**. The `declarator` gives the name of the variable, possibly modified to declare an array or a pointer type. For example,

```C
int const *fp;
```

declares a variable named `fp` as a pointer to a nonmodifiable (**`const`**) **`int`** value. You can define more than one variable in a declaration by using multiple declarators, separated by commas.

A declaration must have at least one declarator, or its type specifier must declare a structure tag, union tag, or members of an enumeration. Declarators provide any remaining information about an identifier. A declarator is an identifier that can be modified with brackets (**`[ ]`**), asterisks (<strong>`*`</strong>), or parentheses ( **`( )`** ) to declare an array, pointer, or function type, respectively. When you declare simple variables (such as character, integer, and floating-point items), or structures and unions of simple variables, the `declarator` is just an identifier. For more information on declarators, see [Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md).

All definitions are implicitly declarations, but not all declarations are definitions. For example, variable declarations that begin with the **`extern`** storage-class specifier are "referencing," rather than "defining" declarations. If an external variable is to be referred to before it's defined, or if it's defined in another source file from the one where it's used, an **`extern`** declaration is necessary. Storage is not allocated by "referencing" declarations, nor can variables be initialized in declarations.

A storage class or a type (or both) is required in variable declarations. Except for **`__declspec`**, only one storage-class specifier is allowed in a declaration and not all storage-class specifiers are permitted in every context. The **`__declspec`** storage class is allowed with other storage-class specifiers, and it's allowed more than once. The storage-class specifier of a declaration affects how the declared item is stored and initialized, and which parts of a program can reference the item.

The *`storage-class-specifier`* terminals defined in C include **`auto`**, **`extern`**, **`register`**, **`static`**, and **`typedef`**. Microsoft C also includes the *`storage-class-specifier`* terminal **`__declspec`**. All *`storage-class-specifier`* terminals except **`typedef`** and **`__declspec`** are discussed in [Storage Classes](../c-language/c-storage-classes.md). For information about **`typedef`**, see [`typedef` Declarations](../c-language/typedef-declarations.md). For information about **`__declspec`**, see [Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md).

The location of the declaration within the source program and the presence or absence of other declarations of the variable are important factors in determining the lifetime of variables. There can be multiple redeclarations but only one definition. However, a definition can appear in more than one translation unit. For objects with internal linkage, this rule applies separately to each translation unit, because internally linked objects are unique to a translation unit. For objects with external linkage, this rule applies to the entire program. For more information about visibility, see [Lifetime, Scope, Visibility, and Linkage](../c-language/lifetime-scope-visibility-and-linkage.md).

Type specifiers provide some information about the data types of identifiers. The default type specifier is **`int`**. For more information, see [Type Specifiers](../c-language/c-type-specifiers.md). Type specifiers can also define type tags, structure and union component names, and enumeration constants. For more information, see [Enumeration Declarations](../c-language/c-enumeration-declarations.md), [Structure Declarations](../c-language/structure-declarations.md), and [Union Declarations](../c-language/union-declarations.md).

There are two *`type-qualifier`* terminals: **`const`** and **`volatile`**. These qualifiers specify additional properties of types that are relevant only when accessing objects of that type through l-values. For more information on **`const`** and **`volatile`**, see [Type Qualifiers](../c-language/type-qualifiers.md). For a definition of l-values, see [L-Value and R-Value Expressions](../c-language/l-value-and-r-value-expressions.md).

## See also

[C Language Syntax Summary](../c-language/c-language-syntax-summary.md)<br/>
[Declarations and Types](../c-language/declarations-and-types.md)<br/>
[Summary of Declarations](../c-language/summary-of-declarations.md)
