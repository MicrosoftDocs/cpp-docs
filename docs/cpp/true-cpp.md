---
title: "true (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["true_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["true keyword [C++]"]
ms.assetid: 96be2a70-51c3-4250-9752-874d25a5a11e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# true (C++)
## Syntax  
  
```  
  
bool-identifier = true ;  
bool-expression logical-operator true ;  
```  
  
## Remarks  
 This keyword is one of the two values for a variable of type [bool](../cpp/bool-cpp.md) or a conditional expression (a conditional expression is now a true boolean expression). If `i` is of type `bool`, then the statement `i = true;` assigns **true** to `i`.  
  
## Example  
  
```cpp 
// bool_true.cpp  
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
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)