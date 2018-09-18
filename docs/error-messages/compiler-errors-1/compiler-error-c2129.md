---
title: "Compiler Error C2129 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2129"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2129"]
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2129

static function 'function' declared but not defined

A forward reference is made to a `static` function that is never defined.

A `static` function must be defined within file scope. If the function is defined in another file, it must be declared `extern`.