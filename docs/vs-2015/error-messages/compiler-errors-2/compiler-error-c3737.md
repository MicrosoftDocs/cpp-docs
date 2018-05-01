---
title: "Compiler Error C3737 | Microsoft Docs"
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
  - "C3737"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3737"
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3737
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3737](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3737).  
  
  
delegate': a delegate may not have an explicit calling convention  
  
 You cannot specify the [calling convention](../../cpp/calling-conventions.md) for a [__delegate](../../misc/delegate.md).  
  
 The following sample generates C3737:  
  
```  
// C3737a.cpp  
// compile with: /clr  
delegate void __stdcall MyFunc();   // C3737  
// Try the following line instead.  
// delegate void MyFunc();  
  
int main() {  
}  
```  
  
 The following sample generates C3737:  
  
```  
// C3737b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__delegate void __stdcall MyFunc();   // C3737  
// Try the following line instead.  
// __delegate void MyFunc();  
  
int main() {  
}  
```

