---
title: "geometric_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.geometric_distribution"
  - "random/std::tr1::geometric_distribution"
  - "tr1::geometric_distribution"
  - "tr1.geometric_distribution"
  - "geometric_distribution"
  - "std::tr1::geometric_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "geometric_distribution class"
  - "geometric_distribution class [TR1]"
ms.assetid: 38f933af-3b49-492e-9d26-b6b272a60013
caps.latest.revision: 24
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
# geometric_distribution Class
Generates a geometric distribution.  
  
## Syntax  
```  
class geometric_distribution {
public:    
    // types 
    typedef IntType result_type; 
    struct param_type;   
    // constructors and reset functions 
    explicit geometric_distribution(double p = 0.5);
    explicit geometric_distribution(const param_type& parm);
    void reset();
    // generating functions template <class URNG>  
    result_type operator()(URNG& gen);
    template <class URNG>
    result_type operator()(URNG& gen, const param_type& parm);
    // property functions double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
}; 
```  
#### Parameters  
 `IntType`  
 The integer result type, defaults to `int`. For possible types, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 The template class describes a distribution that produces values of a user-specified integral type with a geometric distribution. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[geometric_distribution::geometric_distribution](#geometric_distribution__geometric_distribution)|`geometric_distribution::p`|`geometric_distribution::param`|  
|`geometric_distribution::operator()`||[geometric_distribution::param_type](#geometric_distribution__param_type)|  
  
 The property function `p()` returns the value for stored distribution parameter `p`.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the chi-squared distribution, see the Wolfram MathWorld article [Geometric Distribution](http://go.microsoft.com/fwlink/LinkId=400529).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double p, const int s) {  
  
    // uncomment to use a non-deterministic generator  
    //    std::random_device gen;  
    std::mt19937 gen(1701);  
  
    std::geometric_distribution<> distr(p);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "p() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.p() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<int, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Distribution for " << s << " samples:" << std::endl;  
    for (const auto& elem : histogram) {  
        std::cout << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double p_dist = 0.5;  
  
    int samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the \'p\' distribution parameter: ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(p_dist, samples);  
}  
  
```  
  
## Output  
 First test:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.Enter a floating point value for the 'p' distribution parameter: .5Enter an integer value for the sample count: 100min() == 0max() == 2147483647p() == 0.5000000000Distribution for 100 samples:    0 ::::::::::::::::::::::::::::::::::::::::::::::::::::    1 ::::::::::::::::::::::::    2 ::::::::::::::    3 :::::    4 ::    5 ::    6 :  
```  
  
 Second test:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.Enter a floating point value for the 'p' distribution parameter: .1Enter an integer value for the sample count: 100min() == 0max() == 2147483647p() == 0.1000000000Distribution for 100 samples:    0 :::::::::    1 :::::::::::    2 :::::::    3 ::::::::    4 ::::::::    5 ::::::    6 :::::    7 ::::::    8 :::::    9 ::::   10 ::::   11 ::   12 :   13 :   14 :::   15 ::::   16 :::   17 :   18 :   19 :   20 ::   21 :   22 :   23 :   28 ::   33 :   35 :   40 :  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="geometric_distribution__geometric_distribution"></a>  geometric_distribution::geometric_distribution  
 Constructs the distribution.  
  
```  
explicit geometric_distribution(RealType p = 0.5);

 
explicit geometric_distribution(const param_type& parm);
```  
  
### Parameters  
 `p`  
 The `p` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 < p && p < 1.0`  
  
 The first constructor constructs an object whose stored `p` value holds the value `p`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="geometric_distribution__param_type"></a>  geometric_distribution::param_type  
 Stores the parameters of the distribution.  
  
struct param_type {  
   typedef geometric_distribution\<IntType, RealType> distribution_type;  
   param_type(RealType p = 0.5);
   RealType p() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
  
### Parameters  
 See parent topic [geometric_distribution Class](../standard-library/geometric-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 < p && p < 1.0`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)


