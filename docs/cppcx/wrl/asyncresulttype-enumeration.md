---
description: "Learn more about: AsyncResultType Enumeration"
title: "AsyncResultType Enumeration"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncResultType"]
helpviewer_keywords: ["AsyncResultType enumeration"]
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
---
# AsyncResultType Enumeration

Specifies the type of result returned by the `GetResults()` method.

## Syntax

```cpp
enum AsyncResultType;
```

## Members

### Values

|Name|Description|
|----------|-----------------|
|`MultipleResults`|A set of multiple results, which are presented progressively between `Start` state and before `Close()` is called.|
|`SingleResult`|A single result, which is presented after the `Complete` event occurs.|

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
