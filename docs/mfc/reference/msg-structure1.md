---
title: "MSG Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["MSG"]
dev_langs: ["C++"]
helpviewer_keywords: ["MSG structure [MFC]"]
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# MSG Structure1

The `MSG` structure contains message information from a thread's message queue.

## Syntax

```
typedef struct tagMSG {     // msg
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} MSG;
```

#### Parameters

*hwnd*<br/>
Identifies the window whose window procedure receives the message.

*message*<br/>
Specifies the message number.

*wParam*<br/>
Specifies additional information about the message. The exact meaning depends on the value of the `message` member.

*lParam*<br/>
Specifies additional information about the message. The exact meaning depends on the value of the `message` member.

*time*<br/>
Specifies the time at which the message was posted.

*pt*<br/>
Specifies the cursor position, in screen coordinates, when the message was posted.

## Requirements

**Header:** winuser.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

