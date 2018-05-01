---
title: "Compiler Error C3493 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3493"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3493"
ms.assetid: 734b4257-12a3-436f-8488-c8c55ec81634
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3493
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3493](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3493).  
  
  
var' cannot be implicitly captured because no default capture mode has been specified  
  
 The empty lambda expression capture, `[]`, specifies that the lambda expression does not explicitly or implicitly capture any variables.  
  
### To correct this error  
  
-   Provide a default capture mode, or  
  
-   Explicitly capture one or more variables.  
  
## Example  
 The following example generates C3493 because it modifies an external variable but specifies the empty capture clause:  
  
```  
// C3493a.cpp  
  
int main()  
{  
   int m = 55;  
   [](int n) { m = n; }(99); // C3493  
}  
```  
  
## Example  
 The following example resolves C3493 by specifying by-reference as the default capture mode.  
  
```  
// C3493b.cpp  
  
int main()  
{  
   int m = 55;  
   [&](int n) { m = n; }(99);  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)

