---
title: "Compiler Warning (level 4) C4057 | Microsoft Docs"
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
  - "C4057"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4057"
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4057
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4057](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4057).  
  
  
operator' : 'identifier1' indirection to slightly different base types from 'identifier2'  
  
 Two pointer expressions refer to different base types. The expressions are used without conversion.  
  
### To fix by checking the following possible causes  
  
1.  Mixing signed and unsigned types.  
  
2.  Mixing **short** and **long** types.

