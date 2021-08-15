---
description: "Learn more about: random_device Class"
title: "random_device Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::random_device", "random/std::random_device::min", "random/std::random_device::max", "random/std::random_device::entropy", "random/std::random_device::operator()"]
helpviewer_keywords: ["std::random_device [C++]", "std::random_device [C++], min", "std::random_device [C++], max", "std::random_device [C++], entropy", "std::random_device [C++], entropy"]
ms.assetid: 4393d515-0cb6-4e0d-a2ba-c780f05dc1bf
---
# random_device Class

Generates a random sequence from an external device.

## Syntax

```cpp
class random_device {
public:
   typedef unsigned int result_type;

   // constructor
   explicit random_device(const std::string& token = "");

   // properties
   static result_type min();
   static result_type max();
   double entropy() const;

   // generate
   result_type operator()();

   // no-copy functions
   random_device(const random_device&) = delete;
   void operator=(const random_device&) = delete;
   };
```

## Members

[random_device](#random_device)\
[entropy](#entropy)\
[random_device::operator()](#op_call)

## Remarks

The class describes a source of random numbers, and is allowed but not required to be non-deterministic or cryptographically secure by the ISO C++ Standard. In the Visual Studio implementation the values produced are non-deterministic and cryptographically secure, but runs more slowly than generators created from engines and engine adaptors (such as [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md), the high quality and fast engine of choice for most applications).

`random_device` results are uniformly distributed in the closed range [ `0, 2`<sup>32</sup>).

`random_device` is not guaranteed to result in a non-blocking call.

Generally, `random_device` is used to seed other generators created with engines or engine adaptors. For more information, see [\<random>](../standard-library/random.md).

## Example

The following code demonstrates basic functionality of this class and example results. Because of the non-deterministic nature of `random_device`, the random values shown in the **Output** section will not match your results. This is normal and expected.

```cpp
// random_device_engine.cpp
// cl.exe /W4 /nologo /EHsc /MTd
#include <random>
#include <iostream>
using namespace std;

int main()
{
    random_device gen;

    cout << "entropy == " << gen.entropy() << endl;
    cout << "min == " << gen.min() << endl;
    cout << "max == " << gen.max() << endl;

    cout << "a random value == " << gen() << endl;
    cout << "a random value == " << gen() << endl;
    cout << "a random value == " << gen() << endl;
}
```

```Output
entropy == 32
min == 0
max == 4294967295
a random value == 2378414971
a random value == 3633694716
a random value == 213725214
```

This example is simplistic and not representative of the general use-case for this generator. For a more representative code example, see [\<random>](../standard-library/random.md).

## Requirements

**Header:** \<random>

**Namespace:** std

## <a name="random_device"></a> random_device::random_device

Constructs the generator.

```cpp
random_device(const std::string& = "");
```

### Remarks

The constructor initializes the generator as needed, ignoring the string parameter. Throws a value of an implementation-defined type derived from [exception](../standard-library/exception-class.md) if the `random_device` could not be initialized.

## <a name="entropy"></a> random_device::entropy

Estimates the randomness of the source.

```cpp
double entropy() const noexcept;
```

### Remarks

The member function returns an estimate of the randomness of the source, as measured in bits.

## <a name="op_call"></a> random_device::operator()

Returns a random value.

```cpp
result_type operator()();
```

### Remarks

Returns values uniformly distributed in the closed interval [ `min, max`] as determined by member functions `min()` and `max()`. Throws a value of an implementation-defined type derived from [exception](../standard-library/exception-class.md) if a random number could not be obtained.

## See also

[\<random>](../standard-library/random.md)
