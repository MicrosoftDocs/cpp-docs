---
title: "Compiler Error C2872 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2872"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2872"
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
caps.latest.revision: 11
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
# Compiler Error C2872
'*symbol*' : ambiguous symbol  
  
The compiler cannot determine which symbol you are referring to. More than one symbol with the specified name is in scope. See the notes following the error message for the file locations and declarations the compiler found for the ambiguous symbol. To fix this issue, you can fully qualify the ambiguous symbol by using its namespace, for example, `std::byte` or `::byte`. You can also use a [namespace alias](../../cpp/namespaces-cpp.md#namespace_aliases) to give an included namespace a convenient short name for use when disambiguating symbols in your source code.  
  
C2872 can occur if a header file includes a [using directive](../../cpp/namespaces-cpp.md#using_directives), and a subsequent header file is included that contains a type that is also in the namespace specified in the `using` directive. Specify a `using` directive only after all your header files are specified with `#include`.  
  
 For more information about C2872, see Knowledge Base articles [PRB: Compiler Errors When You Use #import with XML in Visual C++ .NET](http://support.microsoft.com/kb/316317) and ["Error C2872: 'Platform' : ambiguous symbol" error message when you use the Windows::Foundation::Metadata namespace in Visual Studio 2013](https://support.microsoft.com/kb/2890859).  
  
## Example  
 The following sample generates C2872, because an ambiguous reference is made to a variable named `i`; two variables with the same name are in scope:  
  
```cpp  
// C2872.cpp  
// compile with: cl /EHsc C2872.cpp  
namespace A {  
   int i;  
}  
  
using namespace A;  
int i;  
int main() {  
   ::i++;   // ok, uses i from global namespace  
   A::i++;   // ok, uses i from namespace A  
   i++;   // C2872 ambiguous: ::i or A::i? 
   // To fix this issue, use the fully qualified name
   // for the intended variable. 
}  
```