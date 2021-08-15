---
description: "Learn more about: jitintrinsic"
title: "jitintrinsic"
ms.date: "11/04/2016"
f1_keywords: ["jitintrinsic", "jitintrinsic_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], jitintrinsic", "jitintrinsic __declspec modifier"]
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
---
# jitintrinsic

Marks the function as significant to the 64-bit common language runtime. This is used on certain functions in Microsoft-provided libraries.

## Syntax

```
__declspec(jitintrinsic)
```

## Remarks

**`jitintrinsic`** adds a MODOPT (<xref:System.Runtime.CompilerServices.IsJitIntrinsic>) to a function signature.

Users are discouraged from using this **`__declspec`** modifier, as unexpected results can occur.

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
