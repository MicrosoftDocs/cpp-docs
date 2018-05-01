---
title: "Compiler Error C3727 | Microsoft Docs"
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
  - "C3727"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3727"
ms.assetid: 17b9fe7b-ee9e-483f-9c27-1f709255a9e0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3727
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3727](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3727).  
  
  
event': a managed event must be a member function or a data member that is a pointer to a delegate  
  
 .NET events must be a pointer to a delegate type.  
  
 The following sample generates C3727:  
  
```  
// C3727.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class PseudoDelegate  
{  
};  
  
// use the following declaration to resolve the error.  
// __delegate void PseudoDelegate(int);  
  
__gc class MyAttr  
{  
   __event PseudoDelegate* MyE;  
};   // C3727  
  
int main()  
{  
}  
```

