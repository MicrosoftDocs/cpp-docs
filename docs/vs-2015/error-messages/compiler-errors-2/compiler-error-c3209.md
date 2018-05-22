---
title: "Compiler Error C3209 | Microsoft Docs"
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
  - "C3209"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3209"
ms.assetid: 1de44e39-69d1-4894-8f89-ff92136e8e5d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3209
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3209](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3209).  
  
  
class' : generic class must be a managed or WinRTclass  
  
 A generic class must be a managed class or a Windows Runtime class.  
  
 The following sample generates C3209 and shows how to fix it:  
  
```  
// C3209.cpp  
// compile with: /clr  
generic <class T>  
class C {};   // C3209  
  
// OK - ref class can be generic  
generic <class T>  
ref class D {};  
```

