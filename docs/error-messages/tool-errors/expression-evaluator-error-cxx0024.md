---
description: "Learn more about: Expression Evaluator Error CXX0024"
title: "Expression Evaluator Error CXX0024"
ms.date: "11/04/2016"
f1_keywords: ["CXX0024"]
helpviewer_keywords: ["CXX0024", "CAN0024"]
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
---
# Expression Evaluator Error CXX0024

operation needs l-value

An expression that does not evaluate to an l-value was specified for an operation that requires an l-value.

An l-value (so called because it appears on the left side of an assignment statement) is an expression that refers to a memory location.

For example, `buffer[count]` is a valid l-value because it points to a specific memory location. The logical comparison `zed != 0` is not a valid l-value because it evaluates to TRUE or FALSE, not to a memory address.

This error is identical to CAN0024.
