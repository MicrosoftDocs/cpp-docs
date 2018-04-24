---
title: "NMAKE Fatal Error U1070 | Microsoft Docs"
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
  - "U1070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1070"
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Fatal Error U1070
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Fatal Error U1070](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-fatal-error-u1070).  
  
  
cycle in macro definition 'macroname'  
  
 The given macro definition contained a macro whose definition contained the given macro. Circular macro definitions are invalid.  
  
## Example  
 The following macro definitions  
  
```  
ONE=$(TWO)  
TWO=$(ONE)  
```  
  
 cause the following error:  
  
```  
cycle in macro definition 'TWO'  
```

