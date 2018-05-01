---
title: "Resource Compiler Error RC2136 | Microsoft Docs"
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
  - "RC2136"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2136"
ms.assetid: 4e9b2ff1-402c-4ec4-8610-fc8fd5f213c0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Resource Compiler Error RC2136
missing '=' in EXSTYLE=\<flags>  
  
 An equal sign (**=**) was missing from an **EXSTYLE** (Extended Style Flags) statement. When the **EXSTYLE** is embedded in the **DIALOG** or **MENU** statement it must have the following form:  
  
```  
EXSTYLE=FLAGS  
```