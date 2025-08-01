---
title: "Compiler Error C2592"
description: "Learn more about: Compiler Error C2592"
ms.date: 11/04/2016
f1_keywords: ["C2592"]
helpviewer_keywords: ["C2592"]
---
# Compiler Error C2592

> 'class': 'base_class_2' is inherited from 'base_class_1' and cannot be re-specified

## Remarks

You can only specify base classes that do not inherit from other base classes. In this case, only `base_class_1` is needed in the specification of **`class`** because `base_class_1` already inherits `base_class_2`.
