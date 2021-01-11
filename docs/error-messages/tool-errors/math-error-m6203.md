---
description: "Learn more about: Math Error M6203"
title: "Math Error M6203"
ms.date: "11/04/2016"
f1_keywords: ["M6203"]
helpviewer_keywords: ["M6203"]
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
---
# Math Error M6203

'function' : _OVERFLOW error

The given function result was too large to be represented.

This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.
