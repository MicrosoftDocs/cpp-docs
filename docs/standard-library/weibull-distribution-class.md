---
title: "weibull_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.weibull_distribution"
  - "weibull_distribution"
  - "tr1::weibull_distribution"
  - "std::tr1::weibull_distribution"
  - "tr1.weibull_distribution"
  - "random/std::tr1::weibull_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "weibull_distribution class"
ms.assetid: f20b49d3-1b9a-41af-8db4-baf800eaa02b
caps.latest.revision: 15
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
# weibull_distribution Class
Generates a Weibull distribution.  
  
## Syntax  
```  
class weibull_distribution  
   {  
   public: 
    // types  
   typedef RealType result_type;  
   struct param_type; 
    // constructor and reset functions  
   explicit weibull_distribution(RealType a = 1.0, RealType b = 1.0);
   explicit weibull_distribution(const param_type& parm);
   void reset();

   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   
   // property functions  
   RealType a() const;
   RealType b() const;
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
 The template class describes a distribution that produces values of a user-specified integral type, or type `double` if none is provided, distributed according to the Weibull Distribution. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[weibull_distribution::weibull_distribution](#weibull_distribution__weibull_distribution)|`weibull_distribution::a`|`weibull_distribution::param`|  
|`weibull_distribution::operator()`|`weibull_distribution::b`|[weibull_distribution::param_type](#weibull_distribution__param_type)|  
  
 The property functions `a()` and `b()` return their respective values for stored distribution parameters `a` and `b`.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the Weibull distribution, see the Wolfram MathWorld article [Weibull Distribution](http://go.microsoft.com/fwlink/LinkId=401115).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double a, const double b, const int s) {  
  
    // uncomment to use a non-deterministic generator  
    //    std::random_device gen;  
    std::mt19937 gen(1701);  
  
    std::weibull_distribution<> distr(a, b);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "a() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.a() << std::endl;  
    std::cout << "b() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.b() << std::endl;  
  
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
            << std::setw(14) << std::setprecision(10) << elem.first << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double a_dist = 0.0;  
    double b_dist = 1;  
  
    int samples = 10;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the 'a' distribution parameter (must be greater than zero): ";  
    std::cin >> a_dist;  
    std::cout << "Enter a floating point value for the 'b' distribution parameter (must be greater than zero): ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
  
```  
  
## Output  
 First run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'a' distribution parameter (must be greater than zero): 1  
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
 
min() == 0  
max() == 1.79769e+308  
a() == 1.0000000000  
b() == 1.0000000000  
Distribution for 10 samples:  
    1: 0.0936880533  
    2: 0.1225944894  
    3: 0.6443593183  
    4: 0.6551171649  
    5: 0.7313457551  
    6: 0.7313557977  
    7: 0.7590097389  
    8: 1.4466885214  
    9: 1.6434088411  
    10: 2.1201210996  
```  
  
 Second run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'a' distribution parameter (must be greater than zero): .5  
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 5.5  
Enter an integer value for the sample count: 10  
 
min() == 0  
max() == 1.79769e+308  
a() == 0.5000000000  
b() == 5.5000000000  
Distribution for 10 samples:  
    1: 0.0482759823  
    2: 0.0826617486  
    3: 2.2835941207  
    4: 2.3604817485  
    5: 2.9417663742  
    6: 2.9418471657  
    7: 3.1685268104  
    8: 11.5109922290  
    9: 14.8543594043  
    10: 24.7220241239  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="weibull_distribution__weibull_distribution"></a>  weibull_distribution::weibull_distribution  
  
```  
explicit weibull_distribution(RealType a = 1.0, RealType b = 1.0);

 
explicit weibull_distribution(const param_type& parm);
```  
  
### Parameters  
 `a`  
 The `a` distribution parameter.  
  
 `b`  
 The `b` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 < a` and `0.0 < b`  
  
 The first constructor constructs an object whose stored `a`value holds the value `a` and whose stored `b` value holds the value `b`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="weibull_distribution__param_type"></a>  weibull_distribution::param_type  
 Stores the parameters of the distribution.  
```cpp  
struct param_type {  
   typedef weibull_distribution<RealType> distribution_type;  
   param_type(RealType a = 1.0, RealType b = 1.0);
   RealType a() const;
   RealType b() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```
### Parameters  
 See parent topic [weibull_distribution Class](../standard-library/weibull-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 < a` and `0.0 < b`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)



