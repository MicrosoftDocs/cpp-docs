---
title: "-Zc:rvalueCast (Enforce type conversion rules) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "rvaluecast"
  - "/Zc:rvalueCast"
  - "VC.Project.VCCLCompilerTool.EnforceTypeConversionRules"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Zc compiler options (C++)"
  - "rvaluecast"
  - "Enforce type conversion rules"
  - "/Zc compiler options (C++)"
  - "Zc compiler options (C++)"
ms.assetid: 7825277d-e565-4c48-b0fb-76ac0b0c6e38
caps.latest.revision: 8
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
# /Zc:rvalueCast (Enforce type conversion rules)
When the **/Zc:rvalueCast** option is specified, the compiler correctly identifies an rvalue reference type as the result of a cast operation in accordance with the C++11 standard. When the option is not specified, the compiler behavior is the same as in Visual Studio 2012. By default, **/Zc:rvalueCast** is off. For conformance and to eliminate errors in the use of casts, we recommend that you use **/Zc:rvalueCast**.  
  
## Syntax  
  
```  
/Zc:rvalueCast[-]  
```  
  
## Remarks  
 If **/Zc:rvalueCast** is specified, the compiler follows section 5.4 of the C++11 standard and treats only cast expressions that result in non-reference types and cast expressions that result in rvalue references to non-function types as rvalue types. By default, or if **/Zc:rvalueCast-** is specified, the compiler is non-conformant and treats all cast expressions that result in rvalue references as rvalues.  
  
 Use **/Zc:rvalueCast** if you pass a cast expression as an argument to a function that takes an rvalue reference type. The default behavior causes compiler error [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) when the compiler incorrectly determines the type of the cast expression. This example shows a compiler error in correct code when /Zc:rvalueCast is not specified:  
  
```cpp  
// Test of /Zc:rvalueCast  
// compile by using:  
// cl /c /Zc:rvalueCast- make_thing.cpp  
// cl /c /Zc:rvalueCast make_thing.cpp  
  
#include <utility>  
  
template <typename T>   
struct Thing {  
   // Construct a Thing by using two rvalue reference parameters  
   Thing(T&& t1, T&& t2)  
      : thing1(t1), thing2(t2) {}  
  
   T& thing1;  
   T& thing2;  
};  
  
// Create a Thing, using move semantics if possible  
template <typename T>  
Thing<T> make_thing(T&& t1, T&& t2)  
{  
   return (Thing<T>(std::forward<T>(t1), std::forward<T>(t2)));  
}  
  
struct Test1 {  
   long a;  
   long b;  
  
   Thing<long> test() {   
      // Use identity casts to create rvalues as arguments  
      return make_thing(static_cast<long>(a), static_cast<long>(b));   
   }  
};  
  
```  
  
 The default compiler behavior may not report error C2102 when appropriate. In this example, the compiler does not report an error if the address of an rvalue created by an identity cast is taken when **/Zc:rvalueCast** is not specified:  
  
```cpp  
int main() {  
   int a = 1;  
   int *p = &a;   // Okay, take address of lvalue   
                  // Identity cast creates rvalue from lvalue;    
   p = &(int)a;   // problem: should cause C2102: '&' requires l-value  
}  
```  
  
 For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Modify the **Additional Options** property to include **/Zc:rvalueCast** and then choose **OK**.  
  
## See Also  
 [/Zc (Conformance)](../../build/reference/zc-conformance.md)