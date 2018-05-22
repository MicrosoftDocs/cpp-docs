---
title: "Compiler Error C2439 | Microsoft Docs"
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
  - "C2439"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2439"
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2439
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2439](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2439).  
  
  
identifier' : member could not be initialized  
  
 A class, structure, or union member cannot be initialized.  
  
### To fix by checking the following possible causes  
  
1.  Trying to initialize an indirect base class or structure.  
  
2.  Trying to initialize an inherited member of a class or structure. An inherited member must be initialized by the constructor of the class or structure.

