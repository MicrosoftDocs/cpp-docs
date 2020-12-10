---
description: "Learn more about: ArgTraitsHelper Structure"
title: "ArgTraitsHelper Structure"
ms.date: "09/21/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::ArgTraitsHelper", "event/Microsoft::WRL::Details::ArgTraitsHelper::args"]
helpviewer_keywords: ["Microsoft::WRL::Details::ArgTraitsHelper structure", "Microsoft::WRL::Details::ArgTraitsHelper::args constant"]
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
---
# ArgTraitsHelper Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename TDelegateInterface>
struct ArgTraitsHelper;
```

### Parameters

*TDelegateInterface*<br/>
A delegate interface.

## Remarks

Helps define common characteristics of delegate arguments.

## Members

### Public Typedefs

Name         | Description
------------ | ------------------------------------------------------
`methodType` | A synonym for `decltype(&TDelegateInterface::Invoke)`.
`Traits`     | A synonym for `ArgTraits<methodType>`.

### Public Constants

Name                           | Description
------------------------------ | ---------------------------------------------------------------------------------------------------------------------
[ArgTraitsHelper::args](#args) | Helps [ArgTraits::args](#args) keep count of the number of parameters on the `Invoke` method of a delegate interface.

## Inheritance Hierarchy

`ArgTraitsHelper`

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## <a name="args"></a> ArgTraitsHelper::args

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static const int args = Traits::args;
```

### Remarks

Helps `ArgTraitsHelper::args` keep count of the number of parameters on the `Invoke` method of a delegate interface.
