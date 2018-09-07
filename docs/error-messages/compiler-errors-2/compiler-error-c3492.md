---
title: "Compiler Error C3492 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3492"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3492"]
ms.assetid: b1dc6342-9133-4b1f-a9c3-e8c65d20d121
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3492
'var': you cannot capture a member of an anonymous union  
  
 You cannot capture a member of an unnamed union.  
  
### To correct this error  
  
-   Give the union a name and pass the complete union structure to the capture list of the lambda expression.  
  
## Example  
 The following example generates C3492 because it captures a member of an anonymous union:  
  
```  
// C3492a.cpp  
  
int main()  
{  
   union  
   {  
      char ch;  
      int x;  
   };  
  
   ch = 'y';  
   [&x](char ch) { x = ch; }(ch); // C3492  
}  
```  
  
## Example  
 The following example resolves C3492 by giving the union a name and by passing the complete union structure to the capture list of the lambda expression:  
  
```  
// C3492b.cpp  
  
int main()  
{  
   union  
   {  
      char ch;  
      int x;  
   } u;  
  
   u.ch = 'y';  
   [&u](char ch) { u.x = ch; }(u.ch);  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)