---
description: "Learn more about: Enabling Tool Tips"
title: "Enabling Tool Tips"
ms.date: "11/04/2016"
helpviewer_keywords: ["initializing tool tips [MFC]", "enabling tool tips [MFC]", "tool tips [MFC], initializing", "tool tips [MFC], enabling"]
ms.assetid: 06b7c889-7722-4ce6-8b88-9efa50fe6369
---
# Enabling Tool Tips

You can enable tool tip support for the child controls of a window (such as the controls on a form view or dialog box).

### To enable tool tips for the child controls of a window

1. Call `EnableToolTips` for the window for which you want to provide tool tips.

1. Provide a string for each control in your [TTN_NEEDTEXT notification](handling-ttn-needtext-notification-for-tool-tips.md) handler. The handler is in the message map of the window that contains the child controls (for example, your form view class). This handler should call a function that identifies the control and sets **pszText** to specify the text used by the tool tip control.

## See also

[Tool Tips in Windows Not Derived from CFrameWnd](tool-tips-in-windows-not-derived-from-cframewnd.md)
