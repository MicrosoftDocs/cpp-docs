---
title: "&lt;ctgmath&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;ctgmath&gt;
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;ctgmath&gt;](https://docs.microsoft.com/cpp/standard-library/ctgmath).  
  
In effect, includes the Standard C++ library headers \<ccomplex> and \<cmath>, which provide type-generic math macros equivalent to \<tgmath.h>.  
  
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
 [STL Overview](../standard-library/cpp-standard-library-overview.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







