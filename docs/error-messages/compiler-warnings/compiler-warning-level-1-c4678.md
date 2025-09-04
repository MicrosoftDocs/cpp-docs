---
title: "Compiler Warning (level 1) C4678"
description: "Learn more about: Compiler Warning (level 1) C4678"
ms.date: 11/04/2016
f1_keywords: ["C4678"]
helpviewer_keywords: ["C4678"]
---
# Compiler Warning (level 1) C4678

> base class 'base_type' is less accessible than 'derived_type'

## Remarks

A public type derives from a private type. If the public type is instantiated in a referenced assembly, members of the private base type will not be accessible.

C4678 is only reachable using the obsolete compiler option **/clr:oldSyntax**. It is an error when using **/clr**, to have a base class that is less accessible that its derived class.
