---
title: "Compiler Error C2007 | Microsoft Docs"
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
  - "C2007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2007"
ms.assetid: ecd09d99-5036-408b-9e46-bc15488f049e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2007
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2007](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2007).  
  
  
define syntax  
  
 No identifier appears after a `#define`. To resolve the error, use an identifier.  
  
 The following sample generates C2007:  
  
```  
// C2007.cpp  
#define   // C2007  
```  
  
 Possible resolution:  
  
```  
// C2007b.cpp  
// compile with: /c  
#define true 1  
```

