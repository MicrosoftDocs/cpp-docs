---
description: "Learn more about: fisher_f_distribution Class"
title: "fisher_f_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::fisher_f_distribution", "random/std::fisher_f_distribution::reset", "random/std::fisher_f_distribution::m", "random/std::fisher_f_distribution::n", "random/std::fisher_f_distribution::param", "random/std::fisher_f_distribution::min", "random/std::fisher_f_distribution::max", "random/std::fisher_f_distribution::operator()", "random/std::fisher_f_distribution::param_type", "random/std::fisher_f_distribution::param_type::m", "random/std::fisher_f_distribution::param_type::n", "random/std::fisher_f_distribution::param_type::operator==", "random/std::fisher_f_distribution::param_type::operator!="]
helpviewer_keywords: ["std::fisher_f_distribution [C++]", "std::fisher_f_distribution [C++], reset", "std::fisher_f_distribution [C++], m", "std::fisher_f_distribution [C++], n", "std::fisher_f_distribution [C++], param", "std::fisher_f_distribution [C++], min", "std::fisher_f_distribution [C++], max", "std::fisher_f_distribution [C++], param_type", "std::fisher_f_distribution [C++], param_type"]
ms.assetid: 9513b6ce-3309-4be1-829b-f504bca35bbf
---
# fisher_f_distribution Class

Generates a Fisher F distribution.

## Syntax

```cpp
template<class RealType = double>
class fisher_f_distribution
   {
public:
   // types
   typedef RealType result_type;
   struct param_type;  // constructor and reset functions
   explicit fisher_f_distribution(result_type m = 1.0, result_type n = 1.0);
   explicit fisher_f_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type m() const;
   result_type n() const;
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
The uniform random number generator engine. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class template describes a distribution that produces values of a user-specified floating-point type, or type **`double`** if none is provided, distributed according to the Fisher's F-Distribution. The following table links to articles about individual members.

[fisher_f_distribution](#fisher_f_distribution)\
[param_type](#param_type)

The property functions `m()` and `n()` return the values for the stored distribution parameters `m` and `n` respectively.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the F-distribution, see the Wolfram MathWorld article [F-Distribution](https://go.microsoft.com/fwlink/p/?linkid=400899).

## Example

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double m, const double n, const int s) {

    // uncomment to use a non-deterministic seed
    //    std::random_device rd;
    //    std::mt19937 gen(rd());
    std::mt19937 gen(1701);

    std::fisher_f_distribution<> distr(m, n);

    std::cout << std::endl;
    std::cout << "min() == " << distr.min() << std::endl;
    std::cout << "max() == " << distr.max() << std::endl;
    std::cout << "m() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.m() << std::endl;
    std::cout << "n() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.n() << std::endl;

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
    double m_dist = 1;
    double n_dist = 1;
    int samples = 10;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a floating point value for the \'m\' distribution parameter (must be greater than zero): ";
    std::cin >> m_dist;
    std::cout << "Enter a floating point value for the \'n\' distribution parameter (must be greater than zero): ";
    std::cin >> n_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(m_dist, n_dist, samples);
}
```

## Output

First run:

```Output
Enter a floating point value for the 'm' distribution parameter (must be greater than zero): 1
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == 0
max() == 1.79769e+308
m() == 1.0000000000
n() == 1.0000000000
Distribution for 10 samples:
    1: 0.0204569549
    2: 0.0221376644
    3: 0.0297234962
    4: 0.1600937252
    5: 0.2775342196
    6: 0.3950701700
    7: 0.8363200295
    8: 0.9512500702
    9: 2.7844815974
    10: 3.4320929653
```

Second run:

```Output
Enter a floating point value for the 'm' distribution parameter (must be greater than zero): 1
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): .1
Enter an integer value for the sample count: 10

min() == 0
max() == 1.79769e+308
m() == 1.0000000000
n() == 0.1000000000
Distribution for 10 samples:
    1: 0.0977725649
    2: 0.5304122767
    3: 4.9468518084
    4: 25.1012074939
    5: 48.8082121613
    6: 401.8075539377
    7: 8199.5947873699
    8: 226492.6855335717
    9: 2782062.6639740225
    10: 20829747131.7185860000
```

Third run:

```Output
Enter a floating point value for the 'm' distribution parameter (must be greater than zero): .1
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == 0
max() == 1.79769e+308
m() == 0.1000000000
n() == 1.0000000000
Distribution for 10 samples:
    1: 0.0000000000
    2: 0.0000000000
    3: 0.0000000000
    4: 0.0000000000
    5: 0.0000000033
    6: 0.0000073975
    7: 0.0000703800
    8: 0.0280427735
    9: 0.2660239949
    10: 3.4363333954
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="fisher_f_distribution"></a> fisher_f_distribution::fisher_f_distribution

Constructs the distribution.

```cpp
explicit fisher_f_distribution(result_type m = 1.0, result_type n = 1.0);
explicit fisher_f_distribution(const param_type& parm);
```

### Parameters

*m*\
The `m` distribution parameter.

*n*\
The `n` distribution parameter.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < m` and `0.0 < n`

The first constructor constructs an object whose stored `m` value holds the value *m* and whose stored `n` value holds the value *n*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> fisher_f_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef fisher_f_distribution<result_type> distribution_type;
   param_type(result_type m = 1.0, result_type n = 1.0);
   result_type m() const;
   result_type n() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*m*\
The `m` distribution parameter.

*n*\
The `n` distribution parameter.

*right*\
The `param_type` object to compare to this.

### Remarks

**Precondition:** `0.0 < m` and `0.0 < n`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
