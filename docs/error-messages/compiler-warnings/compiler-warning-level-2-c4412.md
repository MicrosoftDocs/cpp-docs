---
title: "Compiler Warning (level 2) C4412 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4412"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4412"
ms.assetid: f28dc531-1a98-497b-a366-0a13e1bc81c7
caps.latest.revision: 9
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
# Compiler Warning (level 2) C4412
'function' : function signature contains type 'type'; C++ objects are unsafe to pass between pure code and mixed or native.  
  
 The compiler detected a potentially unsafe situation that could result in a runtime error: a call is being made from a **/clr:pure** compiland to a function that was imported via dllimport and the function signature contains an unsafe type. A type is unsafe if it contains a member function or has a data member that is an unsafe type or an indirection to an unsafe type.  
  
 This is unsafe because of the difference in the default calling conventions between pure and native code (or mixed native and managed). When importing (via `dllimport`) a function into a **/clr:pure** compiland, ensure that the declarations of each type in the signature are identical to those in the compiland that exports the function (being especially careful about differences in implicit calling conventions).  
  
 A virtual member function is especially prone to give unexpected results.  However, even a non-virtual function should be tested to ensure that you get the correct results. If you are sure that you are getting the correct results, you can ignore this warning.  
  
 For more information on **/clr:pure**, see [How to: Migrate to /clr:pure (C++/CLI)](../../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md).  
  
 C4412 is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) and [dllexport, dllimport](../../cpp/dllexport-dllimport.md) for more information.  
  
 To resolve this warning, remove all functions from the type.  
  
## Example  
 The following sample generates C4412.  
  
```  
// C4412.cpp  
// compile with: /c /W2 /clr:pure  
#pragma warning (default : 4412)  
  
struct Unsafe {  
   virtual void __cdecl Test();  
};  
  
struct Safe {  
   int i;  
};  
  
__declspec(dllimport) Unsafe * __cdecl func();  
__declspec(dllimport) Safe * __cdecl func2();  
  
int main() {  
   Unsafe *pUnsafe = func();   // C4412  
   // pUnsafe->Test();  
  
   Safe *pSafe = func2();   // OK  
}  
```  
  
## Example  
 The following sample is a header file that declares two types. The `Unsafe` type is unsafe because it has a member function.  
  
```  
// C4412.h  
struct Unsafe {  
   // will be __clrcall if #included in pure compilation  
   // defaults to __cdecl in native or mixed mode compilation  
   virtual void Test(int * pi);  
  
   // try the following line instead  
   // virtual void __cdecl Test(int * pi);  
};  
  
struct Safe {  
   int i;  
};  
```  
  
## Example  
 This sample exports functions with the types defined in the header file.  
  
```  
// C4412_2.cpp  
// compile with: /LD  
#include "C4412.h"  
  
void Unsafe::Test(int * pi) {  
   *pi++;  
}  
  
__declspec(dllexport) Unsafe * __cdecl func() { return new Unsafe; }  
__declspec(dllexport) Safe * __cdecl func2() { return new Safe; }  
```  
  
## Example  
 The default calling convention in a **/clr:pure** compilation is different from a native compilation.  When C4412.h is included, `Test` will be default to `__clrcall`. If you compile and run this program (do not use **/c**), the program will throw an exception.  
  
 The following sample generates C4412.  
  
```  
// C4412_3.cpp  
// compile with: /W2 /clr:pure /c /link C4412_2.lib  
#pragma warning (default : 4412)  
#include "C4412.h"  
  
__declspec(dllimport) Unsafe * __cdecl func();  
__declspec(dllimport) Safe * __cdecl func2();  
  
int main() {  
   int n = 7;  
   Unsafe *pUnsafe = func();   // C4412  
   pUnsafe->Test(&n);  
  
   Safe *pSafe = func2();   // OK  
}  
```