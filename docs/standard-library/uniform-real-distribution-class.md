---
title: "uniform_real_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::uniform_real_distribution"
  - "std::tr1::uniform_real_distribution"
  - "random/std::tr1::uniform_real_distribution"
  - "uniform_real_distribution"
  - "std.tr1.uniform_real_distribution"
  - "tr1.uniform_real_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uniform_real_distribution class"
ms.assetid: 5cf906fd-0319-4984-b21b-98425cd7532d
caps.latest.revision: 18
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
# uniform_real_distribution Class
Generates a uniform (every value is equally probable) floating-point distribution  within an output range that is inclusive-exclusive.  
  
## Syntax  
```  
class uniform_real_distribution {
public:
    // types 
    typedef RealType result_type;
    struct param_type;
    // constructors and reset functions 
    explicit uniform_real_distribution(RealType a = 0.0, RealType b = 1.0);
    explicit uniform_real_distribution(const param_type& parm);
    void reset();
    // generating functions template <class URNG>  
    result_type operator()(URNG& gen);
    template <class URNG>
    result_type operator()(URNG& gen, const param_type& parm);
    // property functions result_type a() const;
    result_type b() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
};
 ``` 
#### Parameters  
 `RealType`  
 The floating-point result type, defaults to `double`. For possible types, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 The template class describes an inclusive-exclusive distribution that produces values of a user-specified integral floating point type with a distribution so that every value is equally probable. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[uniform_real_distribution::uniform_real_distribution](#uniform_real_distribution__uniform_real_distribution)|`uniform_real_distribution::a`|`uniform_real_distribution::param`|  
|`uniform_real_distribution::operator()`|`uniform_real_distribution::b`|[uniform_real_distribution::param_type](#uniform_real_distribution__param_type)|  
  
 The property member `a()` returns the currently stored minimum bound of the distribution, while `b()` returns the currently stored maximum bound. For this distribution class, these minimum and maximum values are the same as those returned by the common property functions `min()` and `max()` described in the [\<random>](../standard-library/random.md) topic.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double a, const double b, const int s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::uniform_real_distribution<> distr(a,b);  
  
    std::cout << "lower bound == " << distr.a() << std::endl;  
    std::cout << "upper bound == " << distr.b() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<double, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Distribution for " << s << " samples:" << std::endl;  
    int counter = 0;  
    for (const auto& elem : histogram) {  
        std::cout << std::fixed << std::setw(11) << ++counter << ": "   
            << std::setprecision(10) << elem.first << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double a_dist = 1.0;  
    double b_dist = 1.5;  
  
    int samples = 10;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the lower bound of the distribution: ";  
    std::cin >> a_dist;  
    std::cout << "Enter a floating point value for the upper bound of the distribution: ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
  
```  
  
## Output  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.Enter a floating point value for the lower bound of the distribution: .5Enter a floating point value for the upper bound of the distribution: 1Enter an integer value for the sample count: 20lower bound == 0.5upper bound == 1Distribution for 20 samples:          1: 0.5144304741          2: 0.6003997192          3: 0.6060792968          4: 0.6270416650          5: 0.6295091197          6: 0.6437749373          7: 0.6513740058          8: 0.7062379346          9: 0.7117609406         10: 0.7206888566         11: 0.7423223702         12: 0.7826033033         13: 0.8112872958         14: 0.8440467608         15: 0.8461254641         16: 0.8598305065         17: 0.8640874069         18: 0.8770968361         19: 0.9397858282         20: 0.9804645012  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="uniform_real_distribution__uniform_real_distribution"></a>  uniform_real_distribution::uniform_real_distribution  
 Constructs the distribution.  
  
```  
explicit uniform_real_distribution(RealType a = 0.0, RealType b = 1.0);

 
explicit uniform_real_distribution(const param_type& parm);
```  
  
### Parameters  
 `a`  
 The lower bound for random values, inclusive.  
  
 `b`  
 The upper bound for random values, exclusive.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `a < b`  
  
 The first constructor constructs an object whose stored `a` value holds the value `a` and whose stored `b` value holds the value `b`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="uniform_real_distribution__param_type"></a>  uniform_real_distribution::param_type  
 Stores all the parameters of the distribution.  
```cpp  
struct param_type {  
   typedef uniform_real_distribution<RealType> distribution_type;  
   param_type(RealType a = 0.0, RealType b = 1.0);
   RealType a() const;
   RealType b() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
### Parameters  
 See parent topic [uniform_real_distribution Class](../standard-library/uniform-real-distribution-class.md).  
  
### Remarks  
 **Precondition:** `a < b`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)



