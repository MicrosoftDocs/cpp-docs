---
title: "RoInitializeWrapper Class | Microsoft Docs"
ms.custom: ""
ms.date: "05/20/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper"]
dev_langs: ["C++"]
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RoInitializeWrapper Class

Initializes the Windows Runtime.

## Syntax

```cpp
class RoInitializeWrapper
```

## Remarks

**RoInitializeWrapper** is a convenience that initializes the Windows Runtime and returns an HRESULT that indicates whether the operation was successful. Because the class destructor calls `::Windows::Foundation::Uninitialize`, instances of **RoInitializeWrapper** must be declared at global or top-level scope.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[RoInitializeWrapper::RoInitializeWrapper Constructor](../windows/roinitializewrapper-roinitializewrapper-constructor.md)|Initializes a new instance of the **RoInitializeWrapper** class.|
|[RoInitializeWrapper::~RoInitializeWrapper Destructor](../windows/roinitializewrapper-tilde-roinitializewrapper-destructor.md)|Destroys the current instance of the **RoInitializeWrapper** class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[RoInitializeWrapper::HRESULT() Operator](../windows/roinitializewrapper-hresult-parens-operator.md)|Retrieves the HRESULT produced by the **RoInitializeWrapper** constructor.|

## Inheritance Hierarchy

`RoInitializeWrapper`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)