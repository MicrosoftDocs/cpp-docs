---
title: "Compiler Error C3273 | Microsoft Docs"
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
  - "C3273"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3273"
ms.assetid: 1d2ce9d9-222b-4cab-94e2-d2c1a9f5ebe0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3273
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3273](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3273).  
  
  
__finally cannot be used on an exception block in unmanaged code.  
  
 The following sample generates C3273:  
  
```  
// C3273.cpp  
// compile with: /GX  
int main()  
{     
   try  
   {  
   }  
   catch (int)  
   {  
   }  
   __finally   // C3273, remove __finally clause  
   {  
   }  
}  
```

