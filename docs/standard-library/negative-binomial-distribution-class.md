---
title: "negative_binomial_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::negative_binomial_distribution"
  - "tr1.negative_binomial_distribution"
  - "std.tr1.negative_binomial_distribution"
  - "random/std::tr1::negative_binomial_distribution"
  - "std::tr1::negative_binomial_distribution"
  - "negative_binomial_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "negative_binomial_distribution class"
ms.assetid: 7f5f0967-7fdd-4578-99d4-88f292b4fe9c
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
# negative_binomial_distribution Class
Generates a negative binomial distribution.  
  
## Syntax  
  
class negative_binomial_distribution
{
public:
    // types 
    typedef IntType result_type;
    struct param_type;   
    
    // constructor and reset functions
    explicit negative_binomial_distribution(IntType k = 1, double p = 0.5);
    explicit negative_binomial_distribution(const param_type& parm);
    void reset();
    
    // generating functions 
    template `<`class URNG>  
    result_type operator()(URNG& gen);
    template `<`class URNG>
    result_type operator()(URNG& gen, const param_type& parm);
    
    // property functions     
    IntType k() const;
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const; 
};
  
#### Parameters  
 `IntType`  
 The integer result type, defaults to `int`. For possible types, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 The template class describes a distribution that produces values of a user-specified integral type, or type `int` if none is provided, distributed according to the Negative Binomial Distribution discrete probability function. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[negative_binomial_distribution::negative_binomial_distribution](#negative_binomial_distribution__negative_binomial_distribution)|`negative_binomial_distribution::k`|`negative_binomial_distribution::param`|  
|`negative_binomial_distribution::operator()`|`negative_binomial_distribution::p`|[negative_binomial_distribution::param_type](#negative_binomial_distribution__param_type)|  
  
 The property members `k()` and `p()` return the currently stored distribution parameter values `k` and `p` respectively.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the negative binomial distribution discrete probability function, see the Wolfram MathWorld article [Negative Binomial Distribution](http://go.microsoft.com/fwlink/LinkId=400516).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const int k, const double p, const int& s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::negative_binomial_distribution<> distr(k, p);  
  
    std::cout << std::endl;  
    std::cout << "k == " << distr.k() << std::endl;  
    std::cout << "p == " << distr.p() << std::endl;  
  
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
    int    k_dist = 1;  
    double p_dist = 0.5;  
    int    samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter an integer value for k distribution (where 0 < k): ";  
    std::cin >> k_dist;  
    std::cout << "Enter a double value for p distribution (where 0.0 < p <= 1.0): ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for a sample count: ";  
    std::cin >> samples;  
  
    test(k_dist, p_dist, samples);  
}  
  
```  
  
## Output  
 First run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for k distribution (where 0 `<` k): 1  
Enter a double value for p distribution (where 0.0 `<`p `<`= 1.0): .5  
Enter an integer value for a sample count: 100  
 
k == 1  
p == 0.5  
Histogram for 100 samples:  
    0 :::::::::::::::::::::::::::::::::::::::::::  
    1 ::::::::::::::::::::::::::::::::  
    2 ::::::::::::  
    3 :::::::  
    4 ::::  
    5 ::  
```  
  
 Second run:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for k distribution (where 0 `<` k): 100  
Enter a double value for p distribution (where 0.0 `<` p <= 1.0): .667  
Enter an integer value for a sample count: 100  
 
k == 100  
p == 0.667  
Histogram for 100 samples:  
    31 ::  
    32 :  
    33 ::  
    34 :  
    35 ::  
    37 ::  
    38 :  
    39 :  
    40 ::  
    41 :::  
    42 :::  
    43 :::::  
    44 :::::  
    45 ::::  
    46 ::::::  
    47 ::::::::  
    48 :::  
    49 :::  
    50 :::::::::  
    51 :::::::  
    52 ::  
    53 :::  
    54 :::::  
    56 ::::  
    58 :  
    59 :::::  
    60 ::  
    61 :  
    62 ::  
    64 :  
    69 ::::  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="negative_binomial_distribution__negative_binomial_distribution"></a>  negative_binomial_distribution::negative_binomial_distribution  
 Constructs the distribution.  
  
```  
explicit negative_binomial_distribution(IntType k = 1, double p = 0.5);

 
explicit negative_binomial_distribution(const param_type& parm);
```  
  
### Parameters  
 `k`  
 The `k` distribution parameter.  
  
 `p`  
 The `p` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 < k` and `0.0 < p ≤ 1.0`  
  
 The first constructor constructs an object whose stored `p` value holds the value `p` and whose stored `k` value holds the value `k`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="negative_binomial_distribution__param_type"></a>  negative_binomial_distribution::param_type  
 Stores the parameters of the distribution.  
  
struct param_type {  
   typedef negative_binomial_distribution`<`IntType> distribution_type;  
   param_type(IntType k = 1, double p = 0.5);
   IntType k() const;
   double p() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
  
### Parameters  
 See parent topic [negative_binomial_distribution Class](../standard-library/negative-binomial-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 < k` and `0.0 < p ≤ 1.0`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)
