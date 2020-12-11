---
description: "Learn more about: MessageHandler"
title: "MessageHandler"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["MessageHandler function"]
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
---
# MessageHandler

`MessageHandler` is the name of the function identified by the second parameter of the MESSAGE_HANDLER macro in your message map.

## Syntax

```cpp
LRESULT MessageHandler(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    BOOL& bHandled);
```

### Parameters

*uMsg*<br/>
Specifies the message.

*wParam*<br/>
Additional message-specific information.

*lParam*<br/>
Additional message-specific information.

*bHandled*<br/>
The message map sets *bHandled* to TRUE before `MessageHandler` is called. If `MessageHandler` does not fully handle the message, it should set *bHandled* to FALSE to indicate the message needs further processing.

## Return Value

The result of message processing. 0 if successful.

## Remarks

For an example of using this message handler in a message map, see [MESSAGE_HANDLER](reference/message-map-macros-atl.md#message_handler).

## See also

[Implementing a Window](../atl/implementing-a-window.md)<br/>
[Message Maps](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
