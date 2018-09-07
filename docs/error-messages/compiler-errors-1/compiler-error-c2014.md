---
title: "Compiler Error C2014 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2014"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2014"]
ms.assetid: 231d8e9c-48c0-4027-99a3-245d186275ec
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2014
preprocessor command must start as first nonwhite space  
  
 The `#` sign of a preprocessor directive must be the first character on a line that is not white space.  
  
 The following sample generates C2014:  
  
```  
// C2014.cpp  
int k; #include <stdio.h>   // C2014  
```  
  
 Possible resolution:  
  
```  
// C2014b.cpp  
// compile with: /c  
int k;   
#include <stdio.h>  
```