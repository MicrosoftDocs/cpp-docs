---
description: "Learn more about: VerifyInheritanceHelper Structure"
title: "VerifyInheritanceHelper Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::VerifyInheritanceHelper", "implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify"]
helpviewer_keywords: ["Microsoft::WRL::Details::VerifyInheritanceHelper structure", "Microsoft::WRL::Details::VerifyInheritanceHelper::Verify method"]
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
---
# VerifyInheritanceHelper Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename I, typename Base>
struct VerifyInheritanceHelper;

template <typename I>
struct VerifyInheritanceHelper<I, Nil>;
```

### Parameters

*I*<br/>
A type.

*Base*<br/>
Another type.

## Remarks

Tests whether one interface is derived from another interface.

## Members

### Public Methods

Name                                       | Description
------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------
[VerifyInheritanceHelper::Verify](#verify) | Tests the two interfaces specified by the current template parameters and determines whether one interface is derived from the other.

## Inheritance Hierarchy

`VerifyInheritanceHelper`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="verify"></a> VerifyInheritanceHelper::Verify

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static void Verify();
```

### Remarks

Tests the two interfaces specified by the current template parameters and determines whether one interface is derived from the other.

An error is emitted if one interface is not derived from the other.
