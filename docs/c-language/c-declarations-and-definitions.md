---
description: "Learn more about: C Declarations and Definitions"
title: "C Declarations and Definitions"
ms.date: "11/04/2016"
ms.assetid: 575f0c9b-5554-4346-be64-b2129ca9227f
---
# C Declarations and Definitions

A "declaration" establishes an association between a particular variable, function, or type and its attributes. [Overview of Declarations](../c-language/overview-of-declarations.md) gives the ANSI syntax for the `declaration` nonterminal. A declaration also specifies where and when an identifier can be accessed (the "linkage" of an identifier). See [Lifetime, Scope, Visibility, and Linkage](../c-language/lifetime-scope-visibility-and-linkage.md) for information about linkage.

A "definition" of a variable establishes the same associations as a declaration but also causes storage to be allocated for the variable.

For example, the `main`, `find`, and `count` functions and the `var` and `val` variables are defined in one source file, in this order:

```
int main() {}

int var = 0;
double val[MAXVAL];
char find( fileptr ) {}
int count( double f ) {}
```

The variables `var` and `val` can be used in the `find` and `count` functions; no further declarations are needed. But these names are not visible (cannot be accessed) in `main`.

## See also

[Source Files and Source Programs](../c-language/source-files-and-source-programs.md)
