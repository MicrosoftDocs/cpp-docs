---
title: "Compiler Error C3815"
description: "Learn more about: Compiler Error C3815"
ms.date: 11/04/2016
f1_keywords: ["C3815"]
helpviewer_keywords: ["C3815"]
---
# Compiler Error C3815

> return type of method 'get_accessor' must match type of the last parameter of a setter

## Remarks

When declaring properties, the return value of the `get_accessor` method must match the last parameter in the declaration of the set accessor method.

C3815 is only reachable using the obsolete compiler option **/clr:oldSyntax**.
