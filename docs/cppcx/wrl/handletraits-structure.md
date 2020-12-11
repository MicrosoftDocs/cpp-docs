---
description: "Learn more about: HANDLETraits Structure"
title: "HANDLETraits Structure"
ms.date: "09/27/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits structure", "Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close method", "Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue method"]
ms.assetid: 22963e88-d857-4624-9182-7c986daff722
---
# HANDLETraits Structure

Defines common characteristics of a handle.

## Syntax

```cpp
struct HANDLETraits;
```

## Members

### Public Typedefs

Name   | Description
------ | ---------------------
`Type` | A synonym for HANDLE.

### Public Methods

Name                                              | Description
------------------------------------------------- | -----------------------------
[HANDLETraits::Close](#close)                     | Closes the specified handle.
[HANDLETraits::GetInvalidValue](#getinvalidvalue) | Represents an invalid handle.

## Inheritance Hierarchy

`HANDLETraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="close"></a> HANDLETraits::Close

Closes the specified handle.

```cpp
inline static bool Close(
   _In_ Type h
);
```

### Parameters

*h*<br/>
The handle to close.

### Return Value

**`true`** if handle *h* closed successfully; otherwise, **`false`**.

## <a name="getinvalidvalue"></a> HANDLETraits::GetInvalidValue

Represents an invalid handle.

```cpp
inline static HANDLE GetInvalidValue();
```

### Return Value

Always returns INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE is defined by Windows.)
