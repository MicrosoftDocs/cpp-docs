---
title: "HString Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString"]
dev_langs: ["C++"]
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString Class

A helper class for managing the lifetime of an HSTRING using the RAII pattern.

## Syntax

```cpp
class HString;
```

## Remarks

The Windows Runtime provides access to strings through HSTRING handles. The **HString** class provides convenience functions and operators to simplify using HSTRING handles. This class can handle the lifetime of the HSTRING it owns through an RAII pattern.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[HString::HString Constructor](../windows/hstring-hstring-constructor.md)|Initializes a new instance of the **HString** class.|
|[HString::~HString Destructor](../windows/hstring-tilde-hstring-destructor.md)|Destroys the current instance of the **HString** class.|

### Members

|Name|Description|
|----------|-----------------|
|[HString::Set Method](../windows/hstring-set-method.md)|Sets the value of the current **HString** object to the specified wide-character string or **HString** parameter.|
|[HString::Attach Method](../windows/hstring-attach-method.md)|Associates the specified **HString** object with the current **HString** object.|
|[HString::CopyTo Method](../windows/hstring-copyto-method.md)|Copies the current **HString** object to an HSTRING object.|
|[HString::Detach Method](../windows/hstring-detach-method.md)|Disassociates the specified **HString** object from its underlying value.|
|[HString::GetAddressOf Method](../windows/hstring-getaddressof-method.md)|Retrieves a pointer to the underlying HSTRING handle.|
|[HString::Get Method](../windows/hstring-get-method.md)|Retrieves the value of the underlying HSTRING handle.|
|[HString::Release Method](../windows/hstring-release-method.md)|Deletes the underlying string value and intializes the current **HString** object to an empty value.|
|[HString::MakeReference Method](../windows/hstring-makereference-method.md)|Creates an `HStringReference` object from a specified string parameter.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[HString::Operator= Operator](../windows/hstring-operator-assign-operator.md)|Moves the value of another **HString** object to the current **HString** object.|
|[HString::Operator== Operator](../windows/hstring-operator-equality-operator.md)|Indicates whether the two parameters are equal.|
|[HString::Operator!= Operator](../windows/hstring-operator-inequality-operator.md)|Indicates whether the two parameters are not equal.|

## Inheritance Hierarchy

`HString`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)