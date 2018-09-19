---
title: "Math Error M6110 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["M6110"]
dev_langs: ["C++"]
helpviewer_keywords: ["M6110"]
ms.assetid: aac9ae37-6a6d-46e9-85d4-dfe03f1c3e11
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Math Error M6110

stack overflow

A floating-point expression caused a floating-point stack overflow.

Stack-overflow floating-point exceptions are trapped up to a limit of seven levels in addition to the eight levels usually supported by the 8087/287/387 coprocessor.

Program terminates with exit code 138.