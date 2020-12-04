---
description: "Learn more about: MFC ActiveX Controls: Adding Stock Properties"
title: "MFC ActiveX Controls: Adding Stock Properties"
ms.date: "11/04/2016"
helpviewer_keywords: ["BackColor property [MFC]", "properties [MFC], adding stock", "ForeColor property [MFC]", "MFC ActiveX controls [MFC], properties", "foreground colors, ActiveX controls", "foreground colors [MFC]"]
ms.assetid: 8b98c8c5-5b69-4366-87bf-0e61e6668ecb
---
# MFC ActiveX Controls: Adding Stock Properties

Stock properties differ from custom properties in that they are already implemented by the class `COleControl`. `COleControl` contains predefined member functions that support common properties for the control. Some common properties include the control's caption and the foreground and background colors. For information on other stock properties, see [Stock Properties Supported by the Add Property Wizard](#_core_stock_properties_supported_by_classwizard) later in this article. The dispatch map entries for stock properties are always prefixed by DISP_STOCKPROP.

This article describes how to add a stock property (in this case, Caption) to an ActiveX control using the Add Property Wizard and explains the resulting code modifications. Topics include:

- [Using the Add Property Wizard to add a stock property](#_core_using_classwizard_to_add_a_stock_property)

- [Add Property Wizard changes for stock properties](#_core_classwizard_changes_for_stock_properties)

- [Stock properties supported by the Add Property Wizard](#_core_stock_properties_supported_by_classwizard)

- [Stock properties and notification](#_core_stock_properties_and_notification)

- [Color properties](#_core_color_properties)

    > [!NOTE]
    >  Visual Basic custom controls typically have properties such as Top, Left, Width, Height, Align, Tag, Name, TabIndex, TabStop, and Parent. ActiveX control containers, however, are responsible for implementing these control properties and therefore ActiveX controls should not support these properties.

## <a name="_core_using_classwizard_to_add_a_stock_property"></a> Using the Add Property Wizard to Add a Stock Property

Adding stock properties requires less code than adding custom properties because support for the property is handled automatically by `COleControl`. The following procedure demonstrates adding the stock Caption property to an ActiveX control framework and can also be used to add other stock properties. Substitute the selected stock property name for Caption.

#### To add the stock Caption property using the Add Property Wizard

1. Load your control's project.

1. In Class View, expand the library node of your control.

1. Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Property**.

   This opens the [Add Property Wizard](../ide/adding-a-property-visual-cpp.md#names-add-property-wizard).

1. In the **Property Name** box, click **Caption**.

1. Click **Finish**.

## <a name="_core_classwizard_changes_for_stock_properties"></a> Add Property Wizard Changes for Stock Properties

Because `COleControl` supports stock properties, the Add Property Wizard does not change the class declaration in any way; it adds the property to the dispatch map. The Add Property Wizard adds the following line to the dispatch map of the control, which is located in the implementation (.CPP) file:

[!code-cpp[NVC_MFC_AxUI#22](codesnippet/cpp/mfc-activex-controls-adding-stock-properties_1.cpp)]

The following line is added to your control's interface description (.IDL) file:

[!code-cpp[NVC_MFC_AxUI#23](codesnippet/cpp/mfc-activex-controls-adding-stock-properties_2.idl)]

This line assigns the Caption property a specific ID. Notice that the property is bindable and will request permission from the database before modifying the value.

This makes the Caption property available to users of your control. To use the value of a stock property, access a member variable or member function of the `COleControl` base class. For more information on these member variables and member functions, see the next section, Stock Properties Supported by the Add Property Wizard.

## <a name="_core_stock_properties_supported_by_classwizard"></a> Stock Properties Supported by the Add Property Wizard

The `COleControl` class provides nine stock properties. You can add the properties you want by using the Add Property Wizard.

|Property|Dispatch map entry|How to access value|
|--------------|------------------------|-------------------------|
|`Appearance`|DISP_STOCKPROP_APPEARANCE( )|Value accessible as `m_sAppearance`.|
|`BackColor`|DISP_STOCKPROP_BACKCOLOR( )|Value accessible by calling `GetBackColor`.|
|`BorderStyle`|DISP_STOCKPROP_BORDERSTYLE( )|Value accessible as `m_sBorderStyle`.|
|`Caption`|DISP_STOCKPROP_CAPTION( )|Value accessible by calling `InternalGetText`.|
|`Enabled`|DISP_STOCKPROP_ENABLED( )|Value accessible as `m_bEnabled`.|
|`Font`|DISP_STOCKPROP_FONT( )|See the article [MFC ActiveX Controls: Using Fonts](mfc-activex-controls-using-fonts.md) for usage.|
|`ForeColor`|DISP_STOCKPROP_FORECOLOR( )|Value accessible by calling `GetForeColor`.|
|`hWnd`|DISP_STOCKPROP_HWND( )|Value accessible as `m_hWnd`.|
|`Text`|DISP_STOCKPROP_TEXT( )|Value accessible by calling `InternalGetText`. This property is the same as `Caption`, except for the property name.|
|`ReadyState`|DISP_STOCKPROP_READYSTATE()|Value accessible as `m_lReadyState` or `GetReadyState`|

## <a name="_core_stock_properties_and_notification"></a> Stock Properties and Notification

Most stock properties have notification functions that can be overridden. For example, whenever the `BackColor` property is changed, the `OnBackColorChanged` function (a member function of the control class) is called. The default implementation (in `COleControl`) calls `InvalidateControl`. Override this function if you want to take additional actions in response to this situation.

## <a name="_core_color_properties"></a> Color Properties

You can use the stock `ForeColor` and `BackColor` properties, or your own custom color properties, when painting the control. To use a color property, call the [COleControl::TranslateColor](reference/colecontrol-class.md#translatecolor) member function. The parameters of this function are the value of the color property and an optional palette handle. The return value is a **COLORREF** value that can be passed to GDI functions, such as `SetTextColor` and `CreateSolidBrush`.

The color values for the stock `ForeColor` and `BackColor` properties are accessed by calling either the `GetForeColor` or the `GetBackColor` function, respectively.

The following example demonstrates using these two color properties when painting a control. It initializes a temporary **COLORREF** variable and a `CBrush` object with calls to `TranslateColor`: one using the `ForeColor` property and the other using the `BackColor` property. A temporary `CBrush` object is then used to paint the control's rectangle, and the text color is set using the `ForeColor` property.

[!code-cpp[NVC_MFC_AxUI#24](codesnippet/cpp/mfc-activex-controls-adding-stock-properties_3.cpp)]

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)<br/>
[MFC ActiveX Controls: Properties](mfc-activex-controls-properties.md)<br/>
[MFC ActiveX Controls: Methods](mfc-activex-controls-methods.md)<br/>
[COleControl Class](reference/colecontrol-class.md)
