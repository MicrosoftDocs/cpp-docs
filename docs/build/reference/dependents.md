---
description: "Learn more about: /DEPENDENTS"
title: "/DEPENDENTS"
ms.date: "07/15/2019"
f1_keywords: ["/dependents"]
helpviewer_keywords: ["-DEPENDENTS dumpbin option", "/DEPENDENTS dumpbin option", "DEPENDENTS dumpbin option"]
ms.assetid: 9b31da2a-75ac-4bbf-a3f1-adf8b0ecbbb4
---
# /DEPENDENTS

Dumps the names of the DLLs from which the image imports functions. You can use the list to determine which DLLs to redistribute with your app, or find the name of a missing dependency.

## Syntax

> **/DEPENDENTS**

This option applies to all the executable files specified on the command line. It doesn't take any arguments.

## Remarks

The **/DEPENDENTS** option adds the names of the DLLs from which the image imports functions to the output. This option does not dump the names of the imported functions. To see the names of the imported functions, use the [/IMPORTS](imports-dumpbin.md) option.

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.

## Example

This example shows the DUMPBIN output of the **/DEPENDENTS** option on the client executable built in [Walkthrough: Create and use your own Dynamic Link Library](../walkthrough-creating-and-using-a-dynamic-link-library-cpp.md):

```cmd
C:\Users\username\Source\Repos\MathClient\Debug>dumpbin /DEPENDENTS MathClient.exe
Microsoft (R) COFF/PE Dumper Version 14.16.27032.1
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file MathClient1322.exe

File Type: EXECUTABLE IMAGE

  Image has the following dependencies:

    MathLibrary.dll
    MSVCP140D.dll
    VCRUNTIME140D.dll
    ucrtbased.dll
    KERNEL32.dll

  Summary

        1000 .00cfg
        1000 .data
        2000 .idata
        1000 .msvcjmc
        3000 .rdata
        1000 .reloc
        1000 .rsrc
        8000 .text
       10000 .textbss
```

## See also

[DUMPBIN Options](dumpbin-options.md)
