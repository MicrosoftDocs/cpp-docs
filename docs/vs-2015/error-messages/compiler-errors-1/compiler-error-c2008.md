---
title: "Compiler Error C2008 | Microsoft Docs"
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
  - "C2008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2008"
ms.assetid: e748ccbe-ffd4-4008-aca7-e53c25225209
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2008
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2008](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2008).  
  
  
character' : unexpected in macro definition  
  
 The character appears immediately following the macro name. To resolve the error, there must be a space after the macro name.  
  
 The following sample generates C2008:  
  
```  
// C2008.cpp  
#define TEST1"mytest1"    // C2008  
```  
  
 Possible resolution:  
  
```  
// C2008b.cpp  
// compile with: /c  
#define TEST2 "mytest2"  
```

