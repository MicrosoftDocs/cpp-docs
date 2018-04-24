---
title: "&lt;stdexcept&gt; | Microsoft Docs"
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
  - "std.<stdexcept>"
  - "std::<stdexcept>"
  - "<stdexcept>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stdexcept header"
ms.assetid: 495c10b1-1e60-4514-9f8f-7fda11a2f522
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;stdexcept&gt;
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;stdexcept&gt;](https://docs.microsoft.com/cpp/standard-library/stdexcept).  
  
Defines several standard classes used for reporting exceptions. The classes form a derivation hierarchy all derived from class [exception](../standard-library/exception-class1.md) and include two general types of exceptions: logical errors and run-time errors. The logical errors are caused programmer mistakes. They derive from the base class logic_error and include:  
  
-   `domain_error`  
  
-   `invalid_argument`  
  
-   `length_error`  
  
-   `out_of_range`  
  
 The run-time errors occur because of mistakes in either the library functions or in the run-time system. They derive from the base class runtime_error and include:  
  
-   `overflow_error`  
  
-   `range_error`  
  
-   `underflow_error`  
  
### Classes  
  
|||  
|-|-|  
|[domain_error Class](../standard-library/domain-error-class.md)|The class serves as the base class for all exceptions thrown to report a domain error.|  
|[invalid_argument Class](../standard-library/invalid-argument-class.md)|The class serves as the base class for all exceptions thrown to report an invalid argument.|  
|[length_error Class](../standard-library/length-error-class.md)|The class serves as the base class for all exceptions thrown to report an attempt to generate an object too long to be specified.|  
|[logic_error Class](../standard-library/logic-error-class.md)|The class serves as the base class for all exceptions thrown to report errors presumably detectable before the program executes, such as violations of logical preconditions.|  
|[out_of_range Class](../standard-library/out-of-range-class.md)|The class serves as the base class for all exceptions thrown to report an argument that is out of its valid range.|  
|[overflow_error Class](../standard-library/overflow-error-class.md)|The class serves as the base class for all exceptions thrown to report an arithmetic overflow.|  
|[range_error Class](../standard-library/range-error-class.md)|The class serves as the base class for all exceptions thrown to report a range error.|  
|[runtime_error Class](../standard-library/runtime-error-class.md)|The class serves as the base class for all exceptions thrown to report errors presumably detectable only when the program executes.|  
|[underflow_error Class](../standard-library/underflow-error-class.md)|The class serves as the base class for all exceptions thrown to report an arithmetic underflow.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)





