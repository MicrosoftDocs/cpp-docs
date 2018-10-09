---
title: "Compiler Warning (level 1) C4445 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4445"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4445"]
ms.assetid: 535e92a0-ba08-4dfc-89b2-af2dcdd7caeb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4445

'function' : in a WinRT or managed type a virtual method cannot be private

If a virtual function is private, it cannot be accessed by a derived type. To fix this error, change the accessibility of the virtual member function to protected or public.