---
title: "Compiler Warning (level 2) C4653 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4653"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4653"]
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4653
compiler option 'option' inconsistent with precompiled header; current command-line option ignored  
  
 An option specified with the Use Precompiled Headers ([/Yu](../../build/reference/yu-use-precompiled-header-file.md)) option was inconsistent with the options specified when the precompiled header was created. This compilation used the option specified when the precompiled header was created.  
  
 This warning can occur when a different value for the Pack Structures option ([/Zp](../../build/reference/zp-struct-member-alignment.md)) was specified during compilation of the precompiled header.