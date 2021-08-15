---
description: "Learn more about: binomial_distribution Class"
title: "binomial_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::binomial_distribution", "random/std::binomial_distribution::reset", "random/std::binomial_distribution::p", "random/std::binomial_distribution::t", "random/std::binomial_distribution::param", "random/std::binomial_distribution::min", "random/std::binomial_distribution::max", "random/std::binomial_distribution::operator()", "random/std::binomial_distribution::param_type", "random/std::binomial_distribution::param_type::p", "random/std::binomial_distribution::param_type::t", "random/std::binomial_distribution::param_type::operator==", "random/std::binomial_distribution::param_type::operator!="]
helpviewer_keywords: ["std::binomial_distribution [C++]", "std::binomial_distribution [C++], reset", "std::binomial_distribution [C++], p", "std::binomial_distribution [C++], t", "std::binomial_distribution [C++], param", "std::binomial_distribution [C++], min", "std::binomial_distribution [C++], max", "std::binomial_distribution [C++], param_type", "std::binomial_distribution [C++], param_type"]
ms.assetid: b7c8a26a-da8c-45a5-a3a8-208f7a3609ce
---
# binomial_distribution Class

Generates a binomial distribution.

## Syntax

```cpp
template<class IntType = int>
class binomial_distribution
   {
public:
   // types
   typedef IntType result_type;
   struct param_type;

   // constructors and reset functions
   explicit binomial_distribution(result_type t = 1, double p = 0.5);
   explicit binomial_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type t() const;
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

*URNG*\
The uniform random number generator engine. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class template describes a distribution that produces values of a user-specified integral type, or type **`int`** if none is provided, distributed according to the Binomial Distribution discrete probability function. The following table links to articles about individual members.

[binomial_distribution](#binomial_distribution)\
[param_type](#param_type)

The property members `t()` and `p()` return the currently stored distribution parameter values *t* and *p* respectively.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the binomial distribution discrete probability function, see the Wolfram MathWorld article [Binomial Distribution](https://go.microsoft.com/fwlink/p/?linkid=398469).

## Example

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const int t, const double p, const int& s) {

    // uncomment to use a non-deterministic seed
    //    std::random_device rd;
    //    std::mt19937 gen(rd());
    std::mt19937 gen(1729);

    std::binomial_distribution<> distr(t, p);

    std::cout << std::endl;
    std::cout << "p == " << distr.p() << std::endl;
    std::cout << "t == " << distr.t() << std::endl;

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
    int    t_dist = 1;
    double p_dist = 0.5;
    int    samples = 100;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter an integer value for t distribution (where 0 <= t): ";
    std::cin >> t_dist;
    std::cout << "Enter a double value for p distribution (where 0.0 <= p <= 1.0): ";
    std::cin >> p_dist;
    std::cout << "Enter an integer value for a sample count: ";
    std::cin >> samples;

    test(t_dist, p_dist, samples);
}
```

First run:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter an integer value for t distribution (where 0 <= t): 22
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .25
Enter an integer value for a sample count: 100

p == 0.25
t == 22
Histogram for 100 samples:
    1 :
    2 ::
    3 :::::::::::::
    4 ::::::::::::::
    5 :::::::::::::::::::::::::
    6 ::::::::::::::::::
    7 :::::::::::::
    8 ::::::
    9 ::::::
    11 :
    12 :
```

Second run:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter an integer value for t distribution (where 0 <= t): 22
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .5
Enter an integer value for a sample count: 100

p == 0.5
t == 22
Histogram for 100 samples:
    6 :
    7 ::
    8 :::::::::
    9 ::::::::::
    10 ::::::::::::::::
    11 :::::::::::::::::::
    12 :::::::::::
    13 :::::::::::::
    14 :::::::::::::::
    15 ::
    16 ::
```

Third run:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter an integer value for t distribution (where 0 <= t): 22
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .75
Enter an integer value for a sample count: 100

p == 0.75
t == 22
Histogram for 100 samples:
    13 ::::
    14 :::::::::::
    15 :::::::::::::::
    16 :::::::::::::::::::::
    17 ::::::::::::::
    18 :::::::::::::::::
    19 :::::::::::
    20 ::::::
    21 :
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="binomial_distribution"></a> binomial_distribution::binomial_distribution

Constructs the distribution.

```cpp
explicit binomial_distribution(result_type t = 1, double p = 0.5);
explicit binomial_distribution(const param_type& parm);
```

### Parameters

*t*\
The `t` distribution parameter.

*p*\
The `p` distribution parameter.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `0 ≤ t` and `0.0 ≤ p ≤ 1.0`

The first constructor constructs an object whose stored *p* value holds the value *p* and whose stored *t* value holds the value *t*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> binomial_distribution::param_type

Stores all the parameters of the distribution.

```cpp
struct param_type {
   typedef binomial_distribution<result_type> distribution_type;
   param_type(result_type t = 1, double p = 0.5);
   result_type t() const;
   double p() const;
   .....
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*t*\
The `t` distribution parameter.

*p*\
The `p` distribution parameter.

*right*\
The `param_type` object to compare to this.

### Remarks

**Precondition:** `0 ≤ t` and `0.0 ≤ p ≤ 1.0`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
