---
title: "Compiler Warning (level 3) C4800 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4800"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4800"]
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4800  
  
> '*type*' : forcing value to bool 'true' or 'false' (performance warning)  
  
This warning is generated when a value that is not `bool` is assigned or coerced into type `bool`. Typically, this message is caused by assigning `int` variables to `bool` variables where the `int` variable contains only values **true** and **false**, and could be redeclared as type `bool`. If you cannot rewrite the expression to use type `bool`, then you can add "`!=0`" to the expression, which gives the expression type `bool`. Casting the expression to type `bool` does not disable the warning, which is by design.  
  
This warning is no longer generated in Visual Studio 2017.  
  
## Example
  
 The following sample generates C4800 and shows how to fix it:  
  
```cpp  
// C4800.cpp  
// compile with: /W3  
int main() {  
   int i = 0;  
  
   // To fix, instead try:  
   // bool i = 0;  
  
   bool j = i;   // C4800  
   j++;  
}  
```