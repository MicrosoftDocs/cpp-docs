---
title: "Expression Evaluator Error CXX0064"
description: "Learn more about: Expression Evaluator Error CXX0064"
ms.date: 11/04/2016
f1_keywords: ["CXX0064"]
helpviewer_keywords: ["CAN0064", "CXX0064"]
---
# Expression Evaluator Error CXX0064

> can't set breakpoint on bound virtual member function

## Example

A breakpoint was set on a virtual member function through a pointer to an object, such as:

```
pClass->vfunc( int );
```

A breakpoint can be set on a virtual function by entering the class, such as:

```
Class::vfunc( int );
```

This error is identical to CAN0064.
