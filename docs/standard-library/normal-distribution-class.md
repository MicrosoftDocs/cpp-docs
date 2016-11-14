---
title: "normal_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::normal_distribution"
  - "normal_distribution"
  - "std::tr1::normal_distribution"
  - "random/std::tr1::normal_distribution"
  - "std.tr1.normal_distribution"
  - "tr1.normal_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "normal_distribution class"
  - "normal_distribution class [TR1]"
ms.assetid: bf92cdbd-bc72-4d4a-b588-173d748f0d7d
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
# normal_distribution Class
Generates a normal distribution.  
  
## Syntax  
```  
class normal_distribution  
   {  
   public:  // types  
   typedef RealType result_type;  
   struct param_type;  // constructors and reset functions  
   explicit normal_distribution(RealType mean = 0.0, RealType stddev = 1.0);
   explicit normal_distribution(const param_type& parm);
   void reset();
   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   // property functions  
   RealType mean() const;
   RealType stddev() const;
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
 The template class describes a distribution that produces values of a user-specified integral type, or type `double` if none is provided, distributed according to the Normal Distribution. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[normal_distribution::normal_distribution](#normal_distribution__normal_distribution)|`normal_distribution::mean`|`normal_distribution::param`|  
|`normal_distribution::operator()`|`normal_distribution::stddev`|[normal_distribution::param_type](#normal_distribution__param_type)|  
  
 The property functions `mean()` and `stddev()` return the values for the stored distribution parameters `mean` and `stddev` respectively.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
 For detailed information about the Normal distribution, see the Wolfram MathWorld article [Normal Distribution](http://go.microsoft.com/fwlink/LinkId=400924).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
using namespace std;  
  
void test(const double m, const double s, const int samples) {  
  
    // uncomment to use a non-deterministic seed  
    //    random_device gen;  
    //    mt19937 gen(rd());  
    mt19937 gen(1701);  
  
    normal_distribution<> distr(m, s);  
  
    cout << endl;  
    cout << "min() == " << distr.min() << endl;  
    cout << "max() == " << distr.max() << endl;  
    cout << "m() == " << fixed << setw(11) << setprecision(10) << distr.mean() << endl;  
    cout << "s() == " << fixed << setw(11) << setprecision(10) << distr.stddev() << endl;  
  
    // generate the distribution as a histogram  
    map<double, int> histogram;  
    for (int i = 0; i < samples; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    cout << "Distribution for " << samples << " samples:" << endl;  
    int counter = 0;  
    for (const auto& elem : histogram) {  
        cout << fixed << setw(11) << ++counter << ": "  
            << setw(14) << setprecision(10) << elem.first << endl;  
    }  
    cout << endl;  
}  
  
int main()  
{  
    double m_dist = 1;  
    double s_dist = 1;  
    int samples = 10;  
  
    cout << "Use CTRL-Z to bypass data entry and run using default values." << endl;  
    cout << "Enter a floating point value for the 'mean' distribution parameter: ";  
    cin >> m_dist;  
    cout << "Enter a floating point value for the 'stddev' distribution parameter (must be greater than zero): ";  
    cin >> s_dist;  
    cout << "Enter an integer value for the sample count: ";  
    cin >> samples;  
  
    test(m_dist, s_dist, samples);  
}  
  
```  
  
## Output  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'mean' distribution parameter: 0  
Enter a floating point value for the 'stddev' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
 
min() == -1.79769e+308  
max() == 1.79769e+308  
m() == 0.0000000000  
s() == 1.0000000000  
Distribution for 10 samples:  
    1: -0.8845823965  
    2: -0.1995761116  
    3: -0.1162665130  
    4: -0.0685154932  
    5: 0.0403741461  
    6: 0.1591327792  
    7: 1.0414389924  
    8: 1.5876269426  
    9: 1.6362637713  
    10: 2.7821317338  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="normal_distribution__normal_distribution"></a>  normal_distribution::normal_distribution  
 Constructs the distribution.  
  
```  
explicit normal_distribution(RealType mean = 0.0, RealType stddev = 1.0);

 
explicit normal_distribution(const param_type& parm);
```  
  
### Parameters  
 `mean`  
 The `mean` distribution parameter.  
  
 `stddev`  
 The `stddev` distribution parameter.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 **Precondition:** `0.0 ≤ stddev`  
  
 The first constructor constructs an object whose stored `mean` value holds the value `mean` and whose stored `stddev` value holds the value `stddev`.  
  
 The second constructor constructs an object whose stored parameters are initialized from `parm`. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.  
  
##  <a name="normal_distribution__param_type"></a>  normal_distribution::param_type  
 Stores the parameters of the distribution.  
```cpp  
struct param_type {  
   typedef normal_distribution<RealType> distribution_type;  
   param_type(RealType mean = 0.0, RealType stddev = 1.0);
   RealType mean() const;
   RealType stddev() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
### Parameters  
 See parent topic [normal_distribution Class](../standard-library/normal-distribution-class.md).  
  
### Remarks  
 **Precondition:** `0.0 ≤ stddev`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)



