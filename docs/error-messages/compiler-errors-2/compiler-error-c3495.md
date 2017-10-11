---
title: "Compiler Error C3495 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3495"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3495"]
ms.assetid: 1fd40cb8-8373-403d-b8a8-f08424a50807
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3495
'var': a lambda capture must have automatic storage duration  
  
 You cannot capture a variable that does not have automatic storage duration, such as a variable that is marked `static` or `extern`.  
  
### To correct this error  
  
-   Do not pass a `static` or `extern` variable to the capture list of the lambda expression.  
  
## Example  
 The following example generates C3495 because the `static` variable `n` appears in the capture list of a lambda expression:  
  
```  
// C3495.cpp  
  
int main()  
{  
   static int n = 66;  
   [&n]() { return n; }(); // C3495  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)   


