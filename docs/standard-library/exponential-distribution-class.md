---
description: "Learn more about: exponential_distribution Class"
title: "exponential_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::exponential_distribution", "random/std::exponential_distribution::reset", "random/std::exponential_distribution::lambda", "random/std::exponential_distribution::param", "random/std::exponential_distribution::min", "random/std::exponential_distribution::max", "random/std::exponential_distribution::operator()", "random/std::exponential_distribution::param_type", "random/std::exponential_distribution::param_type::lambda", "random/std::exponential_distribution::param_type::operator==", "random/std::exponential_distribution::param_type::operator!="]
helpviewer_keywords: ["std::exponential_distribution [C++]", "std::exponential_distribution [C++], reset", "std::exponential_distribution [C++], lambda", "std::exponential_distribution [C++], param", "std::exponential_distribution [C++], min", "std::exponential_distribution [C++], max", "std::exponential_distribution [C++], param_type", "std::exponential_distribution [C++], param_type"]
ms.assetid: d54f3126-a09b-45f9-a30b-0d94d03bcdc9
---
# exponential_distribution Class

Generates an exponential distribution.

## Syntax

```cpp
template<class RealType = double>
class exponential_distribution
   {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructors and reset functions
   explicit exponential_distribution(result_type lambda = 1.0);
   explicit exponential_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type lambda() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### Parameters

*RealType*\
The floating-point result type, defaults to **`double`**. For possible types, see [\<random>](../standard-library/random.md).

*URNG*\
The random number generator engine. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class template describes a distribution that produces values of a user-specified integral type, or type **`double`** if none is provided, distributed according to the Exponential Distribution. The following table links to articles about individual members.

[exponential_distribution](#exponential_distribution)\
[param_type](#param_type)

The property member function `lambda()` returns the value for the stored distribution parameter `lambda`.

The property member function `param()` sets or returns the `param_type` stored distribution parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the exponential distribution, see the Wolfram MathWorld article [Exponential Distribution](https://go.microsoft.com/fwlink/p/?linkid=401098).

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

```Output
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

## <a name="exponential_distribution"></a> exponential_distribution::exponential_distribution

Constructs the distribution.

```cpp
explicit exponential_distribution(result_type lambda = 1.0);
explicit exponential_distribution(const param_type& parm);
```

### Parameters

*lambda*\
The `lambda` distribution parameter.

*parm*\
The parameter package used to construct the distribution.

### Remarks

**Precondition:** `0.0 < lambda`

The first constructor constructs an object whose stored `lambda` value holds the value *lambda*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> exponential_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef exponential_distribution<result_type> distribution_type;
   param_type(result_type lambda = 1.0);
   result_type lambda() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*lambda*\
The `lambda` distribution parameter.

*right*\
The `param_type` object to compare to this.

### Remarks

**Precondition:** `0.0 < lambda`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
