---
title: "Expression Evaluator Error CXX0021"
description: "Learn more about: Expression Evaluator Error CXX0021"
ms.date: 11/04/2016
f1_keywords: ["CXX0021"]
helpviewer_keywords: ["CXX0021", "CAN0021"]
---
# Expression Evaluator Error CXX0021

> struct or union used as scalar

## Remarks

A structure or union was used in an expression, but no element was specified.

When manipulating a structure or union variable, the name of the variable may appear by itself, without a field qualifier. If a structure or union is used in an expression, it must be qualified with the specific element desired.

Specify the element whose value is to be used in the expression.

This error is identical to CAN0021.
