---
title: "Specifiers"
ms.date: "11/04/2016"
helpviewer_keywords: ["declaration specifiers", "declarations, specifiers", "specifiers, in declarations"]
ms.assetid: 8b14e844-9880-4571-8779-28c8efe44633
---
# Specifiers

This topic describes the *decl-specifiers* (declaration specifiers) component of a [declaration](declarations-and-definitions-cpp.md).

The following placeholders and language keywords are declaration specifiers:

*storage-class-specifier*

*type-specifier*

*function-specifier*

[friend](friend-cpp.md)

[typedef](aliases-and-typedefs-cpp.md) `(` *extended-decl-modifier-seq* `)`

[__declspec](declspec.md) `(` *extended-decl-modifier-seq* `)`

## Remarks

The *decl-specifiers* part of a declaration is the longest sequence of *decl-specifiers* that can be taken to mean a type name, not including the pointer or reference modifiers. The remainder of the declaration is the *declarator*, which includes the name introduced.

The following table lists four declarations, and then lists each declaration's *decl-specifers* and *declarator* component separately.

|Declaration|*decl-specifiers*|`declarator`|
|-----------------|------------------------|------------------|
|`char *lpszAppName;`|**char**|`*lpszAppName`|
|`typedef char * LPSTR;`|**char**|`*LPSTR`|
|`const int func1();`|**const int**|`func1`|
|`volatile void *pvvObj;`|**volatile void**|`*pvvObj`|

Because **signed**, **unsigned**, **long**, and **short** all imply **int**, a **typedef** name following one of these keywords is taken to be a member of *declarator-list,* not of *decl-specifiers*.

> [!NOTE]
>  Because a name can be redeclared, its interpretation is subject to the most recent declaration in the current scope. Redeclaration can affect how names are interpreted by the compiler, especially **typedef** names.

## See also

[Declarations and Definitions](declarations-and-definitions-cpp.md)
