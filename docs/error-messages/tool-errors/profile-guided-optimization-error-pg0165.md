---
title: "Profile-Guided Optimization Error PG0165 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PG0165"]
dev_langs: ["C++"]
helpviewer_keywords: ["PG0165"]
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Profile-Guided Optimization Error PG0165
Reading 'Filename.pgd' : 'PGD version is not supported (version mismatch)'.  
  
 PGD files are specific to a particular compiler toolset. This error is generated when you are using a different compiler than the one used for *Filename*.pgd. This error indicates that this compiler toolset cannot use the data from *Filename*.pgd to optimize the current program.  
  
 To resolve this problem, regenerate *Filename*.pgd by using the current compiler toolset.