---
title: "Compiler Error C3728"
description: "Learn more about: Compiler Error C3728"
ms.date: 11/04/2016
f1_keywords: ["C3728"]
helpviewer_keywords: ["C3728"]
---
# Compiler Error C3728

> 'event': event does not have a raise method

## Remarks

Metadata created with a language, such as C#, that does not allow an event to be raised from outside the class in which it was defined, was included with the [#using](../../preprocessor/hash-using-directive-cpp.md) directive, and a Visual C++ program using CLR programming attempted to raise the event.

To raise an event in a program developed in a language such as C#, the class containing the event needs to also define a public method that raises the event.
