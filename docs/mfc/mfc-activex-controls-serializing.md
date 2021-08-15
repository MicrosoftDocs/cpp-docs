---
description: "Learn more about: MFC ActiveX Controls: Serializing"
title: "MFC ActiveX Controls: Serializing"
ms.date: "09/12/2018"
f1_keywords: ["_wVerMinor", "DoPropExchange", "_wVerMajor"]
helpviewer_keywords: ["MFC ActiveX controls [MFC], version support", "wVerMinor global constant [MFC]", "GetVersion method [MFC]", "ExchangeVersion method [MFC]", "MFC ActiveX controls [MFC], serializing", "DoPropExchange method [MFC]", "versioning ActiveX controls", "wVerMajor global constant"]
ms.assetid: 9d57c290-dd8c-4853-b552-6f17f15ebedd
---
# MFC ActiveX Controls: Serializing

This article discusses how to serialize an ActiveX control. Serialization is the process of reading from or writing to a persistent storage medium, such as a disk file. The Microsoft Foundation Class (MFC) Library provides built-in support for serialization in class `CObject`. `COleControl` extends this support to ActiveX controls through the use of a property exchange mechanism.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

Serialization for ActiveX controls is implemented by overriding [COleControl::DoPropExchange](reference/colecontrol-class.md#dopropexchange). This function, called during the loading and saving of the control object, stores all properties implemented with a member variable or a member variable with change notification.

The following topics cover the main issues related to serializing an ActiveX control:

- Implementing `DoPropExchange` function to serialize your control object

- [Customizing the Serialization Process](#_core_customizing_the_default_behavior_of_dopropexchange)

- [Implementing Version Support](#_core_implementing_version_support)

## <a name="_core_implementing_the_dopropexchange_function"></a> Implementing the DoPropExchange Function

When you use the ActiveX Control Wizard to generate the control project, several default handler functions are automatically added to the control class, including the default implementation of [COleControl::DoPropExchange](reference/colecontrol-class.md#dopropexchange). The following example shows the code added to classes created with the ActiveX Control Wizard:

[!code-cpp[NVC_MFC_AxUI#43](codesnippet/cpp/mfc-activex-controls-serializing_1.cpp)]

If you want to make a property persistent, modify `DoPropExchange` by adding a call to the property exchange function. The following example demonstrates the serialization of a custom Boolean CircleShape property, where the CircleShape property has a default value of **TRUE**:

[!code-cpp[NVC_MFC_AxSer#1](codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]
[!code-cpp[NVC_MFC_AxSer#2](codesnippet/cpp/mfc-activex-controls-serializing_3.cpp)]

The following table lists the possible property exchange functions you can use to serialize the control's properties:

|Property exchange functions|Purpose|
|---------------------------------|-------------|
|**PX_Blob( )**|Serializes a type Binary Large Object (BLOB) data property.|
|**PX_Bool( )**|Serializes a type Boolean property.|
|**PX_Color( )**|Serializes a type color property.|
|**PX_Currency( )**|Serializes a type **CY** (currency) property.|
|**PX_Double( )**|Serializes a type **`double`** property.|
|**PX_Font( )**|Serializes a Font type property.|
|**PX_Float( )**|Serializes a type **`float`** property.|
|**PX_IUnknown( )**|Serializes a property of type `LPUNKNOWN`.|
|**PX_Long( )**|Serializes a type **`long`** property.|
|**PX_Picture( )**|Serializes a type Picture property.|
|**PX_Short( )**|Serializes a type **`short`** property.|
|**PXstring( )**|Serializes a type `CString` property.|
|**PX_ULong( )**|Serializes a type **ULONG** property.|
|**PX_UShort( )**|Serializes a type **USHORT** property.|

For more information on these property exchange functions, see [Persistence of OLE Controls](reference/persistence-of-ole-controls.md) in the *MFC Reference*.

## <a name="_core_customizing_the_default_behavior_of_dopropexchange"></a> Customizing the Default Behavior of DoPropExchange

The default implementation of `DoPropertyExchange` (as shown in the previous topic) makes a call to base class `COleControl`. This serializes the set of properties automatically supported by `COleControl`, which uses more storage space than serializing only the custom properties of the control. Removing this call allows your object to serialize only those properties you consider important. Any stock property states the control has implemented will not be serialized when saving or loading the control object unless you explicitly add **PX_** calls for them.

## <a name="_core_implementing_version_support"></a> Implementing Version Support

Version support enables a revised ActiveX control to add new persistent properties, and still be able to detect and load the persistent state created by an earlier version of the control. To make a control's version available as part of its persistent data, call [COleControl::ExchangeVersion](reference/colecontrol-class.md#exchangeversion) in the control's `DoPropExchange` function. This call is automatically inserted if the ActiveX control was created using the ActiveX Control Wizard. It can be removed if version support is not needed. However, the cost in control size is very small (4 bytes) for the added flexibility that version support provides.

If the control was not created with the ActiveX Control Wizard, add a call to `COleControl::ExchangeVersion` by inserting the following line at the beginning of your `DoPropExchange` function (before the call to `COleControl::DoPropExchange`):

[!code-cpp[NVC_MFC_AxSer#1](codesnippet/cpp/mfc-activex-controls-serializing_2.cpp)]
[!code-cpp[NVC_MFC_AxSer#3](codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]

You can use any **DWORD** as the version number. Projects generated by the ActiveX Control Wizard use `_wVerMinor` and `_wVerMajor` as the default. These are global constants defined in the implementation file of the project's ActiveX control class. Within the remainder of your `DoPropExchange` function, you can call [CPropExchange::GetVersion](reference/cpropexchange-class.md#getversion) at any time to retrieve the version you are saving or retrieving.

In the following example, version 1 of this sample control has only a "ReleaseDate" property. Version 2 adds an "OriginalDate" property. If the control is instructed to load the persistent state from the old version, it initializes the member variable for the new property to a default value.

[!code-cpp[NVC_MFC_AxSer#4](codesnippet/cpp/mfc-activex-controls-serializing_5.cpp)]
[!code-cpp[NVC_MFC_AxSer#3](codesnippet/cpp/mfc-activex-controls-serializing_4.cpp)]

By default, a control "converts" old data to the latest format. For example, if version 2 of a control loads data that was saved by version 1, it will write the version 2 format when it is saved again. If you want the control to save data in the format last read, pass **FALSE** as a third parameter when calling `ExchangeVersion`. This third parameter is optional and is **TRUE** by default.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
