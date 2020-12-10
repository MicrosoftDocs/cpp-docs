---
description: "Learn more about: Compiler Error C2919"
title: "Compiler Error C2919"
ms.date: "11/04/2016"
f1_keywords: ["C2919"]
helpviewer_keywords: ["C2919"]
ms.assetid: 140a6db9-eb48-4c5e-84a7-a09d2653605b
---
# Compiler Error C2919

'type': Operators cannot be used on the published surface of a WinRT type

The Windows Runtime type system does not support operator member functions in the published surface of a type. This is because not all languages can consume operator member functions. You can create private or internal operator member functions that can be called from C++ code in the same class or compilation unit.

To fix this issue, remove the operator member function from the public interface, or change it to a named member function. For example, instead of `operator==`, name the member function `Equals`.
