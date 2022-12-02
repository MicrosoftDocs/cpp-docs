---
title: "Backward Compatibility"
description: "How to use the Microsoft OLDNAMES.LIB library to map function names for backwards compatibility."
ms.date: "11/04/2016"
ms.topic: "conceptual"
helpviewer_keywords: ["CRT, compatibility", "backward compatibility, C run-time libraries", "compatibility, C run-time libraries", "backward compatibility"]
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
---
# Backward compatibility

For compatibility between product versions, the library OLDNAMES.LIB maps old names to new names. For instance, `open` maps to `_open`. You must explicitly link with OLDNAMES.LIB only when you compile with the following combinations of command-line options:

- `/Zl` (omit default library name from object file) and `/Ze` (the default: use Microsoft extensions)

- `/link` (linker-control), `/NOD` (no default-library search), and `/Ze`

For more information about compiler command-line options, see [Compiler options](../build/reference/compiler-options.md).

## See also

[Compatibility](./compatibility.md)
