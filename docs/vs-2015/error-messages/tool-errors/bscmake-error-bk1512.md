---
title: "BSCMAKE Error BK1512 | Microsoft Docs"
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
  - "BK1512"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1512"
ms.assetid: 0a626ff3-63db-4797-abe4-31545ce2c2c1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# BSCMAKE Error BK1512
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [BSCMAKE Error BK1512](https://docs.microsoft.com/cpp/error-messages/tool-errors/bscmake-error-bk1512).  
  
  
filename: capacity exceeded  
  
 BSCMAKE cannot build a browse information file because the number of definitions, references, modules, or other information exceeds the limit.  
  
### To fix by using the following possible solutions  
  
1.  Exclude some information using /Em, /Es, or /Ei.  
  
2.  Omit the /Iu option.

