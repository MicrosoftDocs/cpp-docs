---
title: "Editing a COM Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.com.editing.interfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "methods [C++], adding to COM interfaces"
  - "COM interfaces, editing"
  - "properties [C++], adding to COM interfaces"
ms.assetid: 6c2909e0-af2d-4a37-bb39-ed372e6129cf
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
# Editing a COM Interface
By using commands from the Class View shortcut menu, you can define new methods and properties for the COM interfaces in your Visual C++ projects. In addition, from the Toolbox, you can define events for ActiveX controls.  
  
 For ATL- and MFC-based COM object classes, you can edit the class implementation at the same time that you edit the interface.  
  
> [!NOTE]
>  For interfaces that you have defined outside of the **Add Class** dialog box, Visual C++ adds the methods or properties to the .idl file, and it add stubs to the classes that implement methods, even when the interfaces are added manually.  
  
 The following three wizards help you customize existing interfaces. They are available from Class View:  
  
|Wizard|Project type|  
|------------|------------------|  
|[Add Property Wizard](../ide/names-add-property-wizard.md)|ATL or MFC projects supporting ATL. Right-click the interface to which you want to add the property.<br /><br /> Visual C++ detects the project type and modifies the options in the Add Property Wizard accordingly:<br /><br /> -   For dispinterfaces in projects created by using the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md), invoking the Add Property Wizard provides options specific to MFC.<br />-   For MFC ActiveX control interfaces, the Add Property Wizard provides a list of stock methods and properties that you can use as provided or customize for your control.<br />-   For all other interfaces, the Add Property Wizards provide options useful in most situations.|  
|[Add Method Wizard](../ide/add-method-wizard.md)|ATL or MFC projects supporting ATL. Right-click the interface to which you want to add the method.<br /><br /> Visual C++ detects the project type and modifies the options in the Add Method Wizard accordingly:<br /><br /> -   For dispinterfaces in projects created by using the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md), invoking the Add Method Wizard provides options specific to MFC.<br />-   For MFC ActiveX control interfaces, the Add Method Wizard provides a list of stock methods and properties that you can use as provided or customize for your control.<br />-   For all other interfaces, the **Add Method** wizards provide options useful in most situations.|  
  
 Additionally, you can implement new interfaces on your COM control by right-clicking the object's control class in Class View and clicking [Implement Interface](../ide/implement-interface-wizard.md).  
  
## See Also  
 [Working with Resource Files](../mfc/working-with-resource-files.md)   
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Visual C++ Project Types](../ide/visual-cpp-project-types.md)