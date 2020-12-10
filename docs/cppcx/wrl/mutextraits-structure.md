---
description: "Learn more about: MutexTraits Structure"
title: "MutexTraits Structure"
ms.date: "09/27/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::MutexTraits structure", "Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock method"]
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
---
# MutexTraits Structure

Defines common characteristics of the [Mutex](mutex-class.md) class.

## Syntax

```cpp
struct MutexTraits : HANDLENullTraits;
```

## Members

### Public Methods

Name                           | Description
------------------------------ | ------------------------------------------------
[MutexTraits::Unlock](#unlock) | Releases exclusive control of a shared resource.

## Inheritance Hierarchy

`HANDLENullTraits`

`MutexTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="unlock"></a> MutexTraits::Unlock Method

Releases exclusive control of a shared resource.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### Parameters

*h*<br/>
Handle to a mutex object.
