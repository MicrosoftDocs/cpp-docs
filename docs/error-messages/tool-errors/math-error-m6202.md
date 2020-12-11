---
description: "Learn more about: Math Error M6202"
title: "Math Error M6202"
ms.date: "11/04/2016"
f1_keywords: ["M6202"]
helpviewer_keywords: ["M6202"]
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
---
# Math Error M6202

'function' : _SING error

An argument to the given function was a singularity value for this function. The function is not defined for that argument.

This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.
