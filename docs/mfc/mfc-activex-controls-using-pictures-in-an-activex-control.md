---
description: "Learn more about: MFC ActiveX Controls: Using Pictures in an ActiveX Control"
title: "MFC ActiveX Controls: Using Pictures in an ActiveX Control"
ms.date: "11/04/2016"
f1_keywords: ["LPPICTUREDISP"]
helpviewer_keywords: ["OnDraw method, MFC ActiveX controls", "MFC ActiveX controls [MFC], pictures", "OnDraw method [MFC]", "OnResetState method [MFC]", "CLSID_CPicturePropPage [MFC]"]
ms.assetid: 2e49735c-21b9-4442-bb3d-c82ef258eec9
---
# MFC ActiveX Controls: Using Pictures in an ActiveX Control

This article describes the common Picture type and how to implement it in your ActiveX control. Topics include:

- [Overview of Custom Picture Properties](#_core_overview_of_custom_picture_properties)

- [Implementing a Custom Picture Property in Your ActiveX Control](#_core_implementing_a_custom_picture_property_in_your_activex_control)

- [Additions to Your Control Project](#_core_additions_to_your_control_project)

## <a name="_core_overview_of_custom_picture_properties"></a> Overview of Custom Picture Properties

A Picture type is one of a group of types common to some ActiveX controls. The Picture type handles metafiles, bitmaps, or icons and allows the user to specify a picture to be displayed in an ActiveX control. Custom Picture properties are implemented using a picture object and Get/Set functions that allow the control user access to the Picture property. Control users access the custom Picture property using the stock Picture property page.

In addition to the standard Picture type, Font and Color types are also available. For more information on using the standard Font type in your ActiveX control, see the article [MFC ActiveX Controls: Using Fonts](mfc-activex-controls-using-fonts.md).

The ActiveX control classes provide several components you can use to implement the Picture property within the control. These components include:

- The [CPictureHolder](reference/cpictureholder-class.md) class.

   This class provides easy access to the picture object and functionality for the item displayed by the custom Picture property.

- Support for properties of type **LPPICTUREDISP**, implemented with Get/Set functions.

   Using Class View you can quickly add a custom property, or properties, that supports the Picture type. For more information on adding ActiveX control properties with Class View, see the article [MFC ActiveX Controls: Properties](mfc-activex-controls-properties.md).

- A property page that manipulates a control's Picture property or properties.

   This property page is part of a group of stock property pages available to ActiveX controls. For more information on ActiveX control property pages, see the article [MFC ActiveX Controls: Using Stock Property Pages](mfc-activex-controls-using-stock-property-pages.md)

## <a name="_core_implementing_a_custom_picture_property_in_your_activex_control"></a> Implementing a Custom Picture Property in Your ActiveX Control

When you have completed the steps outlined in this section, the control can display pictures chosen by its user. The user can change the displayed picture using a property page that shows the current picture and has a Browse button that allows the user to the select different pictures.

A custom Picture property is implemented using a process similar to that used for implementing other properties, the main difference being that the custom property must support a Picture type. Because the item of the Picture property must be drawn by the ActiveX control, a number of additions and modifications must be made to the property before it can be fully implemented.

To implement a custom Picture property, you must do the following:

- [Add code to your control project](#_core_additions_to_your_control_project).

   A standard Picture property page ID, a data member of type `CPictureHolder`, and a custom property of type **LPPICTUREDISP** with a Get/Set implementation must be added.

- [Modify several functions in your control class](#_core_modifications_to_your_control_project).

   These modifications will be made to several functions that are responsible for the drawing of your ActiveX control.

## <a name="_core_additions_to_your_control_project"></a> Additions to Your Control Project

To add the property page ID for the standard Picture property page, insert the following line after the BEGIN_PROPPAGEIDS macro in the control implementation file (.CPP):

[!code-cpp[NVC_MFC_AxPic#1](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_1.cpp)]

You must also increment the count parameter of your BEGIN_PROPPAGEIDS macro by one. The following line illustrates this:

[!code-cpp[NVC_MFC_AxPic#2](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_2.cpp)]

To add the `CPictureHolder` data member to the control class, insert the following line under the protected section of the control class declaration in the control header file (.H):

[!code-cpp[NVC_MFC_AxPic#3](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_3.h)]

It is not necessary to name your data member *m_pic*; any name will suffice.

Next, add a custom property that supports a Picture type:

#### To add a custom picture property using the Add Property Wizard

1. Load your control's project.

1. In Class View, expand the library node of your control.

1. Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.

1. From the shortcut menu, choose **Add** and then **Add Property**.

1. In the **Property Name** box, type the property name. For example purposes, `ControlPicture` is used in this procedure.

1. In the **Property Type** box, select **IPictureDisp**<strong>\*</strong> for the property type.

1. For **Implementation Type**, click **Get/Set Methods**.

1. Type unique names for your Get and Set Functions or accept the default names. (In this example, the default names `GetControlPicture` and `SetControlPicture` are used.)

1. Click **Finish**.

The Add Property Wizard adds the following code between the dispatch map comments in the control header (.H) file:

[!code-cpp[NVC_MFC_AxPic#4](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_4.h)]

In addition, the following code was inserted in the dispatch map of the control implementation (.CPP) file:

[!code-cpp[NVC_MFC_AxPic#5](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_5.cpp)]

The Add Property Wizard also adds the following two stub functions in the control implementation file:

[!code-cpp[NVC_MFC_AxPic#6](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_6.cpp)]

> [!NOTE]
> Your control class and function names might differ from the example above.

### <a name="_core_modifications_to_your_control_project"></a> Modifications to Your Control Project

After you have made the necessary additions to your control project, you need to modify several functions that affect the rendering of your ActiveX control. These functions, `OnResetState`, `OnDraw`, and the Get/Set functions of a custom Picture property, are located in the control implementation file. (Note that in this example the control class is called `CSampleCtrl`, the `CPictureHolder` data member is called *m_pic*, and the custom picture property name is `ControlPicture`.)

In the control `OnResetState` function, add the following optional line after the call to `COleControl::OnResetState`:

[!code-cpp[NVC_MFC_AxPic#7](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_7.cpp)]

This sets the control's picture to a blank picture.

To draw the picture properly, make a call to [CPictureHolder::Render](reference/cpictureholder-class.md#render) in the control `OnDraw` function. Modify your function to resemble the following example:

[!code-cpp[NVC_MFC_AxPic#8](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_8.cpp)]

In the Get function of the control's custom picture property, add the following line:

[!code-cpp[NVC_MFC_AxPic#9](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_9.cpp)]

In the Set function of the control's custom Picture property, add the following lines:

[!code-cpp[NVC_MFC_AxPic#10](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_10.cpp)]

The picture property must be made persistent so that information added at design time will show up at run time. Add the following line to the `COleControl`-derived class's `DoPropExchange` function:

[!code-cpp[NVC_MFC_AxPic#11](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_11.cpp)]

> [!NOTE]
> Your class and function names might differ from the example above.

After you complete the modifications, rebuild your project to incorporate the new functionality of the custom Picture property and use Test Container to test the new property. See [Testing Properties and Events with Test Container](testing-properties-and-events-with-test-container.md) for information on how to access the test container.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)<br/>
[MFC ActiveX Controls: Using Fonts](mfc-activex-controls-using-fonts.md)<br/>
[MFC ActiveX Controls: Property Pages](mfc-activex-controls-property-pages.md)
