---
title: "Compiler Error C2557 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2557"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2557"]
ms.assetid: 48a33d82-aa16-4658-b346-2311fcb39864
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2557

'identifier' : private and protected members cannot be initialized without a constructor

Only members and friends can assign a value to a private or protected member. Nonpublic members should be initialized in the class constructor.