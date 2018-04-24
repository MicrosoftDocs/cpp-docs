---
title: "Compiler Error C3269 | Microsoft Docs"
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
  - "C3269"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3269"
ms.assetid: c575f067-244d-4dd5-bf58-9e7630ea58b7
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3269
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3269](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3269).  
  
  
function' : a member-function of a managed or WinRTtype cannot be declared with '...'  
  
 Managed and WinRT class member functions cannot declare variable-length parameter lists.  
  
 The following sample generates C3269 and shows how to fix it:  
  
```  
// C3269_2.cpp  
// compile with: /clr  
  
ref struct A  
{  
   void func(int i, ...)   // C3269  
   // try the following line instead  
   // void func(int i )  
   {  
   }  
};  
  
int main()  
{  
}  
```  
  
 The following sample generates C3269 and shows how to fix it:  
  
```  
// C3269.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc struct A  
{  
   void func(int i, ...)   // C3269  
   // try the following line instead  
   // void func(int i )  
   {  
   }  
};  
  
int main()  
{  
}  
```

