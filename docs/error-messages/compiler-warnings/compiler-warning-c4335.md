---
description: "Learn more about: Compiler Warning C4335"
title: "Compiler Warning C4335"
ms.date: "11/04/2016"
f1_keywords: ["C4335"]
helpviewer_keywords: ["C4335"]
ms.assetid: e66467ad-a10b-4438-8c7c-e8e8d11d39bb
---
# Compiler Warning C4335

Mac file format detected: please convert the source file to either DOS or UNIX format

The line termination character of the first line of a source file is Macintosh style ('\r') as opposed to UNIX ('\n') or DOS ('\r\n').

This warning is always issued as an error.  See [warning](../../preprocessor/warning.md) pragma for information about how to disable this warning.  Also, this warning is only issued once per compiland. Therefore, if there are multiple `#include` directives that specify files in Macintosh format, C4335 will only be issued once.

One way to generate files in Macintosh format is by using the **Advanced Save Options** (on the **File** menu) in Visual Studio.

## Example

The following sample generates C4335.

```cpp
// C4335 expected
#include "c4335.h"   // assume both include files are in Macintosh format
#include "c4335_2.h"
```
