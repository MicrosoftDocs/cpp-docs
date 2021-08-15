---
description: "Learn more about: mersenne_twister_engine Class"
title: "mersenne_twister_engine Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::mersenne_twister_engine"]
helpviewer_keywords: ["mersenne_twister_engine class"]
ms.assetid: 7ee968fa-a1cc-450f-890f-7305de062685
---
# mersenne_twister_engine Class

Generates a high quality random sequence of integers based on the Mersenne twister algorithm.

## Syntax

```cpp
template <class UIntType,
    size_t W, size_t N, size_t M, size_t R,
    UIntType A, size_t U, UIntType D, size_t S,
    UIntType B, size_t T, UIntType C, size_t L, UIntType F>
class mersenne_twister_engine;
```

### Parameters

*UIntType*\
The unsigned integer result type. For possible types, see [\<random>](../standard-library/random.md).

*W*\
**Word size**. Size of each word, in bits, of the state sequence. **Precondition**: `2u < W ≤ numeric_limits<UIntType>::digits`

*N*\
**State size**. The number of elements (values) in the state sequence.

*M*\
**Shift size**. The number of elements to skip during each twist. **Precondition**: `0 < M ≤ N`

*R*\
**Mask bits**. **Precondition**: `R ≤ W`

*A*\
**XOR mask**. **Precondition**: `A ≤ (1u<<W) - 1u`

*U*, *S*, *T*, *L*\
**Tempering shift parameters**. Used as shift values during scrambling (tempering). Precondition: `U,S,T,L ≤ W`

*D*, *B*, *C*\
**Tempering bit mask parameters**. Used as bit mask values during scrambling (tempering). Precondition: `D,B,C ≤ (1u<<W) - 1u`

*F*\
**Initialization multiplier**. Used to help with initialization of the sequence. Precondition: `F ≤ (1u<<W) - 1u`

## Members

`mersenne_twister_engine::mersenne_twister_engine`\
`mersenne_twister_engine::discard`\
`mersenne_twister_engine::max`\
`mersenne_twister_engine::min`\
`mersenne_twister_engine::operator()`\
`mersenne_twister_engine::seed`

`default_seed` is a member constant, defined as `5489u`, used as the default parameter value for `mersenne_twister_engine::seed` and the single value constructor.

For more information about engine members, see [\<random>](../standard-library/random.md).

## Remarks

This class template describes a random number engine, returning values on the closed interval [ `0`, `2`<sup>W</sup> - `1`]. It holds a large integral value with `W * (N - 1) + R` bits. It extracts *W* bits at a time from this large value, and when it has used all the bits it twists the large value by shifting and mixing the bits so that it has a new set of bits to extract from. The engine's state is the last `N` `W`-bit values used if `operator()` has been called at least *N* times, otherwise the `M` `W`-bit values that have been used and the last `N - M` values of the seed.

The generator twists the large value that it holds by using a twisted generalized feedback shift register defined by shift values *N* and *M*, a twist value *R*, and a conditional XOR-mask *A*. Additionally, the bits of the raw shift register are scrambled (tempered) according to a bit-scrambling matrix defined by values *U*, *D*, *S*, *B*, *T*, *C*, and *L*.

The template argument `UIntType` must be large enough to hold values up to `2`<sup>W</sup> - `1`. The values of the other template arguments must satisfy the following requirements: `2u < W, 0 < M, M ≤ N, R ≤ W, U ≤ W, S ≤ W, T ≤ W, L ≤ W, W ≤ numeric_limits<UIntType>::digits, A ≤ (1u<<W) - 1u, B ≤ (1u<<W) - 1u, C ≤ (1u<<W) - 1u, D ≤ (1u<<W) - 1u, and F ≤ (1u<<W) - 1u`.

Although you can construct a generator from this engine directly, it is recommended you use one of these predefined typedefs:

`mt19937`: 32-bit Mersenne twister engine (Matsumoto and Nishimura, 1998).

```cpp
typedef mersenne_twister_engine<unsigned int, 32, 624, 397,
    31, 0x9908b0df,
    11, 0xffffffff,
    7, 0x9d2c5680,
    15, 0xefc60000,
    18, 1812433253> mt19937;
```

`mt19937_64`: 64-bit Mersenne twister engine (Matsumoto and Nishimura, 2000).

```cpp
typedef mersenne_twister_engine<unsigned long long, 64, 312, 156,
    31, 0xb5026f5aa96619e9ULL,
    29, 0x5555555555555555ULL,
    17, 0x71d67fffeda60000ULL,
    37, 0xfff7eee000000000ULL,
    43, 6364136223846793005ULL> mt19937_64;
```

For detailed information about the Mersenne twister algorithm, see the Wikipedia article [Mersenne twister](https://go.microsoft.com/fwlink/p/?linkid=402356).

## Example

For a code example, see [\<random>](../standard-library/random.md).

## Requirements

**Header:** \<random>

**Namespace:** std

## See also

[\<random>](../standard-library/random.md)
