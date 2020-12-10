---
description: "Learn more about: Global Hot Keys"
title: "Global Hot Keys"
ms.date: "11/04/2016"
helpviewer_keywords: ["keyboard shortcuts [MFC], hot keys", "CHotKeyCtrl class [MFC], global hot keys", "access keys [MFC], hot keys", "global hot keys [MFC]"]
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
---
# Global Hot Keys

A global hot key is associated with a particular nonchild window. It allows the user to activate the window from any part of the system. An application sets a global hot key for a particular window by sending the [WM_SETHOTKEY](/windows/win32/inputdev/wm-sethotkey) message to that window. For instance, if `m_HotKeyCtrl` is the [CHotKeyCtrl](reference/chotkeyctrl-class.md) object and `pMainWnd` is a pointer to the window to be activated when the hot key is pressed, you could use the following code to associate the hot key specified in the control with the window pointed to by `pMainWnd`.

[!code-cpp[NVC_MFCControlLadenDialog#18](codesnippet/cpp/global-hot-keys_1.cpp)]

Whenever the user presses a global hot key, the window specified receives a [WM_SYSCOMMAND](/windows/win32/menurc/wm-syscommand) message that specifies **SC_HOTKEY** as the type of the command. This message also activates the window that receives it. Because this message does not include any information on the exact key that was pressed, using this method does not allow distinguishing between different hot keys that may be attached to the same window. The hot key remains valid until the application that sent **WM_SETHOTKEY** exits.

## See also

[Using CHotKeyCtrl](using-chotkeyctrl.md)<br/>
[Controls](controls-mfc.md)
