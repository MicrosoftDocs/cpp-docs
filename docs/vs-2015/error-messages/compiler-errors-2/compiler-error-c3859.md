---
title: "Compiler Error C3859 | Microsoft Docs"
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
  - "C3859"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3859"
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3859
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3859](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3859).  
  
  
virtual memory range for PCH exceeded; please recompile with a command line option of '-Zmvalue' or greater  
  
 Your precompiled header is too small for the amount of data the compiler is trying to put in it. Use the **/Zm** compiler flag to specify a larger value for the precompiled header file. For more information, see [/Zm (Specify Precompiled Header Memory Allocation Limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

