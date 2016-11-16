---
title: "common_type Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::common_type"
dev_langs: 
  - "C++"
ms.assetid: 2b42722c-c3dc-4d62-8613-0271e52b6f00
caps.latest.revision: 13
author: "corob-msft"
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
# common_type Structure
Describes specializations of template class [common_type](../standard-library/common-type-class.md) for instantiations of [duration](../standard-library/duration-class.md) and [time_point](../standard-library/time-point-class.md).  
  
## Syntax  
  
```  
template <class Rep1, class Period1,  
    class Rep2, class Period2>  
struct common_type  
<chrono::duration<Rep1, Period1>,   
chrono::duration<Rep2, Period2>>;  
 
template <class Clock,  
    class Duration1, class Duration2>  
struct common_type  
<chrono::time_point<Clock, Duration1>,  
chrono::time_point<Clock, Duration2>>;  
```  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)

