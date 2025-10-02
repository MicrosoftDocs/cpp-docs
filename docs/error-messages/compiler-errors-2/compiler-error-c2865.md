---
title: "Compiler Error C2865"
description: "Learn more about: Compiler Error C2865"
ms.date: 11/04/2016
f1_keywords: ["C2865"]
helpviewer_keywords: ["C2865"]
---
# Compiler Error C2865

> 'function' : illegal comparison for handle_or_pointer

## Remarks

You can compare references to [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) or managed reference types only for equality to see if they refer to the same object (==) or to different objects (!=).

You cannot compare them for ordering because the .NET runtime might move managed objects at any time, changing the outcome of the test.
