---
title: "Compiler Error C3409 | Microsoft Docs"
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
  - "C3409"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3409"
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3409
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3409](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3409).  
  
  
empty attribute block is not allowed  
  
 The square brackets were interpreted by the compiler as an [attribute](../../windows/cpp-attributes-reference.md) block, but no attributes were found.  
  
 The compiler may generate this error when you use square brackets as part of the definition of a lambda expression. This error occurs when the compiler cannot determine whether the square brackets are part of the definition of a lambda expression or of an attribute block. For more information about lambda expressions, see [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md).  
  
### To correct this error  
  
1.  If the square brackets are part of an attribute block:  
  
    1.  Provide one or more attributes in the attribute block.  
  
    2.  Remove the attribute block.  
  
2.  If the square brackets are part of a lambda expression:  
  
    1.  Make sure that the lambda expression follows valid syntax rules.  
  
         For more information about lambda expression syntax, see [Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md).  
  
    2.  
  
## Example  
 The following example generates C3409.  
  
```  
// C3409.cpp  
// compile with: /c  
#include <windows.h>  
[]   // C3409  
class a {};  
  
// OK  
[object, uuid("00000000-0000-0000-0000-000000000000")]  
__interface x {};  
  
[coclass, uuid("00000000-0000-0000-0000-000000000001")]  
class b : public x {};  
```  
  
## Example  
 The following example generates C3409 because a lambda expression uses the `mutable` specification, but does not provide a parameter list. The compiler cannot determine whether the square brackets are part of the definition of a lambda expression or of an attribute block.  
  
```  
// C3409b.cpp  
  
int main()  
{  
   [] mutable {}();  
}  
```  
  
## See Also  
 [attribute](../../windows/cpp-attributes-reference.md)   
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)   
 [Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md)

