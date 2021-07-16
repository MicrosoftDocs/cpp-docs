---
description: "Learn more about the system_header pragma."
title: "system_header pragma"
ms.date: 07/15/2021
f1_keywords: ["vc-pragma.system_header", "system_header_CPP", "system_header"]
helpviewer_keywords: ["pragma, system_header", "system_header pragma"]
no-loc: ["pragma"]
---
# `system_header` pragma

Treat the rest of the file as external for diagnostics reports.

## Syntax

> **`#pragma system_header`**

## Remarks

The **`system_header`** pragma tells the compiler to show diagnostics at the level specified by the **`/external:Wn`** option for the rest of the current source file. For more information on how to specify external files and the external warning level to the compiler, see [`/external`](../build/reference/external-external-headers-diagnostics.md).

The **`system_header`** pragma doesn't apply past the end of the current source file. In other words, it doesn't apply to files that include this file. The **`system_header`** pragma applies even if no other files are specified as external to the compiler. However, if no **`/external:Wn`** option level is specified, the compiler may issue a diagnostic and uses the same [warning level](../build/reference/compiler-option-warning-level.md) it applies to non-external files. Other pragma directives that affect warning behavior still apply after a **`system_header`** pragma. The effect of `#pragma system_header` is similar to the [`warning pragma`](warning.md):

```cpp
// If n represents the warning level specified by /external:Wn,
// #pragma system_header is roughly equivalent to:
#pragma warning( push, n )

// . . .

// At the end of the file:
#pragma warning( pop )
```

The **`system_header`** pragma is available starting in Visual Studio 2019 version 16.10.

## Example

This sample header shows how to mark the contents of a file as external:

```cpp
// library.h
// Use /external:Wn to set the compiler diagnostics level for this file's contents

#pragma once
#ifndef _LIBRARY_H // include guard for 3rd party interop
#define _LIBRARY_H
#pragma system_header
// The compiler applies the /external:Wn diagnostic level from here to the end of this file.

// . . .

// You can still override the external diagnostic level for warnings locally:
#pragma warning( push )
#pragma warning( error : 4164 )

// . . .

#pragma warning(pop)

// . . .

#endif
```

## See also

[`/external`](../build/reference/external-external-headers-diagnostics.md)\
[`warning pragma`](warning.md)\
[`/Wn` (Compiler warning level)](../build/reference/compiler-option-warning-level.md)\
[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
