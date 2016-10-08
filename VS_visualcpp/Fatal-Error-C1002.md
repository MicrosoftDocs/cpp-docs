---
title: "Fatal Error C1002"
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
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
caps.latest.revision: 6
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
# Fatal Error C1002
compiler is out of heap space in pass 2  
  
 The compiler ran out of dynamic memory space during its second pass, probably due to a program with too many symbols or complex expressions.  
  
### To fix by using the following possible solutions  
  
1.  Divide the source file into several smaller files.  
  
2.  Break expressions into smaller subexpressions.  
  
3.  Remove other programs or drivers that consume memory.