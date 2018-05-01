---
title: "Compiler Error C2632 | Microsoft Docs"
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
  - "C2632"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2632"
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2632
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2632](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2632).  
  
  
type1' followed by 'type2' is illegal  
  
 This error can be caused if there is missing code between two type specifiers.  
  
 The following sample generates C2632:  
  
```  
// C2632.cpp  
int float i;   // C2632  
```  
  
 This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003. `bool` is now a proper type. In previous versions, `bool` was a typedef, and you could create identifiers with that name.  
  
 The following sample generates C2632:  
  
```  
// C2632_2.cpp  
// compile with: /LD  
void f(int bool);   // C2632  
```  
  
 To resolve this error so that the code is valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, rename the identifier.

