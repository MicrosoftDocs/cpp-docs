---
title: "Compiler Error C3488 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3488"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3488"]
ms.assetid: 0a6fcd76-dd3b-48d7-abb3-22eccda96034
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3488
'var' is not allowed when the default capture mode is by-reference  
  
 When you specify that the default capture mode for a lambda expression is by-reference, you cannot pass a variable by reference to the capture clause of that expression.  
  
### To correct this error  
  
-   Do not explicitly pass the variable to the capture clause, or  
  
-   Do not specify by-reference as the default capture mode, or  
  
-   Specify by-value as the default capture mode, or  
  
-   Pass the variable by value to the capture clause. (This might change the behavior of the lambda expression.)  
  
## Example  
 The following example generates C3488 because a reference to the variable `n` appears in the capture clause of a lambda expression whose default mode is by-reference:  
  
```  
// C3488a.cpp  
  
int main()  
{  
   int n = 5;  
   [&, &n]() { return n; } (); // C3488  
}  
```  
  
## Example  
 The following example shows four possible resolutions to C3488:  
  
```  
// C3488b.cpp  
  
int main()  
{  
   int n = 5;  
  
   // Possible resolution 1:  
   // Do not explicitly pass &n to the capture clause.  
   [&]() { return n; } ();  
  
   // Possible resolution 2:  
   // Do not specify by-reference as the default capture mode.  
   [&n]() { return n; } ();  
  
   // Possible resolution 3:  
   // Specify by-value as the default capture mode.  
   [=, &n]() { return n; } ();  
  
   // Possible resolution 4:  
   // Pass n by value to the capture clause.  
   [n]() { return n; } ();  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)