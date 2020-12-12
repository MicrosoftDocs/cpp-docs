---
description: "Learn more about: Using IDispEventSimpleImpl"
title: "Using IDispEventSimpleImpl (ATL)"
ms.date: "08/19/2019"
helpviewer_keywords: ["IDispEventSimpleImpl class, using"]
ms.assetid: 8640ad1a-4bd0-40a5-b5e4-7322685d7aab
---
# Using IDispEventSimpleImpl

When using `IDispEventSimpleImpl` to handle events, you will need to:

- Derive your class from [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md).

- Add an event sink map to your class.

- Define [_ATL_FUNC_INFO](../atl/reference/atl-func-info-structure.md) structures describing the events.

- Add entries to the event sink map using the [SINK_ENTRY_INFO](reference/composite-control-macros.md#sink_entry_info) macro.

- Implement the methods that you're interested in handling.

- Advise and unadvise the event source.

## Example

The example below shows you how to handle the `DocumentChange` event fired by Word's **Application** object. This event is defined as a method on the `ApplicationEvents` dispinterface.

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

[!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventsimpleimpl_1.h)]

The only information from the type library actually used in this example is the CLSID of the Word `Application` object and the IID of the `ApplicationEvents` interface. This information is only used at compile time.

The following code appears in Simple.h. The relevant code is noted by comments:

[!code-cpp[NVC_ATL_EventHandlingSample#3](../atl/codesnippet/cpp/using-idispeventsimpleimpl_2.h)]

The following code is from Simple.cpp:

[!code-cpp[NVC_ATL_EventHandlingSample#4](../atl/codesnippet/cpp/using-idispeventsimpleimpl_3.cpp)]

## See also

[Event Handling](../atl/event-handling-and-atl.md)<br/>
[ATLEventHandling Sample](../overview/visual-cpp-samples.md)
