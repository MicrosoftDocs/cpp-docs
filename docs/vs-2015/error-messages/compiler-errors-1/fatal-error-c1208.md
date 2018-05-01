---
title: "Fatal Error C1208 | Microsoft Docs"
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
  - "C1208"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1208"
ms.assetid: 4eefd8f0-5c2e-4a11-9e63-293e1139db65
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1208
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1208](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1208).  
  
  
Allocating reference classes on the stack is not supported by the version of the runtime installed  
  
 C1208 occurs when you have a compiler for the current release, but a common language runtime from a previous release.  
  
 Some functionality of the compiler may not work on a previous version of the run time.  
  
 Install the common language runtime version that is intended for use with your compiler.

