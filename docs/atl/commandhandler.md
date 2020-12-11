---
description: "Learn more about: CommandHandler"
title: "CommandHandler"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["CommandHandler function"]
ms.assetid: 662bc7bf-4a10-42b3-986d-d8bae4f63551
---
# CommandHandler

`CommandHandler` is the function identified by the third parameter of the COMMAND_HANDLER macro in your message map.

## Syntax

```cpp
LRESULT CommandHandler(
    WORD wNotifyCode,
    WORD wID,
    HWND hWndCtl,
    BOOL& bHandled);
```

#### Parameters

*wNotifyCode*<br/>
The notification code.

*wID*<br/>
The identifier of the menu item, control, or accelerator.

*hWndCtl*<br/>
A handle to a window control.

*bHandled*<br/>
The message map sets *bHandled* to TRUE before `CommandHandler` is called. If `CommandHandler` does not fully handle the message, it should set *bHandled* to FALSE to indicate the message needs further processing.

## Return Value

The result of message processing. 0 if successful.

## Remarks

For an example of using this message handler in a message map, see [COMMAND_HANDLER](reference/message-map-macros-atl.md#command_handler).

## See also

[Implementing a Window](../atl/implementing-a-window.md)<br/>
[Message Maps](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
