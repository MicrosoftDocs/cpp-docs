---
title: "Compiler Error C3179 | Microsoft Docs"
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
  - "C3179"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3179"
ms.assetid: 60d7e41b-25fd-48ac-8b79-830c062f4dcd
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3179
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3179](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3179).  
  
  
an unnamed managed or WinRTtype is not allowed  
  
 All CLR and WinRT classes and structs must have names.  
  
 The following sample generates C3179 and shows how to fix it:  
  
```  
// C3179a.cpp  
// compile with: /clr /c  
typedef value struct { // C3179  
// try the following line instead  
// typedef value struct MyStruct {  
   int i;  
} V;  
```  
  
 The following sample generates C3179 and shows how to fix it:  
  
```  
// C3179b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
typedef __value struct {   // C3179  
// try the following line instead  
// typedef __value struct MyStruct {  
   int i;  
} V;  
```

