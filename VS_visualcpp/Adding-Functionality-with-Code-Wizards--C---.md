---
title: "Adding Functionality with Code Wizards (C++)"
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
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
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
# Adding Functionality with Code Wizards (C++)
Once you have created a project, you will want to change or add to that project's functionality. Such tasks include creating new classes, adding new member functions and variables, and adding Automation methods and properties. The code wizards are designed to let you do all these things.  
  
> [!NOTE]
>  You can now add message handlers and map messages to them and override MFC virtual functions using the [Properties window](../Topic/Properties%20Window.md).  
  
## Accessing Visual C++ Code Wizards  
 There are three locations where you can access Visual C++ code wizards:  
  
-   On the **Project** menu, the **Add New Item** command allows you to bring up the `Add New Item` dialog box, which helps you to add new files to your project. The **Add Class** command displays the [Add Class](../VS_visualcpp/Add-Class-Dialog-Box.md) dialog box, which in turn open wizards for each of the class types you can add to your project. The **Add Resource** command displays the [Add Resource](../VS_visualcpp/Add-Resource-Dialog-Box.md) dialog box, from which you can create or select a resource to add to your project.  
  
     If you highlight a class or an interface in your project in Class View, the **Project** menu also displays the following commands:  
  
    -   **Implement Interface** (from a control class only)  
  
    -   **Add Function**  
  
    -   **Add Variable**  
  
    -   **Add Connection Point** (ATL class only)  
  
    -   **Add Method** (from an interface only)  
  
    -   **Add Property** (from an interface only)  
  
    -   **Add Event** (from a control class only)  
  
-   In **Solution Explorer**, right-clicking any folder and clicking **Add** from the shortcut menu allows you to add new or existing files, more folders, items, classes, resources, and Web references to the project.  
  
-   From the [Class View window](assetId:///8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-clicking the appropriate node and clicking **Add** from the shortcut menu allows you to add functions, variables, classes, properties, methods, events, interfaces, connection points, or other code to your project.  
  
    > [!NOTE]
    >  Visual Studio does not provide a wizard to add an interface to a project. You can add an interface to an ATL project or to an [Adding ATL Support to Your MFC Project](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md) by adding a simple object using the [ATL Simple Object Wizard](../VS_visualcpp/ATL-Simple-Object-Wizard.md). Alternately, open the project's .idl file and create the interface by typing:  
  
    ```  
    interface IMyInterface {  
    };  
  
    ```  
  
     See [Implementing an Interface](../VS_visualcpp/Implementing-an-Interface--Visual-C---.md) and [Adding Objects and Controls to an ATL Project](../VS_visualcpp/Adding-Objects-and-Controls-to-an-ATL-Project.md) for more information.  
  
    |Access code wizard from|Description|  
    |-----------------------------|-----------------|  
    |Add New Item|The Add New Item code wizards add source files to your project. If necessary, additional directories are created to contain the files where the project build engine expects to find them. Code wizards available from the Add Item icon include:<br /><br /> -   Add C++ source files (.cpp, .h, .idl, .rc, .srf, .def, .rgs).<br />-   Add Web development files (.html, .asp, .css, .xml).<br />-   Add utility and resource files (.bmp, .cur, .ico, .rct, .sql, .txt).<br /><br /> These code wizards generally do not ask you for any information but add a file to your development tree. You may rename the file in the property window.|  
    |Solution Explorer|The code wizards available from Solution Explorer depend on where your cursor focus is when you right-click an item. If the **Add** option does not appear when you right-click an item, then move your cursor up one level in the development tree and try again. The code wizards will always place the additional code in the appropriate place in the development tree, no matter where your cursor is. Code wizards available from Solution Explorer include:<br /><br /> -   Add Class (opens the **Add Class** dialog box containing the new code wizards).<br />-   Add Resource (New, Import, or Custom).<br />-   Add Web Reference.|  
    |Class View|The code wizards available from Class View depend on where your cursor focus is when you right click an item. If the **Add** option does not appear when you right click an item, then move your cursor up one level in the class tree and try again. The code wizards will always place the additional code in the appropriate place in the development tree, no matter where your cursor is. Code wizards available from Class View include:<br /><br /> -   [Add Member Function](../VS_visualcpp/Adding-a-Member-Function--Visual-C---.md).<br />-   [Add Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md).<br />-   [Add Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md).<br />-   [Implement Interface](../VS_visualcpp/Implement-Interface-Wizard.md) (from a control class only)<br />-   [Add Connection Point](../VS_visualcpp/Implement-Connection-Point-Wizard.md) (ATL class only)<br />-   [Add Method](../VS_visualcpp/Add-Method-Wizard.md) (from an interface only)<br />-   [Add Property](../VS_visualcpp/Names--Add-Property-Wizard.md) (from an interface only)<br />-   [Add Event](../VS_visualcpp/Add-Event-Wizard.md) (from a control class only)<br /><br /> The Add Class selection opens the **Add Class** dialog box, which gives you access to all the new Add Class code wizards.|  
  
## See Also  
 [Overriding a Virtual Function](../VS_visualcpp/Overriding-a-Virtual-Function--Visual-C---.md)   
 [Navigating the Class Structure](../VS_visualcpp/Navigating-the-Class-Structure--Visual-C---.md)   
 [Creating Desktop Projects By Using Application Wizards](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)   
 [File Types Created for Visual C++ Projects](../VS_visualcpp/File-Types-Created-for-Visual-C---Projects.md)