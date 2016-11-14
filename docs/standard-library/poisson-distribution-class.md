---
title: "poisson_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "poisson_distribution"
  - "std.tr1.poisson_distribution"
  - "random/std::tr1::poisson_distribution"
  - "std::tr1::poisson_distribution"
  - "tr1.poisson_distribution"
  - "tr1::poisson_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "poisson_distribution class [TR1]"
  - "poisson_distribution class"
ms.assetid: 09614281-349a-45f7-8e95-c0196be0a937
caps.latest.revision: 19
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
# poisson_distribution Class
Generates a Poisson distribution.  
  
## Syntax  
```  
class poisson_distribution  
   {  
   public:  // types  
   typedef IntType result_type;  
   struct param_type;  // constructors and reset functions  
   explicit poisson_distribution(double mean = 1.0);
   explicit poisson_distribution(const param_type& parm);
   void reset();
   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   // property functions  
   double mean() const;
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
 The template class describes a distribution that produces values of a user-specified integral type with a Poisson distribution. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[poisson_distribution::poisson_distribution](#poisson_distribution__poisson_distribution)|`poisson_distribution::mean`|`poisson_distribution::param`|  
|`poisson_distribution::operator()`||[poisson_distribution::param_type](#poisson_distribution__param_type)|  
  
 The property function `mean()` returns the value for stored distribution parameter `mean`.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the Poisson distribution, see the Wolfram MathWorld article [Poisson Distribution](http://go.microsoft.com/fwlink/LinkId=401112).  
  
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
  
    std::poisson_distribution<> distr(p);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "p() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.mean() << std::endl;  
  
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
    double p_dist = 1.0;  
  
    int samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the 'mean' distribution parameter (must be greater than zero): ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(p_dist, samples);  
}  
  
```  
  
## Output  
 First test:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.Enter a floating point value for the 'mean' distribution parameter (must be greater than zero): 1Enter an integer value for the sample count: 100min() == 0max() == 2147483647p() == 1.0000000000Distribution for 100 samples:    0 ::::::::::::::::::::::::::::::    1 ::::::::::::::::::::::::::::::::::::::    2 :::::::::::::::::::::::    3 ::::::::    5 :  
```  
  
 Second test:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.Enter a floating point value for the 'mean' distribution parameter (must be greater than zero): 10Enter an integer value for the sample count: 100min() == 0max() == 2147483647p() == 10.0000000000Distribution for 100 samples:    3 :    4 ::    5 ::    6 ::::::::    7 ::::    8 ::::::::    9 ::::::::::::::   10 ::::::::::::   11 ::::::::::::::::   12 :::::::::::::::   13 ::::::::   14 ::::::   15 :   16 ::   17 :  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="poisson_distribution__poisson_distribution"></a>  poisson_distribution::poisson_distribution  
 Constructs the distribution.  
  
```  
explicit poisson_distribution(RealType mean = 1.0);

 
explicit binomial_distribution(const param_type& parm);
```  
  
### Parameters  
 `mean`  
 The `mean` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 < mean`  
  
 The first constructor constructs an object whose stored `p` value holds the value `p`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="poisson_distribution__param_type"></a>  poisson_distribution::param_type  
 Stores the parameters of the distribution.  
```cpp    
struct param_type {  
   typedef poisson_distribution<IntType> distribution_type;  
   param_type(double mean = 1.0);
   RealType mean() const;
   ....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
### Parameters  
 See parent topic [poisson_distribution Class](../standard-library/poisson-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 < mean`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)

