---
title: "Compiler Error C3661"
description: "Learn more about: Compiler Error C3661"
ms.date: 11/04/2016
f1_keywords: ["C3661"]
helpviewer_keywords: ["C3661"]
---
# Compiler Error C3661

> explicit override list did not find any methods to override

## Remarks

An explicit override specified one or more type names.  However, there was no function with the necessary signature in the type(s) that matched the overriding function's signature.  If you attempt to override based on type name, there must be one or more virtual functions in the specified type(s) that match the signature of the overriding function.

For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).
