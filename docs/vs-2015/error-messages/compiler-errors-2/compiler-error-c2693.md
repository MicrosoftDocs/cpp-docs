---
title: "Compiler Error C2693 | Microsoft Docs"
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
  - "C2693"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2693"
ms.assetid: b7364ca8-b6be-48c0-97d6-6029787fb171
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2693
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2693](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2693).  
  
  
operator' : illegal comparison for references to a managed or WinRT array  
  
 You cannot test a managed or WinRT array for any kind of inequality. For example, you can test to see if managed arrays are equal but you cannot test to see if one array is greater or less than another array.  
  
 **Managed Extensions for C++**  
  
 You cannot test a [__gc](../../misc/gc.md) array for any kind of inequality. For example, you can test to see if managed arrays are equal but you cannot test to see if one array is greater or less than another array.  
  
 The following sample generates C2693:  
  
```  
// C2693b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
int func3(int a __gc[], int b __gc[]) {  
   return a < b;    // C2693  
}  
int func1(int a __gc[], int b __gc[]) {  
   return a != b;   // OK  
}  
  
int func2(int a __gc[], int b __gc[]) {  
   return a == b;   // OK  
}  
```

