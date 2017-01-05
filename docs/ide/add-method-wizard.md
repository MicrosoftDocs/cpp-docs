---
title: "Add Method Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.method.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Add Method Wizard [C++]"
  - "methods [C++], adding using wizards"
ms.assetid: b9a71b0e-9ecf-40fa-9f86-4200cb23d671
caps.latest.revision: 7
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
# Add Method Wizard
Use this wizard to add a method to an interface. Depending on the project type or interface type to which you are adding a method, the wizard displays different options.  
  
## Names  
 **Return type**  
 The data type returned by the method. `HRESULT` is recommended for all interface types, because it provides a standard way to return errors.  
  
|Interface type|Description|  
|--------------------|-----------------|  
|Dual interface|`HRESULT`. Unchangeable.|  
|Custom interface|`HRESULT`. Unchangeable.|  
|Local custom interface|Provide your own return type or select from the list.|  
|Dispinterface|Provide your own return type or select from the list.|  
|MFC ActiveX control dispinterface|If you implement a stock method, the return type is set to the appropriate value and is unchangeable. If you select a method from the **Method name** list and click **Custom** under **Select method type**, select a return type from the list.|  
  
 **Method name**  
 Sets the name for the method.  
  
|Interface type|Description|  
|--------------------|-----------------|  
|ATL dual interface, custom interface, and local custom interface|Provide your own method name.|  
|MFC dispinterface|Provide your own method name or select a suggested method name from the list. If you select a name from the list, the appropriate value appears in the **Return type** box, and it is unchangeable.|  
|MFC ActiveX control dispinterface|Provide your own or select either of the stock methods [DoClick](../mfc/reference/colecontrol-class.md#doclick) and [Refresh](../mfc/reference/colecontrol-class.md#refresh). See [MFC ActiveX Controls: Adding Stock Methods](../mfc/mfc-activex-controls-adding-stock-methods.md) for more information.|  
  
 **Method type**  
 Available only for MFC ActiveX controls. If you provide a method name in the **Method name** box, rather than selecting a method from the list, this box is unavailable.  
  
 If you select one of the methods in the **Method name** list, select either the stock implementation or a custom implementation.  
  
|Method type|Description|  
|-----------------|-----------------|  
|**Stock**|The default. Inserts the stock implementation of the method you select in the **Method name** list. **Return type** is unchangeable if you select **Stock**.|  
|**Custom**|Inserts a stub implementation of the method selected in the **Method name** list. For custom method types, you can provide your own return type, or you can select one from the **Return type** list.|  
  
 **Internal name**  
 Available for only custom methods added to an MFC dispinterface. Sets the name used in the dispatch map, the header (.h) file, and the implementation (.cpp) file. By default, this name is the same as **Method name**. You can change the method name if you are working with an MFC dispinterface or if you are adding a custom method to an MFC ActiveX control dispinterface.  
  
|Interface type|Description|  
|--------------------|-----------------|  
|ATL dual interface, custom interface, and local custom interface|Not available|  
|MFC dispinterface|Set to the method name by default. You can edit the internal name.|  
|MFC ActiveX control dispinterface|You can set the internal name only for custom methods. Stock methods do not use an internal name.|  
  
 **Parameter attributes**  
 Sets any additional attributes for parameter specified in **Parameter name**.  
  
|Parameter attribute|Description|Allowed combinations|  
|-------------------------|-----------------|--------------------------|  
|**In**|Indicates that the parameter is passed from the calling procedure to the called procedure.|**in** only<br /><br /> **in** and **out**|  
|**Out**|Indicates that the pointer parameter is returned from the called procedure to the calling procedure (from the server to the client).|**out** only<br /><br /> **in** and **out**<br /><br /> **out** and **retval**|  
|**Retval**|Indicates that the parameter receives the return value of the member.|**retval** and out|  
  
 **Parameter type**  
 Sets the data type of the parameter. Select the type from the list.  
  
 **Parameter name**  
 Sets the name of a parameter to pass through your method. After typing the name, you must click **Add** to add it to the list of parameters that will pass through your method. If you do not provide a parameter name, the wizard ignores any parameter attributes (ATL only) or **Parameter type** selections.  
  
 Once you click **Add**, the parameter name appears in **Parameter list**.  
  
 **Note** If you supply a parameter name and then click **Finish** before you click **Add**, the parameter is not added to the method. You must find the method and insert the parameter manually.  
  
 **Add**  
 Adds the parameter you specify in **Parameter name**, and its type and parameter attributes, to **Parameter list**. You must click **Add** to add a parameter to the list.  
  
 **Remove**  
 Removes the parameter you select in **Parameter list** from the list.  
  
 **Parameter list**  
 Displays all parameters and their modifiers and types currently added for the method. As you add parameters, the wizard updates **Parameter list** to display each parameter, with its modifier and type.  
  
## See Also  
 [Adding a Method](../ide/adding-a-method-visual-cpp.md)   
 [IDL Attributes, Add Method Wizard](../ide/idl-attributes-add-method-wizard.md)