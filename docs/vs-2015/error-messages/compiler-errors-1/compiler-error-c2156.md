---
title: "Compiler Error C2156 | Microsoft Docs"
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
  - "C2156"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2156"
ms.assetid: 136f9c67-2c27-4f61-b7e6-ccd202eca697
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2156
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2156](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2156).  
  
  
pragma must be outside function  
  
 A pragma that must be specified at a global level (outside a function body) is within a function.  
  
 The following sample generates C2156:  
  
```  
// C2156.cpp  
#pragma optimize( "l", on )   // OK  
int main() {  
   #pragma optimize( "l", on )   // C2156  
}  
```

