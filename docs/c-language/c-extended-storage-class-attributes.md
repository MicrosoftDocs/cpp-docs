---
description: "Learn more about: C Extended Storage-Class Attributes"
title: "C Extended Storage-Class Attributes"
ms.date: "11/04/2016"
helpviewer_keywords: ["__declspec keyword [C]", "extended attributes", "extended storage-class attributes", "storage class specifiers, C storage classes"]
ms.assetid: 2580735c-f5bf-46ab-9468-0696893d82be
---
# C Extended Storage-Class Attributes

**Microsoft Specific**

More up-to-date information on this topic can be found under [__declspec (C++ Reference)](../cpp/declspec.md).

Extended attribute syntax simplifies and standardizes the Microsoft-specific extensions to the C language. The storage-class attributes that use extended attribute syntax include thread, naked, dllimport, and dllexport.

The extended attribute syntax for specifying storage-class information uses the __declspec keyword, which specifies that an instance of a given type is to be stored with a Microsoft-specific storage-class attribute (thread, naked, dllimport, or dllexport). Examples of other storage-class modifiers include the static and extern keywords. However, these keywords are part of the ANSI C standard and as such are not covered by extended attribute syntax.

## Syntax

*storage-class-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__declspec (** *extended-decl-modifier-seq* **)** /\* Microsoft-specific \*/

*extended-decl-modifier-seq*:&nbsp;&nbsp;&nbsp;&nbsp;/\* Microsoft-specific \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*extended-decl-modifier-seq* *extended-decl-modifier*

*extended-decl-modifier*:&nbsp;&nbsp;&nbsp;&nbsp;/\* Microsoft-specific \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`thread`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`naked`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllimport`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllexport`**

White space separates the declaration modifiers. Note that *extended-decl-modifier-seq* can be empty; in this case, __declspec has no effect.

The thread, naked, dllimport, and dllexport storage-class attributes are a property only of the declaration of the data or function to which they are applied; they do not redefine the type attributes of the function itself. The thread attribute affects data only. The naked attribute affects functions only. The dllimport and dllexport attributes affect functions and data.

**END Microsoft Specific**

## See also

[Declarations and Types](../c-language/declarations-and-types.md)
