---
description: "Learn more about: Handling TTN_NEEDTEXT Notification for Tool Tips"
title: "Handling TTN_NEEDTEXT Notification for Tool Tips"
ms.date: "11/04/2016"
f1_keywords: ["TTN_NEEDTEXT"]
helpviewer_keywords: ["TTN_NEEDTEXT message [MFC]", "notifications [MFC], tool tips", "tool tips [MFC], notifications"]
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
---
# Handling TTN_NEEDTEXT Notification for Tool Tips

As part of [enabling tool tips](enabling-tool-tips.md), you handle the **TTN_NEEDTEXT** message by adding the following entry to your owner window's message map:

[!code-cpp[NVC_MFCControlLadenDialog#40](codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_1.cpp)]

*memberFxn*<br/>
The member function to be called when text is needed for this button.

Note that the ID of a tool tip is always 0.

Declare your handler function in the class definition as follows:

[!code-cpp[NVC_MFCControlLadenDialog#53](codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_2.h)]

where the italicized parameters are:

*id*<br/>
Identifier of the control that sent the notification. Not used. The control id is taken from the **NMHDR** structure.

*pNMHDR*<br/>
A pointer to the [NMTTDISPINFO](/windows/win32/api/commctrl/ns-commctrl-nmttdispinfow) structure. This structure is also discussed further in [The TOOLTIPTEXT Structure](tooltiptext-structure.md).

*pResult*<br/>
A pointer to result code you can set before you return. **TTN_NEEDTEXT** handlers can ignore the *pResult* parameter.

As an example of a form-view notification handler:

[!code-cpp[NVC_MFCControlLadenDialog#54](codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_3.cpp)]

Call `EnableToolTips` (this fragment taken from `OnInitDialog`):

[!code-cpp[NVC_MFCControlLadenDialog#55](codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_4.cpp)]

## See also

[Tool Tips in Windows Not Derived from CFrameWnd](tool-tips-in-windows-not-derived-from-cframewnd.md)
