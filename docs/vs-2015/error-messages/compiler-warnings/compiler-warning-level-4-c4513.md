---
title: "Compiler Warning (level 4) C4513 | Microsoft Docs"
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
  - "C4513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4513"
ms.assetid: 6877334a-f30a-4184-9483-dac3348737a4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4513
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4513](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4513).  
  
  
class' : destructor could not be generated  
  
 The compiler cannot generate a default destructor for the given class; no destructor was created. The destructor is in a base class that is not accessible to the derived class. If the base class has a private destructor, make it public or protected.

