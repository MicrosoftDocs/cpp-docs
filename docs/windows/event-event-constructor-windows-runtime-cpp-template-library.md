---
title: "Event::Event Constructor (Windows Runtime C++ Template Library) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Event::Event"]
dev_langs: ["C++"]
ms.assetid: 21495297-9612-4095-9256-16e168cc0021
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Event::Event Constructor (Windows Runtime C++ Template Library)

Initializes a new instance of the **Event** class.

## Syntax

```cpp
explicit Event(
   HANDLE h = HandleT::Traits::GetInvalidValue()  
);
WRL_NOTHROW Event(
   _Inout_ Event&& h
);
```

### Parameters

*h*<br/>
Handle to an event. By default, *h* is initialized to **nullptr**.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[Event Class (Windows Runtime C++ Template Library)](../windows/event-class-windows-runtime-cpp-template-library.md)