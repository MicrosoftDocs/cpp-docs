---
description: "Learn more about: weibull_distribution Class"
title: "weibull_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::weibull_distribution", "random/std::weibull_distribution::reset", "random/std::weibull_distribution::a", "random/std::weibull_distribution::b", "random/std::weibull_distribution::param", "random/std::weibull_distribution::min", "random/std::weibull_distribution::max", "random/std::weibull_distribution::operator()", "random/std::weibull_distribution::param_type", "random/std::weibull_distribution::param_type::a", "random/std::weibull_distribution::param_type::b", "random/std::weibull_distribution::param_type::operator==", "random/std::weibull_distribution::param_type::operator!="]
helpviewer_keywords: ["std::weibull_distribution [C++]", "std::weibull_distribution [C++], reset", "std::weibull_distribution [C++], a", "std::weibull_distribution [C++], b", "std::weibull_distribution [C++], param", "std::weibull_distribution [C++], min", "std::weibull_distribution [C++], max", "std::weibull_distribution [C++], param_type", "std::weibull_distribution [C++], param_type"]
ms.assetid: f20b49d3-1b9a-41af-8db4-baf800eaa02b
---
# weibull_distribution Class

Generates a Weibull distribution.

## Syntax

```cpp
class weibull_distribution
   {
   public:
    // types
   typedef RealType result_type;
   struct param_type;

    // constructor and reset functions
   explicit weibull_distribution(result_type a = 1.0, result_type b = 1.0);
   explicit weibull_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
      result_type operator()(URNG& gen);
   template <class URNG>
      result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type a() const;
   result_type b() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### Parameters

*RealType*\
The floating-point result type, defaults to **`double`**. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class template describes a distribution that produces values of a user-specified floating point type, or type **`double`** if none is provided, distributed according to the Weibull Distribution. The following table links to articles about individual members.

[weibull_distribution](#weibull_distribution)\
[param_type](#param_type)|

The property functions `a()` and `b()` return their respective values for stored distribution parameters *a* and *b*.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the Weibull distribution, see the Wolfram MathWorld article [Weibull Distribution](https://mathworld.wolfram.com/WeibullDistribution.html).

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

```Output
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

```Output
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

## <a name="weibull_distribution"></a> weibull_distribution::weibull_distribution

```cpp
explicit weibull_distribution(result_type a = 1.0, result_type b = 1.0);
explicit weibull_distribution(const param_type& parm);
```

### Parameters

*a*\
The `a` distribution parameter.

*b*\
The `b` distribution parameter.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < a` and `0.0 < b`

The first constructor constructs an object whose stored `a` value holds the value *a* and whose stored `b` value holds the value *b*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> weibull_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef weibull_distribution<result_type> distribution_type;
   param_type(result_type a = 1.0, result_type b = 1.0);
   result_type a() const;
   result_type b() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*a*\
The `a` distribution parameter.

*b*\
The `b` distribution parameter.

*right*\
The `param_type` object to compare to this.

### Remarks

**Precondition:** `0.0 < a` and `0.0 < b`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
