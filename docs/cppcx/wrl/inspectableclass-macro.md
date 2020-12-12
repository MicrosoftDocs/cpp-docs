---
description: "Learn more about: InspectableClass Macro"
title: "InspectableClass Macro"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::InspectableClass"]
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
---
# InspectableClass Macro

Sets the runtime class name and trust level.

## Syntax

```cpp
InspectableClass(
   runtimeClassName,
   trustLevel)
```

### Parameters

*runtimeClassName*<br/>
The full textual name of the runtime class.

*trustLevel*<br/>
One of the [TrustLevel](/windows/win32/api/inspectable/ne-inspectable-trustlevel) enumerated values.

## Remarks

The **InspectableClass** macro can be used only with Windows Runtime types.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See also

[RuntimeClass Class](runtimeclass-class.md)
