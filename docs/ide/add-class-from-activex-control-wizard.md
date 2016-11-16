---
title: "Add Class From ActiveX Control Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.class.axcontrol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX Control Wizard"
  - "Add Class from ActiveX Control Wizard [C++]"
ms.assetid: 668d801c-5fb6-4176-9191-5c38995a4713
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
# Add Class From ActiveX Control Wizard
Use this wizard to add an MFC class from an available ActiveX control. The wizard creates a class for each interface you add from the selected ActiveX control.  
  
 **Add Class From**  
 Specifies the location of the type library, from which the class is created.  
  
|Option|Description|  
|------------|-----------------|  
|**Registry**|The type library is registered in the system. Registered type libraries are listed in **Available ActiveX controls**.|  
|**File**|The type library is not necessarily registered in the system but is contained in a file. You must provide the file location in **Location**.|  
  
 **Available ActiveX controls**  
 Specifies the ActiveX controls currently registered in the system. Select an ActiveX control from this list to display its interfaces in the **Interfaces** list. See [MFC ActiveX Controls: Distributing ActiveX Controls](../mfc/mfc-activex-controls-distributing-activex-controls.md) for more information about registering ActiveX controls.  
  
 If you click **File** under **Add Class From**, this box is unavailable for change.  
  
 **Location**  
 Specifies the location of the ActiveX control. If you click **File** under **Add Class From**, you can provide the location of the file containing the type library. To browse to the location of the file, click the ellipsis button.  
  
 If you click **Registry** under **Add Class From**, this box is unavailable for change.  
  
 **Interfaces**  
 Specifies the interfaces in the ActiveX control currently selected in **Available ActiveX controls** or in the type library in the file specified in **Location**.  
  
|Transfer button|Description|  
|---------------------|-----------------|  
|**>**|Adds the interface currently selected in the **Interfaces** list. Unavailable if no interface is selected.|  
|**>>**|Adds all the interfaces in the ActiveX control currently selected in **Available ActiveX controls** or in the type library in the file specified in **Location**.|  
|**<**|Removes the class currently selected in the **Generated classes** list. Unavailable if no class is currently selected in the **Generated classes** list.|  
|**<\<**|Removes all the classes in the **Generated classes** list. Unavailable if the **Generated classes** list is empty.|  
  
 **Generated classes**  
 Specifies the class names to be generated from the interfaces added using the **>** or **>>** button. You can click this box to select a class, and then use the up or down keys to scroll through the list, viewing each class name in the `Class` box and file name in the **.h file** box that the wizard generates when you click **Finish**. You can select only one class at a time in this box.  
  
 You can remove a class by selecting it in this list and clicking **<**. You do not need to select a class in the **Generated classes** box to remove all classes; by clicking **<<**, you remove all classes in the **Generated classes** box.  
  
 `Class`  
 Specifies the name of the class selected in the **Generated classes** box that the wizard adds when you click **Finish**. You can edit the name in the `Class` box.  
  
 **.h file**  
 Sets the name of the header file for the new object's class. By default, this name is based on the name you provide in **Generated classes**. Click the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard will not save it to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
 **.cpp file**  
 Sets the name of the implementation file for the new object's class. By default, this name is based on the name you provide in **Generated classes**. Click the ellipsis button to save the file name to the location of your choice. The file is not saved to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class implementation should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
## See Also  
 [Adding a Class from an ActiveX Control](../ide/adding-a-class-from-an-activex-control-visual-cpp.md)   
 [Automation Clients: Using Type Libraries](../mfc/automation-clients-using-type-libraries.md)