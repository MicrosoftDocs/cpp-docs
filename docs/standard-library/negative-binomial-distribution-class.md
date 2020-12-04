---
description: "Learn more about: negative_binomial_distribution Class"
title: "negative_binomial_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::negative_binomial_distribution", "random/std::negative_binomial_distribution::reset", "random/std::negative_binomial_distribution::k", "random/std::negative_binomial_distribution::p", "random/std::negative_binomial_distribution::param", "random/std::negative_binomial_distribution::min", "random/std::negative_binomial_distribution::max", "random/std::negative_binomial_distribution::operator()", "random/std::negative_binomial_distribution::param_type", "random/std::negative_binomial_distribution::param_type::k", "random/std::negative_binomial_distribution::param_type::p", "random/std::negative_binomial_distribution::param_type::operator==", "random/std::negative_binomial_distribution::param_type::operator!="]
helpviewer_keywords: ["std::negative_binomial_distribution [C++]", "std::negative_binomial_distribution [C++], reset", "std::negative_binomial_distribution [C++], k", "std::negative_binomial_distribution [C++], p", "std::negative_binomial_distribution [C++], param", "std::negative_binomial_distribution [C++], min", "std::negative_binomial_distribution [C++], max", "std::negative_binomial_distribution [C++], param_type", "std::negative_binomial_distribution [C++], param_type"]
ms.assetid: 7f5f0967-7fdd-4578-99d4-88f292b4fe9c
---
# negative_binomial_distribution Class

Generates a negative binomial distribution.

## Syntax

```
template<class IntType = int>
class negative_binomial_distribution
{
public:
    // types
    typedef IntType result_type;
    struct param_type;

    // constructor and reset functions
    explicit negative_binomial_distribution(result_type k = 1, double p = 0.5);
    explicit negative_binomial_distribution(const param_type& parm);
    void reset();

    // generating functions
    template `<`class URNG>
    result_type operator()(URNG& gen);
    template `<`class URNG>
    result_type operator()(URNG& gen, const param_type& parm);

    // property functions
    result_type k() const;
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
};
```

### Parameters

*IntType*\
The integer result type, defaults to **`int`**. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class template describes a distribution that produces values of a user-specified integral type, or type **`int`** if none is provided, distributed according to the Negative Binomial Distribution discrete probability function. The following table links to articles about individual members.

[negative_binomial_distribution](#negative_binomial_distribution)\
[param_type](#param_type)

The property members `k()` and `p()` return the currently stored distribution parameter values *k* and *p* respectively.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the negative binomial distribution discrete probability function, see the Wolfram MathWorld article [Negative Binomial Distribution](https://go.microsoft.com/fwlink/p/?linkid=400516).

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

First run:

```Output
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

```Output
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

## <a name="negative_binomial_distribution"></a> negative_binomial_distribution::negative_binomial_distribution

Constructs the distribution.

```cpp
explicit negative_binomial_distribution(result_type k = 1, double p = 0.5);
explicit negative_binomial_distribution(const param_type& parm);
```

### Parameters

*k*\
The `k` distribution parameter.

*p*\
The `p` distribution parameter.

*parm*\
The parameter structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < k` and `0.0 < p ≤ 1.0`

The first constructor constructs an object whose stored `p` value holds the value *p* and whose stored `k` value holds the value *k*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> negative_binomial_distribution::param_type

Stores the parameters of the distribution.

struct param_type {
   typedef negative_binomial_distribution`<`result_type> distribution_type;
   param_type(result_type k = 1, double p = 0.5);
   result_type k() const;
   double p() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };

### Parameters

*k*\
The `k` distribution parameter.

*p*\
The `p` distribution parameter.

*right*\
The `param_type` structure used to compare.

### Remarks

**Precondition:** `0.0 < k` and `0.0 < p ≤ 1.0`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
