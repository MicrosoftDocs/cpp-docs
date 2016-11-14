---
title: "&lt;chrono&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: d6800e15-77a1-4df3-900e-d8b2fee190c7
caps.latest.revision: 10
manager: "ghogen"
---
# &lt;chrono&gt; functions
||||  
|-|-|-|  
|[duration_cast Function](#duration_cast_function)|[time_point_cast Function](#time_point_cast_function)|  
  

##  <a name="duration_cast_function"></a>  duration_cast Function  
 Casts a `duration` object to a specified type.  
  
```  
template <class To, class Rep, class Period>  
constexpr To duration_cast(const duration<Rep, Period>& Dur);
```  
  
### Return Value  
 A `duration` object of type `To` that represents the time interval `Dur`, which is truncated if it has to fit into the target type.  
  
### Remarks  
 If `To` is an instantiation of `duration`, this function does not participate in overload resolution.  
  
##  <a name="time_point_cast_function"></a>  time_point_cast Function  
 Casts a [time_point](../standard-library/time-point-class.md) object to a specified type.  
  
```  
template <class To, class Clock, class Duration>  
time_point<Clock, To> time_point_cast(const time_point<Clock, Duration>& Tp);
```  
  
### Return Value  
 A `time_point` object that has a duration of type `To`.  
  
### Remarks  
 Unless `To` is an instantiation of [duration](../standard-library/duration-class.md), this function does not participate in overload resolution.  
  
## See Also  
 [\<chrono>](../standard-library/chrono.md)

