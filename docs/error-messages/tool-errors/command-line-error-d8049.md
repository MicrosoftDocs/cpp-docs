---
description: "Learn about the cause and solutions for command-line error D8049"
title: "Command-Line Error D8049"
ms.date: 10/28/2021
f1_keywords: ["D8049"]
helpviewer_keywords: ["D8049"]
---
# Command-line error D8049

> cannot execute '*compiler-component*': command line is too long to fit in debug record

An internal length limit on debug record include paths was exceeded.

## Remarks

When the compiler creates debug records in an object file, it uses the full path for each included file. Absolute paths are recorded as specified. For relative include paths, the debug record prepends the build's current working directory to the relative path. If your build runs in a relatively deep path, the corresponding path records get longer. The total length of too many long paths can exceed the internal limits of the compiler.

## To resolve this issue

- Use shorter paths for your include and build directories. Install your library include headers in directories that have shorter paths, and use short paths to your projects' intermediate and destination build directories. IF you alias paths, use short aliases. Set `%TMP%` and `%TEMP%` to directories that have shorter paths.

- Optimize your include files to the minimum set required for any given source file. This method also has the advantage of speeding compilation times. If you use precompiled headers, it's important to optimize the set of headers you include in your precompiled header file. In complex solutions, it may be worthwhile to create different precompiled headers optimized for different parts of your project. If your code uses C++20, we recommend you use modules or header modules in preference to precompiled headers.
