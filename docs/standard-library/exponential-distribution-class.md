---
title: "exponential_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::exponential_distribution"
  - "exponential_distribution"
  - "tr1::exponential_distribution"
  - "tr1.exponential_distribution"
  - "random/std::tr1::exponential_distribution"
  - "std.tr1.exponential_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exponential_distribution class [TR1]"
  - "exponential_distribution class"
ms.assetid: d54f3126-a09b-45f9-a30b-0d94d03bcdc9
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
# exponential_distribution Class
Generates an exponential distribution.  
  
## Syntax  
```  
class exponential_distribution  
   {  
   public:  // types  
   typedef RealType result_type;  
   struct param_type;  // constructors and reset functions  
   explicit exponential_distribution(RealType lambda = 1.0);
   explicit exponential_distribution(const param_type& parm);
   void reset();
   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   // property functions  
   RealType lambda() const;
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
 The template class describes a distribution that produces values of a user-specified integral type, or type `double` if none is provided, distributed according to the Exponential Distribution. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[exponential_distribution::exponential_distribution](#exponential_distribution__exponential_distribution)|`exponential_distribution::lambda`|`exponential_distribution::param`|  
|`exponential_distribution::operator()`||[exponential_distribution::param_type](#exponential_distribution__param_type)|  
  
 The property function `lambda()` returns the value for the stored distribution parameter `lambda`.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the exponential distribution, see the Wolfram MathWorld article [Exponential Distribution](http://go.microsoft.com/fwlink/LinkId=401098).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double l, const int s) {  
  
    // uncomment to use a non-deterministic generator  
    //    std::random_device gen;  
    std::mt19937 gen(1701);  
  
    std::exponential_distribution<> distr(l);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "lambda() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.lambda() << std::endl;  
  
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
    double l_dist = 0.5;  
    int samples = 10;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the 'lambda' distribution parameter (must be greater than zero): ";  
    std::cin >> l_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(l_dist, samples);  
}  
  
```  
  
## Output  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'lambda' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
 
min() == 0  
max() == 1.79769e+308  
lambda() == 1.0000000000  
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
  
##  <a name="exponential_distribution__exponential_distribution"></a>  exponential_distribution::exponential_distribution  
 Constructs the distribution.  
  
```  
explicit exponential_distribution(RealType lambda = 1.0);

 
explicit exponential_distribution(const param_type& parm);
```  
  
### Parameters  
 `lambda`  
 The `lambda` distribution parameter.  
  
 `parm`  
 The parameter package used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 < lambda`  
  
 The first constructor constructs an object whose stored `lambda` value holds the value `lambda`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="exponential_distribution__param_type"></a>  exponential_distribution::param_type  
 Stores the parameters of the distribution.  
  
struct param_type {  
   typedef exponential_distribution\<RealType> distribution_type;  
   param_type(RealType lambda = 1.0);
   RealType lambda() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
  
### Parameters  
 See parent topic [exponential_distribution Class](../standard-library/exponential-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 < lambda`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)

