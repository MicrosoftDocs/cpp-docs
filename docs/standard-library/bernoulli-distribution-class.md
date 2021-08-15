---
description: "Learn more about: bernoulli_distribution Class"
title: "bernoulli_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::bernoulli_distribution", "random/std::bernoulli_distribution::reset", "random/std::bernoulli_distribution::p", "random/std::bernoulli_distribution::param", "random/std::bernoulli_distribution::min", "random/std::bernoulli_distribution::max", "random/std::bernoulli_distribution::operator()", "random/std::bernoulli_distribution::param_type", "random/std::bernoulli_distribution::param_type::p", "random/std::bernoulli_distribution::param_type::operator==", "random/std::bernoulli_distribution::param_type::operator!="]
helpviewer_keywords: ["std::bernoulli_distribution [C++]", "std::bernoulli_distribution [C++], reset", "std::bernoulli_distribution [C++], p", "std::bernoulli_distribution [C++], param", "std::bernoulli_distribution [C++], min", "std::bernoulli_distribution [C++], max", "std::bernoulli_distribution [C++], param_type", "std::bernoulli_distribution [C++], param_type"]
ms.assetid: 586bcde1-95ca-411a-bf17-4aaf19482f34
---
# bernoulli_distribution Class

Generates a Bernoulli distribution.

## Syntax

```cpp
class bernoulli_distribution
   {
public:
   // types
   typedef bool result_type;
   struct param_type;

   // constructors and reset functions
   explicit bernoulli_distribution(double p = 0.5);
   explicit bernoulli_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   double p() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### Parameters

*URNG*\
The uniform random number generator engine. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The class describes a distribution that produces values of type **`bool`**, distributed according to the Bernoulli distribution discrete probability function. The following table links to articles about individual members.

[bernoulli_distribution](#bernoulli_distribution)\
[param_type](#param_type)

The property member `p()` returns the currently stored distribution parameter value `p`.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the Bernoulli distribution discrete probability function, see the Wolfram MathWorld article [Bernoulli Distribution](https://go.microsoft.com/fwlink/p/?linkid=398467).

## Example

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double p, const int s) {

    // uncomment to use a non-deterministic seed
    //    std::random_device rd;
    //    std::mt19937 gen(rd());
    std::mt19937 gen(1729);

    std::bernoulli_distribution distr(p);

    std::cout << "p == " << distr.p() << std::endl;

    // generate the distribution as a histogram
    std::map<bool, int> histogram;
    for (int i = 0; i < s; ++i) {
        ++histogram[distr(gen)];
    }

    // print results
    std::cout << "Histogram for " << s << " samples:" << std::endl;
    for (const auto& elem : histogram) {
        std::cout << std::boolalpha << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    double p_dist = 0.5;
    int samples = 100;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a double value for p distribution (where 0.0 <= p <= 1.0): ";
    std::cin >> p_dist;
    std::cout << "Enter an integer value for a sample count: ";
    std::cin >> samples;

    test(p_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .45
Enter an integer value for a sample count: 100
p == 0.45
Histogram for 100 samples:
false :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
true :::::::::::::::::::::::::::::::::::::::::
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="bernoulli_distribution"></a> bernoulli_distribution::bernoulli_distribution

Constructs the distribution.

```cpp
explicit bernoulli_distribution(double p = 0.5);
explicit bernoulli_distribution(const param_type& parm);
```

### Parameters

*p*\
The stored `p` distribution parameter.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 ≤ p ≤ 1.0`

The first constructor constructs an object whose stored `p` value holds the value *p*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> bernoulli_distribution::param_type

Contains the parameters of the distribution.

struct param_type {
   typedef bernoulli_distribution distribution_type;
   param_type(double p = 0.5);
   double p() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };

### Parameters

*p*\
The stored `p` distribution parameter.

### Remarks

**Precondition:** `0.0 ≤ p ≤ 1.0`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
