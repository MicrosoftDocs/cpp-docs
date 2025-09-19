---
title: "Compiler Error C3552"
description: "Learn more about: Compiler Error C3552"
ms.date: 11/04/2016
f1_keywords: ["C3552"]
helpviewer_keywords: ["C3552"]
---
# Compiler Error C3552

> 'typename': a late specified return type cannot contain 'auto'

## Remarks

If you use the **`auto`** keyword as a placeholder for the return type of a function, you must provide a late-specified return type. However, you cannot use another **`auto`** keyword to specify the late-specified return type.

## Example

For example, the following code fragment yields error C3552.

`auto myFunction->auto; // C3552`
