---
title: "Compiler Error C3812 | Microsoft Docs"
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
  - "C3812"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3812"
ms.assetid: 326ac706-9a5f-4851-b9d2-b90c64c75532
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3812
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3812](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3812).  
  
  
property' must be the first token in a property declaration  
  
 When declaring a property, the [__property](../../misc/property.md) keyword must be the first token on the line.  
  
 C3812 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3812:  
  
```  
// C3812.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
  
__gc class X {  
   static __property int get_Size() { // C3812, remove static specifier  
      return 0;  
   }  
};  
```

