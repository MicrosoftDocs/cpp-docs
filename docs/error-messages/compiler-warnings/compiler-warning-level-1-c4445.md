---
title: "Compiler Warning (level 1) C4445"
description: "Learn more about: Compiler Warning (level 1) C4445"
ms.date: 11/04/2016
f1_keywords: ["C4445"]
helpviewer_keywords: ["C4445"]
---
# Compiler Warning (level 1) C4445

> 'function' : in a WinRT or managed type a virtual method cannot be private

## Remarks

If a virtual function is private, it cannot be accessed by a derived type. To fix this error, change the accessibility of the virtual member function to protected or public.
