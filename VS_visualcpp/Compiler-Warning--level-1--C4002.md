---
title: "Compiler Warning (level 1) C4002"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 6bda1dfe-e2e4-4771-9794-5a404c466dd5
caps.latest.revision: 8
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4002
too many actual parameters for macro 'identifier'  
  
 The number of actual parameters in the macro exceeds the number of formal parameters in the macro definition. The preprocessor collects the extra parameters but ignores them during macro expansion.  
  
 C4002 can occur when incorrectly using [Variadic Macros](../VS_visualcpp/Variadic-Macros.md).  
  
 The following sample generates C4002:  
  
```  
// C4002.cpp  
// compile with: /W1  
#define test(a) (a)  
  
int main() {  
   int a = 1;  
   int b = 2;  
   a = test(a,b);   // C4002  
   // try..  
   a = test(a);  
}  
```  
  
 This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: extra commas in macro no longer accepted.  
  
 The compiler will no longer accept extra commas in a macro. For code to be valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, remove the extra commas.  
  
```  
// C4002b.cpp  
// compile with: /W1  
#define F(x,y)  
int main()  
{  
   F(2,,,,,,3,,,,,,)   // C4002  
   // Try the following line instead:  
   // F(2,3)  
}  
```