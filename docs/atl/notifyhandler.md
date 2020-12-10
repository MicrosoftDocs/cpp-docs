---
description: "Learn more about: NotifyHandler"
title: "NotifyHandler"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["NotifyHandler function"]
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
---
# NotifyHandler

The name of the function identified by the third parameter of the NOTIFY_HANDLER macro in your message map.

## Syntax

```cpp
LRESULT NotifyHandler(
    int idCtrl,
    LPNMHDR pnmh,
    BOOL& bHandled);
```

#### Parameters

*idCtrl*<br/>
The identifier of the control sending the message.

*pnmh*<br/>
Address of an [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) structure that contains the notification code and additional information. For some notification messages, this parameter points to a larger structure that has the `NMHDR` structure as its first member.

*bHandled*<br/>
The message map sets *bHandled* to TRUE before *NotifyHandler* is called. If *NotifyHandler* does not fully handle the message, it should set *bHandled* to **FALSE** to indicate the message needs further processing.

## Return Value

The result of message processing. 0 if successful.

## Remarks

For an example of using this message handler in a message map, see [NOTIFY_HANDLER](reference/message-map-macros-atl.md#notify_handler)).

## See also

[Implementing a Window](../atl/implementing-a-window.md)<br/>
[Message Maps](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
