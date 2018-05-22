---
title: "Compiler Warning (level 2) C4653 | Microsoft Docs"
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
  - "C4653"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4653"
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4653
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4653](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4653).  
  
  
compiler option 'option' inconsistent with precompiled header; current command-line option ignored  
  
 An option specified with the Use Precompiled Headers ([/Yu](../../build/reference/yu-use-precompiled-header-file.md)) option was inconsistent with the options specified when the precompiled header was created. This compilation used the option specified when the precompiled header was created.  
  
 This warning can occur when a different value for the Pack Structures option ([/Zp](../../build/reference/zp-struct-member-alignment.md)) was specified during compilation of the precompiled header.

