---
title: "Compiler Error C2814 | Microsoft Docs"
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
  - "C2814"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2814"
ms.assetid: 7d165136-a08b-4497-a76d-60a21bb19404
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2814
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2814](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2814).  
  
  
member' : a native type cannot be nested within a managed or WinRT type 'type'  
  
## Example  
 A native type cannot be nested in a CLR or WinRT type. The following sample generates C2814 and shows how to fix it.  
  
```  
// C2814.cpp  
// compile with: /clr /c  
ref class A {  
   class B {};   // C2814  
   ref class C {};   // OK  
};  
```  
  
## Example  
 Using Managed Extensions for C++, you must explicitly specify the "managed-ness" of an embedded type using one of the following keywords: [__gc](../../misc/gc.md), [__nogc](../../misc/nogc.md), or [__value](../../misc/value.md).  
  
 The following sample generates C2814 and shows how to fix it.  
  
```  
// C2814_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc class A {  
   class B {};   // C2814  
   __gc class C {};   // OK  
};  
```

