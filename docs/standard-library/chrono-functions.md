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
|[chrono literals](#chrono_literals)|[duration_cast Function](#duration_cast_function)|[time_point_cast Function](#time_point_cast_function)|  
  
##  <a name="chrono_literals"></a>  chrono literals  
 (C++14) The \<chrono> header defines 12 [user-defined literals](../cpp/user-defined-literals-cpp.md) to facilitate using literals that represent hours, minutes, seconds, milliseconds, microseconds, and nanoseconds. Each user-defined literal has an integral and a floating-point overload. The literals are defined in the literals::chrono_literals inline namespace which is brought into scope automatically when std::chrono is in scope.  
  
```  
inline namespace literals {  
    inline namespace chrono_literals {  
 // return integral hours  
    constexpr chrono::hours operator"" h(unsigned long long Val);

 // return floating-point hours  
    constexpr chrono::duration<double, ratio<3600>> operator"" h(long double Val);

 // return integral minutes  
    constexpr chrono::minutes(operator"" min)(unsigned long long Val);

 // return floating-point minutes  
    constexpr chrono::duration<double, ratio<60>>(operator"" min)(long double Val);

 // return integral seconds  
    constexpr chrono::seconds operator"" s(unsigned long long Val);

 // return floating-point seconds  
    constexpr chrono::duration<double> operator"" s(long double Val);

 // return integral milliseconds  
    constexpr chrono::milliseconds operator"" ms(unsigned long long Val);

 // return floating-point milliseconds  
    constexpr chrono::duration<double, milli> operator"" ms(long double Val);

 // return integral microseconds      
    constexpr chrono::microseconds operator"" us(unsigned long long Val);

 // return floating-point microseconds  
    inline constexpr chrono::duration<double, micro> operator"" us(long double Val);

 // return integral nanoseconds  
    inline constexpr chrono::nanoseconds operator"" ns(unsigned long long Val);

 // return floating-point nanoseconds  
    constexpr chrono::duration<double, nano> operator"" ns(long double Val);

 }// inline namespace chrono_literals  
}// inline namespace literals  
```  
  
```  
```  
  
### Remarks  
  
### Example  
  The following examples sow how to use the chrono literals.  
  
```  
constexpr auto day = 24h;  
constexpr auto week = 24h* 7;  
constexpr auto my_duration_unit = 108ms;  
```  
  
##  <a name="duration_cast_function"></a>  duration_cast Function  
 Casts a `duration` object to a specified type.  
  
```  
template \<class To, class Rep, class Period>  
constexpr To duration_cast(const duration\<Rep, Period>& Dur);
```  
  
### Return Value  
 A `duration` object of type `To` that represents the time interval `Dur`, which is truncated if it has to fit into the target type.  
  
### Remarks  
 If `To` is an instantiation of `duration`, this function does not participate in overload resolution.  
  
##  <a name="time_point_cast_function"></a>  time_point_cast Function  
 Casts a [time_point](../standard-library/time-point-class.md) object to a specified type.  
  
```  
template \<class To, class Clock, class Duration>  
time_point\<Clock, To>  
time_point_cast(
    const time_point\<Clock, Duration>& Tp);
```  
  
### Return Value  
 A `time_point` object that has a duration of type `To`.  
  
### Remarks  
 Unless `To` is an instantiation of [duration](../standard-library/duration-class.md), this function does not participate in overload resolution.  
  
## See Also  
 [\<chrono>](../standard-library/chrono.md)

