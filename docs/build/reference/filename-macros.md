---
description: "Learn more about: Filename Macros"
title: "Filename Macros"
ms.date: "11/04/2016"
helpviewer_keywords: ["macros, NMAKE", "filename macros in NMAKE", "NMAKE program, filename macros"]
ms.assetid: 20afd6b3-5b6c-4e33-9d01-309ce98ef9db
---
# Filename Macros

Filename macros are predefined as filenames specified in the dependency (not full filename specifications on disk). These macros do not need to be enclosed in parentheses when invoked; specify only a $ as shown.

|Macro|Meaning|
|-----------|-------------|
|**$\@**|Current target's full name (path, base name, extension), as currently specified.|
|**$$\@**|Current target's full name (path, base name, extension), as currently specified. Valid only as a dependent in a dependency.|
|**$&#42;**|Current target's path and base name minus file extension.|
|**$&#42;&#42;**|All dependents of the current target.|
|**$?**|All dependents with a later timestamp than the current target.|
|**$<**|Dependent file with a later timestamp than the current target. Valid only in commands in inference rules.|

To specify part of a predefined filename macro, append a macro modifier and enclose the modified macro in parentheses.

|Modifier|Resulting filename part|
|--------------|-----------------------------|
|**D**|Drive plus directory|
|**B**|Base name|
|**F**|Base name plus extension|
|**R**|Drive plus directory plus base name|

## See also

[Special NMAKE Macros](special-nmake-macros.md)
