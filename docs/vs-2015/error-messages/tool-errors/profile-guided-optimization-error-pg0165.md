---
title: "Profile-Guided Optimization Error PG0165 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PG0165"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PG0165"
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Profile-Guided Optimization Error PG0165
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Profile-Guided Optimization Error PG0165](https://docs.microsoft.com/cpp/error-messages/tool-errors/profile-guided-optimization-error-pg0165).  
  
  
Reading 'Filename.pgd' : 'PGD version is not supported (version mismatch)'.  
  
 PGD files are specific to a particular compiler toolset. This error is generated when you are using a different compiler than the one used for *Filename*.pgd. This error indicates that this compiler toolset cannot use the data from *Filename*.pgd to optimize the current program.  
  
 To resolve this problem, regenerate *Filename*.pgd by using the current compiler toolset.

