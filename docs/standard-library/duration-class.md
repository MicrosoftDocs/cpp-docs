---
title: "duration Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::duration"
dev_langs: 
  - "C++"
ms.assetid: 06b863b3-65be-4ded-a72e-6e1eb1531077
caps.latest.revision: 10
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
# duration Class
Describes a type that holds a *time interval*, which is an elapsed time between two time points.  
  
## Syntax  
  
```  
template <class Rep, class Period = ratio<1>>  
class duration;  
template <class Rep, class Period>  
class duration;  
template <class Rep, class Period1, class Period2>  
class duration <duration<Rep, Period1>, Period2>;  
```  
  
## Remarks  
 The template argument `Rep` describes the type that is used to hold the number of clock ticks in the interval. The template argument `Period` is an instantiation of [ratio](../standard-library/ratio.md) that describes the size of the interval that each tick represents.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|duration::period Typedef|Represents a synonym for the template parameter `Period`.|  
|duration::rep Typedef|Represents a synonym for the template parameter `Rep`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[duration::duration Constructor](#duration__duration_constructor)|Constructs a `duration` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[duration::count](#duration__count_method)|Returns the number of clock ticks in the time interval.|  
|[duration::max](#duration__max_method)|Static. Returns the maximum allowable value of template parameter `Ref`.|  
|[duration::min](#duration__min_method)|Static. Returns the lowest allowable value of template parameter `Ref`.|  
|[duration::zero](#duration__zero_method)|Static. In effect, returns `Rep`(0).|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[duration::operator-](#duration__operator-)|Returns a copy of the `duration` object together with a negated tick count.|  
|[duration::operator--](#duration__operator--)|Decrements the stored tick count.|  
|[duration::operator=](#duration__operator_eq)|Reduces the stored tick count modulo a specified value.|  
|[duration::operator*=](#duration__operator_star_eq)|Multiplies the stored tick count by a specified value.|  
|[duration::operator/=](#duration__operator__eq)|Divides the stored tick count by the tick count of a specified `duration` object.|  
|[duration::operator+](#duration__operator_add)|Returns `*this`.|  
|[duration::operator++](#duration__operator_add_add)|Increments the stored tick count.|  
|[duration::operator+=](#duration__operator_add_eq)|Adds the tick count of a specified `duration` object to the stored tick count.|  
|[duration::operator-=](#duration__operator-_eq)|Subtracts the tick count of a specified `duration` object from the stored tick count.|  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std::chrono  
  
##  <a name="duration__count_method"></a>  duration::count  
 Retrieves the number of clock ticks in the time interval.  
  
```  
constexpr Rep count() const;
```  
  
### Return Value  
 The number of clock ticks in the time interval.  
  
##  <a name="duration__duration_constructor"></a>  duration::duration Constructor  
 Constructs a `duration` object.  
  
```  
constexpr duration() = default;  
 
template <class Rep2>  
constexpr explicit duration(const Rep2& R);

 
template <class Rep2, class Period2>  
constexpr duration(const duration<Rep2, Period2>& Dur);
```  
  
### Parameters  
 `Rep2`  
 An arithmetic type to represent the number of ticks.  
  
 `Period2`  
 A `std::ratio` template specialization to represent the tick period in units of seconds.  
  
 `R`  
 The number of ticks of default period.  
  
 `Dur`  
 The number of ticks of period specified by `Period2`.  
  
### Remarks  
 The default constructor constructs an object that is uninitialized. Value initialization by using empty braces initializes an object that represents a time interval of zero clock ticks.  
  
 The second, one template argument constructor constructs an object that represents a time interval of `R` clock ticks using a default period of `std::ratio<1>`. To avoid round-off of tick counts, it is an error to construct a duration object from a representation type `Rep2` that can be treated as a floating-point type when `duration::rep` cannot be treated as a floating-point type.  
  
 The third, two template argument constructor constructs an object that represents a time interval whose length is the time interval that is specified by `Dur`. To avoid truncation of tick counts, it is an error to construct a duration object from another duration object whose type is *incommensurable* with the target type.  
  
 A duration type `D1` is *incommensurable* with another duration type `D2` if `D2` cannot be treated as a floating-point type and [ratio_divide\<D1::period, D2::period>::type::den](../standard-library/ratio.md) is not 1.  
  
 Unless `Rep2` is implicitly convertible to `rep` and either `treat_as_floating_point<rep>`*holds true* or `treat_as_floating_point<Rep2>`*holds false*, the second constructor does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).  
  
 Unless no overflow is induced in the conversion and `treat_as_floating_point<rep>`*holds true*,  or both `ratio_divide<Period2, period>::den` equals 1 and `treat_as_floating_point<Rep2>`*holds false*, the third constructor does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).  
  
##  <a name="duration__max_method"></a>  duration::max  
 Static method that returns the upper bound for values of template parameter type `Ref`.  
  
```  
static constexpr duration max();
```  
  
### Return Value  
 In effect, returns `duration(duration_values<rep>::max())`.  
  
##  <a name="duration__min_method"></a>  duration::min  
 Static method that returns the lower bound for values of template parameter type `Ref`.  
  
```  
static constexpr duration min();
```  
  
### Return Value  
 In effect, returns `duration(duration_values<rep>::min())`.  
  
##  <a name="duration__operator-"></a>  duration::operator-  
 Returns a copy of the `duration` object together with a negated tick count.  
  
```  
constexpr duration operator-() const;
```  
  
##  <a name="duration__operator--"></a>  duration::operator--  
 Decrements the stored tick count.  
  
```  
duration& operator--();

duration operator--(int);
```  
  
### Return Value  
 The first method returns `*this`.  
  
 The second method returns a copy of `*this` that is made before the decrement.  
  
##  <a name="duration__operator_eq"></a>  duration::operator=  
 Reduces the stored tick count modulo a specified value.  
  
```  
duration& operator%=(const rep& Div);

duration& operator%=(const duration& Div);
```  
  
### Parameters  
 `Div`  
 For the first method, `Div` represents a tick count. For the second method, `Div` is a `duration` object that contains a tick count.  
  
### Return Value  
 The `duration` object after the modulo operation is performed.  
  
##  <a name="duration__operator_star_eq"></a>  duration::operator*=  
 Multiplies the stored tick count by a specified value.  
  
```  
duration& operator*=(const rep& Mult);
```  
  
### Parameters  
 `Mult`  
 A value of the type that is specified by `duration::rep`.  
  
### Return Value  
 The `duration` object after the multiplication is performed.  
  
##  <a name="duration__operator__eq"></a>  duration::operator/=  
 Divides the stored tick count by a specified value.  
  
```  
duration& operator/=(const rep& Div);
```  
  
### Parameters  
 `Div`  
 A value of the type that is specified by `duration::rep`.  
  
### Return Value  
 The `duration` object after the division is performed.  
  
##  <a name="duration__operator_add"></a>  duration::operator+  
 Returns `*this`.  
  
```  
constexpr duration operator+() const;
```  
  
##  <a name="duration__operator_add_add"></a>  duration::operator++  
 Increments the stored tick count.  
  
```  
duration& operator++();

duration operator++(int);
```  
  
### Return Value  
 The first method returns `*this`.  
  
 The second method returns a copy of `*this` that is made before the increment.  
  
##  <a name="duration__operator_add_eq"></a>  duration::operator+=  
 Adds the tick count of a specified `duration` object to the stored tick count.  
  
```  
duration& operator+=(const duration& Dur);
```  
  
### Parameters  
 `Dur`  
 A `duration` object.  
  
### Return Value  
 The `duration` object after the addition is performed.  
  
##  <a name="duration__operator-_eq"></a>  duration::operator-=  
 Subtracts the tick count of a specified `duration` object from the stored tick count.  
  
```  
duration& operator-=(const duration& Dur);
```  
  
### Parameters  
 `Dur`  
 A `duration` object.  
  
### Return Value  
 The `duration` object after the subtraction is performed.  
  
##  <a name="duration__zero_method"></a>  duration::zero  
 Returns `duration(duration_values<rep>::zero())`.  
  
```  
static constexpr duration zero();
```  
  
##  <a name="duration__operator_mod_eq"></a>  duration::operator mod=  
 Reduces the stored tick count modulo Div or Div.count().  
  
```  
duration& operator%=(const rep& Div);duration& operator%=(const duration& Div);
```  
  
### Parameters  
 `Div`  
 The divisor, which is either a duration object or a value that represents tick counts.  
  
### Remarks  
 The first member function reduces the stored tick count modulo Div and returns *this. The second member function reduces the stored tick count modulo Div.count() and returns \*this.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)   
 [duration_values Structure](../standard-library/duration-values-structure.md)
