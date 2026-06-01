---
description: "Learn more about: Notifications Sent by Animation Controls"
title: "Notifications Sent by Animation Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["notifications [MFC], animation controls", "CAnimateCtrl class [MFC], notifications", "controls [MFC], animation", "animation controls [MFC], notifications"]
---
# Notifications Sent by Animation Controls

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

An animation control ([CAnimateCtrl](reference/canimatectrl-class.md)) sends two different types of notification messages. The notifications are sent in the form of [WM_COMMAND](/windows/win32/menurc/wm-command) messages.

The [ACN_START](/windows/win32/Controls/acn-start) message is sent when the animation control has started playing a clip. The [ACN_STOP](/windows/win32/Controls/acn-stop) message is sent when the animation control has finished or stopped playing a clip.

## See also

[Using CAnimateCtrl](using-canimatectrl.md)<br/>
[Controls](controls-mfc.md)
