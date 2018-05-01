---
title: "steady_clock struct | Microsoft Docs"
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
  - "chrono/std::chrono::steady_clock"
dev_langs: 
  - "C++"
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# steady_clock struct
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [steady_clock struct](https://docs.microsoft.com/cpp/standard-library/steady-clock-struct).  
  
Represents a `steady` clock.  
  
## Syntax  
  
```  
struct steady_clock;  
```  
  
## Remarks  
 On Windows, steady_clock wraps the QueryPerformanceCounter function.  
  
 A clock is *monotonic* if the value that is returned by a first call to `now()` is always less than or equal to the value that is returned by a subsequent call to `now()`.  
  
 A clock is *steady* if it is *monotonic* and if the time between clock ticks is constant.  
  
 High_resolution_clock is a typdef for steady_clock.  
  
## Public functions  
  
|Function|Description|  
|--------------|-----------------|  
|now|Returns the current time as a time_point value.|  
  
## Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|`system_clock::is_steady`|Holds `true`. A `steady_clock` is *steady*.|  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std::chrono  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)   
 [system_clock Structure](../standard-library/system-clock-structure.md)




