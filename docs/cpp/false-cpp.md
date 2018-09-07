---
title: "false (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["false_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["false keyword [C++]"]
ms.assetid: cc13aec5-1f02-4d38-8dbf-5473ea2b354f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# false (C++)
The keyword is one of the two values for a variable of type [bool](../cpp/bool-cpp.md) or a conditional expression (a conditional expression is now a **true** Boolean expression). For example, if `i` is a variable of type **bool**, the `i = false;` statement assigns **false** to `i`.  
  
## Example  
  
```cpp 
// bool_false.cpp  
#include <stdio.h>  
  
int main()  
{  
    bool bb = true;  
    printf_s("%d\n", bb);  
    bb = false;  
    printf_s("%d\n", bb);  
}  
```  
  
```Output  
1  
0  
```  
  
## See also  
 [Keywords](../cpp/keywords-cpp.md)