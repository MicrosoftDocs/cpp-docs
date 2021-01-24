---
description: "Learn more about: Reflected Window Message IDs"
title: "Reflected Window Message IDs"
ms.date: "11/04/2016"
f1_keywords: ["OCM_CTLCOLORBTN", "OCM_PARENTNOTIFY", "OCM_VKEYTOITEM", "OCM_CTLCOLORSTATIC", "OCM_HSCROLL", "OCM_CHARTOITEM", "OCM_DRAWITEM", "OCM_MEASUREITEM", "OCM_COMPAREITEM", "OCM_COMMAND", "OCM_NOTIFY", "OCM_CTLCOLORMSGBOX", "OCM_DELETEITEM", "OCM_CTLCOLORLISTBOX", "OCM_CTLCOLORDLG", "OCM_CTLCOLOREDIT", "OCM_CTLCOLORSCROLLBAR", "OCM_VSCROLL", "OCM_CTLCOLOR"]
helpviewer_keywords: ["OCM_HSCROLL message [MFC]", "OCM_PARENTNOTIFY message [MFC]", "messages, reflected", "reflected messages, window message Ids", "OCM_CTLCOLORDLG message [MFC]", "OCM_COMMAND message [MFC]", "OCM_CTLCOLORMSGBOX message [MFC]", "OCM_COMPAREITEM message [MFC]", "OCM_DRAWITEM message [MFC]", "OCM_VSCROLL message [MFC]", "OCM_CTLCOLOREDIT message [MFC]", "OCM_VKEYTOITEM message [MFC]", "OCM_CHARTOITEM message [MFC]", "OCM_CTLCOLORBTN message [MFC]", "OCM_CTLCOLORSTATIC message [MFC]", "OCM_MEASUREITEM message [MFC]", "OCM_CTLCOLOR message [MFC]", "OCM_CTLCOLORSCROLLBAR message [MFC]", "OCM_ messages", "OCM_DELETEITEM message [MFC]", "OCM_CTLCOLORLISTBOX message [MFC]", "OCM_NOTIFY message [MFC]", "reflected messages"]
ms.assetid: 3417ff51-ff9f-458c-bff4-17c200f00d96
---
# Reflected Window Message IDs

A quick way to create an ActiveX control, or other specialized control, is to subclass a window. For more information, see [MFC ActiveX Controls: Subclassing a Windows Control](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

To prevent the control's container from receiving the window messages sent by a subclassed Windows control, [COleControl](../mfc/reference/colecontrol-class.md) creates a "reflector" window to intercept certain window messages and send them back to the control. The control, in its window procedure, can then process these reflected messages by taking actions appropriate for an ActiveX control.

The following table shows the messages that are intercepted and the corresponding messages that the reflector window sends.

|Message sent by the control|Message reflected to the control|
|---------------------------------|--------------------------------------|
|[WM_COMMAND](/windows/win32/menurc/wm-command)|OCM_COMMAND|
|[WM_CTLCOLORBTN](/windows/win32/Controls/wm-ctlcolorbtn)|OCM_CTLCOLORBTN|
|[WM_CTLCOLOREDIT](/windows/win32/Controls/wm-ctlcoloredit)|OCM_CTLCOLOREDIT|
|[WM_CTLCOLORDLG](/windows/win32/dlgbox/wm-ctlcolordlg)|OCM_CTLCOLORDLG|
|[WM_CTLCOLORLISTBOX](/windows/win32/Controls/wm-ctlcolorlistbox)|OCM_CTLCOLORLISTBOX|
|[WM_CTLCOLORSCROLLBAR](/windows/win32/Controls/wm-ctlcolorscrollbar)|OCM_CTLCOLORSCROLLBAR|
|[WM_CTLCOLORSTATIC](/windows/win32/Controls/wm-ctlcolorstatic)|OCM_CTLCOLORSTATIC|
|[WM_DRAWITEM](/windows/win32/Controls/wm-drawitem)|OCM_DRAWITEM|
|[WM_MEASUREITEM](/windows/win32/Controls/wm-measureitem)|OCM_MEASUREITEM|
|[WM_DELETEITEM](/windows/win32/Controls/wm-deleteitem)|OCM_DELETEITEM|
|[WM_VKEYTOITEM](/windows/win32/Controls/wm-vkeytoitem)|OCM_VKEYTOITEM|
|[WM_CHARTOITEM](/windows/win32/Controls/wm-chartoitem)|OCM_CHARTOITEM|
|[WM_COMPAREITEM](/windows/win32/Controls/wm-compareitem)|OCM_COMPAREITEM|
|[WM_HSCROLL](/windows/win32/Controls/wm-hscroll)|OCM_HSCROLL|
|[WM_VSCROLL](/windows/win32/Controls/wm-vscroll)|OCM_VSCROLL|
|[WM_PARENTNOTIFY](/windows/win32/inputmsg/wm-parentnotify)|OCM_PARENTNOTIFY|
|[WM_NOTIFY](/windows/win32/controls/wm-notify)|OCM_NOTIFY|

> [!NOTE]
> If the control runs on a Win32 system, there are several types of WM_CTLCOLOR\* messages it may receive. For more information, see WM_CTLCOLORBTN, WM_CTLCOLORDLG, WM_CTLCOLOREDIT, WM_CTLCOLORLISTBOX, WM_CTLCOLORMSGBOX, WM_CTLCOLORSCROLLBAR, WM_CTLCOLORSTATIC.

## See also

[MFC ActiveX Controls: Subclassing a Windows Control](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)<br/>
[TN062: Message Reflection for Windows Controls](../mfc/tn062-message-reflection-for-windows-controls.md)
