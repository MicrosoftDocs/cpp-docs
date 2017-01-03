---
title: "make_public | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.make_public"
  - "make_public_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, make_public"
  - "make_public pragma"
ms.assetid: c3665f4d-268a-4932-9661-c37c8ae6a341
caps.latest.revision: 6
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
# make_public
Indicates that a native type should have public assembly accessibility.  
  
## Syntax  
  
```  
#pragma make_public(type)  
```  
  
### Parameters  
 `type` is the name of the type you want to have public assembly accessibility.  
  
## Remarks  
`make_public` is useful for when the native type you want to reference is from a .h file that you cannot change. If you want to use the native type in the signature of a public function in a type with public assembly visibility, the native type must also have public assembly accessibility or the compiler will issue a warning.  
  
`make_public` must be specified at global scope and is only in effect from the point at which it is declared through to the end of the source code file.  
  
The native type may be implicitly or explicitly private; see [Type Visibility](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) for more information.  
  
## Example  
The following sample is the contents of a .h file that contains the definitions for two native structs.  
  
```cpp  
// make_public_pragma.h  
struct Native_Struct_1 { int i; };  
struct Native_Struct_2 { int i; };  
```  
  
## Example  
The following code sample consumes the header file and shows that unless you explicitly mark the native structs as public, using `make_public`, the compiler will generate a warning when you attempt to use the native structs in the signature of public function in a public managed type.  
  
```cpp  
// make_public_pragma.cpp  
// compile with: /c /clr /W1  
#pragma warning (default : 4692)  
#include "make_public_pragma.h"  
#pragma make_public(Native_Struct_1)  
  
public ref struct A {  
   void Test(Native_Struct_1 u) {u.i = 0;}   // OK  
   void Test(Native_Struct_2 u) {u.i = 0;}   // C4692  
};  
```  
  
## See Also  
[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)