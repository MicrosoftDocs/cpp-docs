---
description: "Learn more about: Linker Tools Error LNK2039"
title: "Linker Tools Error LNK2039"
ms.date: "11/04/2016"
f1_keywords: ["LNK2039"]
helpviewer_keywords: ["LNK2039"]
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
---
# Linker Tools Error LNK2039

importing ref class '\<type>' that is defined in another.obj; it should be either imported or defined, but not both

The ref class '<`type`>' is imported in the specified .obj file but is also defined in another .obj file. This condition can cause runtime failure or other unexpected behavior.

### To correct this error

1. Check whether '`type`' must be defined in the other .obj file and check whether it must be imported from the .winmd file.

1. Remove either the definition or the import.

## See also

[Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)<br/>
[Linker Tools Error LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)
