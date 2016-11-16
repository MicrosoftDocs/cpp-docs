---
title: "gamma_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "random/std::tr1::gamma_distribution"
  - "std::tr1::gamma_distribution"
  - "std.tr1.gamma_distribution"
  - "tr1.gamma_distribution"
  - "tr1::gamma_distribution"
  - "gamma_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gamma_distribution class [TR1]"
  - "gamma_distribution class"
ms.assetid: 2a6798ac-6152-41d7-8ef6-d684d92f1572
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
# gamma_distribution Class
Generates a gamma distribution.  
  
## Syntax  
```  
class gamma_distribution {
public:    
    // types 
    typedef RealType result_type;    
    struct param_type;    
    // constructors and reset functions 
    explicit gamma_distribution(RealType alpha = 1.0, RealType beta = 1.0);
    explicit gamma_distribution(const param_type& parm);
    void reset();
    // generating functions
    template <class URNG>  
    result_type operator()(URNG& gen);
    template <class URNG>
    result_type operator()(URNG& gen, const param_type& parm);
    // property functions
    RealType alpha() const;
    RealType beta() const;
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
 The template class describes a distribution that produces values of a user-specified integral type, or type `double` if none is provided, distributed according to the Gamma Distribution. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[gamma_distribution::gamma_distribution](#gamma_distribution__gamma_distribution)|`gamma_distribution::alpha`|`gamma_distribution::param`|  
|`gamma_distribution::operator()`|`gamma_distribution::beta`|[gamma_distribution::param_type](#gamma_distribution__param_type)|  
  
 The property functions `alpha()` and `beta()` return their respective values for stored distribution parameters `alpha` and `beta`.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the gamma distribution, see the Wolfram MathWorld article [Gamma Distribution](http://go.microsoft.com/fwlink/LinkId=401111).  
  
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
  
    std::gamma_distribution<> distr(a, b);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "alpha() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.alpha() << std::endl;  
    std::cout << "beta() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.beta() << std::endl;  
  
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
    std::cout << "Enter a floating point value for the 'alpha' distribution parameter (must be greater than zero): ";  
    std::cin >> a_dist;  
    std::cout << "Enter a floating point value for the 'beta' distribution parameter (must be greater than zero): ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
  
```  
  
## Output  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'alpha' distribution parameter (must be greater than zero): 1  
Enter a floating point value for the 'beta' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
 
min() == 4.94066e-324  
max() == 1.79769e+308  
alpha() == 1.0000000000  
beta() == 1.0000000000  
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
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="gamma_distribution__gamma_distribution"></a>  gamma_distribution::gamma_distribution  
 Constructs the distribution.  
  
```  
explicit gamma_distribution(RealType alpha = 1.0, RealType beta = 1.0);

 
explicit gamma_distribution(const param_type& parm);
```  
  
### Parameters  
 `alpha`  
 The `alpha` distribution parameter.  
  
 `beta`  
 The `beta` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 < alpha` and `0.0 < beta`  
  
 The first constructor constructs an object whose stored `alpha` value holds the value `alpha` and whose stored `beta` value holds the value `beta`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="gamma_distribution__param_type"></a>  gamma_distribution::param_type  
 Stores the parameters of the distribution.  
```cpp   
struct param_type {  
   typedef gamma_distribution<RealType> distribution_type;  
   param_type(RealType alpha = 1.0, RealType beta 1.0);
   RealType alpha() const;
   RealType beta() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
### Parameters  
 See parent topic [gamma_distribution Class](../standard-library/gamma-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 < alpha` and `0.0 < beta`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)



