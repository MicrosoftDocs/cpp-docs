---
title: "Compiler Error C3077 | Microsoft Docs"
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
  - "C3077"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3077"
ms.assetid: d9f3c619-d1e2-4656-81a5-a35a9586a7d4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3077
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3077](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3077).  
  
  
finalizer' : a finalizer can only be a member of a reference type  
  
 You cannot declare a finalizer in a native or value type.  
  
 For more information, see [Destructors and Finalizers in Visual C++](../../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
## Example  
 The following sample generates C3077.  
  
```  
// C3077.cpp  
// compile with: /clr /c  
value struct vs {  
   !vs(){}   // C3077  
};  
  
ref struct rs {  
protected:  
   !rs(){}   // OK  
};  
```

