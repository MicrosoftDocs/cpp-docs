---
description: "Learn more about: AgileActivationFactory Class"
title: "AgileActivationFactory Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::AgileActivationFactory"]
ms.assetid: fab98f32-bb93-4c0f-badb-49fbddb194b0
---
# AgileActivationFactory Class

Represents an apartment-friendly activation factory that implements [FtmBase](ftmbase-class.md).

## Syntax

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil,
    FactoryCacheFlags cacheFlagValue = FactoryCacheDefault
>
class AgileActivationFactory :
    public ActivationFactory<
        Implements<FtmBase, I0>,
        I1,
        I2,
        cacheFlagValue
    >;
```

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)<br/>
[ActivationFactory Class](activationfactory-class.md)
