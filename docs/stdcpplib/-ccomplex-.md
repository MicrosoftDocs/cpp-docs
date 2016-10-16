---
title: "&lt;ccomplex&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "<ccomplex>"
dev_langs: 
  - "C++"
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
caps.latest.revision: 14
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# &lt;ccomplex&gt;
Includes the STL header [\<complex>](../stdcpplib/-complex-.md), which effectively includes the Standard C library header \<complex.h> and adds the associated names to the `std` namespace.  
  
## Syntax  
  
```cpp  
#include <ccomplex>  
  
```  
  
## Remarks  
 Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.  
  
 The name `clog`, which is declared in \<complex.h>, is not defined in the `std` namespace because of potential conflicts with the `clog` that is declared in [\<iostream>](../stdcpplib/-iostream-.md).  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [STL Overview](../stdcpplib/c---standard-library-overview.md)

