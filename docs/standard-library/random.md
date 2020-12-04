---
description: "Learn more about: &lt;random&gt;"
title: "&lt;random&gt;"
ms.date: "08/24/2017"
f1_keywords: ["<random>"]
helpviewer_keywords: ["random header"]
ms.assetid: 60afc25c-b162-4811-97c1-1b65398d4c57
---
# &lt;random&gt;

Defines facilities for random number generation, allowing creation of uniformly distributed random numbers.

## Requirements

**Header**: \<random>

**Namespace:** std

> [!NOTE]
> The \<random> library uses the `#include <initializer_list>' statement.

## Summary

A *random number generator* is an object that produces a sequence of pseudo-random values. A generator that produces values that are uniformly distributed in a specified range is a *Uniform Random Number Generator* (URNG). A class template designed to function as a URNG is referred to as an *engine* if that class has certain common traits, which are discussed later in this article. A URNG can be—and usually is—combined with a *distribution* by passing the URNG as an argument to the distribution's `operator()` to produce values that are distributed in a manner that is defined by the distribution.

These links jump to the major sections of this article:

- [Examples](#code)

- [Categorized Listing](#listing)

- [Engines and Distributions](#engdist)

- [Remarks](#comments)

### Quick Tips

Here are some tips to keep in mind when using \<random>:

- For most purposes, URNGs produce raw bits that must be shaped by distributions. (A notable exception to this is [std::shuffle()](../standard-library/algorithm-functions.md#shuffle) because it uses a URNG directly.)

- A single instantiation of a URNG or distribution cannot safely be called concurrently because running a URNG or distribution is a modifying operation. For more information, see [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md).

- [Predefined typedefs](#typedefs) of several engines are provided; this is the preferred way to create a URNG if an engine is being used.

- The most useful pairing for most applications is the `mt19937` engine with `uniform_int_distribution`, as shown in the [code example](#code) later in this article.

There are many options to choose from in the \<random> header, and any of them is preferable to the outdated C Runtime function `rand()`. For information about what's wrong with `rand()` and how \<random> addresses these shortcomings, see [this video](https://go.microsoft.com/fwlink/p/?linkid=397615).

## <a name="code"></a> Examples

The following code example shows how to generate some random numbers in this case five of them using a generator created with non-deterministic seed.

```cpp
#include <random>
#include <iostream>

using namespace std;

int main()
{
    random_device rd;   // non-deterministic generator
    mt19937 gen(rd());  // to seed mersenne twister.
                        // replace the call to rd() with a
                        // constant value to get repeatable
                        // results.

    for (int i = 0; i < 5; ++i) {
        cout << gen() << " "; // print the raw output of the generator.
    }
    cout << endl;
}
```

```Output
2430338871 3531691818 2723770500 3252414483 3632920437
```

While these are high quality random numbers and different every time this program is run, they are not necessarily in a useful range. To control the range, use a uniform distribution as shown in the following code:

```cpp
#include <random>
#include <iostream>

using namespace std;

int main()
{
    random_device rd;   // non-deterministic generator
    mt19937 gen(rd());  // to seed mersenne twister.
    uniform_int_distribution<> dist(1,6); // distribute results between 1 and 6 inclusive.

    for (int i = 0; i < 5; ++i) {
        cout << dist(gen) << " "; // pass the generator to the distribution.
    }
    cout << endl;
}
```

```Output
5 1 6 1 2
```

The next code example shows a more realistic set of use cases with uniformly distributed random number generators shuffling the contents of a vector and an array.

```cpp
// cl.exe /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <functional> // ref()

using namespace std;

template <typename C> void print(const C& c) {
    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

template <class URNG>
void test(URNG& urng) {

    // Uniform distribution used with a vector
    // Distribution is [-5, 5] inclusive
    uniform_int_distribution<int> dist(-5, 5);
    vector<int> v;

    for (int i = 0; i < 20; ++i) {
        v.push_back(dist(urng));
    }

    cout << "Randomized vector: ";
    print(v);

    // Shuffle an array
    // (Notice that shuffle() takes a URNG, not a distribution)
    array<string, 26> arr = { { "H", "He", "Li", "Be", "B", "C", "N", "O", "F",
        "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc",
        "Ti", "V", "Cr", "Mn", "Fe" } };

    shuffle(arr.begin(), arr.end(), urng);

    cout << "Randomized array: ";
    print(arr);
    cout << "--" << endl;
}

int main()
{
    // First run: non-seedable, non-deterministic URNG random_device
    // Slower but crypto-secure and non-repeatable.
    random_device rd;
    cout << "Using random_device URNG:" << endl;
    test(rd);

    // Second run: simple integer seed, repeatable results
    cout << "Using constant-seed mersenne twister URNG:" << endl;
    mt19937 engine1(12345);
    test(engine1);

    // Third run: random_device as a seed, different each run
    // (Desirable for most purposes)
    cout << "Using non-deterministic-seed mersenne twister URNG:" << endl;
    mt19937 engine2(rd());
    test(engine2);

    // Fourth run: "warm-up" sequence as a seed, different each run
    // (Advanced uses, allows more than 32 bits of randomness)
    cout << "Using non-deterministic-seed \"warm-up\" sequence mersenne twister URNG:" << endl;
    array<unsigned int, mt19937::state_size> seed_data;
    generate_n(seed_data.begin(), seed_data.size(), ref(rd));
    seed_seq seq(begin(seed_data), end(seed_data));
    mt19937 engine3(seq);
    test(engine3);
}
```

```Output
Using random_device URNG:
Randomized vector: 5 -4 2 3 0 5 -2 0 4 2 -1 2 -4 -3 1 4 4 1 2 -2
Randomized array: O Li V K C Ti N Mg Ne Sc Cl B Cr Mn Ca Al F P Na Be Si Ar Fe S He H
--
Using constant-seed mersenne twister URNG:
Randomized vector: 3 -1 -5 0 0 5 3 -4 -3 -4 1 -3 0 -3 -2 -4 5 1 -1 -1
Randomized array: Al O Ne Si Na Be C N Cr Mn H V F Sc Mg Fe K Ca S Ti B P Ar Cl Li He
--
Using non-deterministic-seed mersenne twister URNG:
Randomized vector: 5 -4 0 2 1 -2 4 4 -4 0 0 4 -5 4 -5 -1 -3 0 0 3
Randomized array: Si Fe Al Ar Na P B Sc H F Mg Li C Ti He N Mn Be O Ca Cr V K Ne Cl S
--
Using non-deterministic-seed "warm-up" sequence mersenne twister URNG:
Randomized vector: -1 3 -2 4 1 3 0 -5 5 -5 0 0 5 0 -3 3 -4 2 5 0
Randomized array: Si C Sc H Na O S Cr K Li Al Ti Cl B Mn He Fe Ne Be Ar V P Ca N Mg F
--
```

This code demonstrates two different randomizations—randomize a vector of integers and shuffle an array of indexed data—with a test template function. The first call to the test function uses the crypto-secure, non-deterministic, not-seedable, non-repeatable URNG `random_device`. The second test run uses `mersenne_twister_engine` as URNG, with a deterministic 32-bit constant seed, which means the results are repeatable. The third test run seeds `mersenne_twister_engine` with a 32-bit non-deterministic result from `random_device`. The fourth test run expands on this by using a [seed sequence](../standard-library/seed-seq-class.md) filled with `random_device` results, which effectively gives more than 32-bit non-deterministic randomness (but still not crypto-secure). For more information, read on.

## <a name="listing"></a> Categorized Listing

### <a name="urngs"></a> Uniform Random Number Generators

URNGs are often described in terms of these properties:

1. **Period length**: How many iterations it takes to repeat the sequence of numbers generated. The longer the better.

2. **Performance**: How quickly numbers can be generated and how much memory it takes. The smaller the better.

3. **Quality**: How close to true random numbers the generated sequence is. This is often called "*randomness*".

The following sections list the uniform random number generators (URNGs) provided in the \<random> header.

#### <a name="rd"></a> Non-Deterministic Generator

[random_device Class](../standard-library/random-device-class.md)\
Generates a non-deterministic, cryptographically secure random sequence by using an external device. Usually used to seed an engine. Low performance, very high quality. For more information, see [Remarks](#comments).

#### <a name="typedefs"></a> Engine Typedefs with Predefined Parameters

For instantiating engines and engine adaptors. For more information, see [Engines and Distributions](#engdist).

- `default_random_engine` The default engine.

    ```cpp
    typedef mt19937 default_random_engine;
    ```

- `knuth_b` Knuth engine.

    ```cpp
    typedef shuffle_order_engine<minstd_rand0, 256> knuth_b;
    ```

- `minstd_rand0` 1988 minimal standard engine (Lewis, Goodman, and Miller, 1969).

    ```cpp
    typedef linear_congruential_engine<unsigned int, 16807, 0, 2147483647> minstd_rand0;
    ```

- `minstd_rand` Updated minimal standard engine `minstd_rand0` (Park, Miller, and Stockmeyer, 1993).

    ```cpp
    typedef linear_congruential_engine<unsigned int, 48271, 0, 2147483647> minstd_rand;
    ```

- `mt19937` 32-bit Mersenne twister engine (Matsumoto and Nishimura, 1998).

    ```cpp
    typedef mersenne_twister_engine<
        unsigned int, 32, 624, 397,
        31, 0x9908b0df,
        11, 0xffffffff,
        7, 0x9d2c5680,
        15, 0xefc60000,
        18, 1812433253> mt19937;
    ```

- `mt19937_64` 64-bit Mersenne twister engine (Matsumoto and Nishimura, 2000).

    ```cpp
    typedef mersenne_twister_engine<
        unsigned long long, 64, 312, 156,
        31, 0xb5026f5aa96619e9ULL,
        29, 0x5555555555555555ULL,
        17, 0x71d67fffeda60000ULL,
        37, 0xfff7eee000000000ULL,
        43, 6364136223846793005ULL> mt19937_64;
    ```

- `ranlux24` 24-bit RANLUX engine (Martin Lüscher and Fred James, 1994).

    ```cpp
    typedef discard_block_engine<ranlux24_base, 223, 23> ranlux24;
    ```

- `ranlux24_base` Used as a base for `ranlux24`.

    ```cpp
    typedef subtract_with_carry_engine<unsigned int, 24, 10, 24> ranlux24_base;
    ```

- `ranlux48` 48-bit RANLUX engine (Martin Lüscher and Fred James, 1994).

    ```cpp
    typedef discard_block_engine<ranlux48_base, 389, 11> ranlux48;
    ```

- `ranlux48_base` Used as a base for `ranlux48`.

    ```cpp
    typedef subtract_with_carry_engine<unsigned long long, 48, 5, 12> ranlux48_base;
    ```

#### <a name="eng"></a> Engine Templates

Engine templates are used as standalone URNGs or as base engines passed to [engine adaptors](#engadapt). Usually these are instantiated with a [predefined engine typedef](#typedefs) and passed to a [distribution](#distributions). For more information, see the [Engines and Distributions](#engdist) section.

|Name|Description|
|-|-|
|[linear_congruential_engine Class](../standard-library/linear-congruential-engine-class.md)|Generates a random sequence by using the linear congruential algorithm. Most simplistic and lowest quality.|
|[mersenne_twister_engine Class](../standard-library/mersenne-twister-engine-class.md)|Generates a random sequence by using the Mersenne twister algorithm. Most complex, and is highest quality except for the random_device class. Very fast performance.|
|[subtract_with_carry_engine Class](../standard-library/subtract-with-carry-engine-class.md)|Generates a random sequence by using the subtract-with-carry algorithm. An improvement on `linear_congruential_engine`, but much lower quality and performance than `mersenne_twister_engine`.|

#### <a name="engadapt"></a> Engine Adaptor Templates

Engine adaptors are templates that adapt other (base) engines. Usually these are instantiated with a [predefined engine typedef](#typedefs) and passed to a [distribution](#distributions). For more information, see the [Engines and Distributions](#engdist) section.

|Name|Description|
|-|-|
|[discard_block_engine Class](../standard-library/discard-block-engine-class.md)|Generates a random sequence by discarding values returned by its base engine.|
|[independent_bits_engine Class](../standard-library/independent-bits-engine-class.md)|Generates a random sequence with a specified number of bits by repacking bits from the values returned by its base engine.|
|[shuffle_order_engine Class](../standard-library/shuffle-order-engine-class.md)|Generates a random sequence by reordering the values returned from its base engine.|

[[Engine Templates](#eng)]

### <a name="distributions"></a> Random Number Distributions

The following sections list the distributions provided in the \<random> header. Distributions are a post-processing mechanism, usually using URNG output as input and distributing the output by a defined statistical probability density function. For more information, see the [Engines and Distributions](#engdist) section.

#### Uniform Distributions

|Name|Description|
|-|-|
|[uniform_int_distribution Class](../standard-library/uniform-int-distribution-class.md)|Produces a uniform integer value distribution across a range in the closed interval \[a, b] (inclusive-inclusive).|
|[uniform_real_distribution Class](../standard-library/uniform-real-distribution-class.md)|Produces a uniform real (floating-point) value distribution across a range in the half-open interval [a, b) (inclusive-exclusive).|
|[generate_canonical](../standard-library/random-functions.md#generate_canonical)|Produces an even distribution of real (floating point) values of a given precision across [0, 1) (inclusive-exclusive).|

[[Random Number Distributions](#distributions)]

#### Bernoulli Distributions

|Name|Description|
|-|-|
|[bernoulli_distribution Class](../standard-library/bernoulli-distribution-class.md)|Produces a Bernoulli distribution of **`bool`** values.|
|[binomial_distribution Class](../standard-library/binomial-distribution-class.md)|Produces a binomial distribution of integer values.|
|[geometric_distribution Class](../standard-library/geometric-distribution-class.md)|Produces a geometric distribution of integer values.|
|[negative_binomial_distribution Class](../standard-library/negative-binomial-distribution-class.md)|Produces a negative binomial distribution of integer values.|

[[Random Number Distributions](#distributions)]

#### Normal Distributions

|Name|Description|
|-|-|
|[cauchy_distribution Class](../standard-library/cauchy-distribution-class.md)|Produces a Cauchy distribution of real (floating point) values.|
|[chi_squared_distribution Class](../standard-library/chi-squared-distribution-class.md)|Produces a chi-squared distribution of real (floating point) values.|
|[fisher_f_distribution Class](../standard-library/fisher-f-distribution-class.md)|Produces an F-distribution (also known as Snedecor's F distribution or the Fisher-Snedecor distribution) of real (floating point) values.|
|[lognormal_distribution Class](../standard-library/lognormal-distribution-class.md)|Produces a log-normal distribution of real (floating point) values.|
|[normal_distribution Class](../standard-library/normal-distribution-class.md)|Produces a normal (Gaussian) distribution of real (floating point) values.|
|[student_t_distribution Class](../standard-library/student-t-distribution-class.md)|Produces a Student's *t*-distribution of real (floating point) values.|

[[Random Number Distributions](#distributions)]

#### Poisson Distributions

|Name|Description|
|-|-|
|[exponential_distribution Class](../standard-library/exponential-distribution-class.md)|Produces an exponential distribution of real (floating point) values.|
|[extreme_value_distribution Class](../standard-library/extreme-value-distribution-class.md)|Produces an extreme value distribution of real (floating point) values.|
|[gamma_distribution Class](../standard-library/gamma-distribution-class.md)|Produces a gamma distribution of real (floating point) values.|
|[poisson_distribution Class](../standard-library/poisson-distribution-class.md)|Produces a Poisson distribution of integer values.|
|[weibull_distribution Class](../standard-library/weibull-distribution-class.md)|Produces a Weibull distribution of real (floating point) values.|

[[Random Number Distributions](#distributions)]

#### Sampling Distributions

|Name|Description|
|-|-|
|[discrete_distribution Class](../standard-library/discrete-distribution-class.md)|Produces a discrete integer distribution.|
|[piecewise_constant_distribution Class](../standard-library/piecewise-constant-distribution-class.md)|Produces a piecewise constant distribution of real (floating point) values.|
|[piecewise_linear_distribution Class](../standard-library/piecewise-linear-distribution-class.md)|Produces a piecewise linear distribution of real (floating point) values.|

[[Random Number Distributions](#distributions)]

### Utility Functions

This section lists the general utility functions provided in the \<random> header.

|Name|Description|
|-|-|
|[seed_seq Class](../standard-library/seed-seq-class.md)|Generates a non-biased scrambled seed sequence. Used to avoid replication of random variate streams. Useful when many URNGs are instantiated from engines.|

### Operators

This section lists the operators provided in the \<random> header.

|Name|Description|
|-|-|
|`operator==`|Tests whether the URNG on the left side of the operator is equal to the engine on the right side.|
|`operator!=`|Tests whether the URNG on the left side of the operator is not equal to the engine on the right side.|
|`operator<<`|Writes state information to a stream.|
|`operator>>`|Extracts state information from a stream.|

## <a name="engdist"></a> Engines and Distributions

Refer to the following sections for information about each of these class template categories defined in \<random>. Both of these class template categories take a type as an argument and use shared template parameter names to describe the properties of the type that are permitted as an actual argument type, as follows:

- `IntType` indicates a **`short`**, **`int`**, **`long`**, **`long long`**, **`unsigned short`**, **`unsigned int`**, **`unsigned long`**, or **`unsigned long long`**.

- `UIntType` indicates **`unsigned short`**, **`unsigned int`**, **`unsigned long`**, or **`unsigned long long`**.

- `RealType` indicates a **`float`**, **`double`**, or **`long double`**.

### Engines

[Engine Templates](#eng) and [Engine Adaptor Templates](#engadapt) are templates whose parameters customize the generator created.

An *engine* is a class or class template whose instances (generators) act as a source of random numbers uniformly distributed between a minimum and maximum value. An *engine adaptor* delivers a sequence of values that have different randomness properties by taking values produced by some other random number engine and applying an algorithm of some kind to those values.

Every engine and engine adaptor has the following members:

- **`typedef`** `numeric-type` `result_type` is the type that is returned by the generator's `operator()`. The `numeric-type` is passed as a template parameter on instantiation.

- `result_type operator()` returns values that are uniformly distributed between `min()` and `max()`.

- `result_type min()` returns the minimum value that is returned by the generator's `operator()`. Engine adaptors use the base engine's `min()` result.

- `result_type max()` returns the maximum value that is returned by the generator's `operator()`. When `result_type` is an integral (integer-valued) type, `max()` is the maximum value that can actually be returned (inclusive); when `result_type` is a floating-point (real-valued) type, `max()` is the smallest value greater than all values that can be returned (non-inclusive). Engine adaptors use the base engine's `max()` result.

- `void seed(result_type s)` seeds the generator with seed value `s`. For engines, the signature is `void seed(result_type s = default_seed)` for default parameter support (engine adaptors define a separate `void seed()`, see next subsection).

- `template <class Seq> void seed(Seq& q)` seeds the generator by using a [seed_seq](../standard-library/seed-seq-class.md)`Seq`.

- An explicit constructor with argument `result_type x` that creates a generator seeded as if by calling `seed(x)`.

- An explicit constructor with argument `seed_seq& seq` that creates a generator seeded as if by calling `seed(seq)`.

- `void discard(unsigned long long count)` effectively calls `operator()` `count` times and discards each value.

**Engine adaptors** additionally support these members (`Engine` is the first template parameter of an engine adaptor, designating the base engine's type):

- A default constructor to initialize the generator as if from the base engine's default constructor.

- An explicit constructor with argument `const Engine& eng`. This is to support copy construction using the base engine.

- An explicit constructor with argument `Engine&& eng`. This is to support move construction using the base engine.

- `void seed()` that initializes the generator with the base engine's default seed value.

- `const Engine& base()` property function that returns the base engine that was used to construct the generator.

Every engine maintains a *state* that determines the sequence of values that will be generated by subsequent calls to `operator()`. The states of two generators instantiated from engines of the same type can be compared by using `operator==` and `operator!=`. If the two states compare as equal, they will generate the same sequence of values. The state of an object can be saved to a stream as a sequence of 32-bit unsigned values by using the `operator<<` of the generator. The state is not changed by saving it. A saved state can be read into generator instantiated from an engine of the same type by using `operator>>`.

### Distributions

A [Random Number Distributions](#distributions) is a class or class template whose instances transform a stream of uniformly distributed random numbers obtained from an engine into a stream of random numbers that have a particular distribution. Every distribution has the following members:

- **`typedef`** `numeric-type` `result_type` is the type that is returned by the distribution's `operator()`. The `numeric-type` is passed as a template parameter on instantiation.

- `template <class URNG> result_type operator()(URNG& gen)` returns values that are distributed according to the distribution's definition, by using `gen` as a source of uniformly distributed random values and the stored *parameters of the distribution*.

- `template <class URNG> result_type operator()(URNG& gen, param_type p)` returns values distributed in accordance with the distribution's definition, using `gen` as a source of uniformly distributed random values and the parameters structure `p`.

- **`typedef`** `unspecified-type` `param_type` is the package of parameters optionally passed to `operator()` and is used in place of the stored parameters to generate its return value.

- A `const param&` constructor initializes the stored parameters from its argument.

- `param_type param() const` gets the stored parameters.

- `void param(const param_type&)` sets the stored parameters from its argument.

- `result_type min()` returns the minimum value that is returned by the distribution's `operator()`.

- `result_type max()` returns the maximum value that is returned by the distribution's `operator()`. When `result_type` is an integral (integer-valued) type, `max()` is the maximum value that can actually be returned (inclusive); when `result_type` is a floating-point (real-valued) type, `max()` is the smallest value greater than all values that can be returned (non-inclusive).

- `void reset()` discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.

A parameter structure is an object that stores all of the parameters needed for a distribution. It contains:

- **`typedef`** `distribution-type` `distribution_type`, which is the type of its distribution.

- One or more constructors that take the same parameter lists as the distribution constructors take.

- The same parameter-access functions as the distribution.

- Equality and inequality comparison operators.

For more information, see the reference subtopics below this one, linked previously in this article.

## <a name="comments"></a> Remarks

There are two highly useful URNGs in Visual Studio—`mt19937` and `random_device`—as shown in this comparison table:

|URNG|Fast|Crypto-secure|Seedable|Deterministic|
|----------|-----------|---------------------|---------------|--------------------|
|`mt19937`|Yes|No|Yes|Yes<sup>*</sup>|
|`random_device`|No|Yes|No|No|

<sup>* When provided with a known seed.</sup>

Although the ISO C++ Standard does not require `random_device` to be cryptographically secure, in Visual Studio it is implemented to be cryptographically secure. (The term "cryptographically secure" does not imply guarantees, but refers to a minimum level of entropy—and therefore, the level of predictability—a given randomization algorithm provides. For more information, see the Wikipedia article [Cryptographically secure pseudorandom number generator](https://go.microsoft.com/fwlink/p/?linkid=398017).) Because the ISO C++ Standard does not require this, other platforms may implement `random_device` as a simple pseudo-random number generator (not cryptographically secure) and may only be suitable as a seed source for another generator. Check the documentation for those platforms when using `random_device` in cross-platform code.

By definition, `random_device` results are not reproducible, and a side-effect is that it may run significantly slower than other URNGs. Most applications that are not required to be cryptographically secure use `mt19937` or a similar engine, although you may want to seed it with a call to `random_device`, as shown in the [code example](#code).

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
