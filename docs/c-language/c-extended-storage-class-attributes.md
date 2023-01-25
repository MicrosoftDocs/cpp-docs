---
description: "Learn more about: C extended storage-class attributes"
title: "C extended storage-class attributes"
ms.date: 04/14/2021
helpviewer_keywords: ["__declspec keyword [C]", "extended attributes", "extended storage-class attributes", "storage class specifiers, C storage classes"]
---
# C extended storage-class attributes

**Microsoft Specific**

More up-to-date information on storage class attributes can be found under [`__declspec` (C++ Reference)](../cpp/declspec.md).

Extended attribute syntax simplifies and standardizes the Microsoft-specific extensions to the C language. The storage-class attributes that use extended attribute syntax include **`thread`**, **`naked`**, **`dllimport`**, and **`dllexport`**.

The extended attribute syntax for specifying storage-class information uses the **`__declspec`** keyword, which specifies that an instance of a given type is to be stored with a Microsoft-specific storage-class attribute (**`thread`**, **`naked`**, **`dllimport`**, or **`dllexport`**). Examples of other storage-class modifiers include the **`static`** and **`extern`** keywords. However, these keywords are part of the ISO C standard and aren't covered by extended attribute syntax.

## Syntax

*`storage-class-specifier`*:\
&emsp;**`__declspec (`** *`extended-decl-modifier-seq`* **`)`** /\* Microsoft-specific \*/

*`extended-decl-modifier-seq`*:&emsp;/\* Microsoft-specific \*/\
&emsp;*`extended-decl-modifier`*<sub>opt</sub>\
&emsp;*`extended-decl-modifier-seq`* *`extended-decl-modifier`*

*`extended-decl-modifier`*:&emsp;/\* Microsoft-specific \*/\
&emsp;**`thread`**\
&emsp;**`naked`**\
&emsp;**`dllimport`**\
&emsp;**`dllexport`**

White space separates the declaration modifiers. An *`extended-decl-modifier-seq`* can be empty; in this case, **`__declspec`** has no effect.

The **`thread`**, **`naked`**, **`dllimport`**, and **`dllexport`** storage-class attributes are a property only of the declaration of the data or function to which they're applied. They don't redefine the type attributes of the function itself. The **`thread`** attribute affects data only. The **`naked`** attribute affects functions only. The **`dllimport`** and **`dllexport`** attributes affect functions and data.

**END Microsoft Specific**

## See also

[Declarations and types](../c-language/declarations-and-types.md)
