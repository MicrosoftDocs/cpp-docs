---
title: "Compiler Error C2439"
description: "Learn more about: Compiler Error C2439"
ms.date: 11/04/2016
f1_keywords: ["C2439"]
helpviewer_keywords: ["C2439"]
---
# Compiler Error C2439

> 'identifier' : member could not be initialized

## Remarks

A class, structure, or union member cannot be initialized.

### To fix by checking the following possible causes

1. Trying to initialize an indirect base class or structure.

1. Trying to initialize an inherited member of a class or structure. An inherited member must be initialized by the constructor of the class or structure.
