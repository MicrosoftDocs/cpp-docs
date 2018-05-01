---
title: "Compiler Error C3286 | Microsoft Docs"
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
  - "C3286"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3286"
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3286
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3286](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3286).  
  
  
specifier': an iteration variable cannot have any storage-class specifiers  
  
 See [(NOTINBUILD)Storage-Class Specifiers](http://msdn.microsoft.com/en-us/10b3d22d-cb40-450b-994b-08cf9a211b6c) for more information.  
  
 See [for each, in](../../dotnet/for-each-in.md) for more information.  
  
## Example  
 The following sample generates C3286.  
  
```  
// C3286.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p = { 1, 2, 3 };  
   for each (static int i in p) {}   // C3286   
   for each (int j in p) {}   // OK  
}  
```

