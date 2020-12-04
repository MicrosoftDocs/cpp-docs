---
description: "Learn more about: Command-Line Warning D9041"
title: "Command-Line Warning D9041"
ms.date: "11/04/2016"
f1_keywords: ["D9041"]
helpviewer_keywords: ["D9041"]
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
---
# Command-Line Warning D9041

> invalid value '*option-value*' for '/*option-name*'; assuming '*assumed-value*'; add '/analyze' to command-line options when specifying this warning

A Code Analysis warning number was added to the **`/wd`**, **`/we`**, **`/wo`**, or **`/wl`** command line option without also specifying the **`/analyze`** command line option. To remedy this error, either add the **`/analyze`** command line option, or remove the invalid warning number from the appropriate **`/w`** command line option.

## Example

The following command line example generates the warning D9041:

```cmd
cl /EHsc /LD /wd6001 filename.cpp
```

To fix the warning, add the **`/analyze`** command line option. If **`/analyze`** is not supported on your version of the compiler, remove the invalid warning number from the **`/wd`** option.

## See also

[Command-Line Errors D8000 Through D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[MSVC Compiler Options](../../build/reference/compiler-options.md)
