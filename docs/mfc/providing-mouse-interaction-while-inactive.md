---
description: "Learn more about: Providing Mouse Interaction While Inactive"
title: "Providing Mouse Interaction While Inactive"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC ActiveX controls [MFC], mouse interaction"]
ms.assetid: b09106bf-44c7-4b9b-a6d9-0d624f16f5b3
---
# Providing Mouse Interaction While Inactive

If your control is not immediately activated, you may still want it to process WM_SETCURSOR and WM_MOUSEMOVE messages, even though the control has no window of its own. This can be accomplished by enabling `COleControl`'s implementation of the `IPointerInactive` interface, which is disabled by default. (See the *ActiveX SDK* for a description of this interface.) To enable it, include the pointerInactive flag in the set of flags returned by [COleControl::GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags):

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#10](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_3.cpp)]

The code to include this flag is automatically generated if you select the **Mouse Pointer Notifications When Inactive** option on the [Control Settings](../mfc/reference/control-settings-mfc-activex-control-wizard.md) page when creating your control with the **MFC ActiveX Control Wizard**.

When the `IPointerInactive` interface is enabled, the container delegates WM_SETCURSOR and WM_MOUSEMOVE messages to it. `COleControl`'s implementation of `IPointerInactive` dispatches the messages through your control's message map after adjusting the mouse coordinates appropriately. You can process the messages just like ordinary window messages by adding the corresponding entries to the message map. In your handlers for these messages, avoid using the *m_hWnd* member variable (or any member function that uses it) without first checking that its value is not **NULL**.

You may also want an inactive control to be the target of an OLE drag-and-drop operation. This requires activating the control at the moment the user drags an object over it, so that the control's window can be registered as a drop target. To cause activation to occur during a drag, override [COleControl::GetActivationPolicy](../mfc/reference/colecontrol-class.md#getactivationpolicy), and return the POINTERINACTIVE_ACTIVATEONDRAG flag:

[!code-cpp[NVC_MFC_AxOpt#11](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_4.cpp)]

Enabling the `IPointerInactive` interface typically means that you want the control to be capable of processing mouse messages at all times. To get this behavior in a container that doesn't support the `IPointerInactive` interface, you need to have your control always activated when visible, which means the control should include the OLEMISC_ACTIVATEWHENVISIBLE flag among its miscellaneous flags. However, to prevent this flag from taking effect in a container that does support `IPointerInactive`, you can also specify the OLEMISC_IGNOREACTIVATEWHENVISIBLE flag:

[!code-cpp[NVC_MFC_AxOpt#12](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_5.cpp)]

## See also

[MFC ActiveX Controls: Optimization](../mfc/mfc-activex-controls-optimization.md)
