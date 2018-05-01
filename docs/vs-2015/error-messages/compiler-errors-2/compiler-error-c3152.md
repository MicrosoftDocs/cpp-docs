---
title: "Compiler Error C3152 | Microsoft Docs"
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
  - "C3152"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3152"
ms.assetid: 4ee6e2cd-5d19-4b73-833d-765c35797e4b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3152
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3152](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3152).  
  
  
construct' : 'keyword' can only be applied to a class, struct, or virtual member function  
  
 Certain keywords can only be applied to a C++ class.  
  
 The following sample generates C3152 and shows how to fix it:  
  
```  
// C3152.cpp  
// compile with: /clr /c  
ref class C {  
   int (*pfn)() sealed;   // C3152  
   virtual int g() sealed;   // OK  
};  
```  
  
 The following sample generates C3152 and shows how to fix it:  
  
```  
// C3152_2.cpp  
// compile with: /clr:oldSyntax /c  
__value __interface A {};   // C3152;  
__value class X {};   // OK  
```

