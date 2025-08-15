---
title: "Compiler Error C3173"
description: "Learn more about: Compiler Error C3173"
ms.date: 11/04/2016
f1_keywords: ["C3173"]
helpviewer_keywords: ["C3173"]
---
# Compiler Error C3173

> version mismatch in idl merge

## Remarks

This error occurs when an object file contains embedded idl that was generated with a previous version of the compiler. The compiler encodes a version number to ensure that the same compiler used to generate the idl content that is embedded in the .obj files is also the same compiler used to merge the embedded idl.

Update your Visual C++ installation so that all tools are from the latest released version.
