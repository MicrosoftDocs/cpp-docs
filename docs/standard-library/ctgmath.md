---
title: "&lt;ctgmath&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# &lt;ctgmath&gt;
In effect, includes the C++ Standard Library headers \<ccomplex> and \<cmath>, which provide type-generic math macros equivalent to \<tgmath.h>.  
  
## Syntax  
  
```  
#include <ctgmath>  
  
```  
  
## Remarks  
 The functionality of the Standard C library header \<tgmath.h> is provided by overloads in \<ccomplex> and \<cmath>.  
  
 Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.  
  
## See Also  
 [\<ccomplex>](../standard-library/ccomplex.md)   
 [\<cmath>](../standard-library/cmath.md)   
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



