---
description: "Learn more about: Compiler Error C2439"
title: "Compiler Error C2439"
ms.date: "11/04/2016"
f1_keywords: ["C2439"]
helpviewer_keywords: ["C2439"]
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
---
# Compiler Error C2439

'identifier' : member could not be initialized

A class, structure, or union member cannot be initialized.

### To fix by checking the following possible causes

1. Trying to initialize an indirect base class or structure.

1. Trying to initialize an inherited member of a class or structure. An inherited member must be initialized by the constructor of the class or structure.
