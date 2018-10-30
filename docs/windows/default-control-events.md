---
title: "Default Control Events"
ms.date: "11/04/2016"
helpviewer_keywords: ["Dialog Editor [C++], default control events", "controls [C++], default control events", "events [C++], controls", "dialog box controls [C++], events"]
ms.assetid: 75556b23-18f5-4390-97a4-2ecad3309741
---
# Default Control Events

The following control names have the accompanying default events:

|Control name|Default event|
|------------------|-------------------|
|Animate|ACN_START|
|Check box|BN_CLICKED|
|Combo box|CBN_SELCHANGE|
|Custom|TTN_GETDISPINFO|
|Date time picker|DTN_DATETIMECHANGE|
|Edit box|EN_CHANGE|
|Group Box|(Not applicable)|
|Hot key|NM_OUTOFMEMORY|
|IP address|IPN_FIELDCHANGED|
|List|LVN_ITEMCHANGE|
|List box|LBN_SELCHANGE|
|Month calendar|MCN_SELCHANGE|
|Picture Control|(Not applicable)|
|Progress|NM_CUSTOMDRAW|
|Push button|BN_CLICKED|
|Radio button|BN_CLICKED|
|Rich edit|EN_CHANGE|
|Scroll bar|NM_THEMECHANGED|
|Slider|NM_CUSTOMDRAW|
|Spin|UDN_DELTAPOS|
|Static Text|(Not applicable)|
|Tab|TCN_SELCHANGE|
|Tree|TVN_SELCHANGE|

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Defining Member Variables for Dialog Controls](../windows/defining-member-variables-for-dialog-controls.md)<br/>
[Message Types Associated with User-Interface Objects](../mfc/reference/message-types-associated-with-user-interface-objects.md)<br/>
[Editing a Message Handler](../mfc/reference/editing-a-message-handler.md)<br/>
[Defining a Message Handler for a Reflected Message](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md)<br/>
[Declaring a Variable Based on Your New Control Class](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)<br/>
[Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)