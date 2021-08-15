---
description: "Learn more about: Directives to the Preprocessor"
title: "Directives to the Preprocessor"
ms.date: "11/04/2016"
ms.assetid: adc6251e-cf6b-4508-bdbb-55f446c838d3
---
# Directives to the Preprocessor

A "directive" instructs the C preprocessor to perform a specific action on the text of the program before compilation. [Preprocessor directives](../preprocessor/preprocessor-directives.md) are fully described in the *Preprocessor Reference*. This example uses the preprocessor directive `#define`:

```
#define MAX 100
```

This statement tells the compiler to replace each occurrence of `MAX` by `100` before compilation. The C compiler preprocessor directives are:

|#define|#endif|#ifdef|#line|
|--------------|-------------|-------------|------------|
|`#elif`|`#error`|**#ifndef**|**#pragma**|
|`#else`|`#if`|`#include`|`#undef`|

## See also

[Source Files and Source Programs](../c-language/source-files-and-source-programs.md)
