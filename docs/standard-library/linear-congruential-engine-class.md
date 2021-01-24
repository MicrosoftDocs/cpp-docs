---
description: "Learn more about: linear_congruential_engine Class"
title: "linear_congruential_engine Class"
ms.date: "11/04/2016"
f1_keywords: ["random/std::linear_congruential_engine"]
helpviewer_keywords: ["linear_congruential_engine class"]
ms.assetid: 30e00ca6-1933-4701-9561-54f3e810a5a1
---
# linear_congruential_engine Class

Generates a random sequence by the linear congruential algorithm.

## Syntax

```cpp
class linear_congruential_engine{
   public:  // types
   typedef UIntType result_type;
   // engine characteristics
   static constexpr result_type multiplier = a;
   static constexpr result_type increment = c;
   static constexpr result_type modulus = m;
   static constexpr result_type min() { return c == 0u  1u: 0u; }
   static constexpr result_type max() { return m - 1u; }
   static constexpr result_type default_seed = 1u;
   // constructors and seeding functions
   explicit linear_congruential_engine(result_type s = default_seed);
   template <class Sseq>
   explicit linear_congruential_engine(Sseq& q);
   void seed(result_type s = default_seed);
   template <class Sseq>
   void seed(Sseq& q);
   // generating functions
   result_type operator()();
   void discard(unsigned long long z);
   };
```

### Parameters

*UIntType*\
The unsigned integer result type. For possible types, see [\<random>](../standard-library/random.md).

*A*\
**Multiplier**. **Precondition**: See Remarks section.

*C*\
**Increment**. **Precondition**: See Remarks section.

*M*\
**Modulus**. **Precondition**: See remarks.

## Members

`linear_congruential_engine::linear_congruential_engine`
`linear_congruential_engine::discard`\
`linear_congruential_engine::max`\
`linear_congruential_engine::min`\
`linear_congruential_engine::operator()`\
`linear_congruential_engine::seed`

`default_seed` is a member constant, defined as `1u`, used as the default parameter value for `linear_congruential_engine::seed` and the single value constructor.

For more information about engine members, see [\<random>](../standard-library/random.md).

## Remarks

The `linear_congruential_engine` class template is the simplest generator engine, but not the fastest or highest quality. An improvement over this engine is the [substract_with_carry_engine](../standard-library/subtract-with-carry-engine-class.md). Neither of these engines is as fast or with as high quality results as the [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md).

This engine produces values of a user-specified unsigned integral type using the recurrence relation ( *period*) `x(i) = (A * x(i-1) + C) mod M`.

If *M* is zero, the value used for this modulus operation is `numeric_limits<result_type>::max() + 1`. The engine's state is the last value returned, or the seed value if no call has been made to `operator()`.

If *M* is not zero, the values of the template arguments *A* and *C* must be less than *M*.

Although you can construct a generator from this engine directly, you can also use one of these predefined typedefs.

`minstd_rand0`: 1988 minimal standard engine (Lewis, Goodman, and Miller, 1969).

```cpp
typedef linear_congruential_engine<unsigned int, 16807, 0, 2147483647> minstd_rand0;
```

`minstd_rand`: Updated minimal standard engine `minstd_rand0` (Park, Miller, and Stockmeyer, 1993).

```cpp
typedef linear_congruential_engine<unsigned int, 48271, 0, 2147483647> minstd_rand;
```

For detailed information about the linear congruential engine algorithm, see the Wikipedia article [Linear congruential generator](https://go.microsoft.com/fwlink/p/?linkid=402446).

## Requirements

**Header:** \<random>

**Namespace:** std

## See also

[\<random>](../standard-library/random.md)
