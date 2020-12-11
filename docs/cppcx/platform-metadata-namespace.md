---
description: "Learn more about: Platform::Metadata Namespace"
title: "Platform::Metadata Namespace"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Metadata"]
helpviewer_keywords: ["Platform::Metadata Namespace"]
ms.assetid: e3e114d8-a4b0-47f0-865a-9ce9d7212e86
---
# Platform::Metadata Namespace

This namespace contains attributes that modify the declarations of types.

## Syntax

```cpp
namespace Platform {
   namespace Metadata {
}}
```

### Members

Although this namespace is intended for internal use, browsers can display the following members of this namespace.

|Name|Remark|
|----------|------------|
|Attribute|The base class for attributes.|
|[Platform::Metadata::DefaultMemberAttribute Attribute](../cppcx/platform-metadata-defaultmemberattribute-attribute.md)|Indicates the preferred function to invoke among several possible overloaded functions.|
|[Platform::Metadata::FlagsAttribute Attribute](../cppcx/platform-metadata-flagsattribute-attribute.md)Flags|Declares an enumeration as an enumeration of bit fields.<br /><br /> The following example shows how to apply the `Flags` attribute an enumeration.<br /><br /> `[Flags] enum class MyEnumeration { enumA = 1, enumB = 2, enumC = 3}`|
|[Platform::Metadata::RuntimeClassNameAttribute](../cppcx/platform-metadata-runtimeclassname.md)|Ensures that a private ref class has a valid runtime class name.|

## Inheritance Hierarchy

`Platform`

### Requirements

**Metadata:** platform.winmd

**Namespace:** Platform::Metadata

## See also

[Platform Namespace](platform-namespace-c-cx.md)
