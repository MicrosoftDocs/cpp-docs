---
description: "Learn more about: Concurrency namespace enums (AMP)"
title: "Concurrency namespace enums (AMP)"
ms.date: "11/04/2016"
f1_keywords: ["amp/Concurrency::access_type", "amp/Concurrency::queuing_mode"]
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
---
# Concurrency namespace enums (AMP)

[access_type Enumeration](#access_type)\
[queuing_mode Enumeration](#queuing_mode)

## <a name="access_type"></a> access_type Enumeration

Enumeration type used to denote the various types of access to data.

```cpp
enum access_type;
```

### Values

|Name|Description|
|----------|-----------------|
|`access_type_auto`|Automatically choose the best `access_type` for the accelerator.|
|`access_type_none`|Dedicated. The allocation is only accessible on the accelerator and not on the CPU.|
|`access_type_read`|Shared. The allocation is accessible on the accelerator and is readable on the CPU.|
|`access_type_read_write`|Shared. The allocation is accessible on the accelerator and is writable on the CPU.|
|`access_type_write`|Shared. The allocation is accessible on the accelerator and is both readable and writable on the CPU.|

## <a name="queuing_mode"></a> queuing_mode Enumeration

Specifies the queuing modes that are supported on the accelerator.

```cpp
enum queuing_mode;
```

### Values

|Name|Description|
|----------|-----------------|
|`queuing_mode_immediate`|A queuing mode that specifies that any commands, for example, [parallel_for_each Function (C++ AMP)](concurrency-namespace-functions-amp.md#parallel_for_each), are sent to the corresponding accelerator device as soon as they return to the caller.|
|`queuing_mode_automatic`|A queuing mode that specifies that commands be queued up on a command queue that corresponds to the [accelerator_view](accelerator-view-class.md) object. Commands are sent to the device when [accelerator_view::flush](accelerator-view-class.md#flush) is called.|

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
