---
title: "Compiler Warning (level 1) C4678 | Microsoft Docs"
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
  - "C4678"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4678"
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4678
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4678](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4678).  
  
  
base class 'base_type' is less accessible than 'derived_type'  
  
 A public type derives from a private type. If the public type is instantiated in a referenced assembly, members of the private base type will not be accessible.  
  
 C4678 is only reachable using **/clr:oldSyntax**. It is an error, using **/clr**, to have a base class that is less accessible that its derived class.  
  
 The following sample generates C4678:  
  
```  
// C4678.cpp  
// compile with: /clr:oldSyntax /LD /W1  
#using <mscorlib.dll>  
private __gc struct privateG {  
// try the following line instead  
// public __gc struct privateG {  
public:  
   int i;  
};  
  
public __gc struct V: public privateG {   // C4678  
public:  
   int j;  
};  
```

