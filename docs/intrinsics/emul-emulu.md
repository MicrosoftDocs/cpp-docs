---
description: "Learn more about: __emul, __emulu"
title: "__emul, __emulu"
ms.date: "09/02/2019"
f1_keywords: ["__emulu_cpp", "__emul", "__emul_cpp", "__emulu"]
helpviewer_keywords: ["__emul intrinsic", "__emulu intrinsic"]
ms.assetid: 79545236-cca2-40b8-a4e1-8abce9b26311
---
# __emul, __emulu

**Microsoft Specific**

Performs multiplications that overflow what a 32-bit integer can hold.

## Syntax

```C
__int64 __emul(
   int a,
   int b
);
unsigned __int64 __emulu(
   unsigned int a,
   unsigned int b
);
```

### Parameters

*a*\
[in] The first integer operand of the multiplication.

*b*\
[in] The second integer operand of the multiplication.

## Return value

The result of the multiplication.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__emul`|x86, x64|
|`__emulu`|x86, x64|

**Header file** \<intrin.h>

## Remarks

`__emul` takes two 32-bit signed values and returns the result of the multiplication as a 64-bit signed integer value.

`__emulu` takes two 32-bit unsigned integer values and returns the result of the multiplication as a 64-bit unsigned integer value.

## Example

```cpp
// emul.cpp
// compile with: /EHsc
// processor: x86, x64
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(__emul)
#pragma intrinsic(__emulu)

int main()
{
   int a = -268435456;
   int b = 2;

   __int64 result = __emul(a, b);

   cout << a << " * " << b << " = " << result << endl;

   unsigned int ua = 0xFFFFFFFF; // Dec value: 4294967295
   unsigned int ub = 0xF000000;  // Dec value: 251658240

   unsigned __int64 uresult = __emulu(ua, ub);

   cout << ua << " * " << ub << " = " << uresult << endl;

}
```

## Output

```Output
-268435456 * 2 = -536870912
4294967295 * 251658240 = 1080863910317260800
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
