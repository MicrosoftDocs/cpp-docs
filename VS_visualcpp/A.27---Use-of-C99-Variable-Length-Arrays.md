---
title: "A.27   Use of C99 Variable Length Arrays"
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
ms.assetid: 8e542701-39f9-4f28-ab3a-840e8e669723
caps.latest.revision: 8
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
# A.27   Use of C99 Variable Length Arrays
The following example demonstrates how to use C99 Variable Length Arrays (VLAs) in a `firstprivate` directive ([Section 2.7.2.2](../VS_visualcpp/2.7.2.2-firstprivate.md) on page 26).  
  
> [!NOTE]
>  Variable length arrays are not currently supported in Visual C++.  
  
```  
void f(int m, int C[m][m])  
{  
    double v1[m];  
    ...  
    #pragma omp parallel firstprivate(C, v1)  
    ...  
}  
```