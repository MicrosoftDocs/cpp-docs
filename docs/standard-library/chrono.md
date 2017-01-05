---
title: "&lt;chrono&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::nanoseconds"
  - "chrono/std::chrono::minutes"
  - "chrono/std::chrono::seconds"
  - "<chrono>"
  - "chrono/std::chrono::hours"
  - "chrono/std::chrono::milliseconds"
  - "chrono/std::chrono::microseconds"
dev_langs: 
  - "C++"
ms.assetid: 844de749-f306-482e-89bc-6f53c99c8324
caps.latest.revision: 17
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
# &lt;chrono&gt;
Include the standard header \<chrono> to define classes and functions that represent and manipulate time durations and time instants.  
  
 **(Visual Studio 2015:)** The implementation of `steady_clock` has changed to meet the C++ Standard requirements for steadiness and monotonicity. `steady_clock` is now based on QueryPerformanceCounter() and `high_resolution_clock` is now a typedef for `steady_clock`. As a result, in Visual C++ `steady_clock::time_point` is now a typedef for `chrono::time_point<steady_clock>`; however, this is not necessarily the case for other implementations.  
  
## Syntax  
  
```cpp  
#include <chrono>  
```  

### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[duration Class](../standard-library/duration-class.md)|Describes a type that holds a time interval.|  
|[time_point Class](../standard-library/time-point-class.md)|Describes a type that represents a point in time.|  
  
### Structs  
  
|Name|Description|  
|----------|-----------------|  
|[common_type Structure](../standard-library/common-type-structure.md)|Describes specializations of template class [common_type](../standard-library/common-type-class.md) for instantiations of `duration` and `time_point`.|  
|[duration_values Structure](../standard-library/duration-values-structure.md)|Provides specific values for the `duration` template parameter `Rep`.|  
|[steady_clock struct](../standard-library/steady-clock-struct.md)|Represents a `steady` clock.|  
|[system_clock Structure](../standard-library/system-clock-structure.md)|Represents a *clock type* that is based on the real-time clock of the system.|  
|[treat_as_floating_point Structure](../standard-library/treat-as-floating-point-structure.md)|Specifies whether a type can be treated as a floating-point type.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[duration_cast Function](../standard-library/chrono-functions.md#duration_cast_function)|Casts a `duration` object to a specified type.|  
|[time_point_cast Function](../standard-library/chrono-functions.md#time_point_cast_function)|Casts a `time_point` object to a specified type.|  
  
### Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator-](../standard-library/chrono-operators.md#operator-)|Operator for subtraction or negation of `duration` and `time_point` objects.|  
|[operator!=](../standard-library/chrono-operators.md#operator_neq)|Inequality operator that is used with `duration` or `time_point` objects.|  
|[operator modulo](../standard-library/chrono-operators.md#operator_modulo)|Operator for modulo operations on `duration` objects.|  
|[operator*](../standard-library/chrono-operators.md#operator_star)|Multiplication operator for `duration` objects.|  
|[operator/](../standard-library/chrono-operators.md#operator_)|Division operator for `duration` objects.|  
|[operator+](../standard-library/chrono-operators.md#operator_add)|Adds `duration` and `time_point` objects.|  
|[operator&lt;](../standard-library/chrono-operators.md#operator_lt_)|Determines whether one `duration` or `time_point` object is less than another `duration` or `time_point` object.|  
|[operator&lt;=](../standard-library/chrono-operators.md#operator_lt__eq)|Determines whether one `duration` or `time_point` object is less than or equal to another `duration` or `time_point` object.|  
|[operator==](../standard-library/chrono-operators.md#operator_eq_eq)|Determines whether two `duration` objects represent time intervals that have the same length, or whether two `time_point` objects represent the same point in time.|  
|[operator&gt;](../standard-library/chrono-operators.md#operator_gt_)|Determines whether one `duration` or `time_point` object is greater than another `duration` or `time_point` object.|  
|[operator&gt;=](../standard-library/chrono-operators.md#operator_gt__eq)|Determines whether one `duration` or `time_point` object is greater than or equal to another `duration` or `time_point` object.|  
  
### Predefined Duration Types  
 For more information about ratio types that are used in the following typedefs, see [\<ratio>](../standard-library/ratio.md).  
  
|Typedef|Description|  
|-------------|-----------------|  
|`typedef duration<long long, nano> nanoseconds;`|Synonym for a `duration` type that has a tick period of one nanosecond.|  
|`typedef duration<long long, micro> microseconds;`|Synonym for a `duration` type that has a tick period of one microsecond.|  
|`typedef duration<long long, milli> milliseconds;`|Synonym for a `duration` type that has a tick period of one millisecond.|  
|`typedef duration<long long> seconds;`|Synonym for a `duration` type that has a tick period of one second.|  
|`typedef duration<int, ratio<60> > minutes;`|Synonym for a `duration` type that has a tick period of one minute.|  
|`typedef duration<int, ratio<3600> > hours;`|Synonym for a `duration` type that has a tick period of one hour.|  
  
### Literals  
 **(C++11)**The \<chrono> header defines the following [user-defined literals](../cpp/user-defined-literals-cpp.md) that you can use for greater convenience, type-safety and maintainability of your code. These literals are defined in the `literals::chrono_literals` inline namespace and are in scope when std::chrono is in scope.  
  
|Literal|Description|  
|-------------|-----------------|  
|chrono::hours operator "" h(unsigned long long Val)|Specifies hours as an integral value.|  
|chrono::duration<double, ratio\<3600> > operator "" h(long double Val)|Specifies hours as a floating-point value.|  
|chrono::minutes (operator "" min)(unsigned long long Val)|Specifies minutes as an integral value.|  
|chrono::duration<double, ratio\<60> > (operator "" min)( long double Val)|Specifies minutes as a floating-point value.|  
|chrono::seconds operator "" s(unsigned long long Val)|Specifies minutes as an integral value.|  
|chrono::duration\<double> operator "" s(long double Val)|Specifies seconds as a floating-point value.|  
|chrono::milliseconds operator "" ms(unsigned long long Val)|Specifies milliseconds as an integral value.|  
|chrono::duration\<double, milli> operator "" ms(long double Val)|Specifies milliseconds as a floating-point value.|  
|chrono::microseconds operator "" us(unsigned long long Val)|Specifies microseconds as an integral value.|  
|chrono::duration\<double, micro> operator "" us(long double Val)|Specifies microseconds as a floating-point value.|  
|chrono::nanoseconds operator "" ns(unsigned long long Val)|Specifies nanoseconds as an integral value.|  
|chrono::duration\<double, nano> operator "" ns(long double Val)|Specifies nanoseconds as a floating-point value.|  
|||  
  
The following examples show how to use the chrono literals.  
  
```  
constexpr auto day = 24h;  
constexpr auto week = 24h* 7;  
constexpr auto my_duration_unit = 108ms;  
```  
## Remarks  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)



