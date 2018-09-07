---
title: "Adding a Property (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["interfaces, adding properties", "properties [C++], adding to interfaces"]
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Adding a Property (Visual C++)
You can use the [Add Property Wizard](../ide/names-add-property-wizard.md) to add a method to an interface in your project.  
  
### To add a property to your object  
  
1.  In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the interface to which you want to add the property.  
  
    > [!NOTE]
    >  You can also add properties to dispinterfaces, which, unless the project is attributed, are nested within the library node.  
  
2.  From the shortcut menu, click **Add**, and then click **Add Property**.  
  
3.  In the [Add Property Wizard](../ide/names-add-property-wizard.md), provide the information to create the property.  
  
4.  Specify any interface definition language (IDL) settings for the property in the [IDL Attributes](../ide/idl-attributes-add-property-wizard.md) page of the wizard.  
  
5.  Click **Finish** to add the property.  
  
 The **Get** and `Put` methods of the property are displayed as two icons in Class View, under the interface where it is defined. You can double-click either icon to view the property declaration in the .idl file.  
  
-   For ATL interfaces, the **Get** and **Put** functions are added to the .cpp file, and references to these functions are added to the .h file.  
  
-   For MFC dispinterfaces, if you select **Member variable** as the implementation type, a method and a variable are added to the class that implements it. If you select **Get/Set methods** as the implementation type, two methods are added to the class that implements it.  
  
## See Also  
 [Creating a COM Interface](../ide/creating-a-com-interface-visual-cpp.md)   
 [Editing a COM Interface](../ide/editing-a-com-interface.md)   
 [The Component Object Model](/windows/desktop/com/the-component-object-model)   
 [Interface Pointers and Interfaces](/windows/desktop/com/interface-pointers-and-interfaces)