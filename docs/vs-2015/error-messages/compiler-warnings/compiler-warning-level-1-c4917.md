---
title: "Compiler Warning (level 1) C4917 | Microsoft Docs"
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
  - "C4917"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4917"
ms.assetid: c05e2610-4a5d-4f4b-a99b-c15fd7f1d5f1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4917
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4917](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4917).  
  
  
declarator' : a GUID can only be associated with a class, interface or namespace  
  
 A user-defined structure other than [class](../../cpp/class-cpp.md), [interface](../../cpp/interface.md), or [namespace](../../misc/namespace-declaration.md) cannot have a GUID.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following code sample generates C4917:  
  
```  
// C4917.cpp  
// compile with: /W1  
#pragma warning(default : 4917)  
__declspec(uuid("00000000-0000-0000-0000-000000000001")) struct S  
{  
} s;   // C4917, don't put uuid on a struct  
  
int main()  
{  
}  
```

