---
description: "Learn more about: /STACK"
title: "/STACK"
ms.date: "11/04/2016"
f1_keywords: ["/stack_editbin"]
helpviewer_keywords: ["-STACK editbin option", "STACK editbin option", "stack, setting size", "/STACK editbin option"]
ms.assetid: a39bcff0-c945-4355-80cc-8e4f24a5f142
---
# /STACK

```
/STACK:reserve[,commit]
```

## Remarks

This option sets the size of the stack in bytes and takes arguments in decimal or C-language notation. The /STACK option applies only to an executable file.

The *reserve* argument specifies the total stack allocation in virtual memory. EDITBIN rounds up the specified value to the nearest 4 bytes.

The optional `commit` argument is subject to interpretation by the operating system. In Windows NT, Windows 95, and Windows 98, `commit` specifies the amount of physical memory to allocate at a time. Committed virtual memory causes space to be reserved in the paging file. A higher `commit` value saves time when the application needs more stack space but increases the memory requirements and possibly startup time.

## See also

[EDITBIN Options](editbin-options.md)
