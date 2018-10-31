---
title: "&lt;random&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["random/std::generate_canonical"]
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords: ["std::generate_canonical"]
---
# &lt;random&gt; functions

## <a name="generate_canonical"></a>  generate_canonical

Returns a floating-point value from a random sequence.

> [!NOTE]
> The ISO C++ Standard states that this function should return values in the range [ `0`, `1`). Visual Studio is not yet compliant with this constraint. As a workaround to generate values in this range, use [uniform_real_distribution](../standard-library/uniform-real-distribution-class.md).

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### Parameters

*RealType*<br/>
The floating point integral type. For possible types, see [\<random>](../standard-library/random.md).

*Bits*<br/>
The random number generator.

*Gen*<br/>
The random number generator.

### Remarks

The template function calls `operator()` of *Gen* repeatedly and packs the returned values into a floating-point value `x` of type *RealType* until it has gathered the specified number of mantissa bits in `x`. The specified number is the smaller of *Bits* (which must be nonzero) and the full number of mantissa bits in *RealType*. The first call supplies the lowest-order bits. The function returns `x`.

## See also

[\<random>](../standard-library/random.md)<br/>
