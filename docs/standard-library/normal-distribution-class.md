---
description: "Learn more about: normal_distribution Class"
title: "normal_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::normal_distribution", "random/std::normal_distribution::reset", "random/std::normal_distribution::mean", "random/std::normal_distribution::stddev", "random/std::normal_distribution::param", "random/std::normal_distribution::min", "random/std::normal_distribution::max", "random/std::normal_distribution::operator()", "random/std::normal_distribution::param_type", "random/std::normal_distribution::param_type::mean", "random/std::normal_distribution::param_type::stddev", "random/std::normal_distribution::param_type::operator==", "random/std::normal_distribution::param_type::operator!="]
helpviewer_keywords: ["std::normal_distribution [C++]", "std::normal_distribution [C++], reset", "std::normal_distribution [C++], mean", "std::normal_distribution [C++], stddev", "std::normal_distribution [C++], param", "std::normal_distribution [C++], min", "std::normal_distribution [C++], max", "std::normal_distribution [C++], param_type", "std::normal_distribution [C++], param_type"]
ms.assetid: bf92cdbd-bc72-4d4a-b588-173d748f0d7d
---
# normal_distribution Class

Generates a normal distribution.

## Syntax

```cpp
template<class RealType = double>
class normal_distribution
   {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructors and reset functions
   explicit normal_distribution(result_type mean = 0.0, result_type stddev = 1.0);
   explicit normal_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type mean() const;
   result_type stddev() const;
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

The class template describes a distribution that produces values of a user-specified integral type, or type **`double`** if none is provided, distributed according to the Normal Distribution. The following table links to articles about individual members.

[normal_distribution](#normal_distribution)\
[param_type](#param_type)

The property functions `mean()` and `stddev()` return the values for the stored distribution parameters *mean* and *stddev* respectively.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

For detailed information about the Normal distribution, see the Wolfram MathWorld article [Normal Distribution](https://go.microsoft.com/fwlink/p/?linkid=400924).

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

    normal_distribution<> distr(m, s);

    cout << endl;
    cout << "min() == " << distr.min() << endl;
    cout << "max() == " << distr.max() << endl;
    cout << "m() == " << fixed << setw(11) << setprecision(10) << distr.mean() << endl;
    cout << "s() == " << fixed << setw(11) << setprecision(10) << distr.stddev() << endl;

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
    cout << "Enter a floating point value for the 'mean' distribution parameter: ";
    cin >> m_dist;
    cout << "Enter a floating point value for the 'stddev' distribution parameter (must be greater than zero): ";
    cin >> s_dist;
    cout << "Enter an integer value for the sample count: ";
    cin >> samples;

    test(m_dist, s_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'mean' distribution parameter: 0
Enter a floating point value for the 'stddev' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
m() == 0.0000000000
s() == 1.0000000000
Distribution for 10 samples:
    1: -0.8845823965
    2: -0.1995761116
    3: -0.1162665130
    4: -0.0685154932
    5: 0.0403741461
    6: 0.1591327792
    7: 1.0414389924
    8: 1.5876269426
    9: 1.6362637713
    10: 2.7821317338
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="normal_distribution"></a> normal_distribution::normal_distribution

Constructs the distribution.

```cpp
explicit normal_distribution(result_type mean = 0.0, result_type stddev = 1.0);
explicit normal_distribution(const param_type& parm);
```

### Parameters

*mean*\
The `mean` distribution parameter.

*stddev*\
The `stddev` distribution parameter.

*parm*\
The parameter structure used to construct the distribution.

### Remarks

**Precondition:** `0.0 < stddev`

The first constructor constructs an object whose stored `mean` value holds the value *mean* and whose stored `stddev` value holds the value *stddev*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> normal_distribution::param_type

Stores the parameters of the distribution.

```cpp
struct param_type {
   typedef normal_distribution<result_type> distribution_type;
   param_type(result_type mean = 0.0, result_type stddev = 1.0);
   result_type mean() const;
   result_type stddev() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*mean*\
The `mean` distribution parameter.

*stddev*\
The `stddev` distribution parameter.

*right*\
The `param_type` structure used to compare.

### Remarks

**Precondition:** `0.0 < stddev`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
