---
description: "Learn more about: VerifyInterfaceHelper Structure"
title: "VerifyInterfaceHelper Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::VerifyInterfaceHelper", "implements/Microsoft::WRL::Details::VerifyInterfaceHelper::Verify"]
helpviewer_keywords: ["Microsoft::WRL::Details::VerifyInterfaceHelper structure", "Microsoft::WRL::Details::VerifyInterfaceHelper::Verify method"]
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
---
# VerifyInterfaceHelper Structure

Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <bool isWinRTInterface, typename I>
struct VerifyInterfaceHelper;

template <typename I>
struct VerifyInterfaceHelper<false, I>;
```

### Parameters

*I*<br/>
An interface to verify.

*isWinRTInterface*

## Remarks

Verifies that the interface specified by the template parameter meets certain requirements.

## Members

### Public Methods

Name                                            | Description
----------------------------------------------- | ---------------------------------------------------------------------------------------------------
[VerifyInterfaceHelper::Verify Method](#verify) | Verifies that the interface specified by the current template parameter meets certain requirements.

## Inheritance Hierarchy

`VerifyInterfaceHelper`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="verify"></a> VerifyInterfaceHelper::Verify

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static void Verify();
```

### Remarks

Verifies that the interface specified by the current template parameter meets certain requirements.
