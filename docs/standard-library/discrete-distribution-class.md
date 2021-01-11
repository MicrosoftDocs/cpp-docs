---
description: "Learn more about: discrete_distribution Class"
title: "discrete_distribution Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::discrete_distribution", "random/std::discrete_distribution::reset", "random/std::discrete_distribution::probabilities", "random/std::discrete_distribution::param", "random/std::discrete_distribution::min", "random/std::discrete_distribution::max", "random/std::discrete_distribution::operator()", "random/std::discrete_distribution::param_type", "random/std::discrete_distribution::param_type::probabilities", "random/std::discrete_distribution::param_type::operator==", "random/std::discrete_distribution::param_type::operator!="]
helpviewer_keywords: ["std::discrete_distribution [C++]", "std::discrete_distribution [C++], reset", "std::discrete_distribution [C++], probabilities", "std::discrete_distribution [C++], param", "std::discrete_distribution [C++], min", "std::discrete_distribution [C++], max", "std::discrete_distribution [C++], param_type", "std::discrete_distribution [C++], param_type"]
ms.assetid: 8c8ba8f8-c06f-4f07-b354-f53950142fcf
---
# discrete_distribution Class

Generates a discrete integer distribution that has uniform-width intervals with uniform probability in each interval.

## Syntax

```cpp
template<class IntType = int>
class discrete_distribution
   {
public:
   // types
   typedef IntType result_type;
   struct param_type;

   // constructor and reset functions
   discrete_distribution();
   template <class InputIterator>
   discrete_distribution(InputIterator firstW, InputIterator lastW);
   discrete_distribution(initializer_list<double> weightlist);
   template <class UnaryOperation>
   discrete_distribution(size_t count, double xmin, double xmax, UnaryOperation funcweight);
   explicit discrete_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   vector<double> probabilities() const;
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

This sampling distribution has uniform-width intervals with uniform probability in each interval. For information about other sampling distributions, see [piecewise_linear_distribution Class](../standard-library/piecewise-linear-distribution-class.md) and [piecewise_constant_distribution Class](../standard-library/piecewise-constant-distribution-class.md).

The following table links to articles about individual members:

[discrete_distribution](#discrete_distribution)\
[param_type](#param_type)

The property function `vector<double> probabilities()` returns the individual probabilities for each integer generated.

For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).

## Example

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

void test(const int s) {

    // uncomment to use a non-deterministic generator
    // random_device rd;
    // mt19937 gen(rd());
    mt19937 gen(1701);

    discrete_distribution<> distr({ 1, 2, 3, 4, 5 });

    cout << endl;
    cout << "min() == " << distr.min() << endl;
    cout << "max() == " << distr.max() << endl;
    cout << "probabilities (value: probability):" << endl;
    vector<double> p = distr.probabilities();
    int counter = 0;
    for (const auto& n : p) {
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;
        ++counter;
    }
    cout << endl;

    // generate the distribution as a histogram
    map<int, int> histogram;
    for (int i = 0; i < s; ++i) {
        ++histogram[distr(gen)];
    }

    // print results
    cout << "Distribution for " << s << " samples:" << endl;
    for (const auto& elem : histogram) {
        cout << setw(5) << elem.first << ' ' << string(elem.second, ':') << endl;
    }
    cout << endl;
}

int main()
{
    int samples = 100;

    cout << "Use CTRL-Z to bypass data entry and run using default values." << endl;
    cout << "Enter an integer value for the sample count: ";
    cin >> samples;

    test(samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter an integer value for the sample count: 100
min() == 0
max() == 4
probabilities (value: probability):
          0:   0.0666666667
          1:   0.1333333333
          2:   0.2000000000
          3:   0.2666666667
          4:   0.3333333333

Distribution for 100 samples:
    0 :::
    1 ::::::::::::::
    2 ::::::::::::::::::
    3 :::::::::::::::::::::::::::::
    4 ::::::::::::::::::::::::::::::::::::
```

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="discrete_distribution"></a> discrete_distribution::discrete_distribution

Constructs the distribution.

```cpp
// default constructor
discrete_distribution();

// construct using a range of weights, [firstW, lastW)
template <class InputIterator>
discrete_distribution(InputIterator firstW, InputIterator lastW);

// construct using an initializer list for range of weights
discrete_distribution(initializer_list<double> weightlist);

// construct using unary operation function
template <class UnaryOperation>
discrete_distribution(size_t count, double low, double high, UnaryOperation weightfunc);

// construct from an existing param_type structure
explicit discrete_distribution(const param_type& parm);
```

### Parameters

*firstW*\
The first iterator in the list from which to construct the distribution.

*lastW*\
The last iterator in the list from which to construct the distribution (non-inclusive because iterators use an empty element for the end).

*weightlist*\
The [initializer_list](../cpp/initializers.md) from which to construct the distribution.

*count*\
The number of elements in the distribution range. If `count==0`, equivalent to the default constructor (always generates zero).

*low*\
The lowest value in the distribution range.

*high*\
The highest value in the distribution range.

*weightfunc*\
The object representing the probability function for the distribution. Both the parameter and the return value must be convertible to **`double`**.

*parm*\
The `param_type` structure used to construct the distribution.

### Remarks

The default constructor constructs an object whose stored probability value has one element with value 1. This will result in a distribution that always generates a zero.

The iterator range constructor that has parameters *firstW* and *lastW* constructs a distribution object by using weight values taken from the iterators over the interval sequence [*firstW*, *lastW*).

The initializer list constructor that has a *weightlist* parameter constructs a distribution object with weights from the initializer list *weightlist*.

The constructor that has *count*, *low*, *high*, and *weightfunc* parameters constructs a distribution object initialized based on these rules:

- If *count* < 1, **n** = 1, and as such is equivalent to the default constructor, always generating zero.
- If *count* > 0, **n** = *count*. Provided **d** = (*high* - *low*) / **n** is greater than zero, using **d** uniform subranges, each weight is assigned as follows: `weight[k] = weightfunc(x)`, where **x** = *low* + **k** * **d** + **d** / 2, for **k** = 0, ..., **n** - 1.

The constructor that has a `param_type` parameter *parm* constructs a distribution object using *parm* as the stored parameter structure.

## <a name="param_type"></a> discrete_distribution::param_type

Stores all the parameters of the distribution.

```cpp
struct param_type {
   typedef discrete_distribution<result_type> distribution_type;
   param_type();

   // construct using a range of weights, [firstW, lastW)
   template <class InputIterator>
   param_type(InputIterator firstW, InputIterator lastW);

   // construct using an initializer list for range of weights
   param_type(initializer_list<double> weightlist);

   // construct using unary operation function
   template <class UnaryOperation>
   param_type(size_t count, double low, double high, UnaryOperation weightfunc);

   std::vector<double> probabilities() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### Parameters

*firstW*\
The first iterator in the list from which to construct the distribution.

*lastW*\
The last iterator in the list from which to construct the distribution (non-inclusive because iterators use an empty element for the end).

*weightlist*\
The [initializer_list](../cpp/initializers.md) from which to construct the distribution.

*count*\
The number of elements in the distribution range. If *count* is 0, this is equivalent to the default constructor (always generates zero).

*low*\
The lowest value in the distribution range.

*high*\
The highest value in the distribution range.

*weightfunc*\
The object representing the probability function for the distribution. Both the parameter and the return value must be convertible to **`double`**.

*right*\
The `param_type` object to compare to this.

### Remarks

This parameter package can be passed to `operator()` to generate the return value.

## See also

[\<random>](../standard-library/random.md)
