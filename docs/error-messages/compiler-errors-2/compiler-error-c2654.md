---
title: "Compiler Error C2654"
description: "Learn more about: Compiler Error C2654"
ms.date: 11/04/2016
f1_keywords: ["C2654"]
helpviewer_keywords: ["C2654"]
---
# Compiler Error C2654

> 'identifier' : attempt to access member outside a member function

## Remarks

A member is accessed in a declaration. Member data can be accessed only in member functions.

This error can be caused when trying to initialize variables in a declaration. Use a constructor for this purpose.
