---
title: "Compiler Error C2345 | Microsoft Docs"
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
  - "C2345"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2345"
ms.assetid: e1cc88b0-0223-4d07-975b-fa99956a82bd
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2345
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2345](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2345).  
  
  
align(value) : illegal alignment value  
  
 You passed a value to the [align](../../cpp/align-cpp.md) keyword that is outside the allowable range.  
  
 The following code generates C2345  
  
```  
// C2345.cpp  
// compile with: /c  
__declspec(align(0)) int a;   // C2345  
__declspec(align(1)) int a;   // OK  
```

