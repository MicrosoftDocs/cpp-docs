---
title: "Compiler Warning (level 3) C4723 | Microsoft Docs"
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
  - "C4723"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4723"
ms.assetid: 07669d14-3fd8-4a43-94bc-b61c50e58460
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4723
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4723](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4723).  
  
  
potential divide by 0  
  
 The second operand in a divide operation evaluated to zero at compile time, giving undefined results.  
  
 This warning is issued only when using [/Og](../../build/reference/og-global-optimizations.md) or an optimization option that implies /Og.  
  
 The compiler may have generated the zero operand.

