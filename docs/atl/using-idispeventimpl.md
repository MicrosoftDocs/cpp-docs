---
description: "Learn more about: Using IDispEventImpl"
title: "Using IDispEventImpl (ATL)"
ms.date: "08/19/2019"
helpviewer_keywords: ["IDispEventImpl class, using"]
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
---
# Using IDispEventImpl

When using `IDispEventImpl` to handle events, you will need to:

- Derive your class from [IDispEventImpl](../atl/reference/idispeventimpl-class.md).

- Add an event sink map to your class.

- Add entries to the event sink map using the [SINK_ENTRY](reference/composite-control-macros.md#sink_entry) or [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex) macro.

- Implement the methods that you're interested in handling.

- Advise and unadvise the event source.

## Example

The example below shows how to handle the `DocumentChange` event fired by Word's **Application** object. This event is defined as a method on the `ApplicationEvents` dispinterface.

The example is from the [ATLEventHandling sample](../overview/visual-cpp-samples.md).

```cpp
[ uuid(000209F7-0000-0000-C000-000000000046), hidden ]
dispinterface ApplicationEvents {
properties:
methods:
    [id(0x00000001), restricted, hidden]
    void Startup();

    [id(0x00000002)]
    void Quit();

    [id(0x00000003)]
    void DocumentChange();
};
```

The example uses `#import` to generate the required header files from Word's type library. If you want to use this example with other versions of Word, you must specify the correct mso dll file. For example, Office 2000 provides mso9.dll and OfficeXP provides mso.dll. This code is simplified from *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier):

[!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventimpl_1.h)]

The following code appears in NotSoSimple.h. The relevant code is noted by comments:

[!code-cpp[NVC_ATL_EventHandlingSample#2](../atl/codesnippet/cpp/using-idispeventimpl_2.h)]

## See also

[Event Handling](../atl/event-handling-and-atl.md)<br/>
[ATLEventHandling Sample](../overview/visual-cpp-samples.md)
