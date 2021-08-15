---
description: "Learn more about: uniform_real_distribution Class"
title: "uniform_real_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::uniform_real_distribution", "random/std::uniform_real_distribution::reset", "random/std::uniform_real_distribution::a", "random/std::uniform_real_distribution::b", "random/std::uniform_real_distribution::param", "random/std::uniform_real_distribution::min", "random/std::uniform_real_distribution::max", "random/std::uniform_real_distribution::operator()", "random/std::uniform_real_distribution::param_type", "random/std::uniform_real_distribution::param_type::a", "random/std::uniform_real_distribution::param_type::b", "random/std::uniform_real_distribution::param_type::operator==", "random/std::uniform_real_distribution::param_type::operator!="]
helpviewer_keywords: ["std::uniform_real_distribution [C++]", "std::uniform_real_distribution [C++], reset", "std::uniform_real_distribution [C++], a", "std::uniform_real_distribution [C++], b", "std::uniform_real_distribution [C++], param", "std::uniform_real_distribution [C++], min", "std::uniform_real_distribution [C++], max", "std::uniform_real_distribution [C++], param_type", "std::uniform_real_distribution [C++], param_type"]
ms.assetid: 5cf906fd-0319-4984-b21b-98425cd7532d
---
# uniform_real_distribution Class

Generates a uniform (every value is equally probable) floating-point distribution within an output range that is inclusive-exclusive.

## Syntax

```cpp
template<class RealType = double>
   class uniform_real_distribution {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructors and reset functions
   explicit uniform_real_distribution(
      result_type a = 0.0, result_type b = 1.0);
   explicit uniform_real_distribution(const param_type& parm);
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

The class template describes an inclusive-exclusive distribution that produces values of a user-specified integral floating point type with a distribution so that every value is equally probable. The following table links to articles about individual members.

[uniform_real_distribution](#uniform_real_distribution)\
[param_type](#param_type)|

The property member `a()` returns the currently stored minimum bound of the distribution, while `b()` returns the currently stored maximum bound. For this distribution class, these minimum and maximum values are the same as those returned by the common property functions `min()` and `max()` described in the [\<random>](../standard-library/random.md) topic.

The property member `param()` sets or returns the `param_type` stored distribution parameter package.

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.

The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

## Example

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double a, const double b, const int s) {

    // uncomment to use a non-deterministic seed
    //    std::random_device rd;
    //    std::mt19937 gen(rd());
    std::mt19937 gen(1729);

    std::uniform_real_distribution<> distr(a,b);

    std::cout << "lower bound == " << distr.a() << std::endl;
    std::cout << "upper bound == " << distr.b() << std::endl;

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
            << std::setprecision(10) << elem.first << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    double a_dist = 1.0;
    double b_dist = 1.5;

    int samples = 10;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a floating point value for the lower bound of the distribution: ";
    std::cin >> a_dist;
    std::cout << "Enter a floating point value for the upper bound of the distribution: ";
    std::cin >> b_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(a_dist, b_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the lower bound of the distribution: 0
Enter a floating point value for the upper bound of the distribution: 1
Enter an integer value for the sample count: 10
lower bound == 0
upper bound == 1
Distribution for 10 samples:
          1: 0.0288609485
          2: 0.2007994386
          3: 0.3027480117
          4: 0.4124758695
          5: 0.4413777133
          6: 0.4846447405
          7: 0.6225745916
          8: 0.6880935217
          9: 0.7541936723
         10: 0.8795716566
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="uniform_real_distribution"></a> uniform_real_distribution::uniform_real_distribution

Constructs the distribution.

```cpp
explicit uniform_real_distribution(result_type a = 0.0, result_type b = 1.0);
explicit uniform_real_distribution(const param_type& parm);
```

### Parameters

*a*\
The lower bound for random values, inclusive.

*b*\
The upper bound for random values, exclusive.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

**Precondition:** `a < b`

The first constructor constructs an object whose stored *a* value holds the value *a* and whose stored *b* value holds the value *b*.

The second constructor constructs an object whose stored parameters are initialized from *parm*. You can obtain and set the current parameters of an existing distribution by calling the `param()` member function.

## <a name="param_type"></a> uniform_real_distribution::param_type

Stores all the parameters of the distribution.

```cpp
struct param_type {
   typedef uniform_real_distribution<result_type> distribution_type;
   param_type(result_type a = 0.0, result_type b = 1.0);
   result_type a() const;
   result_type b() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*a*\
The lower bound for random values, inclusive.

*b*\
The upper bound for random values, exclusive.

*right*\
The `param_type` object to compare to this.

### Remarks

**Precondition:** `a < b`

This structure can be passed to the distribution's class constructor at instantiation, to the `param()` member function to set the stored parameters of an existing distribution, and to `operator()` to be used in place of the stored parameters.

## See also

[\<random>](../standard-library/random.md)
