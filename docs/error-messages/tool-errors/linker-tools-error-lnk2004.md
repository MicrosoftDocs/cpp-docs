---
description: "Learn more about: Linker Tools Error LNK2004"
title: "Linker Tools Error LNK2004"
ms.date: "11/04/2016"
f1_keywords: ["LNK2004"]
helpviewer_keywords: ["LNK2004"]
ms.assetid: 07645371-e67b-4a2c-b0e0-dde24c94ef7e
---
# Linker Tools Error LNK2004

gp relative fixup overflow to 'target'; short section 'section' is too large or out of range.

The section was too large.

To resolve this error, reduce the size of the short section, either by explicitly putting data in the long sections via #pragma section(".sectionname", read, write, long) and using `__declspec(allocate(".sectionname"))` on data definitions and declarations.  For example,

```
#pragma section(".data$mylong", read, write, long)
__declspec(allocate(".data$mylong"))
char    rg0[1] = { 1 };
char    rg1[2] = { 1 };
char    rg2[4] = { 1 };
char    rg3[8] = { 1 };
char    rg4[16] = { 1 };
char    rg5[32] = { 1 };
```

You can also move logically-grouped data into its own structure that will be a collection of data greater than 8 bytes, which the compiler will allocate in a long data section.  For example,

```
// from this...
int     w1  = 23;
int     w2 = 46;
int     w3 = 23*3;
int     w4 = 23*4;

// to this...
struct X {
    int     w1;
    int     w2;
    int     w3;
    int     w4;
} x  = { 23, 23*2, 23*3, 23*4 };
```

This error is followed by fatal error `LNK1165`.
