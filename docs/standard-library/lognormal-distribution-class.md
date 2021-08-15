---
description: "Learn more about: lognormal_distribution Class"
title: "lognormal_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::lognormal_distribution", "random/std::lognormal_distribution::reset", "random/std::lognormal_distribution::m", "random/std::lognormal_distribution::s", "random/std::lognormal_distribution::param", "random/std::lognormal_distribution::min", "random/std::lognormal_distribution::max", "random/std::lognormal_distribution::operator()", "random/std::lognormal_distribution::param_type", "random/std::lognormal_distribution::param_type::m", "random/std::lognormal_distribution::param_type::s", "random/std::lognormal_distribution::param_type::operator==", "random/std::lognormal_distribution::param_type::operator!="]
helpviewer_keywords: ["std::lognormal_distribution [C++]", "std::lognormal_distribution [C++], reset", "std::lognormal_distribution [C++], m", "std::lognormal_distribution [C++], s", "std::lognormal_distribution [C++], param", "std::lognormal_distribution [C++], min", "std::lognormal_distribution [C++], max", "std::lognormal_distribution [C++], param_type", "std::lognormal_distribution [C++], param_type"]
ms.assetid: f2d6a431-6c3a-4370-b12e-4adb4ddf6cc4
---
# lognormal_distribution Class

Generates a log normal distribution.

## Syntax

```cpp
template <class RealType = double>
class lognormal_distribution
   {
public:
   // types
   typedef RealType result_type;
   struct param_type;
   // constructor and reset functions
   explicit lognormal_distribution(result_type m = 0.0, result_type s = 1.0);
   explicit lognormal_distribution(const param_type& parm);
   void reset();
   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);
   // property functions
   result_type m() const;
   result_type s() const;
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

The class template describes a distribution that produces values of a user-specified integral type, or type **`double`** if none is provided, distributed according to the Log Normal Distribution. The following table links to articles about individual members.

[lognormal_distribution](#lognormal_distribution)\
[param_type](#param_type)

The property functions `m()` and `s()` return the values for the stored distribution parameters *m* and *s*, respectively.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the LogNormal distribution, see the Wolfram MathWorld article [LogNormal Distribution](https://go.microsoft.com/fwlink/p/?linkid=400917).

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

    lognormal_distribution<> distr(m, s);

    cout << endl;
    cout << "min() == " << distr.min() << endl;
    cout << "max() == " << distr.max() << endl;
    cout << "m() == " << fixed << setw(11) << setprecision(10) << distr.m() << endl;
    cout << "s() == " << fixed << setw(11) << setprecision(10) << distr.s() << endl;

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
    cout << "Enter a floating point value for the 'm' distribution parameter: ";
    cin >> m_dist;
    cout << "Enter a floating point value for the 's' distribution parameter (must be greater than zero): ";
    cin >> s_dist;
    cout << "Enter an integer value for the sample count: ";
    cin >> samples;

    test(m_dist, s_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'm' distribution parameter: 0
Enter a floating point value for the 's' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
m() == 0.0000000000
s() == 1.0000000000
Distribution for 10 samples:
    1: 0.3862809339
    2: 0.4128865601
    3: 0.4490576787
    4: 0.4862035428
    5: 0.5930607126
    6: 0.8190778771
    7: 0.8902379317
    8: 2.8332911667
    9: 5.1359445565
    10: 5.4406507912
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="lognormal_distribution"></a> lognormal_distribution::lognormal_distribution

Constructs the distribution.

```cpp
explicit lognormal_distribution(RealType m = 0.0, RealType s = 1.0);
explicit lognormal_distribution(const param_type& parm);
```

### Parameters

*m*\
The `m` distribution parameter.

*s*\
The `s` distribution parameter.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < s`

The first constructor constructs an object whose stored `m` value holds the value *m* and whose stored `s` value holds the value *s*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> lognormal_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef lognormal_distribution<result_type> distribution_type;
   param_type(result_type m = 0.0, result_type s = 1.0);
   result_type m() const;
   result_type s() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
};
```

### Parameters

*m*\
The `m` distribution parameter.

*s*\
The `s` distribution parameter.

*right*\
The `param_type` structure used to compare.

### Remarks

**Precondition:** `0.0 < s`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
