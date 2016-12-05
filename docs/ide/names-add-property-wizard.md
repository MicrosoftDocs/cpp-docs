---
title: "Names, Add Property Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.prop.overview"
dev_langs: 
  - "C++"
ms.assetid: 0453b7ea-89cb-41a1-80a2-d45f61589c0a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Names, Add Property Wizard
Use this wizard to add a property to an interface.  
  
 **Property type**  
 Sets the type of property you are adding. For MFC dispinterfaces, provide your own type or select from the predefined list. If you provide a stock implementation of a property, **Property type** is set to the stock type and is unavailable for change.  
  
 **Property name**  
 Sets the name of the property. For MFC dispinterfaces associated with ActiveX controls, you can supply your own name or you can select a stock property name from the predefined list. If you provide your own property name, the **Stock** implementation type is unavailable. See [Stock Properties](../ide/stock-properties.md) for a description of the properties in the list.  
  
|Interface type|Description|  
|--------------------|-----------------|  
|ATL dual interface, custom interface, and local custom interface|Provide a property name.|  
|MFC dispinterface, MFC ActiveX control dispinterface|Provide a property name or select a stock property from the list. If you select a property from the list, the appropriate value appears in the **Property type** box. You can change this type, depending on your selection under **Implementation type**.|  
  
 **Return type**  
 ATL interfaces only. Sets the return type for the property. For dual interfaces, `HRESULT` is always the return type, and this box is unavailable. For custom interfaces, you can select a return type from the list. `HRESULT` is still recommended, because it provides a standard way to return errors.  
  
 **Variable name**  
 MFC dispinterfaces only. Available only if you specify **Member variable** under **Implementation type**. Sets the name of the member variable with which the property is associated. By default, the variable name is set to m_*PropertyName*. You can edit this name.  
  
 **Notification function**  
 MFC dispinterfaces only. Available only if you specify **Member variable** under **Implementation type**. Sets the name of the notification function called if the property changes. By default, the name of the notification function is set to On*PropertyName*Changed. You can edit this name.  
  
 **Get function**  
 For MFC dispinterfaces. Available only if you specify **Get/Set methods** under **Implementation type**. Sets the name of the function to get the property. By default, the name of the Get function is set to Get*PropertyName*. You can edit this name. If you delete the name, the function [GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported) is inserted into the interface dispatch map. The Get*PropertyName* function specifies that the property as readable.  
  
 **Set function**  
 MFC dispinterfaces only. Available only if you specify **Get/Set methods** under **Implementation type**. Sets the name of the function to set the property. By default, the name of the Set function is set to Set*PropertyName*. You can edit this name. If you delete the name, the function [SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported) is inserted into the interface dispatch map. The Set*PropertyName* function specifies that the property is writable.  
  
 **Implementation type**  
 MFC dispinterfaces only. Specifies how to implement the property you are adding.  
  
|Implementation type|Description|  
|-------------------------|-----------------|  
|**Stock**|Specifies a stock implementation for the property selected in **Property name**. The default. See [Stock Properties](../ide/stock-properties.md) for more information.<br /><br /> If you specify **Stock**, then **Property type**, **Parameter type**, and **Parameter name** are dimmed.|  
|**Member variable**|Specifies the property is added as a member variable. You can add custom properties or most stock properties as member variables. You cannot specify **Member variable** for **Caption**, **hWnd**, and **Text** properties.<br /><br /> Provides default names under **Variable name** and **Notification function**. You can edit this name.|  
|**Get/Set methods**|Specifies the property is added as Get*PropertyName* and Set*PropertyName* functions, by default. These names appear under **Get function** and **Set function**.<br /><br /> You can change the default **Property type**, which passes a value for the Get function. You can specify parameters for the **Get** and `Set` functions.|  
  
 **Get function**  
 For ATL interfaces. Sets the property as readable; that is, it creates the **Get** method for retrieving this property from the object. You must select **Get**, `Put`, or both.  
  
 **Put function**  
 ATL interfaces only. Sets the property writable; that is, it creates the `Put` method for setting, or "putting," this property of the object. You must select **Get**, `Put`, or both. If you select this option, you can choose from the following two ways to implement the method:  
  
|Option|Description|  
|------------|-----------------|  
|**PropPut**|The [PropPut](../windows/propput.md) function returns a copy of the object. This is the default and the most common way to make the property writable.|  
|**PropPutRef**|The [PropPutRef](../windows/propputref.md) function returns a reference to the object, rather than returning the copy of the object itself. Consider using this option for objects, such as large structs or arrays, that may have initialization overhead.|  
  
 **Parameter attributes**  
 ATL interfaces only. Sets whether the parameter specified by **Parameter name** is **in**, **out**, both, or none.  
  
|Option|Description|  
|------------|-----------------|  
|**in**|Indicates that the parameter is passed from the calling procedure to the called procedure.|  
|**out**|Indicates that the pointer parameter is returned from the called procedure to the calling procedure (from the server to the client).|  
  
 **Parameter type**  
 Sets the data type of the parameter. Select the type from the list.  
  
 **Parameter name**  
 Sets the name of a parameter you are adding for the property, if the property has parameters. Once you click **Add**, the parameter name appears in **Parameter list**.  
  
 **Parameter list**  
 Displays the list of attributes to be added to the property. Each item in the list consists of the parameter name, parameter type, and attributes. Use **Add** and **Remove** to update the list.  
  
 **Add**  
 Adds the parameter you specify in **Parameter name** and **Parameter type** to the **Parameter list**. You must click **Add** to add a parameter to the list.  
  
 **Remove**  
 Removes the parameter you select in **Parameter list**.  
  
 **Default property**  
 MFC dispinterface only. Sets this property as the default for the interface. An interface can have only one default property; once you specify the default property, for any other properties you add to the interface, this box is unavailable.  
  
## See Also  
 [Adding a Property](../ide/adding-a-property-visual-cpp.md)   
 [IDL Attributes, Add Property Wizard](../ide/idl-attributes-add-property-wizard.md)   
 [Implementing an Interface](../ide/implementing-an-interface-visual-cpp.md)