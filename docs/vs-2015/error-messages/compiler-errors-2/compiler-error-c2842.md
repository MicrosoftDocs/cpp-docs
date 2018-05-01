---
title: "Compiler Error C2842 | Microsoft Docs"
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
  - "C2842"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2842"
ms.assetid: 8674f08d-9f50-46ad-9229-abc6b74fa0e5
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2842
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2842](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2842).  
  
  
class' : a managed or WinRT type may not define its own 'operator new' or 'operator delete'  
  
 You can define your own [operator new](http://msdn.microsoft.com/library/2476d0f9-59df-485c-981e-ba9f7ee83507) or [operator delete](http://msdn.microsoft.com/library/7c45e232-ceb2-4a77-b0af-da2a935d46a2) to manage memory allocation on the native heap. However, reference classes cannot define these operators because they are only allocated on the managed heap.  
  
 For more information, see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).  
  
## Example  
 The following sample generates C2842.  
  
```  
// C2842.cpp  
// compile with: /clr /c  
ref class G {  
   void* operator new( size_t nSize );   // C2842  
};  
```  
  
## Example  
 The following sample generates C2842.  
  
```  
// C2842_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc class G {  
   void* operator new( size_t nSize );   // C2842  
};  
```

