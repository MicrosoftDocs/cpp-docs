---
title: "Compiler Error C3387 | Microsoft Docs"
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
  - "C3387"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3387"
ms.assetid: c54d9925-ed14-4976-b8db-e8d4dc84e536
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3387
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3387](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3387).  
  
  
member' : __declspec(dllexport)/\__declspec(dllimport) cannot be applied to a member of a managed or WinRT type  
  
 The `dllimport` and [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` modifiers are not valid on members of a managed or Windows Runtime type.  
  
 The following sample generates C3387 and shows how to fix it:  
  
```  
// C3387a.cpp  
// compile with: /clr /c  
ref class X2 {  
   void __declspec(dllexport) mf() {   // C3387  
   // try the following line instead  
   // void mf() {  
   }  
};  
```

