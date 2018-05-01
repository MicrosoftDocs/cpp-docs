---
title: "Compiler Error C3800 | Microsoft Docs"
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
  - "C3800"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3800"
ms.assetid: c653240a-b6db-4437-8d65-fa58f0e6fcf4
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3800
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3800](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3800).  
  
  
declaration': cannot mix properties and events  
  
 You cannot declare a construct to be both a property and an event.  
  
 C3800 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3800:  
  
```  
// C3800.cpp  
// compile with: /clr:oldSyntax  
#using "mscorlib.dll"  
  
__delegate void MyDel();  
public __gc struct S  
{  
   __property __event void set_E(MyDel*)  
   {  
   }   // C3800  
};  
  
int main()  
{  
}  
```

