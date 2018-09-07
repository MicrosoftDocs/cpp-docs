---
title: "EventSource::Remove Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::EventSource::Remove"]
dev_langs: ["C++"]
helpviewer_keywords: ["Remove method"]
ms.assetid: afafedf5-3665-4408-a639-fb6884f7c5f9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventSource::Remove Method

Deletes the event handler represented by the specified event registration token from the set of event handlers associated with the current **EventSource** object.

## Syntax

```cpp
HRESULT Remove(
   EventRegistrationToken token
);
```

### Parameters

*token*  
A handle that represents an event handler. This token was returned when the event handler was registered by the [Add()](../windows/eventsource-add-method.md) method.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

For more information about the `EventRegistrationToken` structure, see the **Windows::Foundation::EventRegistrationToken Structure** topic in the **Windows Runtime** reference documentation.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## See Also
[EventSource Class](../windows/eventsource-class.md)