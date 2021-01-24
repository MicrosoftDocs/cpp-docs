---
description: "Learn more about: fp_contract pragma"
title: "fp_contract pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.fp_contract", "fp_contract_CPP"]
helpviewer_keywords: ["pragmas, fp_contract", "fp_contract pragma"]
ms.assetid: 15b97338-6680-4287-ba2a-2dccc5b2ccf5
---
# fp_contract pragma

Determines whether floating-point contraction takes place. A floating-point contraction is an instruction such as FMA (Fused-Multiply-Add) that combines two separate floating point operations into a single instruction. Use of these instructions can affect floating-point precision, because instead of rounding after each operation, the processor may round only once after both operations.

## Syntax

> **#pragma fp_contract (** { **on** | **off** } **)**

## Remarks

By default, **fp_contract** is **on**. This tells the compiler to use floating-point contraction instructions where possible. Set **fp_contract** to **off** to preserve individual floating-point instructions.

For more information on floating-point behavior, see [/fp (Specify Floating-Point Behavior)](../build/reference/fp-specify-floating-point-behavior.md).

Other floating-point pragmas include:

- [fenv_access](../preprocessor/fenv-access.md)

- [float_control](../preprocessor/float-control.md)

## Example

The code generated from this sample does not use a fused-multiply-add instruction even when it is available on the target processor. If you comment out `#pragma fp_contract (off)`, the generated code may use a fused-multiply-add instruction if it is available.

```cpp
// pragma_directive_fp_contract.cpp
// on x86 and x64 compile with: /O2 /fp:fast /arch:AVX2
// other platforms compile with: /O2

#include <stdio.h>

// remove the following line to enable FP contractions
#pragma fp_contract (off)

int main() {
   double z, b, t;

   for (int i = 0; i < 10; i++) {
      b = i * 5.5;
      t = i * 56.025;

      z = t * i + b;
      printf("out = %.15e\n", z);
   }
}
```

```Output
out = 0.000000000000000e+00
out = 6.152500000000000e+01
out = 2.351000000000000e+02
out = 5.207249999999999e+02
out = 9.184000000000000e+02
out = 1.428125000000000e+03
out = 2.049900000000000e+03
out = 2.783725000000000e+03
out = 3.629600000000000e+03
out = 4.587525000000000e+03
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
