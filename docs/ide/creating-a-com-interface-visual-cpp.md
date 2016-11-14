---
title: "Creating a COM Interface (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.com.creating.interfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM interfaces, creating"
ms.assetid: 1be84d3c-6886-4d1e-8493-56c4d38a96d4
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
# Creating a COM Interface (Visual C++)
Visual C++ provides wizards and templates to create projects that use COM defining interfaces and dispinterfaces for your COM objects and automation classes.  
  
 You can use these wizards to perform the following three common tasks:  
  
-   [Adding ATL Support to Your MFC Project](../mfc/reference/adding-atl-support-to-your-mfc-project.md)  
  
     Add ATL support to an MFC application after you create an MFC project using the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md) and then running the **Add ATL Support to MFC** code wizard. This support applies only to simple COM objects added to an MFC executable or DLL project. These ATL objects may have multiple interfaces.  
  
-   [Creating an MFC ActiveX Control](../mfc/reference/creating-an-mfc-activex-control.md)  
  
     Open the [MFC ActiveX Control Wizard](../mfc/reference/mfc-activex-control-wizard.md) to create an ActiveX control with a dispinterface and an event map defined in the .idl file and the control class, respectively.  
  
-   [Adding an ATL Control](../atl/reference/adding-an-atl-control.md)  
  
     Use a combination of the [ATL Project Wizard](../atl/reference/atl-project-wizard.md) and the [ATL Control Wizard](../atl/reference/atl-control-wizard.md) to create an ATL ActiveX control.  
  
     You can also add an ATL control to an MFC project to which you have added ATL support, as described above. Additionally, if you select **ATL Control** in the **Add Class** dialog box, and you have not yet added ATL support to your MFC project, Visual Studio displays a dialog box confirming adding ATL support to your MFC project.  
  
     This wizard generates IDL source and a COM map in the project classes.  
  
 Once you have an ATL project open, the [Add Class](../ide/add-class-dialog-box.md) dialog box gives you the choice of additional wizards and templates to add COM interfaces to your project. The following wizards allow you to establish one or more interfaces for the object:  
  
-   [ATL COM+ 1.0 Component Wizard](../atl/reference/atl-com-plus-1-0-component-wizard.md)  
  
-   [ATL Simple Object Wizard](../atl/reference/atl-simple-object-wizard.md)  
  
-   [ATL Active Server Page Component Wizard](../atl/reference/atl-active-server-page-component-wizard.md)  
  
-   [ATL Control Wizard](../atl/reference/atl-control-wizard.md)  
  
 Additionally, you can implement new interfaces on your COM control by right-clicking the object's control class in Class View and clicking [Implement Interface](../ide/implement-interface-wizard.md).  
  
> [!NOTE]
>  Visual Studio does not provide a wizard to add an interface to a project. You can add an interface to an ATL project or to an [Adding ATL Support to Your MFC Project](../mfc/reference/adding-atl-support-to-your-mfc-project.md) by adding a simple object using the [ATL Simple Object Wizard](../atl/reference/atl-simple-object-wizard.md). Alternately, open the project's .idl file and create the interface by typing:  
  
```  
interface IMyInterface {  
};  
  
```  
  
 See [Implementing an Interface](../ide/implementing-an-interface-visual-cpp.md) and [Adding Objects and Controls to an ATL Project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) for more information.  
  
 Visual C++ provides several ways to view and [edit the COM interfaces](../ide/editing-a-com-interface.md) defined for your projects. [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925) displays icons for any interface or dispinterface defined in an .idl file in your C++ project.  
  
 For ATL-based COM object classes, Class View reads the COM map in the ATL class to display the relationship between the ATL class and any interfaces it implements.  
  
 In Class View and its shortcut menus, you can work with interfaces as follows:  
  
-   Add ATL objects to an MFC-based application.  
  
-   Add methods, properties, and events.  
  
-   Jump directly to an item's interface code by double-clicking the item.  
  
## See Also  
 [Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)