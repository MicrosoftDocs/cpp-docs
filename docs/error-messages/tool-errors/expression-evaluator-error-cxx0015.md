---
description: "Learn more about: Expression Evaluator Error CXX0015"
title: "Expression Evaluator Error CXX0015"
ms.date: "11/04/2016"
f1_keywords: ["CXX0015"]
helpviewer_keywords: ["CXX0015", "CAN0015"]
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
---
# Expression Evaluator Error CXX0015

expression too complex (stack overflow)

The expression entered was too complex or nested too deeply for the amount of storage available to the C expression evaluator.

Overflow usually occurs because of too many pending calculations.

Rearrange the expression so that each component of the expression can be evaluated as it is encountered, rather than having to wait for other parts of the expression to be calculated.

Break the expression into multiple commands.

This error is identical to CAN0015.
