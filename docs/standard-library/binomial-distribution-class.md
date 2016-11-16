---
title: "binomial_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::binomial_distribution"
  - "std.tr1.binomial_distribution"
  - "tr1::binomial_distribution"
  - "random/std::tr1::binomial_distribution"
  - "tr1.binomial_distribution"
  - "binomial_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binomial_distribution class [TR1]"
  - "binomial_distribution class"
ms.assetid: b7c8a26a-da8c-45a5-a3a8-208f7a3609ce
caps.latest.revision: 22
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
# binomial_distribution Class
Generates a binomial distribution.  
  
## Syntax  
```  
class binomial_distribution  
   {  
   public:  // types  
   typedef IntType result_type;  
   struct param_type;  // constructors and reset functions  
   explicit binomial_distribution(IntType t = 1, double p = 0.5);
   explicit binomial_distribution(const param_type& parm);
   void reset();
   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   // property functions  
   IntType t() const;
   double p() const;
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
 The template class describes a distribution that produces values of a user-specified integral type, or type `int` if none is provided, distributed according to the Binomial Distribution discrete probability function. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[binomial_distribution::binomial_distribution](#binomial_distribution__binomial_distribution)|`binomial_distribution::t`|`binomial_distribution::param`|  
|`binomial_distribution::operator()`|`binomial_distribution::p`|[binomial_distribution::param_type](#binomial_distribution__param_type)|  
  
 The property members `t()` and `p()` return the currently stored distribution parameter values `t` and `p` respectively.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the binomial distribution discrete probability function, see the Wolfram MathWorld article [Binomial Distribution](http://go.microsoft.com/fwlink/LinkId=398469).  
  
## Example  
  
```cpp  
 // compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const int t, const double p, const int& s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::binomial_distribution<> distr(t, p);  
  
    std::cout << std::endl;  
    std::cout << "p == " << distr.p() << std::endl;  
    std::cout << "t == " << distr.t() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<int, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Histogram for " << s << " samples:" << std::endl;  
    for (const auto& elem : histogram) {  
        std::cout << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    int    t_dist = 1;  
    double p_dist = 0.5;  
    int    samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter an integer value for t distribution (where 0 <= t): ";  
    std::cin >> t_dist;  
    std::cout << "Enter a double value for p distribution (where 0.0 <= p <= 1.0): ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for a sample count: ";  
    std::cin >> samples;  
  
    test(t_dist, p_dist, samples);  
}  
```  
  
## Output  
 First run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for t distribution (where 0 <= t): 22  
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .25  
Enter an integer value for a sample count: 100  
 
p == 0.25  
t == 22  
Histogram for 100 samples:  
    1 :  
    2 ::  
    3 :::::::::::::  
    4 ::::::::::::::  
    5 :::::::::::::::::::::::::  
    6 ::::::::::::::::::  
    7 :::::::::::::  
    8 ::::::  
    9 ::::::  
    11 :  
    12 :  
```  
  
 Second run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for t distribution (where 0 <= t): 22  
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .5  
Enter an integer value for a sample count: 100  
 
p == 0.5  
t == 22  
Histogram for 100 samples:  
    6 :  
    7 ::  
    8 :::::::::  
    9 ::::::::::  
    10 ::::::::::::::::  
    11 :::::::::::::::::::  
    12 :::::::::::  
    13 :::::::::::::  
    14 :::::::::::::::  
    15 ::  
    16 ::  
```  
  
 Third run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for t distribution (where 0 <= t): 22  
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .75  
Enter an integer value for a sample count: 100  
 
p == 0.75  
t == 22  
Histogram for 100 samples:  
    13 ::::  
    14 :::::::::::  
    15 :::::::::::::::  
    16 :::::::::::::::::::::  
    17 ::::::::::::::  
    18 :::::::::::::::::  
    19 :::::::::::  
    20 ::::::  
    21 :  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="binomial_distribution__binomial_distribution"></a>  binomial_distribution::binomial_distribution  
 Constructs the distribution.  
  
```  
explicit binomial_distribution(IntType t = 1, double p = 0.5);

 
explicit binomial_distribution(const param_type& parm);
```  
  
### Parameters  
 `t`  
 The `t` distribution parameter.  
  
 `p`  
 The `p` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0 ≤ t` and `0.0 ≤ p ≤ 1.0`  
  
 The first constructor constructs an object whose stored `p` value holds the value `p` and whose stored `t` value holds the value `t`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
 For more information and a code example, see [binomial_distribution Class](../standard-library/binomial-distribution-class.md).  
  
##  <a name="binomial_distribution__param_type"></a>  binomial_distribution::param_type  
 Stores all the parameters of the distribution.  
```cpp  
struct param_type {  
   typedef binomial_distribution<IntType> distribution_type;  
   param_type(IntType t = 1, double p = 0.5);
   IntType t() const;
   double p() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
### Parameters  
 See parent topic [binomial_distribution Class](../standard-library/binomial-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0 ≤ t` and `0.0 ≤ p ≤ 1.0`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)



