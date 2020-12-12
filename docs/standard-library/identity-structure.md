---
description: "Learn more about: identity Structure"
title: "identity Structure"
ms.date: "11/04/2016"
f1_keywords: ["utility/std::identity"]
helpviewer_keywords: ["identity class", "identity structure"]
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
---
# identity Structure

A struct that provides a type definition as the template parameter.

## Syntax

```cpp
struct identity {
   typedef Type type;
   Type operator()(const Type& left) const;
};
```

### Parameters

*left*\
The value to identify.

## Remarks

The class contains the public type definition `type`, which is the same as the template parameter Type. It is used in conjunction with template function [forward](../standard-library/utility-functions.md#forward) to ensure that a function parameter has the desired type.

For compatibility with older code, the class also defines the identity function `operator()` which returns its argument *left*.
