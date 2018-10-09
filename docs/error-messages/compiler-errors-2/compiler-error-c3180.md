---
title: "Compiler Error C3180 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3180"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3180"]
ms.assetid: 5281f583-7df7-418a-8507-d4da67ed6572
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3180

'type name' : name exceeds meta-data limit of 'limit' characters

The compiler truncated the name for a managed type in metadata. The truncation will make the type unusable with the `#using` directive (or the equivalent in another language).

The type-name limit includes any namespace qualifications.