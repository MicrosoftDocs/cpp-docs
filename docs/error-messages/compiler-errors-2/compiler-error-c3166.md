---
title: "Compiler Error C3166 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3166"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3166"]
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3166

'pointer' : cannot declare a pointer to an interior __gc pointer as a member of 'type'

The compiler found an invalid pointer declaration (a `__nogc` pointer to a `__gc` pointer.).

C3166 is only reachable using the obsolete compiler option **/clr:oldSyntax**.
