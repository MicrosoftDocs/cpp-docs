---
title: "Compiler Warning (level 4) C4092 | Microsoft Docs"
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
  - "C4092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4092"
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4092
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4092](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4092).  
  
  
sizeof returns 'unsigned long'  
  
 The operand of the `sizeof` operator was very large, so `sizeof` returned an unsigned **long**. This warning occurs under the Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)). Under ANSI compatibility (/Za), the result is truncated instead.

