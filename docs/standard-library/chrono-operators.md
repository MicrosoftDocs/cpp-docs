---
title: "&lt;chrono&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: c5a19267-4684-40c1-b7a9-cc1012b058f3
caps.latest.revision: 8
manager: "ghogen"
---
# &lt;chrono&gt; operators
||||  
|-|-|-|  
|[operator modulo](#operator_modulo)|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|  
|[operator&gt;=](#operator_gt__eq)|[operator&lt;](#operator_lt_)|[operator&lt;=](#operator_lt__eq)|  
|[operator*](#operator_star)|[operator+](#operator_add)|[operator-](#operator-)|  
|[operator/](#operator_)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator-"></a>  operator-  
 Operator for subtraction or negation of [duration](../standard-library/duration-class.md) and [time_point](../standard-library/time-point-class.md) objects.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type 
   operator-(
       const duration<Rep1, Period1>& Left, 
       cconst duration<Rep2, Period2>& Right);
 
template <class Clock, class Duration1, class Rep2, class Period2>  
constexpr time_point<Clock, typename common_type<Duration1, duration<Rep2, Period2>>::type  
   operator-(
       const time_point<Clock, Duration1>& Time, 
       const duration<Rep2, Period2>& Dur);

 
template <class Clock, class Duration1, class Duration2>  
constexpr typename common_type<Duration1, Duration2>::type 
   operator-(
       const time_point<Clock, Duration1>& Left, 
       const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
 `Time`  
 A `time_point` object.  
  
 `Dur`  
 A `duration` object.  
  
### Return Value  
 The first function returns a `duration` object whose interval length is the difference between the time intervals of the two arguments.  
  
 The second function returns a `time_point` object that represents a point in time that is displaced, by the negation of the time interval that is represented by `Dur`, from the point in time that is specified by `Time`.  
  
 The third function returns a `duration` object that represents the time interval between `Left` and `Right`.  
  
##  <a name="operator_neq"></a>  operator!=  
 Inequality operator for [duration](../standard-library/duration-class.md) or [time_point](../standard-library/time-point-class.md) objects.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr bool operator!=(
    const duration<Rep1, Period1>& Left,  
    const duration<Rep2, Period2>& Right);

 
template <class Clock, class Duration1, class Duration2>  
constexpr bool operator!=(
    const time_point<Clock, Duration1>& Left,  
    const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
### Return Value  
 Each function returns `!(Left == Right)`.  
  
##  <a name="operator_star"></a>  operator*  
 Multiplication operator for [duration](../standard-library/chrono-operators.md#operator_star) objects.  
  
```  
template <class Rep1, class Period1, class Rep2>  
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1> 
   operator*(
      const duration<Rep1, Period1>& Dur, 
      const Rep2& Mult);

 
template <class Rep1, class Rep2, class Period2>  
constexpr duration<typename common_type<Rep1, Rep2>::type, Period2> 
   operator*(
       const Rep1& Mult,
       const duration<Rep2, 
       Period2>& Dur);
```  
  
### Parameters  
 `Dur`  
 A `duration` object.  
  
 `Mult`  
 An integral value.  
  
### Return Value  
 Each function returns a `duration` object whose interval length is `Mult` multiplied by the length of `Dur`.  
  
 Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds true*, the first function does not participate in overload resolution. For more information, sssee [<type_traits>](../standard-library/type-traits.md).  
  
 Unless `is_convertible<Rep1, common_type<Rep1, Rep2>>`*holds true*, the second function does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).  
  
##  <a name="operator_"></a>  operator/  
 Division operator for [duration](../standard-library/chrono-operators.md#operator_star) objects.  
  
```  
template <class Rep1, class Period1, class Rep2>  
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1> 
   operator/(
     const duration<Rep1, Period1>& Dur,  
     const Rep2& Div);

 
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr typename common_type<Rep1, Rep2>::type 
   operator/(
     const duration<Rep1, Period1>& Left,  
     const duration<Rep2, Period2>& Right);
```  
  
### Parameters  
 `Dur`  
 A `duration` object.  
  
 `Div`  
 An integral value.  
  
 `Left`  
 The left `duration` object.  
  
 `Right`  
 The right `duration` object.  
  
### Return Value  
 The first operator returns a duration object whose interval length is the length of `Dur` divided by the value `Div`.  
  
 The second operator returns the ratio of the interval lengths of `Left` and `Right`.  
  
 Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds true*, and `Rep2` is not an instantiation of `duration`, the first operator does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).  
  
##  <a name="operator_add"></a>  operator+  
 Adds [duration](../standard-library/duration-class.md) and [time_point](../standard-library/time-point-class.md) objects.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type 
   operator+(
      const duration<Rep1, Period1>& Left,  
      const duration<Rep2, Period2>& Right);

 
template <class Clock, class Duration1, class Rep2, class Period2>  
constexpr time_point<Clock, typename common_type<Duration1, duration<Rep2, Period2>>::type>
   operator+(
      const time_point<Clock, Duration1>& Time,  
      const duration<Rep2, Period2>& Dur);

 
template <class Rep1, class Period1, class Clock, class Duration2>  
time_point<Clock, constexpr typename common_type<duration<Rep1, Period1>, Duration2>::type>
   operator+(
      const duration<Rep1, Period1>& Dur,  
      const time_point<Clock, Duration2>& Time);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
 `Time`  
 A `time_point` object.  
  
 `Dur`  
 A `duration` object.  
  
### Return Value  
 The first function returns a `duration` object that has a time interval that is equal to the sum of the intervals of `Left` and `Right`.  
  
 The second and third functions return a `time_point` object that represents a point in time that is displaced, by the interval `Dur`, from the point in time `Time`.  
  
##  <a name="operator_lt_"></a>  operator&lt;  
 Determines whether one [duration](../standard-library/duration-class.md) or [time_point](../standard-library/time-point-class.md) object is less than another `duration` or `time_point` object.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr bool operator<(
    const duration<Rep1, Period1>& Left,  
    const duration<Rep2, Period2>& Right);

 
template <class Clock, class Duration1, class Duration2>  
constexpr bool operator<(
    const time_point<Clock, Duration1>& Left,  
    const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
### Return Value  
 The first function returns `true` if the interval length of `Left` is less than the interval length of `Right`. Otherwise, the function returns `false`.  
  
 The second function returns `true` if `Left` precedes `Right`. Otherwise, the function returns `false`.  
  
##  <a name="operator_lt__eq"></a>  operator&lt;=  
 Determines whether one [duration](../standard-library/duration-class.md) or [time_point](../standard-library/time-point-class.md) object is less than or equal to another `duration` or `time_point` object.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr bool operator<=(
    const duration<Rep1, Period1>& Left,  
    const duration<Rep2, Period2>& Right);
 
template <class Clock, class Duration1, class Duration2>  
constexpr bool operator<=(
    const time_point<Clock, Duration1>& Left,  
    const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
### Return Value  
 Each function returns `!(Right < Left)`.  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Determines whether two `duration` objects represent time intervals that have the same length, or whether two `time_point` objects represent the same point in time.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr bool operator==(
    const duration<Rep1, Period1>& Left,  
    const duration<Rep2, Period2>& Right);
 
template <class Clock, class Duration1, class Duration2>  
constexpr bool operator==(
    const time_point<Clock, Duration1>& Left,  
    const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
### Return Value  
 The first function returns `true` if `Left` and `Right` represent time intervals that have the same length. Otherwise, the function returns `false`.  
  
 The second function returns `true` if `Left` and `Right` represent the same point in time. Otherwise, the function returns `false`.  
  
##  <a name="operator_gt_"></a>  operator&gt;  
 Determines whether one [duration](../standard-library/duration-class.md) or [time_point](../standard-library/time-point-class.md) object is greater than another `duration` or `time_point` object.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr bool operator>(
    const duration<Rep1, Period1>& Left,  
    const duration<Rep2, Period2>& Right);
 
template <class Clock, class Duration1, class Duration2>  
constexpr bool operator>(
    const time_point<Clock, Duration1>& Left,  
    const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
### Return Value  
 Each function returns `Right < Left`.  
  
##  <a name="operator_gt__eq"></a>  operator&gt;=  
 Determines whether one [duration](../standard-library/duration-class.md) or [time_point](../standard-library/time-point-class.md) object is greater than or equal to another `duration` or `time_point` object.  
  
```  
template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr bool operator>=(
    const duration<Rep1, Period1>& Left,  
    const duration<Rep2, Period2>& Right);
 
template <class Clock, class Duration1, class Duration2>  
constexpr bool operator>=(
    const time_point<Clock, Duration1>& Left,  
    const time_point<Clock, Duration2>& Right);
```  
  
### Parameters  
 `Left`  
 The left `duration` or `time_point` object.  
  
 `Right`  
 The right `duration` or `time_point` object.  
  
### Return Value  
 Each function returns `!(Left < Right)`.  
  
##  <a name="operator_modulo"></a>  operator modulo  
 Operator for modulo operations on [duration](../standard-library/duration-class.md) objects.  
  
```  
template <class Rep1, class Period1, class Rep2>  
constexpr duration<Rep1, Period1, Rep2>::type 
   operator%(
      const duration<Rep1, Period1>& Dur,  
      const Rep2& Div);

template <class Rep1, class Period1, class Rep2, class Period2>  
constexpr typename common_type<duration<Rep1, _Period1>, duration<Rep2, Period2>>::type
   operator%(
     const duration<Rep1, Period1>& Left,  
     const duration<Rep2, Period2>& Right);
```  
  
### Parameters  
 `Dur`  
 A `duration` object.  
  
 `Div`  
 An integral value.  
  
 `Left`  
 The left `duration` object.  
  
 `Right`  
 The right `duration` object.  
  
### Return Value  
 The first function returns a `duration` object whose interval length is `Dur` modulo `Div`.  
  
 The second function returns a value that represents `Left` modulo `Right`.  
  
## See Also  
 [\<chrono>](../standard-library/chrono.md)

