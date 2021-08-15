---
title: "Compiler Error C2026"
description: "Describes Microsoft C/C++ compiler error C2026, its causes and how to resolve them."
ms.date: 09/25/2020
f1_keywords: ["C2026"]
helpviewer_keywords: ["C2026"]
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
---
# Compiler Error C2026

> string too big, trailing characters truncated

The string was longer than the limit of 16380 single-byte characters.

## Remarks

Before adjacent strings get concatenated, a string can't be longer than 16380 single-byte characters.

A Unicode string of about one half this length would also generate this error.

## Example

If you have a string defined as follows, it generates C2026:

```C
char sz[] =
"\
imagine a really, really \
long string here\
";
```

You could break it up as follows:

```C
char sz[] =
"\
imagine a really, really "
"long string here\
";
```

You may want to store exceptionally large string literals (32K or more) in a custom resource or an external file. For more information, see [To create a new custom or data resource](../../windows/binary-editor.md#to-create-a-new-custom-or-data-resource).
