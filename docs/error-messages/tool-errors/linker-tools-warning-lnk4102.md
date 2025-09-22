---
title: "Linker Tools Warning LNK4102"
description: "Learn more about: Linker Tools Warning LNK4102"
ms.date: 11/04/2016
f1_keywords: ["LNK4102"]
helpviewer_keywords: ["LNK4102"]
---
# Linker Tools Warning LNK4102

> export of deleting destructor 'name'; image may not run correctly

## Remarks

The program has attempted to export a deleting destructor. The resulting delete may occur across a DLL boundary such that a process can free memory that it does not own. Make sure that the given symbol is not listed in your .def file, and that the symbol is not listed as an argument of the **/IMPORT** or **/EXPORT** option in the linker command line.

If you are rebuilding the C run-time library, you can ignore this message.
