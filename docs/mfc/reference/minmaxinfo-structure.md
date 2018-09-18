---
title: "MINMAXINFO Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["MINMAXINFO"]
dev_langs: ["C++"]
helpviewer_keywords: ["MINMAXINFO structure [MFC]"]
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# MINMAXINFO Structure

The `MINMAXINFO` structure contains information about a window's maximized size and position and its minimum and maximum tracking size.

## Syntax

```
typedef struct tagMINMAXINFO {
    POINT ptReserved;
    POINT ptMaxSize;
    POINT ptMaxPosition;
    POINT ptMinTrackSize;
    POINT ptMaxTrackSize;
} MINMAXINFO;
```

#### Parameters

*ptReserved*<br/>
Reserved for internal use.

*ptMaxSize*<br/>
Specifies the maximized width (point.x) and the maximized height (point.y) of the window.

*ptMaxPosition*<br/>
Specifies the position of the left side of the maximized window (point.x) and the position of the top of the maximized window (point.y).

*ptMinTrackSize*<br/>
Specifies the minimum tracking width (point.x) and the minimum tracking height (point.y) of the window.

*ptMaxTrackSize*<br/>
Specifies the maximum tracking width (point.x) and the maximum tracking height (point.y) of the window.

## Requirements

**Header:** winuser.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo)

