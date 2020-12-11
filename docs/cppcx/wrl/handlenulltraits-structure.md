---
description: "Learn more about: HANDLENullTraits Structure"
title: "HANDLENullTraits Structure"
ms.date: "09/27/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::GetInvalidValue"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits structure", "Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close method", "Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::GetInvalidValue method"]
ms.assetid: 88a29a14-c516-40cb-a0ca-ee897a668623
---
# HANDLENullTraits Structure

Defines common characteristics of an uninitialized handle.

## Syntax

```cpp
struct HANDLENullTraits;
```

## Members

### Public Typedefs

Name   | Description
------ | ---------------------
`Type` | A synonym for HANDLE.

### Public Methods

Name                                                  | Description
----------------------------------------------------- | -----------------------------
[HANDLENullTraits::Close](#close)                     | Closes the specified handle.
[HANDLENullTraits::GetInvalidValue](#getinvalidvalue) | Represents an invalid handle.

## Inheritance Hierarchy

`HANDLENullTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="close"></a> HANDLENullTraits::Close

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

## <a name="getinvalidvalue"></a> HANDLENullTraits::GetInvalidValue

Represents an invalid handle.

```cpp
inline static Type GetInvalidValue();
```

### Return Value

Always returns **`nullptr`**.
