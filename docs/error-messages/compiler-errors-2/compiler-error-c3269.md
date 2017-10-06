---
title: "Compiler Error C3269 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3269"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3269"]
ms.assetid: c575f067-244d-4dd5-bf58-9e7630ea58b7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3269
'function' : a member-function of a managed or WinRTtype cannot be declared with '...'  
  
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
