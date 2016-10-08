---
title: "Compiler Error C2690"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: f165a806-14bd-4942-99b7-8a9fc7dea227
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C2690
'operator' : cannot perform pointer arithmetic on a managed or WinRT array  
  
 Pointer arithmetic is not allowed on a managed or WinRT array. Use array index notation to traverse the array.  
  
 **Managed Extensions for C++**  
  
 Pointer arithmetic is not allowed on a [__gc](../Topic/__gc.md) array. Use array index notation to traverse the array.  
  
 The following sample generates C2690:  
  
```  
// C2690b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
int main() {  
   String* x[] = new String*[10];  
   x[0] = "test";  
   Console::WriteLine(x[0]);  
   x++;   // C2690  
}  
```