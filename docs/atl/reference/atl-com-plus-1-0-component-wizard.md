---
title: "ATL COM+ 1.0 Component Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.mts.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, adding components"
  - "ATL COM+ 1.0 Component Wizard"
ms.assetid: 11670681-8671-4122-96a4-2e52f8dadce0
caps.latest.revision: 13
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
# ATL COM+ 1.0 Component Wizard
Use this wizard to add an object to your project that supports COM+ 1.0 services, including transactions.  
  
 You can specify whether the object supports dual interfaces and Automation. You can also indicate support for the error information interface, enhanced object control, transactions, and asynchronous message queuing.  
  
## Remarks  
 Beginning with [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], the registration script produced by this wizard will register its COM components under **HKEY_CURRENT_USER** instead of **HKEY_LOCAL_MACHINE**. To modify this behavior, set the **Register component for all users** option of the ATL Wizard.  
  
## Names  
 Specify the names for the object, interface, and classes to be added to your project. With the exception of **Short name**, all other boxes can be edited independently of the others. If you change the text for **Short name**, the change is reflected in the names of all other boxes in this page. If you change the **Coclass** name in the COM section, the change is reflected in the **Type** and **ProgID** boxes, but the **Interface** name does not change. This naming behavior is designed to make all the names easily identifiable for you as you develop your control.  
  
 **Short name**  
 Sets the abbreviated name for the object. The name that you provide determines the `Class` and `Coclass` names, the **.cpp file** and **.h file** names, the **Interface** name, the **Type** names, and the **ProgID**, unless you change those fields individually.  
  
 **.h file**  
 Sets the name of the header file for the new object's class. By default, this name is based on the name that you provide in **Short name**. Click the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard will not save it to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
 **Class**  
 Sets the name of the class to be created. This name is based on the name you provide in **Short name**, preceded by 'C', the typical prefix for a class name.  
  
 **.cpp file**  
 Sets the name of the implementation file for the new object's class. By default, this name is based on the name you provide in **Short name**. Click the ellipsis button to save the file name to the location of your choice. The file is not saved to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class implementation should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
 **Attributed**  
 Indicates whether the object uses attributes. If you are adding an object to an attributed ATL project, this option is selected and not available to change. That is, you can add only attributed objects to a project created with attribute support.  
  
 If you select this option for an ATL project that does not have attribute support, the wizard prompts you to specify whether you want to add attribute support to the project.  
  
 Any objects you add following setting this option are designated as attributed by default (the check box is selected). You can clear this box to add an object that does not use attributes.  
  
 See [Application Settings, ATL Project Wizard](../../atl/reference/application-settings-atl-project-wizard.md) and [Basic Mechanics of Attributes](../../windows/basic-mechanics-of-attributes.md) for more information.  
  
### COM  
 Provides information about the COM functionality for the object.  
  
 **Coclass**  
 Sets the name of the component class that contains a list of interfaces supported by the object.  
  
> [!NOTE]
>  If you create your project using attributes, or if you indicate on this wizard page that the COM+ 1.0 component uses attributes, you cannot change this option because ATL does not include the `coclass` attribute.  
  
 **Type**  
 Sets the object description that will appear in the registry  
  
 **Interface**  
 Sets the interface you create for your object. This interface contains your custom methods.  
  
 **ProgID**  
 Sets the name that containers can use instead of the CLSID of the object.  
  
## See Also  
 [ATL COM+ 1.0 Component](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)

