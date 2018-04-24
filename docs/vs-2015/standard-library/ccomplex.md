---
title: "&lt;ccomplex&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<ccomplex>"
dev_langs: 
  - "C++"
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;ccomplex&gt;
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;ccomplex&gt;](https://docs.microsoft.com/cpp/standard-library/ccomplex).  
  
Includes the STL header [\<complex>](../standard-library/complex.md), which effectively includes the Standard C library header \<complex.h> and adds the associated names to the `std` namespace.  
  
## Syntax  
  
```cpp  
#include <ccomplex>  
  
```  
  
## Remarks  
 Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.  
  
 The name `clog`, which is declared in \<complex.h>, is not defined in the `std` namespace because of potential conflicts with the `clog` that is declared in [\<iostream>](../standard-library/iostream.md).  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [STL Overview](../standard-library/cpp-standard-library-overview.md)







