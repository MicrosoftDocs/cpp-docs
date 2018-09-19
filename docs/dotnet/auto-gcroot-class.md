---
title: "auto_gcroot Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["msclr::auto_gcroot", "msclr.auto_gcroot", "auto_gcroot"]
dev_langs: ["C++"]
helpviewer_keywords: ["auto_gcroot"]
ms.assetid: b5790912-265d-463e-a486-47302e91042a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# auto_gcroot Class

Automatic resource management (like [auto_ptr Class](../standard-library/auto-ptr-class.md)) which can be used to embed a virtual handle into a native type.

## Syntax

```cpp
template<typename _element_type>
class auto_gcroot;
```

#### Parameters

*_element_type*<br/>
The managed type to be embedded.

## Requirements

**Header file** \<msclr\auto_gcroot.h>

**Namespace** msclr

## See Also

[auto_gcroot](../dotnet/auto-gcroot.md)<br/>
[auto_gcroot Members](../dotnet/auto-gcroot-members.md)<br/>
[How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md)<br/>
[auto_handle Class](../dotnet/auto-handle-class.md)