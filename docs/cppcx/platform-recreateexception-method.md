---
description: "Learn more about: Platform::ReCreateException Method"
title: "Platform::RecreateException Method"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Exception"]
helpviewer_keywords: ["Platform::Exception Class"]
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
---
# Platform::ReCreateException Method

This method is for internal use only and is not intended for user code. Use the Exception::CreateException method instead.

## Syntax

```cpp
static Exception^ ReCreateException(int hr)
```

### Parameters

*hr*

### Property Value/Return Value

Returns a new Platform::Exception^, based on the specified HRESULT.
