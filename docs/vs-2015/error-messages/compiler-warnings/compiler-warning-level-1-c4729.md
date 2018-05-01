---
title: "Compiler Warning (Level 1) C4729 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4729"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4729"
ms.assetid: 36a0151f-f258-48d9-9444-ae6d41ff70a4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (Level 1) C4729
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (Level 1) C4729](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4729).  
  
  
function too big for flow graph based warnings  
  
 This warning is generated when a function is too big to be compiled with reliable checking for situations that would generate a warning. This warning is only generated when the [/Od](../../build/reference/od-disable-debug.md) compiler option used.  
  
 To resolve this warning, break the function into smaller functions.

