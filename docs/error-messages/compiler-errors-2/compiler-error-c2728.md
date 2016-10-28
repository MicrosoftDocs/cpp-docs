---
title: "Compiler Error C2728"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2728"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2728"
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2728
'type' : a native array cannot contain this type  
  
 Array creation syntax was used to create an array of managed or WinRT objects. You cannot create an array of managed or WinRT objects using native array syntax.  
  
 For more information, see [array](../../windows/arrays-cpp-component-extensions.md).  
  
 The following sample generates C2728 and shows how to fix it:  
  
```  
// C2728.cpp  
// compile with: /clr  
  
int main() {  
   int^ arr[5];   // C2728  
  
   // try the following line instead  
   array<int>^arr2;  
}  
```  
  
 A [__nogc](../../misc/nogc.md) array cannot be of a [__gc](../../misc/gc.md) type.  
  
 The following sample generates C2728 and shows how to fix it:  
  
```  
// C2728_b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
int main() {  
   int __gc* arr __nogc[5];   // C2728  
  
   // try the following line instead  
   int arr2 __gc[];  
}  
```