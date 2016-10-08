---
title: "BSCMAKE Error BK1509"
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
ms.assetid: 53df7037-1913-4b63-b425-c0bf44081792
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
# BSCMAKE Error BK1509
out of heap space  
  
 BSCMAKE ran out of memory, including virtual memory.  
  
### To fix by using the following possible solutions  
  
1.  Free some disk space.  
  
2.  Increase the size of the swap file.  
  
3.  Increase the size of the Windows swap file.  
  
4.  Reduce the memory BSCMAKE requires by using /Ei or /Es to eliminate some input files or /Em to eliminate macro bodies.