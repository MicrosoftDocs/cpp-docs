---
description: "Learn more about: __check_isa_support, __check_arch_support"
title: "__check_isa_support, __check_arch_support"
ms.date: "11/07/2024"
f1_keywords: ["__check_isa_support", "__check_arch_support"]
helpviewer_keywords: ["__check_isa_support intrinsic", "__check_arch_support intrinsic"]
---
# __check_isa_support, __check_arch_support

**Microsoft Specific**

`__check_isa_support` - detects if the processor supports the specified ISA feature and AVX10 version at run time.
`__check_arch_support` - detects if the arch flag (see [`/arch` (x86)](..\build\reference\arch-x86.md), [`/arch` (x64)](..\build\reference\arch-x64.md)) supports the specified ISA feature and AVX10 version at compile time.

## Syntax

```C
_Bool __check_isa_support(
   unsigned feature,
   unsigned avx10_version
);

_Bool __check_arch_support(
   unsigned feature,
   unsigned avx10_version
);
```

```cpp
bool __check_isa_support(
   unsigned feature,
   unsigned avx10_version
);

bool __check_arch_support(
   unsigned feature,
   unsigned avx10_version
);
```

### Parameters

*feature*\
[in] ISA feature to check.

*avx10_version*\
[in] AVX10 version to check. 0 if AVX10 version check isn't required.

## Return value

`__check_isa_support` returns `true` if the processor supports `feature` and `avx10_version` at run time, `false` otherwise.
`__check_arch_support` returns `true` if the `/arch` flag supports `feature` and `avx10_version` at compile time, `false` otherwise.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__check_isa_support`|x86, x64|
|`__check_arch_support`|x86, x64|

**Header file** `<immintrin.h>`

## Remarks

The `__check_isa_support` intrinsic provides a faster alternative to the [`__cpuid`](cpuid-cpuidex.md) intrinsic to dynamically check for most frequently used CPU features. The `__check_arch_support` intrinsic provides an alternative to the [`predefined macros`](..\preprocessor\predefined-macros.md) for compile time code selection based on ISA extensions.

The following feature values can be used in these intrinsics. These values are defined in `isa_availability.h`.

|Feature Value Name|Description|
|---------------|------------------|
|`__IA_SUPPORT_VECTOR128`|Vector instructions with lengths up to 128 bits. This feature is enabled for SSE2 or later extensions|
|`__IA_SUPPORT_VECTOR256`|Vector instructions with lengths up to 256 bits. This feature is enabled for AVX2 or later extensions|
|`__IA_SUPPORT_VECTOR512`|Vector instructions with lengths up to 512 bits. This feature is enabled for AVX-512 or later extensions|
|`__IA_SUPPORT_AVX10`|AVX10 support. This feature is enabled for AVX10.1 or later extensions|
|`__IA_SUPPORT_SSE42`|SSE4.2 support|
|`__IA_SUPPORT_SV128X`|AVX-512 instructions for scalar of 128 bits. Can be used to signal that certain useful AVX-512 instruction like conversions can be used in scalar code|
|`__IA_SUPPORT_AVX10_2`|AVX10.2 support|
|`__IA_SUPPORT_APX`|APX support|
|`__IA_SUPPORT_FP16`|Half-precision floating-point instruction support|

Multiple feature values can be combined using the OR(|) operator.

The `__check_arch_support` intrinsic can always be evaluated at compile time, so using it in optimized code adds no extra instructions to execute.
Support for these intrinsics was added in Visual Studio 2022 version 17.10.

## Example

This example uses 256-bit AVX-512 instructions to vectorize conversion of double-precision values to 64-bit signed integer values. The tail loop for converting any source values not handled by the vector code is also used in case the vector code can't be executed. The compile-time support is checked before runtime support so that a runtime check can be avoided if possible.

```cpp
// Compile this test with: /EHsc /O2
#include <iostream>
#include <vector>
#include <immintrin.h>
#include <isa_availability.h>
using namespace std;

#define CHECK_INSTRUCTION_SUPPORT(a,v) \
        (__check_arch_support((a),(v)) || __check_isa_support((a),(v)))

int main()
{
    vector<double> input = {0.3, 1.4, 2.5, 3.6, 4.7, 5.8, 6.9, 8.0, 9.1, 11.14};
    vector<__int64> output(10, 0);
    int i = 0;

    if (CHECK_INSTRUCTION_SUPPORT(__IA_SUPPORT_SV128X | __IA_SUPPORT_VECTOR256, 0))
    {
        for (; i < input.size() - 4; i += 4)
        {
            __m256i values = _mm256_cvttpd_epi64(_mm256_load_pd(&input[i]));
            _mm256_storeu_epi64((void*)&output[i], values);
        }
    }
    for (; i < input.size(); i++)
    {
        output[i] = input[i];
    }

    for (i = 0; i < output.size(); i++) {
        cout << "output[" << i << "] = " << output[i] << endl;
    }
}
```

```Output
output[0] = 0
output[1] = 1
output[2] = 2
output[3] = 3
output[4] = 4
output[5] = 5
output[6] = 6
output[7] = 8
output[8] = 9
output[9] = 11
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
