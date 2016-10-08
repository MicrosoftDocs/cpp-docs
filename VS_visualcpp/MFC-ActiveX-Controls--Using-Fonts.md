---
title: "MFC ActiveX Controls: Using Fonts"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7c51d602-3f5a-481d-84d1-a5d8a3a71761
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# MFC ActiveX Controls: Using Fonts
If your ActiveX control displays text, you can allow the control user to change the text appearance by changing a font property. Font properties are implemented as font objects and can be one of two types: stock or custom. Stock Font properties are preimplemented font properties that you can add using the Add Property Wizard. Custom Font properties are not preimplemented and the control developer determines the property's behavior and usage.  
  
 This article covers the following topics:  
  
-   [Using the Stock Font property](#_core_using_the_stock_font_property)  
  
-   [Using Custom Font Properties in Your Control](#_core_implementing_a_custom_font_property)  
  
##  <a name="_core_using_the_stock_font_property"></a> Using the Stock Font Property  
 Stock Font properties are preimplemented by the class [COleControl](../VS_visualcpp/COleControl-Class.md). In addition, a standard Font property page is also available, allowing the user to change various attributes of the font object, such as its name, size, and style.  
  
 Access the font object through the [GetFont](../Topic/COleControl::GetFont.md), [SetFont](../Topic/COleControl::SetFont.md), and [InternalGetFont](../Topic/COleControl::InternalGetFont.md) functions of `COleControl`. The control user will access the font object via the `GetFont` and `SetFont` functions in the same manner as any other Get/Set property. When access to the font object is required from within a control, use the `InternalGetFont` function.  
  
 As discussed in [MFC ActiveX Controls: Properties](../VS_visualcpp/MFC-ActiveX-Controls--Properties.md), adding stock properties is easy with the [Add Property Wizard](../VS_visualcpp/Names--Add-Property-Wizard.md). You choose the Font property, and the Add Property Wizard automatically inserts the stock Font entry into the control's dispatch map.  
  
#### To add the stock Font property using the Add Property Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, expand the library node of your control.  
  
3.  Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.  
  
4.  From the shortcut menu, click **Add** and then click **Add Property**.  
  
     This opens the Add Property Wizard.  
  
5.  In the **Property Name** box, click **Font**.  
  
6.  Click **Finish**.  
  
 The Add Property Wizard adds the following line to the control's dispatch map, located in the control class implementation file:  
  
 [!CODE [NVC_MFC_AxFont#1](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#1)]  
  
 In addition, the Add Property Wizard adds the following line to the control .IDL file:  
  
 [!CODE [NVC_MFC_AxFont#2](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#2)]  
  
 The stock Caption property is an example of a text property that can be drawn using the stock Font property information. Adding the stock Caption property to the control uses steps similar to those used for the stock Font property.  
  
#### To add the stock Caption property using the Add Property Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, expand the library node of your control.  
  
3.  Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.  
  
4.  From the shortcut menu, click **Add** and then click **Add Property**.  
  
     This opens the Add Property Wizard.  
  
5.  In the **Property Name** box, click **Caption**.  
  
6.  Click **Finish**.  
  
 The Add Property Wizard adds the following line to the control's dispatch map, located in the control class implementation file:  
  
 [!CODE [NVC_MFC_AxFont#3](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#3)]  
  
##  <a name="_core_modifying_the_ondraw_function"></a> Modifying the OnDraw Function  
 The default implementation of `OnDraw` uses the Windows system font for all text displayed in the control. This means that you must modify the `OnDraw` code by selecting the font object into the device context. To do this, call [COleControl::SelectStockFont](../Topic/COleControl::SelectStockFont.md) and pass the control's device context, as shown in the following example:  
  
 [!CODE [NVC_MFC_AxFont#4](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#4)]  
  
 After the `OnDraw` function has been modified to use the font object, any text within the control is displayed with characteristics from the control's stock Font property.  
  
##  <a name="_core_using_custom_font_properties_in_your_control"></a> Using Custom Font Properties in Your Control  
 In addition to the stock Font property, the ActiveX control can have custom Font properties. To add a custom font property you must:  
  
-   Use the Add Property Wizard to implement the custom Font property.  
  
-   [Processing font notifications](#_core_processing_font_notifications).  
  
-   [Implementing a new font notification interface](#_core_implementing_a_new_font_notification_interface).  
  
###  <a name="_core_implementing_a_custom_font_property"></a> Implementing a Custom Font Property  
 To implement a custom Font property, you use the Add Property Wizard to add the property and then make some modifications to the code. The following sections describe how to add the custom `HeadingFont` property to the Sample control.  
  
##### To add the custom Font property using the Add Property Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, expand the library node of your control.  
  
3.  Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.  
  
4.  From the shortcut menu, click **Add** and then click **Add Property**.  
  
     This opens the Add Property Wizard.  
  
5.  In the **Property Name** box, type a name for the property. For this example, use **HeadingFont**.  
  
6.  For **Implementation Type**, click **Get/Set Methods**.  
  
7.  In the **Property Type** box, select **IDispatch\*** for the property's type.  
  
8.  Click **Finish**.  
  
 The Add Property Wizard creates the code to add the `HeadingFont` custom property to the `CSampleCtrl` class and the SAMPLE.IDL file. Because `HeadingFont` is a Get/Set property type, the Add Property Wizard modifies the `CSampleCtrl` class's dispatch map to include a `DISP_PROPERTY_EX_ID`[DISP_PROPERTY_EX](../Topic/DISP_PROPERTY_EX.md) macro entry:  
  
 [!CODE [NVC_MFC_AxFont#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#5)]  
  
 The `DISP_PROPERTY_EX` macro associates the `HeadingFont` property name with its corresponding `CSampleCtrl` class Get and Set methods, `GetHeadingFont` and `SetHeadingFont`. The type of the property value is also specified; in this case, **VT_FONT**.  
  
 The Add Property Wizard also adds a declaration in the control header file (.H) for the `GetHeadingFont` and `SetHeadingFont` functions and adds their function templates in the control implementation file (.CPP):  
  
 [!CODE [NVC_MFC_AxFont#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#6)]  
  
 Finally, the Add Property Wizard modifies the control .IDL file by adding an entry for the `HeadingFont` property:  
  
 [!CODE [NVC_MFC_AxFont#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#7)]  
  
### Modifications to the Control Code  
 Now that you have added the `HeadingFont` property to the control, you must make some changes to the control header and implementation files to fully support the new property.  
  
 In the control header file (.H), add the following declaration of a protected member variable:  
  
 [!CODE [NVC_MFC_AxFont#8](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#8)]  
  
 In the control implementation file (.CPP), do the following:  
  
-   Initialize `m_fontHeading` in the control constructor.  
  
     [!CODE [NVC_MFC_AxFont#9](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#9)]  
  
-   Declare a static **FONTDESC** structure containing default attributes of the font.  
  
     [!CODE [NVC_MFC_AxFont#10](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#10)]  
  
-   In the control `DoPropExchange` member function, add a call to the `PX_Font` function. This provides initialization and persistence for your custom Font property.  
  
     [!CODE [NVC_MFC_AxFont#11](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#11)]  
  
-   Finish implementing the control `GetHeadingFont` member function.  
  
     [!CODE [NVC_MFC_AxFont#12](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#12)]  
  
-   Finish implementing the control `SetHeadingFont` member function.  
  
     [!CODE [NVC_MFC_AxFont#13](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#13)]  
  
-   Modify the control `OnDraw` member function to define a variable to hold the previously selected font.  
  
     [!CODE [NVC_MFC_AxFont#14](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#14)]  
  
-   Modify the control `OnDraw` member function to select the custom font into the device context by adding the following line wherever the font is to be used.  
  
     [!CODE [NVC_MFC_AxFont#15](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#15)]  
  
-   Modify the control `OnDraw` member function to select the previous font back into the device context by adding the following line after the font has been used.  
  
     [!CODE [NVC_MFC_AxFont#16](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#16)]  
  
 After the custom Font property has been implemented, the standard Font property page should be implemented, allowing control users to change the control's current font. To add the property page ID for the standard Font property page, insert the following line after the `BEGIN_PROPPAGEIDS` macro:  
  
 [!CODE [NVC_MFC_AxFont#17](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#17)]  
  
 You must also increment the count parameter of your `BEGIN_PROPPAGEIDS` macro by one. The following line illustrates this:  
  
 [!CODE [NVC_MFC_AxFont#18](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#18)]  
  
 After these changes have been made, rebuild the entire project to incorporate the additional functionality.  
  
###  <a name="_core_processing_font_notifications"></a> Processing Font Notifications  
 In most cases the control needs to know when the characteristics of the font object have been modified. Each font object is capable of providing notifications when it changes by calling a member function of the **IFontNotification** interface, implemented by `COleControl`.  
  
 If the control uses the stock Font property, its notifications are handled by the `OnFontChanged` member function of `COleControl`. When you add custom font properties, you can have them use the same implementation. In the example in the previous section, this was accomplished by passing &**m_xFontNotification** when initializing the **m_fontHeading** member variable.  
  
 ![Implementing multiple font object interfaces](../VS_visualcpp/media/vc373Q1.gif "vc373Q1")  
Implementing Multiple Font Object Interfaces  
  
 The solid lines in the figure above show that both font objects are using the same implementation of **IFontNotification**. This could cause problems if you wanted to distinguish which font changed.  
  
 One way to distinguish between the control's font object notifications is to create a separate implementation of the **IFontNotification** interface for each font object in the control. This technique allows you to optimize your drawing code by updating only the string, or strings, that use the recently modified font. The following sections demonstrate the steps necessary to implement separate notification interfaces for a second Font property. The second font property is assumed to be the `HeadingFont` property that was added in the previous section.  
  
###  <a name="_core_implementing_a_new_font_notification_interface"></a> Implementing a New Font Notification Interface  
 To distinguish between the notifications of two or more fonts, a new notification interface must be implemented for each font used in the control. The following sections describe how to implement a new font notification interface by modifying the control header and implementation files.  
  
### Additions to the Header File  
 In the control header file (.H), add the following lines to the class declaration:  
  
 [!CODE [NVC_MFC_AxFont#19](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#19)]  
  
 This creates an implementation of the `IPropertyNotifySink` interface called `HeadingFontNotify`. This new interface contains a method called `OnChanged`.  
  
### Additions to the Implementation File  
 In the code that initializes the heading font (in the control constructor), change `&m_xFontNotification` to `&m_xHeadingFontNotify`. Then add the following code:  
  
 [!CODE [NVC_MFC_AxFont#20](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxFont#20)]  
  
 The `AddRef` and `Release` methods in the `IPropertyNotifySink` interface keep track of the reference count for the ActiveX control object. When the control obtains access to interface pointer, the control calls `AddRef` to increment the reference count. When the control is finished with the pointer, it calls `Release`, in much the same way that **GlobalFree** might be called to free a global memory block. When the reference count for this interface goes to zero, the interface implementation can be freed. In this example, the `QueryInterface` function returns a pointer to a `IPropertyNotifySink` interface on a particular object. This function allows an ActiveX control to query an object to determine what interfaces it supports.  
  
 After these changes have been made to your project, rebuild the project and use Test Container to test the interface. See [Testing Properties and Events with Test Container](../VS_visualcpp/Testing-Properties-and-Events-with-Test-Container.md) for information on how to access the test container.  
  
## See Also  
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)   
 [MFC ActiveX Controls: Using Pictures in an ActiveX Control](../VS_visualcpp/MFC-ActiveX-Controls--Using-Pictures-in-an-ActiveX-Control.md)   
 [MFC ActiveX Controls: Using Stock Property Pages](../VS_visualcpp/MFC-ActiveX-Controls--Using-Stock-Property-Pages.md)