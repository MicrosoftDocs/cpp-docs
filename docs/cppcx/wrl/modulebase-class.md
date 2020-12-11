---
description: "Learn more about: ModuleBase Class"
title: "ModuleBase Class"
ms.date: "09/21/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ModuleBase", "implements/Microsoft::WRL::Details::ModuleBase::DecrementObjectCount", "implements/Microsoft::WRL::Details::ModuleBase::IncrementObjectCount", "implements/Microsoft::WRL::Details::ModuleBase::ModuleBase", "implements/Microsoft::WRL::Details::ModuleBase::~ModuleBase"]
helpviewer_keywords: ["ModuleBase class", "Microsoft::WRL::Details::ModuleBase::DecrementObjectCount method", "Microsoft::WRL::Details::ModuleBase::IncrementObjectCount method", "Microsoft::WRL::Details::ModuleBase::ModuleBase, constructor", "Microsoft::WRL::Details::ModuleBase::~ModuleBase, destructor"]
ms.assetid: edce7591-6893-46f7-94a7-382827775548
---
# ModuleBase Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
class ModuleBase;
```

## Remarks

Represents the base class of the [Module](module-class.md) classes.

## Members

### Public Constructors

Name                                         | Description
-------------------------------------------- | ---------------------------------------------------------
[ModuleBase::ModuleBase](#modulebase)        | Initializes an instance of the `Module` class.
[ModuleBase::~ModuleBase](#tilde-modulebase) | Deinitializes the current instance of the `Module` class.

### Public Methods

Name                                                      | Description
--------------------------------------------------------- | -------------------------------------------------------------------------
[ModuleBase::DecrementObjectCount](#decrementobjectcount) | When implemented, decrements the number of objects tracked by the module.
[ModuleBase::IncrementObjectCount](#incrementobjectcount) | When implemented, increments the number of objects tracked by the module.

## Inheritance Hierarchy

`ModuleBase`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="tilde-modulebase"></a> ModuleBase::~ModuleBase

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
virtual ~ModuleBase();
```

### Remarks

Deinitializes the current instance of the `ModuleBase` class.

## <a name="decrementobjectcount"></a> ModuleBase::DecrementObjectCount

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
virtual long DecrementObjectCount() = 0;
```

### Return Value

The count before the decrement operation.

### Remarks

When implemented, decrements the number of objects tracked by the module.

## <a name="incrementobjectcount"></a> ModuleBase::IncrementObjectCount

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
virtual long IncrementObjectCount() = 0;
```

### Return Value

The count before the increment operation.

### Remarks

When implemented, increments the number of objects tracked by the module.

## <a name="modulebase"></a> ModuleBase::ModuleBase

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
ModuleBase();
```

### Remarks

Initializes an instance of the `Module` class.
