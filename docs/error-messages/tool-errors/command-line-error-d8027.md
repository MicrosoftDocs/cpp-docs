---
description: "Learn more about: Command-Line Error D8027"
title: "Command-Line Error D8027"
ms.date: "11/04/2016"
f1_keywords: ["D8027"]
helpviewer_keywords: ["D8027"]
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
---
# Command-Line Error D8027

cannot execute 'component'

The compiler could not run the given compiler component or linker.

### To fix by checking the following possible causes

1. Not enough memory to load the component. If NMAKE invoked the compiler, run the compiler outside of the makefile.

1. The current operating system could not run the component. Make sure the path points to the executable files appropriate to your operating system.

1. The component was corrupted. Recopy the component from the distribution disks, using the SETUP program.

1. An option was specified incorrectly. For example:

    ```
    cl /B1 file1.c
    ```
