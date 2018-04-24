---
title: "Compiler Error C3386 | Microsoft Docs"
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
  - "C3386"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3386"
ms.assetid: 93fa8c33-0f10-402b-8eec-b0a217a1f8dc
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3386
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3386](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3386).  
  
  
type' : __declspec(dllexport)/\__declspec(dllimport) cannot be applied to a managed or WinRTtype  
  
 The `dllimport` and [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` modifiers are not valid on a managed or Windows Runtime type.  
  
 The following sample generates C3386 and shows how to fix it:  
  
```  
// C3386.cpp  
// compile with: /clr /c  
ref class __declspec(dllimport) X1 {   // C3386  
// try the following line instead  
// ref class X1 {  
};  
```

