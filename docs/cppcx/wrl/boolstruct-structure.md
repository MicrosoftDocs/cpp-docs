---
description: "Learn more about: BoolStruct Structure"
title: "BoolStruct Structure"
ms.date: "09/21/2018"
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::BoolStruct", "internal/Microsoft::WRL::Details::BoolStruct::Member"]
helpviewer_keywords: ["Microsoft::WRL::Details::BoolStruct structure", "Microsoft::WRL::Details::BoolStruct::Member data member"]
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
---
# BoolStruct Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
struct BoolStruct;
```

## Remarks

The `BoolStruct` structure defines whether a `ComPtr` is managing the object lifetime of an interface. `BoolStruct` is used internally by the [BoolType()](comptr-class.md#operator-microsoft-wrl-details-booltype) operator.

## Members

### Public Data Members

Name                          | Description
----------------------------- | ------------------------------------------------------------------------------------------------------------------
[BoolStruct::Member](#member) | Specifies that a [ComPtr](comptr-class.md) is, or is not, managing the object lifetime of an interface.

## Inheritance Hierarchy

`BoolStruct`

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## <a name="member"></a> BoolStruct::Member

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
int Member;
```

### Remarks

Specifies that a [ComPtr](comptr-class.md) is, or is not, managing the object lifetime of an interface.
