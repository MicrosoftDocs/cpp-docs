---
title: "Compiler Error C3283 | Microsoft Docs"
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
  - "C3283"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3283"
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3283
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3283](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3283).  
  
  
type' : an interface cannot have an instance constructor  
  
 A CLR [interface](../../windows/interface-class-cpp-component-extensions.md) cannot have an instance constructor.  A static constructor is allowed.  
  
 The following sample generates C3283:  
  
```  
// C3283.cpp  
// compile with: /clr  
interface class I {  
   I();   // C3283  
};  
```  
  
 Possible resolution:  
  
```  
// C3283b.cpp  
// compile with: /clr /c  
interface class I {  
   static I(){}  
};  
```

