---
title: "Compiler Warning (level 1) C4049 | Microsoft Docs"
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
  - "C4049"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4049"
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4049
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4049](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4049).  
  
  
compiler limit : terminating line number emission  
  
 The file contains more than 16,777,215 (2<sup>24</sup>-1) source lines. The compiler stops numbering at 16,777,215.  
  
 For code after line 16,777,215:  
  
-   The image will contain no debug information for line numbers.  
  
-   Some diagnostics may be reported with incorrect line numbers.  
  
-   .asm listings (/FAs) may have incorrect line numbers.

