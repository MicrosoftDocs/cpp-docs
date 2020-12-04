---
description: "Learn more about: &lt;random&gt; functions"
title: "&lt;random&gt; functions"
ms.date: "09/04/2019"
f1_keywords: ["random/std::generate_canonical"]
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords: ["std::generate_canonical"]
---
# &lt;random&gt; functions

## <a name="generate_canonical"></a> generate_canonical

Returns a floating-point value from a random sequence.

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### Parameters

*RealType*\
The floating point integral type. For possible types, see [\<random>](../standard-library/random.md).

*Bits*\
The number of bits of randomness to use.

*Generator*\
A random number generator class.

*Gen*\
A reference to an instance of a random number generator of type *Generator*.

### Remarks

The template function calls `operator()` of *Gen* repeatedly and packs the returned values into a floating-point value `x` of type *RealType* until it has gathered the specified number of mantissa bits in `x`. The specified number is the smaller of *Bits* (which must be nonzero) and the full number of mantissa bits in *RealType*. The first call supplies the lowest-order bits. The function returns `x`.
