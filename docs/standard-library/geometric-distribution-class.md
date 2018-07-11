---
title: "geometric_distribution Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["random/std::geometric_distribution", "random/std::geometric_distribution::reset", "random/std::geometric_distribution::p", "random/std::geometric_distribution::param", "random/std::geometric_distribution::min", "random/std::geometric_distribution::max", "random/std::geometric_distribution::operator()", "random/std::geometric_distribution::param_type", "random/std::geometric_distribution::param_type::p", "random/std::geometric_distribution::param_type::operator==", "random/std::geometric_distribution::param_type::operator!="]
dev_langs: ["C++"]
helpviewer_keywords: ["std::geometric_distribution [C++]", "std::geometric_distribution [C++], reset", "std::geometric_distribution [C++], p", "std::geometric_distribution [C++], param", "std::geometric_distribution [C++], min", "std::geometric_distribution [C++], max", "std::geometric_distribution [C++], param_type", "std::geometric_distribution [C++], param_type"]
ms.assetid: 38f933af-3b49-492e-9d26-b6b272a60013
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# geometric_distribution Class

Generates a geometric distribution.

## Syntax

```cpp
template<class IntType = int>
class geometric_distribution {
public:
    // types
    typedef IntType result_type;
    struct param_type;

    // constructors and reset functions
    explicit geometric_distribution(double p = 0.5);
    explicit geometric_distribution(const param_type& parm);
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

*IntType*
The integer result type, defaults to **int**. For possible types, see [\<random>](../standard-library/random.md).

*URNG*
The uniform random number generator engine. For possible types, see [\<random>](../standard-library/random.md).

## Remarks

The template class describes a distribution that produces values of a user-specified integral type with a geometric distribution. The following table links to articles about individual members.

||||
|-|-|-|
|[geometric_distribution](#geometric_distribution)|`geometric_distribution::p`|`geometric_distribution::param`|
|`geometric_distribution::operator()`||[param_type](#param_type)|

The property function `p()` returns the value for stored distribution parameter `p`.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the chi-squared distribution, see the Wolfram MathWorld article [Geometric Distribution](http://go.microsoft.com/fwlink/p/?linkid=400529).

## Example

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double p, const int s) {

    // uncomment to use a non-deterministic generator
    //    std::random_device gen;
    std::mt19937 gen(1701);

    std::geometric_distribution<> distr(p);

    std::cout << std::endl;
    std::cout << "min() == " << distr.min() << std::endl;
    std::cout << "max() == " << distr.max() << std::endl;
    std::cout << "p() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.p() << std::endl;

    // generate the distribution as a histogram
    std::map<int, int> histogram;
    for (int i = 0; i < s; ++i) {
        ++histogram[distr(gen)];
    }

    // print results
    std::cout << "Distribution for " << s << " samples:" << std::endl;
    for (const auto& elem : histogram) {
        std::cout << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    double p_dist = 0.5;

    int samples = 100;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a floating point value for the \'p\' distribution parameter: ";
    std::cin >> p_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(p_dist, samples);
}
```

First test:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'p' distribution parameter: .5
Enter an integer value for the sample count: 100

min() == 0
max() == 2147483647
p() == 0.5000000000
Distribution for 100 samples:
    0 :::::::::::::::::::::::::::::::::::::::::::::::::::::
    1 ::::::::::::::::::::::::::
    2 ::::::::::::
    3 ::::::
    4 ::
    5 :
```

Second test:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'p' distribution parameter: .1
Enter an integer value for the sample count: 100

min() == 0
max() == 2147483647
p() == 0.1000000000
Distribution for 100 samples:
    0 :::::::::
    1 :::::::::::
    2 ::::::::::
    3 :::::::
    4 :::::
    5 ::::::::
    6 :::
    7 ::::::
    8 :::::::
    9 :::::
   10 :::
   11 :::
   12 ::
   13 :
   14 :::
   15 ::
   16 :::
   17 :::
   20 :::::
   21 :
   29 :
   32 :
   35 :
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="geometric_distribution"></a>  geometric_distribution::geometric_distribution

Constructs the distribution.

```cpp
explicit geometric_distribution(double p = 0.5);
explicit geometric_distribution(const param_type& parm);
```

### Parameters

*p*
The `p` distribution parameter.

*parm*
The parameter structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < p && p < 1.0`

The first constructor constructs an object whose stored `p` value holds the value *p*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a>  geometric_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef geometric_distribution<result_type> distribution_type;
   param_type(double p = 0.5);
   double p() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*p*
The `p` distribution parameter.

*right*
The `param_type` instance to compare this to.

### Remarks

**Precondition:** `0.0 < p && p < 1.0`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)<br/>
