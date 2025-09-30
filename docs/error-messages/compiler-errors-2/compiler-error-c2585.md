---
title: "Compiler Error C2585"
description: "Learn more about: Compiler Error C2585"
ms.date: 11/04/2016
f1_keywords: ["C2585"]
helpviewer_keywords: ["C2585"]
---
# Compiler Error C2585

> explicit conversion to 'type' is ambiguous

## Remarks

The type conversion can produce more than one result.

### To fix by checking the following possible causes

1. Converting from a class or structure type based on multiple inheritance. If the type inherits the same base class more than once, the conversion function or operator must use scope resolution (`::`) to specify which of the inherited classes to use in the conversion.

1. A conversion operator and a constructor have been defined making the same conversion.
