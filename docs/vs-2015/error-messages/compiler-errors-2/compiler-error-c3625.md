---
title: "Compiler Error C3625 | Microsoft Docs"
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
  - "C3625"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3625"
ms.assetid: fdf49f21-d6b1-42f4-9eec-23b04ae8b4aa
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3625
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3625](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3625).  
  
  
native_type': a native type cannot derive from a managed or WinRT type 'type'  
  
 A native class cannot inherit from a managed or WinRT class. For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 The following sample generates C3625:  
  
```  
// C3625.cpp  
// compile with: /clr /c  
ref class B {};  
class D : public B {};   // C3625 cannot inherit from a managed class  
```  
  
 The following sample generates C3625:  
  
```  
// C3625_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc class B {};  
class D : public B {};   // C3625  cannot inherit from a managed class  
```

