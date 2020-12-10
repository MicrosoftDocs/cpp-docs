---
description: "Learn more about: extreme_value_distribution Class"
title: "extreme_value_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::extreme_value_distribution", "random/std::extreme_value_distribution::reset", "random/std::extreme_value_distribution::a", "random/std::extreme_value_distribution::b", "random/std::extreme_value_distribution::param", "random/std::extreme_value_distribution::min", "random/std::extreme_value_distribution::max", "random/std::extreme_value_distribution::operator()", "random/std::extreme_value_distribution::param_type", "random/std::extreme_value_distribution::param_type::a", "random/std::extreme_value_distribution::param_type::b", "random/std::extreme_value_distribution::param_type::operator==", "random/std::extreme_value_distribution::param_type::operator!="]
helpviewer_keywords: ["std::extreme_value_distribution [C++]", "std::extreme_value_distribution [C++], reset", "std::extreme_value_distribution [C++], a", "std::extreme_value_distribution [C++], b", "std::extreme_value_distribution [C++], param", "std::extreme_value_distribution [C++], min", "std::extreme_value_distribution [C++], max", "std::extreme_value_distribution [C++], param_type", "std::extreme_value_distribution [C++], param_type"]
ms.assetid: a0cd8370-0a54-4e26-9388-8b9678fb57da
---
# extreme_value_distribution Class

Generates an extreme value distribution.

## Syntax

```cpp
template<class RealType = double>
class extreme_value_distribution
   {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructor and reset functions
   explicit extreme_value_distribution(result_type a = 0.0, result_type b = 1.0);
   explicit extreme_value_distribution(const param_type& parm);
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

*URNG*\
The random number generator engine. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class template describes a distribution that produces values of a user-specified floating-point type, or type **`double`** if none is provided, distributed according to the Extreme Value Distribution. The following table links to articles about individual members.

[extreme_value_distribution](#extreme_value_distribution)\
[param_type](#param_type)

The property functions `a()` and `b()` return their respective values for stored distribution parameters `a` and `b`.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the extreme value distribution, see the Wolfram MathWorld article [Extreme Value Distribution](https://go.microsoft.com/fwlink/p/?linkid=401110).

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

    std::extreme_value_distribution<> distr(a, b);

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
    std::cout << "Enter a floating point value for the \'a\' distribution parameter: ";
    std::cin >> a_dist;
    std::cout << "Enter a floating point value for the \'b\' distribution parameter (must be greater than zero): ";
    std::cin >> b_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(a_dist, b_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'a' distribution parameter: 0
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
a() == 0.0000000000
b() == 1.0000000000
Distribution for 10 samples:
    1: -0.8813940331
    2: -0.7698972281
    3: 0.2951258007
    4: 0.3110450734
    5: 0.4210546820
    6: 0.4210688771
    7: 0.4598857960
    8: 1.3155194200
    9: 1.5379170046
    10: 2.0568757061
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="extreme_value_distribution"></a> extreme_value_distribution::extreme_value_distribution

Constructs the distribution.

```cpp
explicit extreme_value_distribution(result_type a_value = 0.0, result_type b_value = 1.0);
explicit extreme_value_distribution(const param_type& parm);
```

### Parameters

*a_value*\
The `a` distribution parameter.

*b_value*\
The `b` distribution parameter.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < b`

The first constructor constructs an object whose stored `a` value holds the value *a_value* and whose stored `b` value holds the value *b_value*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> extreme_value_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef extreme_value_distribution<result_type> distribution_type;
   param_type(result_type a_value = 0.0, result_type b_value = 1.0);
   result_type a() const;
   result_type b() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*a_value*\
The `a` distribution parameter.

*b_value*\
The `b` distribution parameter.

*right*\
The `param_type` object to compare to this.

### Remarks

**Precondition:** `0.0 < b`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
