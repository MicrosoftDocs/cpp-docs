---
title: "steady_clock struct"
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
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
caps.latest.revision: 13
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
# steady_clock struct
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
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [<chrono\>](../VS_visualcpp/-chrono-.md)   
 [system_clock Structure](../VS_visualcpp/system_clock-Structure.md)