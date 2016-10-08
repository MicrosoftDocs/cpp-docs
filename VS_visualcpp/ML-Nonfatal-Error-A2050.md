---
title: "ML Nonfatal Error A2050"
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
ms.topic: article
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
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
# ML Nonfatal Error A2050
**real or BCD number not allowed**  
  
 A floating-point (real) number or binary coded decimal (BCD) constant was used other than as a data initializer.  
  
 One of the following occurred:  
  
-   A real number or a BCD was used in an expression.  
  
-   A real number was used to initialize a directive other than [DWORD](../VS_visualcpp/DWORD.md), [QWORD](../VS_visualcpp/QWORD.md), or [TBYTE](../VS_visualcpp/TBYTE.md).  
  
-   A BCD was used to initialize a directive other than `TBYTE`.  
  
## See Also  
 [ML Error Messages](../VS_visualcpp/ML-Error-Messages.md)