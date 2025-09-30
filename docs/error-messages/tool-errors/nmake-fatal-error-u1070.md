---
title: "NMAKE Fatal Error U1070"
description: "Learn more about: NMAKE Fatal Error U1070"
ms.date: 11/04/2016
f1_keywords: ["U1070"]
helpviewer_keywords: ["U1070"]
---
# NMAKE Fatal Error U1070

> cycle in macro definition 'macroname'

## Remarks

The given macro definition contained a macro whose definition contained the given macro. Circular macro definitions are invalid.

## Example

The following macro definitions

```
ONE=$(TWO)
TWO=$(ONE)
```

cause the following error:

```
cycle in macro definition 'TWO'
```
