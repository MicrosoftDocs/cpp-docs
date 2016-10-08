---
title: "MFC ActiveX Controls: Adding Custom Properties"
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
ms.assetid: 85af5167-74c7-427b-b8f3-e0d7b73942e5
caps.latest.revision: 9
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
# MFC ActiveX Controls: Adding Custom Properties
Custom properties differ from stock properties in that custom properties are not already implemented by the `COleControl` class. A custom property is used to expose a certain state or appearance of an ActiveX control to a programmer using the control.  
  
 This article describes how to add a custom property to the ActiveX control using the Add Property Wizard and explains the resulting code modifications. Topics include:  
  
-   [Using the Add Property Wizard to add a custom property](#_core_using_classwizard_to_add_a_custom_property)  
  
-   [Add Property Wizard changes for custom properties](#_core_classwizard_changes_for_custom_properties)  
  
 Custom properties come in four varieties of implementation: Member Variable, Member Variable with Notification, Get/Set Methods, and Parameterized.  
  
-   Member Variable Implementation  
  
     This implementation represents the property's state as a member variable in the control class. Use the Member Variable implementation when it is not important to know when the property value changes. Of the three types, this implementation creates the least amount of support code for the property. The dispatch map entry macro for member variable implementation is [DISP_PROPERTY](../Topic/DISP_PROPERTY.md).  
  
-   Member Variable with Notification Implementation  
  
     This implementation consists of a member variable and a notification function created by the Add Property Wizard. The notification function is automatically called by the framework after the property value changes. Use the Member Variable with Notification implementation when you need to be notified after a property value has changed. This implementation requires more time because it requires a function call. The dispatch map entry macro for this implementation is [DISP_PROPERTY_NOTIFY](../Topic/DISP_PROPERTY_NOTIFY.md).  
  
-   Get/Set Methods Implementation  
  
     This implementation consists of a pair of member functions in the control class. The Get/Set Methods implementation automatically calls the Get member function when the control's user requests the current value of the property and the Set member function when the control's user requests that the property be changed. Use this implementation when you need to compute the value of a property during run time, validate a value passed by the control's user before changing the actual property, or implement a read- or write-only property type. The dispatch map entry macro for this implementation is [DISP_PROPERTY_EX](../Topic/DISP_PROPERTY_EX.md). The following section, [Using the Add Property Wizard to Add a Custom Property](#_core_using_classwizard_to_add_a_custom_property), uses the CircleOffset custom property to demonstrate this implementation.  
  
-   Parameterized Implementation  
  
     Parameterized implementation is supported by the Add Property Wizard. A parameterized property (sometimes called a property array) can be used to access a set of values through a single property of your control. The dispatch map entry macro for this implementation is `DISP_PROPERTY_PARAM`. For more information on implementing this type, see [Implementing a Parameterized Property](../VS_visualcpp/MFC-ActiveX-Controls--Advanced-Topics.md) in the article ActiveX Controls: Advanced Topics.  
  
##  <a name="_core_using_classwizard_to_add_a_custom_property"></a> Using the Add Property Wizard to Add a Custom Property  
 The following procedure demonstrates adding a custom property, CircleOffset, which uses the Get/Set Methods implementation. The CircleOffset custom property allows the control's user to offset the circle from the center of the control's bounding rectangle. The procedure for adding custom properties with an implementation other than Get/Set Methods is very similar.  
  
 This same procedure can also be used to add other custom properties you want. Substitute your custom property name for the CircleOffset property name and parameters.  
  
#### To add the CircleOffset custom property using the Add Property Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, expand the library node of your control.  
  
3.  Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.  
  
4.  From the shortcut menu, click **Add** and then click **Add Property**.  
  
     This opens the [Add Property Wizard](../VS_visualcpp/Names--Add-Property-Wizard.md).  
  
5.  In the **Property Name** box, type `CircleOffset`.  
  
6.  For **Implementation Type**, click **Get/Set Methods**.  
  
7.  In the **Property Type** box, select **short**.  
  
8.  Type unique names for your Get and Set Functions, or accept the default names.  
  
9. Click **Finish**.  
  
##  <a name="_core_classwizard_changes_for_custom_properties"></a> Add Property Wizard Changes for Custom Properties  
 When you add the CircleOffset custom property, the Add Property Wizard makes changes to the header (.H) and the implementation (.CPP) files of the control class.  
  
 The following lines are added to the .H file to declare two functions called `GetCircleOffset` and `SetCircleOffset`:  
  
 [!CODE [NVC_MFC_AxUI#25](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#25)]  
  
 The following line is added to your control's .IDL file:  
  
 [!CODE [NVC_MFC_AxUI#26](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#26)]  
  
 This line assigns the CircleOffset property a specific ID number, taken from the method's position in the methods and properties list of the Add Property Wizard.  
  
 In addition, the following line is added to the dispatch map (in the .CPP file of the control class) to map the CircleOffset property to the control's two handler functions:  
  
 [!CODE [NVC_MFC_AxUI#27](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#27)]  
  
 Finally, the implementations of the `GetCircleOffset` and `SetCircleOffset` functions are added to the end of the control's .CPP file. In most cases, you will modify the Get function to return the value of the property. The Set function will usually contain code that should be executed either before or after the property changes.  
  
 [!CODE [NVC_MFC_AxUI#28](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxUI#28)]  
  
 Note that the Add Property Wizard automatically adds a call, to [SetModifiedFlag](../Topic/COleControl::SetModifiedFlag.md), to the body of the Set function. Calling this function marks the control as modified. If a control has been modified, its new state will be saved when the container is saved. This function should be called whenever a property, saved as part of the control's persistent state, changes value.  
  
## See Also  
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)   
 [MFC ActiveX Controls: Properties](../VS_visualcpp/MFC-ActiveX-Controls--Properties.md)   
 [MFC ActiveX Controls: Methods](../VS_visualcpp/MFC-ActiveX-Controls--Methods.md)   
 [COleControl Class](../VS_visualcpp/COleControl-Class.md)