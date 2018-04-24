---
title: "Compiler Error C3084 | Microsoft Docs"
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
  - "C3084"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3084"
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3084
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3084](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3084).  
  
  
function': a finalizer/destructor cannot be 'keyword'  
  
 A finalizer or destructor was declared incorrectly.  
  
 For example, a destructor should not be marked as sealed.  The destructor will be inaccessible to derived types.  For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md) and [Destructors and Finalizers in Visual C++](../../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
## Example  
 The following sample generates C3084.  
  
```  
// C3084.cpp  
// compile with: /clr /c  
ref struct R {  
protected:  
   !R() sealed;   // C3084  
   !R() abstract;   // C3084  
   !R();  
};  
```

