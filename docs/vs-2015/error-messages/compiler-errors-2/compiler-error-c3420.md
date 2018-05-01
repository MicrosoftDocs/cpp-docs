---
title: "Compiler Error C3420 | Microsoft Docs"
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
  - "C3420"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3420"
ms.assetid: 99b53c77-f36b-4574-9199-b53111becccb
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3420
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3420](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3420).  
  
  
finalizer' : a finalizer cannot be virtual  
  
 A finalizer can only be called non-virtually from its enclosing type. Therefore, it is an error to declare a virtual finalizer.  
  
 For more information, see [Destructors and Finalizers in Visual C++](../../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
## Example  
 The following sample generates C3420.  
  
```  
// C3420.cpp  
// compile with: /clr /c  
ref class R {  
   virtual !R() {}   // C3420  
};  
```

