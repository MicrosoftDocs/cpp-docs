---
description: "Learn more about: MFC ActiveX Controls: Using Fonts"
title: "MFC ActiveX Controls: Using Fonts"
ms.date: "11/19/2018"
f1_keywords: ["OnFontChanged", "HeadingFont", "InternalFont"]
helpviewer_keywords: ["notifications [MFC], MFC ActiveX controls fonts", "OnDraw method, MFC ActiveX controls", "InternalFont method [MFC]", "SetFont method [MFC]", "OnFontChanged method [MFC]", "IPropertyNotifySink class [MFC]", "MFC ActiveX controls [MFC], fonts", "Stock Font property [MFC]", "HeadingFont property [MFC]", "GetFont method [MFC]", "SelectStockFont method [MFC]", "fonts [MFC], ActiveX controls"]
ms.assetid: 7c51d602-3f5a-481d-84d1-a5d8a3a71761
---
# MFC ActiveX Controls: Using Fonts

If your ActiveX control displays text, you can allow the control user to change the text appearance by changing a font property. Font properties are implemented as font objects and can be one of two types: stock or custom. Stock Font properties are preimplemented font properties that you can add using the Add Property Wizard. Custom Font properties are not preimplemented and the control developer determines the property's behavior and usage.

This article covers the following topics:

- [Using the Stock Font property](#_core_using_the_stock_font_property)

- [Using Custom Font Properties in Your Control](#_core_implementing_a_custom_font_property)

## <a name="_core_using_the_stock_font_property"></a> Using the Stock Font Property

Stock Font properties are preimplemented by the class [COleControl](reference/colecontrol-class.md). In addition, a standard Font property page is also available, allowing the user to change various attributes of the font object, such as its name, size, and style.

Access the font object through the [GetFont](reference/colecontrol-class.md#getfont), [SetFont](reference/colecontrol-class.md#setfont), and [InternalGetFont](reference/colecontrol-class.md#internalgetfont) functions of `COleControl`. The control user will access the font object via the `GetFont` and `SetFont` functions in the same manner as any other Get/Set property. When access to the font object is required from within a control, use the `InternalGetFont` function.

As discussed in [MFC ActiveX Controls: Properties](mfc-activex-controls-properties.md), adding stock properties is easy with the [Add Property Wizard](../ide/adding-a-property-visual-cpp.md#names-add-property-wizard). You choose the Font property, and the Add Property Wizard automatically inserts the stock Font entry into the control's dispatch map.

#### To add the stock Font property using the Add Property Wizard

1. Load your control's project.

1. In Class View, expand the library node of your control.

1. Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Property**.

   This opens the Add Property Wizard.

1. In the **Property Name** box, click **Font**.

1. Click **Finish**.

The Add Property Wizard adds the following line to the control's dispatch map, located in the control class implementation file:

[!code-cpp[NVC_MFC_AxFont#1](codesnippet/cpp/mfc-activex-controls-using-fonts_1.cpp)]

In addition, the Add Property Wizard adds the following line to the control .IDL file:

[!code-cpp[NVC_MFC_AxFont#2](codesnippet/cpp/mfc-activex-controls-using-fonts_2.idl)]

The stock Caption property is an example of a text property that can be drawn using the stock Font property information. Adding the stock Caption property to the control uses steps similar to those used for the stock Font property.

#### To add the stock Caption property using the Add Property Wizard

1. Load your control's project.

1. In Class View, expand the library node of your control.

1. Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Property**.

   This opens the Add Property Wizard.

1. In the **Property Name** box, click **Caption**.

1. Click **Finish**.

The Add Property Wizard adds the following line to the control's dispatch map, located in the control class implementation file:

[!code-cpp[NVC_MFC_AxFont#3](codesnippet/cpp/mfc-activex-controls-using-fonts_3.cpp)]

## <a name="_core_modifying_the_ondraw_function"></a> Modifying the OnDraw Function

The default implementation of `OnDraw` uses the Windows system font for all text displayed in the control. This means that you must modify the `OnDraw` code by selecting the font object into the device context. To do this, call [COleControl::SelectStockFont](reference/colecontrol-class.md#selectstockfont) and pass the control's device context, as shown in the following example:

[!code-cpp[NVC_MFC_AxFont#4](codesnippet/cpp/mfc-activex-controls-using-fonts_4.cpp)]

After the `OnDraw` function has been modified to use the font object, any text within the control is displayed with characteristics from the control's stock Font property.

## <a name="_core_using_custom_font_properties_in_your_control"></a> Using Custom Font Properties in Your Control

In addition to the stock Font property, the ActiveX control can have custom Font properties. To add a custom font property you must:

- Use the Add Property Wizard to implement the custom Font property.

- [Processing font notifications](#_core_processing_font_notifications).

- [Implementing a new font notification interface](#_core_implementing_a_new_font_notification_interface).

### <a name="_core_implementing_a_custom_font_property"></a> Implementing a Custom Font Property

To implement a custom Font property, you use the Add Property Wizard to add the property and then make some modifications to the code. The following sections describe how to add the custom `HeadingFont` property to the Sample control.

##### To add the custom Font property using the Add Property Wizard

1. Load your control's project.

1. In Class View, expand the library node of your control.

1. Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Property**.

   This opens the Add Property Wizard.

1. In the **Property Name** box, type a name for the property. For this example, use **HeadingFont**.

1. For **Implementation Type**, click **Get/Set Methods**.

1. In the **Property Type** box, select **IDispatch**<strong>\*</strong> for the property's type.

1. Click **Finish**.

The Add Property Wizard creates the code to add the `HeadingFont` custom property to the `CSampleCtrl` class and the SAMPLE.IDL file. Because `HeadingFont` is a Get/Set property type, the Add Property Wizard modifies the `CSampleCtrl` class's dispatch map to include a DISP_PROPERTY_EX_ID[DISP_PROPERTY_EX](reference/dispatch-maps.md#disp_property_ex) macro entry:

[!code-cpp[NVC_MFC_AxFont#5](codesnippet/cpp/mfc-activex-controls-using-fonts_5.cpp)]

The DISP_PROPERTY_EX macro associates the `HeadingFont` property name with its corresponding `CSampleCtrl` class Get and Set methods, `GetHeadingFont` and `SetHeadingFont`. The type of the property value is also specified; in this case, VT_FONT.

The Add Property Wizard also adds a declaration in the control header file (.H) for the `GetHeadingFont` and `SetHeadingFont` functions and adds their function templates in the control implementation file (.CPP):

[!code-cpp[NVC_MFC_AxFont#6](codesnippet/cpp/mfc-activex-controls-using-fonts_6.cpp)]

Finally, the Add Property Wizard modifies the control .IDL file by adding an entry for the `HeadingFont` property:

[!code-cpp[NVC_MFC_AxFont#7](codesnippet/cpp/mfc-activex-controls-using-fonts_7.idl)]

### Modifications to the Control Code

Now that you have added the `HeadingFont` property to the control, you must make some changes to the control header and implementation files to fully support the new property.

In the control header file (.H), add the following declaration of a protected member variable:

[!code-cpp[NVC_MFC_AxFont#8](codesnippet/cpp/mfc-activex-controls-using-fonts_8.h)]

In the control implementation file (.CPP), do the following:

- Initialize *m_fontHeading* in the control constructor.

   [!code-cpp[NVC_MFC_AxFont#9](codesnippet/cpp/mfc-activex-controls-using-fonts_9.cpp)]

- Declare a static FONTDESC structure containing default attributes of the font.

   [!code-cpp[NVC_MFC_AxFont#10](codesnippet/cpp/mfc-activex-controls-using-fonts_10.cpp)]

- In the control `DoPropExchange` member function, add a call to the `PX_Font` function. This provides initialization and persistence for your custom Font property.

   [!code-cpp[NVC_MFC_AxFont#11](codesnippet/cpp/mfc-activex-controls-using-fonts_11.cpp)]

- Finish implementing the control `GetHeadingFont` member function.

   [!code-cpp[NVC_MFC_AxFont#12](codesnippet/cpp/mfc-activex-controls-using-fonts_12.cpp)]

- Finish implementing the control `SetHeadingFont` member function.

   [!code-cpp[NVC_MFC_AxFont#13](codesnippet/cpp/mfc-activex-controls-using-fonts_13.cpp)]

- Modify the control `OnDraw` member function to define a variable to hold the previously selected font.

   [!code-cpp[NVC_MFC_AxFont#14](codesnippet/cpp/mfc-activex-controls-using-fonts_14.cpp)]

- Modify the control `OnDraw` member function to select the custom font into the device context by adding the following line wherever the font is to be used.

   [!code-cpp[NVC_MFC_AxFont#15](codesnippet/cpp/mfc-activex-controls-using-fonts_15.cpp)]

- Modify the control `OnDraw` member function to select the previous font back into the device context by adding the following line after the font has been used.

   [!code-cpp[NVC_MFC_AxFont#16](codesnippet/cpp/mfc-activex-controls-using-fonts_16.cpp)]

After the custom Font property has been implemented, the standard Font property page should be implemented, allowing control users to change the control's current font. To add the property page ID for the standard Font property page, insert the following line after the BEGIN_PROPPAGEIDS macro:

[!code-cpp[NVC_MFC_AxFont#17](codesnippet/cpp/mfc-activex-controls-using-fonts_17.cpp)]

You must also increment the count parameter of your BEGIN_PROPPAGEIDS macro by one. The following line illustrates this:

[!code-cpp[NVC_MFC_AxFont#18](codesnippet/cpp/mfc-activex-controls-using-fonts_18.cpp)]

After these changes have been made, rebuild the entire project to incorporate the additional functionality.

### <a name="_core_processing_font_notifications"></a> Processing Font Notifications

In most cases the control needs to know when the characteristics of the font object have been modified. Each font object is capable of providing notifications when it changes by calling a member function of the `IFontNotification` interface, implemented by `COleControl`.

If the control uses the stock Font property, its notifications are handled by the `OnFontChanged` member function of `COleControl`. When you add custom font properties, you can have them use the same implementation. In the example in the previous section, this was accomplished by passing &*m_xFontNotification* when initializing the *m_fontHeading* member variable.

![Implementing multiple font object interfaces](../mfc/media/vc373q1.gif "Implementing multiple font object interfaces") <br/>
Implementing Multiple Font Object Interfaces

The solid lines in the figure above show that both font objects are using the same implementation of `IFontNotification`. This could cause problems if you wanted to distinguish which font changed.

One way to distinguish between the control's font object notifications is to create a separate implementation of the `IFontNotification` interface for each font object in the control. This technique allows you to optimize your drawing code by updating only the string, or strings, that use the recently modified font. The following sections demonstrate the steps necessary to implement separate notification interfaces for a second Font property. The second font property is assumed to be the `HeadingFont` property that was added in the previous section.

### <a name="_core_implementing_a_new_font_notification_interface"></a> Implementing a New Font Notification Interface

To distinguish between the notifications of two or more fonts, a new notification interface must be implemented for each font used in the control. The following sections describe how to implement a new font notification interface by modifying the control header and implementation files.

### Additions to the Header File

In the control header file (.H), add the following lines to the class declaration:

[!code-cpp[NVC_MFC_AxFont#19](codesnippet/cpp/mfc-activex-controls-using-fonts_19.h)]

This creates an implementation of the `IPropertyNotifySink` interface called `HeadingFontNotify`. This new interface contains a method called `OnChanged`.

### Additions to the Implementation File

In the code that initializes the heading font (in the control constructor), change &*m_xFontNotification* to &*m_xHeadingFontNotify*. Then add the following code:

[!code-cpp[NVC_MFC_AxFont#20](codesnippet/cpp/mfc-activex-controls-using-fonts_20.cpp)]

The `AddRef` and `Release` methods in the `IPropertyNotifySink` interface keep track of the reference count for the ActiveX control object. When the control obtains access to interface pointer, the control calls `AddRef` to increment the reference count. When the control is finished with the pointer, it calls `Release`, in much the same way that `GlobalFree` might be called to free a global memory block. When the reference count for this interface goes to zero, the interface implementation can be freed. In this example, the `QueryInterface` function returns a pointer to a `IPropertyNotifySink` interface on a particular object. This function allows an ActiveX control to query an object to determine what interfaces it supports.

After these changes have been made to your project, rebuild the project and use Test Container to test the interface. See [Testing Properties and Events with Test Container](testing-properties-and-events-with-test-container.md) for information on how to access the test container.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)<br/>
[MFC ActiveX Controls: Using Pictures in an ActiveX Control](mfc-activex-controls-using-pictures-in-an-activex-control.md)<br/>
[MFC ActiveX Controls: Using Stock Property Pages](mfc-activex-controls-using-stock-property-pages.md)
