---
title: "BSCMAKE Warning BK4504 | Microsoft Docs"
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
  - "BK4504"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK4504"
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# BSCMAKE Warning BK4504
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [BSCMAKE Warning BK4504](https://docs.microsoft.com/cpp/error-messages/tool-errors/bscmake-warning-bk4504).  
  
  
file contains too many references; ignoring further references from this source  
  
 The .cpp file contains more than 64,000 symbol references. When BSCMAKE has encountered 64,000 references in a file, it ignores all further references.  
  
 To correct the problem, either split the file into two or more files, each of which has fewer than 64,000 symbol references, or use the `#pragma component(browser)` preprocessor directive to limit symbols that are generated for particular references. For more information, see [component](../../preprocessor/component.md).

