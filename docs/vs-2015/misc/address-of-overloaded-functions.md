---
title: "Address of Overloaded Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "addresses [C++], overloaded functions"
  - "addresses [C++], returning overloaded"
  - "function overloading, function address"
  - "this pointer, overloaded functions"
ms.assetid: e7913e65-a295-445d-b2b0-1e60f8dfbc54
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Address of Overloaded Functions
Use of a function name without arguments returns the address of that function. For example:  
  
```  
int Func( int i, int j );  
int Func( long l );  
  
...  
  
int (*pFunc) ( int, int ) = Func;  
```  
  
 In the preceding example, the first version of `Func` is selected, and its address is copied into `pFunc`.  
  
 The compiler determines which version of the function to select by finding a function with an argument list that exactly matches that of the target. The arguments in the overloaded function declarations are matched against one of the following:  
  
-   An object being initialized (as shown in the preceding example)  
  
-   The left side of an assignment statement  
  
-   A formal argument to a function  
  
-   A formal argument to a user-defined operator  
  
-   A function return type  
  
 If no exact match is found, the expression that takes the address of the function is ambiguous and an error is generated.  
  
 Note that although a nonmember function, `Func`, was used in the preceding example, the same rules are applied when taking the address of overloaded member functions.  
  
## See Also  
 [Overloading  (C++)](../misc/overloading-cpp.md)