---
description: "Learn more about: Intrinsics available on all architectures"
title: "Intrinsics available on all architectures"
ms.date: "09/02/2019"
helpviewer_keywords: ["cl.exe compiler, intrinsics"]
ms.assetid: 1fe3958e-d2fe-4188-8e34-5896738246eb
---
# Intrinsics available on all architectures

The Microsoft C/C++ compiler and the Universal C Runtime Library (UCRT) make some intrinsics available on all architectures.

## Compiler intrinsics

The following intrinsics are available with the x86, AMD64, ARM, and ARM64 architectures:

|Intrinsic|Header|
|---------------|------------|
|[_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)|intrin.h|
|[_BitScanForward](../intrinsics/bitscanforward-bitscanforward64.md)|intrin.h|
|[_BitScanReverse](../intrinsics/bitscanreverse-bitscanreverse64.md)|intrin.h|
|[_bittest](../intrinsics/bittest-bittest64.md)|intrin.h|
|[_bittestandcomplement](../intrinsics/bittestandcomplement-bittestandcomplement64.md)|intrin.h|
|[_bittestandreset](../intrinsics/bittestandreset-bittestandreset64.md)|intrin.h|
|[_bittestandset](../intrinsics/bittestandset-bittestandset64.md)|intrin.h|
|__code_seg|intrin.h|
|[__debugbreak](../intrinsics/debugbreak.md)|intrin.h|
|[_disable](../intrinsics/disable.md)|intrin.h|
|[_enable](../intrinsics/enable.md)|intrin.h|
|[__fastfail](../intrinsics/fastfail.md)|intrin.h|
|[_InterlockedAnd](../intrinsics/interlockedand-intrinsic-functions.md)|intrin.h|
|[_InterlockedAnd16](../intrinsics/interlockedand-intrinsic-functions.md)|intrin.h|
|[_InterlockedAnd8](../intrinsics/interlockedand-intrinsic-functions.md)|intrin.h|
|[_interlockedbittestandreset](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)|intrin.h|
|[_interlockedbittestandset](../intrinsics/interlockedbittestandset-intrinsic-functions.md)|intrin.h|
|[_InterlockedCompareExchange](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|intrin.h|
|[_InterlockedCompareExchange16](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|intrin.h|
|[_InterlockedCompareExchange8](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|intrin.h|
|[_InterlockedCompareExchangePointer](../intrinsics/interlockedcompareexchangepointer-intrinsic-functions.md)|intrin.h|
|[_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md)|intrin.h|
|[_InterlockedDecrement16](../intrinsics/interlockeddecrement-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchange](../intrinsics/interlockedexchange-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchange16](../intrinsics/interlockedexchange-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchange8](../intrinsics/interlockedexchange-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchangeAdd](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchangeAdd16](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchangeAdd8](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|intrin.h|
|[_InterlockedExchangePointer](../intrinsics/interlockedexchangepointer-intrinsic-functions.md)|intrin.h|
|[_InterlockedIncrement](../intrinsics/interlockedincrement-intrinsic-functions.md)|intrin.h|
|[_InterlockedIncrement16](../intrinsics/interlockedincrement-intrinsic-functions.md)|intrin.h|
|[_InterlockedOr](../intrinsics/interlockedor-intrinsic-functions.md)|intrin.h|
|[_InterlockedOr16](../intrinsics/interlockedor-intrinsic-functions.md)|intrin.h|
|[_InterlockedOr8](../intrinsics/interlockedor-intrinsic-functions.md)|intrin.h|
|[_InterlockedXor](../intrinsics/interlockedxor-intrinsic-functions.md)|intrin.h|
|[_InterlockedXor16](../intrinsics/interlockedxor-intrinsic-functions.md)|intrin.h|
|[_InterlockedXor8](../intrinsics/interlockedxor-intrinsic-functions.md)|intrin.h|
|[__nop](../intrinsics/nop.md)|intrin.h|
|[_ReadBarrier](../intrinsics/readbarrier.md)|intrin.h|
|[_ReadWriteBarrier](../intrinsics/readwritebarrier.md)|intrin.h|
|[_ReturnAddress](../intrinsics/returnaddress.md)|intrin.h|
|[_rotl16](../intrinsics/rotl8-rotl16.md)|intrin.h|
|[_rotl8](../intrinsics/rotl8-rotl16.md)|intrin.h|
|[_rotr16](../intrinsics/rotr8-rotr16.md)|intrin.h|
|[_rotr8](../intrinsics/rotr8-rotr16.md)|intrin.h|
|[_WriteBarrier](../intrinsics/writebarrier.md)|intrin.h|

## UCRT intrinsics

The following UCRT functions have intrinsic forms on all architectures:

|Intrinsic|Header|
|---------------|------------|
|[abs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|stdlib.h|
|[_abs64](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|stdlib.h|
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|math.h|
|[acosf](../c-runtime-library/reference/acos-acosf-acosl.md)|math.h|
|[acosl](../c-runtime-library/reference/acos-acosf-acosl.md)|math.h|
|[_alloca](../c-runtime-library/reference/alloca.md)|malloc.h|
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|math.h|
|[asinf](../c-runtime-library/reference/asin-asinf-asinl.md)|math.h|
|[asinl](../c-runtime-library/reference/asin-asinf-asinl.md)|math.h|
|[atan](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|math.h|
|[atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|math.h|
|[atan2f](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|math.h|
|[atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|math.h|
|[atanf](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|math.h|
|[atanl](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|math.h|
|[_byteswap_uint64](../c-runtime-library/reference/byteswap-uint64-byteswap-ulong-byteswap-ushort.md)|stdlib.h|
|[_byteswap_ulong](../c-runtime-library/reference/byteswap-uint64-byteswap-ulong-byteswap-ushort.md)|stdlib.h|
|[_byteswap_ushort](../c-runtime-library/reference/byteswap-uint64-byteswap-ulong-byteswap-ushort.md)|stdlib.h|
|[ceil](../c-runtime-library/reference/ceil-ceilf-ceill.md)|math.h|
|[ceilf](../c-runtime-library/reference/ceil-ceilf-ceill.md)|math.h|
|[ceill](../c-runtime-library/reference/ceil-ceilf-ceill.md)|math.h|
|[cos](../c-runtime-library/reference/cos-cosf-cosl.md)|math.h|
|[cosf](../c-runtime-library/reference/cos-cosf-cosl.md)|math.h|
|[cosh](../c-runtime-library/reference/cosh-coshf-coshl.md)|math.h|
|[coshf](../c-runtime-library/reference/cosh-coshf-coshl.md)|math.h|
|[coshl](../c-runtime-library/reference/cosh-coshf-coshl.md)|math.h|
|[cosl](../c-runtime-library/reference/cos-cosf-cosl.md)|math.h|
|[exp](../c-runtime-library/reference/exp-expf.md)|math.h|
|[expf](../c-runtime-library/reference/exp-expf.md)|math.h|
|[expl](../c-runtime-library/reference/exp-expf.md)|math.h|
|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|math.h|
|[fabsf](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|math.h|
|[floor](../c-runtime-library/reference/floor-floorf-floorl.md)|math.h|
|[floorf](../c-runtime-library/reference/floor-floorf-floorl.md)|math.h|
|[floorl](../c-runtime-library/reference/floor-floorf-floorl.md)|math.h|
|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|math.h|
|[fmodf](../c-runtime-library/reference/fmod-fmodf.md)|math.h|
|[fmodl](../c-runtime-library/reference/fmod-fmodf.md)|math.h|
|[labs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|stdlib.h|
|[llabs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|stdlib.h|
|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|math.h|
|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|math.h|
|[log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)|math.h|
|[log10l](../c-runtime-library/reference/log-logf-log10-log10f.md)|math.h|
|[logf](../c-runtime-library/reference/log-logf-log10-log10f.md)|math.h|
|[logl](../c-runtime-library/reference/log-logf-log10-log10f.md)|math.h|
|[_lrotl](../c-runtime-library/reference/lrotl-lrotr.md)|stdlib.h|
|[_lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|stdlib.h|
|[memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|string.h|
|[memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md)|string.h|
|[memset](../c-runtime-library/reference/memset-wmemset.md)|string.h|
|[pow](../c-runtime-library/reference/pow-powf-powl.md)|math.h|
|[powf](../c-runtime-library/reference/pow-powf-powl.md)|math.h|
|[powl](../c-runtime-library/reference/pow-powf-powl.md)|math.h|
|[_rotl](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|stdlib.h|
|[_rotl64](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|stdlib.h|
|[_rotr](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|stdlib.h|
|[_rotr64](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|stdlib.h|
|[sin](../c-runtime-library/reference/sin-sinf-sinl.md)|math.h|
|[sinf](../c-runtime-library/reference/sin-sinf-sinl.md)|math.h|
|[sinh](../c-runtime-library/reference/sinh-sinhf-sinhl.md)|math.h|
|[sinhf](../c-runtime-library/reference/sinh-sinhf-sinhl.md)|math.h|
|[sinhl](../c-runtime-library/reference/sinh-sinhf-sinhl.md)|math.h|
|[sinl](../c-runtime-library/reference/sin-sinf-sinl.md)|math.h|
|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|math.h|
|[sqrtf](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|math.h|
|[sqrtl](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|math.h|
|[strcat](../c-runtime-library/reference/strcat-wcscat-mbscat.md)|string.h|
|[strcmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)|string.h|
|[strcpy](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)|string.h|
|[strlen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|string.h|
|[_strset](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)|string.h|
|[strset](../c-runtime-library/reference/strset-wcsset.md)|string.h|
|[tan](../c-runtime-library/reference/tan-tanf-tanl.md)|math.h|
|[tanf](../c-runtime-library/reference/tan-tanf-tanl.md)|math.h|
|[tanh](../c-runtime-library/reference/tanh-tanhf-tanhl.md)|math.h|
|[tanhf](../c-runtime-library/reference/tanh-tanhf-tanhl.md)|math.h|
|[tanhl](../c-runtime-library/reference/tanh-tanhf-tanhl.md)|math.h|
|[tanl](../c-runtime-library/reference/tan-tanf-tanl.md)|math.h|
|[wcscat](../c-runtime-library/reference/strcat-wcscat-mbscat.md)|string.h|
|[wcscmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)|string.h|
|[wcscpy](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)|string.h|
|[wcslen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|string.h|
|[_wcsset](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)|string.h|

## See also

[ARM intrinsics](../intrinsics/arm-intrinsics.md)\
[ARM64 intrinsics](../intrinsics/arm64-intrinsics.md)\
[x86 intrinsics list](../intrinsics/x86-intrinsics-list.md)\
[x64 (amd64) intrinsics list](../intrinsics/x64-amd64-intrinsics-list.md)
