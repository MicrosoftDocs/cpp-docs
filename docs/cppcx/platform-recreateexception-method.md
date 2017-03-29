---
title: "Platform::RecreateException Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCCORLIB/Platform::Exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Exception Class"
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---

# Platform::ReCreateException Method
This method is for internal use only and is not intended for user code. Use the Exception::CreateException method instead.

## Syntax

```cpp
static Exception^ ReCreateException(int hr)
```

### Parameters
`hr`

### Property Value/Return Value

Returns a new Platform::Exception^, based on the specified HRESULT.

