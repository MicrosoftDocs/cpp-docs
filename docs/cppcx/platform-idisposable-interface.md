---
title: "Platform::IDisposable Interface | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.technology: "cpp-windows"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::IDisposable"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::IDisposable Interface"]
ms.assetid: f4344056-7030-42ed-bc98-b140edffddcd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Platform::IDisposable Interface

Used to release unmanaged resources.

## Syntax

```cpp
public interface class IDisposable
```

## Attributes

**GuidAttribute**("de0cbaea-8065-4a45-b196-c9d443f9bab3")

**VersionAttribute**(NTDDI_WIN8)

### Members

The IDisposable interface inherits from the IUnknown interface. IDisposable also has the following types of members:

**Methods**

The IDisposable interface has the following methods.

|Method|Description|
|------------|-----------------|
|Dispose|Used to release unmanaged resources.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform