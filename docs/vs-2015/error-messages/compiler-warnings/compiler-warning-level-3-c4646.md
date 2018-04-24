---
title: "Compiler Warning (level 3) C4646 | Microsoft Docs"
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
  - "C4646"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4646"
ms.assetid: 23677e8e-603e-40e0-b99a-2e4894a1278e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4646
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4646](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4646).  
  
  
function declared with __declspec(noreturn) has non-void return type  
  
 A function marked with the [noreturn](../../cpp/noreturn.md) `__declspec` modifier should have a [void](../../cpp/void-cpp.md) return type.  
  
 The following sample generates C4646:  
  
```  
// C4646.cpp  
// compile with: /W3 /WX  
int __declspec(noreturn) TestFunction()  
{   // C4646  make return type void  
}  
```

