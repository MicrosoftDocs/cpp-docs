---
title: "AsyncStatusInternal Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::Details::AsyncStatusInternal"]
dev_langs: ["C++"]
helpviewer_keywords: ["AsyncStatusInternal enumeration"]
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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

`_Created`  
Equivalent to `::Windows::Foundation::AsyncStatus::Created`

`_Started`  
Equivalent to `::Windows::Foundation::AsyncStatus::Started`

`_Completed`  
Equivalent to `::Windows::Foundation::AsyncStatus::Completed`

`_Cancelled`  
Equivalent to `::Windows::Foundation::AsyncStatus::Cancelled`

`_Error`  
Equivalent to `::Windows::Foundation::AsyncStatus::Error`

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)