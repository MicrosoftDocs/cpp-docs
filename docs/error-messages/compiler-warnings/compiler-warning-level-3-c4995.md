---
title: "Compiler Warning (level 3) C4995 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4995"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4995"]
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4995
'function': name was marked as #pragma deprecated  
  
 The compiler encountered a function that was marked with pragma [deprecated](../../preprocessor/deprecated-c-cpp.md). The function may no longer be supported in a future release. You can turn this warning off with the [warning](../../preprocessor/warning.md) pragma (example below).  
  
## Example  
 The following sample generates C4995:  
  
```  
// C4995.cpp  
// compile with: /W3  
#include <stdio.h>  
  
// #pragma warning(disable : 4995)  
void func1(void)  
{  
    printf("\nIn func1");  
}  
  
int main()   
{  
    func1();  
    #pragma deprecated(func1)  
    func1();   // C4995  
}  
```