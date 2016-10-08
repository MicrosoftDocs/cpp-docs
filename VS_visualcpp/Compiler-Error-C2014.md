---
title: "Compiler Error C2014"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 231d8e9c-48c0-4027-99a3-245d186275ec
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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