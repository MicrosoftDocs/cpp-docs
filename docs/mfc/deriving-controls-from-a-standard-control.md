---
description: "Learn more about: Deriving Controls from a Standard Control"
title: "Deriving Controls from a Standard Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["standard controls [MFC], deriving controls from", "common controls [MFC], deriving from", "derived controls", "controls [MFC], derived", "Windows common controls [MFC], deriving from", "standard controls"]
ms.assetid: a6f84315-7007-4e0e-8576-78be81254802
---
# Deriving Controls from a Standard Control

As with any [CWnd](reference/cwnd-class.md)-derived class, you can modify a control's behavior by deriving a new class from an existing control class.

### To create a derived control class

1. Derive your class from an existing control class and optionally override the `Create` member function so that it provides the necessary arguments to the base-class `Create` function.

1. Provide message-handler member functions and message-map entries to modify the control's behavior in response to specific Windows messages. See [Mapping Messages to Functions](reference/mapping-messages-to-functions.md).

1. Provide new member functions to extend the functionality of the control (optional).

Using a derived control in a dialog box requires extra work. The types and positions of controls in a dialog box are normally specified in a dialog-template resource. If you create a derived control class, you cannot specify it in a dialog template since the resource compiler knows nothing about your derived class.

#### To place your derived control in a dialog box

1. Embed an object of the derived control class in the declaration of your derived dialog class.

1. Override the `OnInitDialog` member function in your dialog class to call the `SubclassDlgItem` member function for the derived control.

`SubclassDlgItem` "dynamically subclasses" a control created from a dialog template. When a control is dynamically subclassed, you hook into Windows, process some messages within your own application, then pass the remaining messages on to Windows. For more information, see the [SubclassDlgItem](reference/cwnd-class.md#subclassdlgitem) member function of class `CWnd` in the *MFC Reference*. The following example shows how you might write an override of `OnInitDialog` to call `SubclassDlgItem`:

[!code-cpp[NVC_MFCControlLadenDialog#3](codesnippet/cpp/deriving-controls-from-a-standard-control_1.cpp)]

Because the derived control is embedded in the dialog class, it will be constructed when the dialog box is constructed, and it will be destroyed when the dialog box is destroyed. Compare this code to the example in [Adding Controls By Hand](adding-controls-by-hand.md).

## See also

[Making and Using Controls](making-and-using-controls.md)<br/>
[Controls](controls-mfc.md)
