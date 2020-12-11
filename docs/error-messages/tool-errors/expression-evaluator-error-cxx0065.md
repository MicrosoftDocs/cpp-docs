---
description: "Learn more about: Expression Evaluator Error CXX0065"
title: "Expression Evaluator Error CXX0065"
ms.date: "11/04/2016"
f1_keywords: ["CXX0065"]
helpviewer_keywords: ["CAN0065", "CXX0065"]
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
---
# Expression Evaluator Error CXX0065

variable needs stack frame

An expression contained a variable that exists within the current scope but hasn't been created yet.

This error can occur when you have stepped into the prolog of a function but not yet set up the stack frame for the function, or if you have stepped into the exit code for the function.

Step through the prolog code until the stack frame has been set up before evaluating the expression.

This error is identical to CAN0065.
