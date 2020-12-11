---
description: "Learn more about: AsyncStatusInternal Enumeration"
title: "AsyncStatusInternal Enumeration"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::Details::AsyncStatusInternal"]
helpviewer_keywords: ["AsyncStatusInternal enumeration"]
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
---
# AsyncStatusInternal Enumeration

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
enum AsyncStatusInternal;
```

## Remarks

Specifies a mapping between internal enumerations for the state of asynchronous operations and the `Windows::Foundation::AsyncStatus` enumeration.

## Members

`_Created`<br/>
Equivalent to `::Windows::Foundation::AsyncStatus::Created`

`_Started`<br/>
Equivalent to `::Windows::Foundation::AsyncStatus::Started`

`_Completed`<br/>
Equivalent to `::Windows::Foundation::AsyncStatus::Completed`

`_Cancelled`<br/>
Equivalent to `::Windows::Foundation::AsyncStatus::Cancelled`

`_Error`<br/>
Equivalent to `::Windows::Foundation::AsyncStatus::Error`

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
