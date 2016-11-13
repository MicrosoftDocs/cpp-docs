---
title: "piecewise_linear_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::piecewise_linear_distribution"
  - "tr1.piecewise_linear_distribution"
  - "piecewise_linear_distribution"
  - "std.tr1.piecewise_linear_distribution"
  - "random/std::tr1::piecewise_linear_distribution"
  - "tr1::piecewise_linear_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "piecewise_linear_distribution class"
ms.assetid: cd141152-7163-4754-8f98-c6d6500005e0
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# piecewise_linear_distribution Class
Generates a piecewise linear distribution that has varying-width intervals with linearly varying probability in each interval.  
  
## Syntax  
```  
class piecewise_linear_distribution  
   {  
   public:  // types  
   typedef RealType result_type;  
   struct param_type;  // constructor and reset functions  
   piecewise_linear_distribution();
   template <class InputIteratorI, class InputIteratorW>  
   piecewise_linear_distribution(InputIteratorI firstI, InputIteratorI lastI, InputIteratorW firstW);
   template <class UnaryOperation>  
   piecewise_linear_distribution(initializer_list<RealType>  
   intervals, UnaryOperation weightfunc);
   template <class UnaryOperation>  
   piecewise_linear_distribution(size_t count, RealType xmin, RealType xmax, UnaryOperation weightfunc);
   explicit piecewise_linear_distribution(const param_type& parm);
   void reset();
   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   // property functions  
   vector<result_type>  
   intervals() const;
   vector<result_type> densities() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };  
```  
#### Parameters  
 `RealType`  
 The floating point result type, defaults to `double`. For possible types, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 This sampling distribution has varying-width intervals with linearly varying probability in each interval. For information about other sampling distributions, see [piecewise_constant_distribution](../standard-library/piecewise-constant-distribution-class.md) and [discrete_distribution](../standard-library/discrete-distribution-class.md).  
  
 The following table links to articles about individual members:  
  
||||  
|-|-|-|  
|[piecewise_linear_distribution::piecewise_linear_distribution](#piecewise_linear_distribution__piecewise_linear_distribution)|`piecewise_linear_distribution::intervals`|`piecewise_linear_distribution::param`|  
|`piecewise_linear_distribution::operator()`|`piecewise_linear_distribution::densities`|[piecewise_linear_distribution::param_type](#piecewise_linear_distribution__param_type)|  
  
 The property function `intervals()` returns a `vector<RealType>` with the set of stored intervals of the distribution.  
  
 The property function `densities()` returns a `vector<RealType>` with the stored densities for each interval set, which are calculated according to the weights provided in the constructor parameters.  
  
 For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
## Example  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
using namespace std;  
  
void test(const int s) {  
  
    // uncomment to use a non-deterministic generator  
    // random_device rd;  
    // mt19937 gen(rd());  
    mt19937 gen(1701);  
  
    // Three intervals, non-uniform: 0 to 1, 1 to 6, and 6 to 15  
    vector<double> intervals{ 0, 1, 6, 15 };  
    // weights determine the densities used by the distribution  
    vector<double> weights{ 1, 5, 5, 10 };  
  
    piecewise_linear_distribution<double> distr(intervals.begin(), intervals.end(), weights.begin());  
  
    cout << endl;  
    cout << "min() == " << distr.min() << endl;  
    cout << "max() == " << distr.max() << endl;  
    cout << "intervals (index: interval):" << endl;  
    vector<double> i = distr.intervals();  
    int counter = 0;  
    for (const auto& n : i) {  
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;  
        ++counter;  
    }  
    cout << endl;  
    cout << "densities (index: density):" << endl;  
    vector<double> d = distr.densities();  
    counter = 0;  
    for (const auto& n : d) {  
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;  
        ++counter;  
    }  
    cout << endl;  
  
    // generate the distribution as a histogram  
    map<int, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    cout << "Distribution for " << s << " samples:" << endl;  
    for (const auto& elem : histogram) {  
        cout << setw(5) << elem.first << '-' << elem.first + 1 << ' ' << string(elem.second, ':') << endl;  
    }  
    cout << endl;  
}  
  
int main()  
{  
    int samples = 100;  
  
    cout << "Use CTRL-Z to bypass data entry and run using default values." << endl;  
    cout << "Enter an integer value for the sample count: ";  
    cin >> samples;  
  
    test(samples);  
}  
  
```  
  
## Output  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.Enter an integer value for the sample count: 100min() == 0max() == 15intervals (index: interval):          0:   0.0000000000          1:   1.0000000000          2:   6.0000000000          3:  15.0000000000densities (index: density):          0:   0.0645161290          1:   0.3225806452          2:   0.3225806452          3:   0.6451612903Distribution for 100 samples:    0-1 :::::::::::::::::::::    1-2 ::::::    2-3 :::    3-4 :::::::    4-5 ::::::    5-6 ::::::    6-7 :::::    7-8 ::::::::::    8-9 ::::::::::    9-10 ::::::   10-11 ::::   11-12 :::   12-13 :::   13-14 :::::   14-15 :::::  
```  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="piecewise_linear_distribution__piecewise_linear_distribution"></a>  piecewise_linear_distribution::piecewise_linear_distribution  
 Constructs the distribution.  
  
```  
 
// default constructor  
piecewise_linear_distribution();

 
// constructs using a range of intervals, [firstI, lastI), with  
// matching weights starting at firstW  
template <class InputIteratorI, class InputIteratorW>  
piecewise_linear_distribution(InputIteratorI firstI, InputIteratorI lastI, InputIteratorW firstW);

 
// constructs using an initializer list for range of intervals,  
// with weights generated by function weightfunc  
template <class UnaryOperation>  
piecewise_linear_distribution(initializer_list<RealType>  
intervals, UnaryOperation weightfunc);

 
// constructs using an initializer list for range of count intervals,  
// distributed uniformly over [xmin,xmax] with weights generated by function weightfunc  
template <class UnaryOperation>  
piecewise_linear_distribution(size_t count, RealType xmin, RealType xmax, UnaryOperation weightfunc);

 
// constructs from an existing param_type structure  
explicit piecewise_linear_distribution(const param_type& parm);
```  
  
### Parameters  
 `firstI`  
 An input iterator of the first element in the distribution range.  
  
 `lastI`  
 An input iterator of the last element in the distribution range.  
  
 `firstW`  
 An input iterator of the first element in the weights range.  
  
 `intervals`  
 An [initializer_list](../cpp/initializers.md) with the intervals of the distribution.  
  
 `count`  
 The number of elements in the distribution range.  
  
 `xmin`  
 The lowest value in the distribution range.  
  
 `xmax`  
 The highest value in the distribution range. Must be greater than `xmin`.  
  
 `weightfunc`  
 The object representing the probability function for the distribution. Both the parameter and the return value must be convertible to `double`.  
  
 `parm`  
 The parameter structure used to construct the distribution.  
  
### Remarks  
 The default constructor sets the stored parameters such that there is one interval, 0 to 1, with a probability density of 1.  
  
 The iterator range constructor  
  
```  
template <class InputIteratorI, class InputIteratorW>  
piecewise_linear_distribution(InputIteratorI firstI, InputIteratorI lastI,  
    InputIteratorW firstW);
```  
  
 constructs a distribution object with itnervals from iterators over the sequence [ `firstI`, `lastI`) and a matching weight sequence starting at `firstW`.  
  
 The initializer list constructor  
  
```  
template <class UnaryOperation>  
piecewise_linear_distribution(initializer_list<RealType>  
intervals,   
    UnaryOperation weightfunc);
```  
  
 constructs a distribution object with intervals from the intializer list `intervals` and weights generated from the function `weightfunc`.  
  
 The constructor defined as  
  
```  
template <class UnaryOperation>  
piecewise_linear_distribution(size_t count, RealType xmin, RealType xmax,  
    UnaryOperation weightfunc);
```  
  
 constructs a distribution object with `count` intervals distributed uniformly over [ `xmin,xmax`], assigning each interval weights according to the function `weightfunc`, and `weightfunc` must accept one parameter and have a return value, both of which are convertible to `double`. **Precondition:**`xmin < xmax`.  
  
 The constructor defined as  
  
```  
explicit piecewise_linear_distribution(const param_type& parm);
```  
  
 constructs a distribution object using `parm` as the stored parameter structure.  
  
##  <a name="piecewise_linear_distribution__param_type"></a>  piecewise_linear_distribution::param_type  
 Stores all the parameters of the distribution.  
```cpp  
struct param_type {  
   typedef piecewise_linear_distribution<RealType> distribution_type;  
   param_type();
   template <class IterI, class IterW>  
   param_type(IterI firstI, IterI lastI, IterW firstW);
   template <class UnaryOperation>  
   param_type(size_t count, RealType xmin, RealType xmax,   
   UnaryOperation weightfunc);
   std::vector<RealType>  
   densities() const;
   std::vector<RealType> intervals() const;
   .....  
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```    
### Parameters  
 See parent topic [piecewise_linear_distribution Class](../standard-library/piecewise-linear-distribution-class.md).  
  
### Remarks  
 **Precondition:** `xmin < xmax`  
  
 This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.  
  
## See Also  
 [\<random>](../standard-library/random.md)



