---
description: "Learn more about: Linker Tools Warning LNK4286"
title: "Linker Tools Warning LNK4286"
ms.date: "04/15/2019"
f1_keywords: ["LNK4286"]
helpviewer_keywords: ["LNK4286"]
---
# Linker Tools Warning LNK4286

> symbol '*symbol*' defined in '*filename_1.obj*' is imported by '*filename_2.obj*'

[__declspec(dllimport)](../../cpp/dllexport-dllimport.md) was specified for *symbol* even though the symbol is defined in object file *filename_1.obj* in the same image. Remove the `__declspec(dllimport)` modifier to resolve this warning.

## Remarks

Warning LNK4286 is a more general version of [Linker Tools Warning LNK4217](linker-tools-warning-lnk4217.md). The linker generates Warning LNK4286 when it can tell which object file referenced the symbol, but not which function.

To resolve LNK4286, remove the `__declspec(dllimport)` declaration modifier from the forward declaration of *symbol* referenced in *filename_2.obj*.

Although the final generated code behaves correctly, the code generated to call an imported function is less efficient than calling the function directly. This warning doesn't appear when you compile by using the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) option.

For more information on import and export data declarations, see [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## See also

[Linker Tools Warning LNK4049](linker-tools-warning-lnk4049.md) \
[Linker Tools Warning LNK4217](linker-tools-warning-lnk4217.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)
