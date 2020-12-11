---
description: "Learn more about: MFC ActiveX Controls: Subclassing a Windows Control"
title: "MFC ActiveX Controls: Subclassing a Windows Control"
ms.date: "09/12/2018"
f1_keywords: ["precreatewindow", "IsSubclassed"]
helpviewer_keywords: ["OnDraw method, MFC ActiveX controls", "subclassing", "DoSuperclassPaint method [MFC]", "subclassing Windows controls", "subclassing, Windows controls", "reflected messages, in ActiveX controls", "PreCreateWindow method, overriding", "MFC ActiveX controls [MFC], subclassed controls", "MFC ActiveX controls [MFC], creating", "IsSubclassed method [MFC]"]
ms.assetid: 3236d4de-401f-49b7-918d-c84559ecc426
---
# MFC ActiveX Controls: Subclassing a Windows Control

This article describes the process for subclassing a common Windows control to create an ActiveX control. Subclassing an existing Windows control is a quick way to develop an ActiveX control. The new control will have the abilities of the subclassed Windows control, such as painting and responding to mouse clicks. The MFC ActiveX controls sample [BUTTON](../overview/visual-cpp-samples.md) is an example of subclassing a Windows control.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

To subclass a Windows control, complete the following tasks:

- [Override the IsSubclassedControl and PreCreateWindow member functions of COleControl](#_core_overriding_issubclassedcontrol_and_precreatewindow)

- [Modify the OnDraw member function](#_core_modifying_the_ondraw_member_function)

- [Handle any ActiveX control messages (OCM) reflected to the control](#_core_handling_reflected_window_messages)

   > [!NOTE]
   > Much of this work is done for you by the ActiveX Control Wizard if you select control to be subclassed using the **Select Parent Window Class** drop-down list on the **Control Settings** page.

## <a name="_core_overriding_issubclassedcontrol_and_precreatewindow"></a> Overriding IsSubclassedControl and PreCreateWindow

To override `PreCreateWindow` and `IsSubclassedControl`, add the following lines of code to the **`protected`** section of the control class declaration:

[!code-cpp[NVC_MFC_AxSub#1](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_1.h)]

In the control implementation file (.CPP), add the following lines of code to implement the two overridden functions:

[!code-cpp[NVC_MFC_AxSub#2](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_2.cpp)]

Notice that, in this example, the Windows button control is specified in `PreCreateWindow`. However, any standard Windows controls can be subclassed. For more information on standard Windows controls, see [Controls](controls-mfc.md).

When subclassing a Windows control, you may want to specify particular window style (WS_) or extended window style (WS_EX_) flags to be used in creating the control's window. You can set values for these parameters in the `PreCreateWindow` member function by modifying the `cs.style` and the `cs.dwExStyle` structure fields. Modifications to these fields should be made using an **OR** operation, to preserve the default flags that are set by class `COleControl`. For example, if the control is subclassing the BUTTON control and you want the control to appear as a check box, insert the following line of code into the implementation of `CSampleCtrl::PreCreateWindow`, before the return statement:

[!code-cpp[NVC_MFC_AxSub#3](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_3.cpp)]

This operation adds the BS_CHECKBOX style flag, while leaving the default style flag (WS_CHILD) of class `COleControl` intact.

## <a name="_core_modifying_the_ondraw_member_function"></a> Modifying the OnDraw Member Function

If you want your subclassed control to keep the same appearance as the corresponding Windows control, the `OnDraw` member function for the control should contain only a call to the `DoSuperclassPaint` member function, as in the following example:

[!code-cpp[NVC_MFC_AxSub#4](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_4.cpp)]

The `DoSuperclassPaint` member function, implemented by `COleControl`, uses the window procedure of the Windows control to draw the control in the specified device context, within the bounding rectangle. This makes the control visible even when it is not active.

> [!NOTE]
> The `DoSuperclassPaint` member function will work only with those control types that allow a device context to be passed as the *wParam* of a WM_PAINT message. This includes some of the standard Windows controls, such as SCROLLBAR and BUTTON, and all the common controls. For controls that do not support this behavior, you will have to provide your own code to properly display an inactive control.

## <a name="_core_handling_reflected_window_messages"></a> Handling Reflected Window Messages

Windows controls typically send certain window messages to their parent window. Some of these messages, such as WM_COMMAND, provide notification of an action by the user. Others, such as WM_CTLCOLOR, are used to obtain information from the parent window. An ActiveX control usually communicates with the parent window by other means. Notifications are communicated by firing events (sending event notifications), and information about the control container is obtained by accessing the container's ambient properties. Because these communication techniques exist, ActiveX control containers are not expected to process any window messages sent by the control.

To prevent the container from receiving the window messages sent by a subclassed Windows control, `COleControl` creates an extra window to serve as the control's parent. This extra window, called a "reflector," is created only for an ActiveX control that subclasses a Windows control and has the same size and position as the control window. The reflector window intercepts certain window messages and sends them back to the control. The control, in its window procedure, can then process these reflected messages by taking actions appropriate for an ActiveX control (for example, firing an event). See [Reflected Window Message IDs](reflected-window-message-ids.md) for a list of intercepted windows messages and their corresponding reflected messages.

An ActiveX control container may be designed to perform message reflection itself, eliminating the need for `COleControl` to create the reflector window and reducing the run-time overhead for a subclassed Windows control. `COleControl` detects whether the container supports this capability by checking for a MessageReflect ambient property with a value of **TRUE**.

To handle a reflected window message, add an entry to the control message map and implement a handler function. Because reflected messages are not part of the standard set of messages defined by Windows, Class View does not support adding such message handlers. However, it is not difficult to add a handler manually.

To add a message handler for a reflected window message manually do the following:

- In the control class .H file, declare a handler function. The function should have a return type of **LRESULT** and two parameters, with types **WPARAM** and **LPARAM**, respectively. For example:

   [!code-cpp[NVC_MFC_AxSub#5](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_5.h)]
    [!code-cpp[NVC_MFC_AxSub#6](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_6.h)]

- In the control class .CPP file, add an ON_MESSAGE entry to the message map. The parameters of this entry should be the message identifier and the name of the handler function. For example:

   [!code-cpp[NVC_MFC_AxSub#7](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_7.cpp)]

- Also in the .CPP file, implement the `OnOcmCommand` member function to process the reflected message. The *wParam* and *lParam* parameters are the same as those of the original window message.

For an example of how reflected messages are processed, refer to the MFC ActiveX controls sample [BUTTON](../overview/visual-cpp-samples.md). It demonstrates an `OnOcmCommand` handler that detects the BN_CLICKED notification code and responds by firing (sending) a `Click` event.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
