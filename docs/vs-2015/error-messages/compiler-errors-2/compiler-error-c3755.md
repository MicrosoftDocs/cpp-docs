---
title: "Compiler Error C3755 | Microsoft Docs"
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
  - "C3755"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3755"
ms.assetid: 9317b55e-a52e-4b87-b915-5a208d6eda38
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3755
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3755](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3755).  
  
  
delegate': a delegate may not be defined  
  
 A [delegate  (C++ Component Extensions)](../../windows/delegate-cpp-component-extensions.md) can be declared but not defined.  
  
## Example  
 The following sample generates C3755.  
  
```  
// C3755.cpp  
// compile with: /clr /c  
delegate void MyDel() {};   // C3755  
```  
  
## Example  
 C3755 can also occur if you attempt to create a delegate template. The following sample generates C3755.  
  
```  
// C3755_b.cpp  
// compile with: /clr /c  
ref struct R {  
   template<class T>  
   delegate void D(int) {}   // C3755  
};  
```

