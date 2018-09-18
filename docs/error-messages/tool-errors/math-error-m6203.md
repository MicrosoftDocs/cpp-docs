---
title: "Math Error M6203 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["M6203"]
dev_langs: ["C++"]
helpviewer_keywords: ["M6203"]
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Math Error M6203

'function' : _OVERFLOW error

The given function result was too large to be represented.

This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.