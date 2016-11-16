---
title: "Adding a Control (ATL Tutorial, Part 2) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: c9575a75-1064-41f1-9697-7aada560c669
caps.latest.revision: 15
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
# Adding a Control (ATL Tutorial, Part 2)
In this step, you will add a control to your project, build it, and test it on a Web page.  
  
## Procedures  
  
#### To add an object to an ATL project  
  
1.  In Class View, right-click the Polygon project.  
  
2.  Point to **Add** on the shortcut menu, and click **Class** in the submenu.  
  
     The **Add Class** dialog box appears. The different object categories are listed in the tree structure on the left.  
  
3.  Click the **ATL** folder.  
  
4.  From the list of templates on the right, select **ATL Control**. Click **Add**. The ATL Control Wizard will open, and you can configure the control.  
  
5.  Type `PolyCtl` as the short name and note that the other fields are automatically completed. Do not click **Finish** yet, because you have to make some changes.  
  
 The ATL Control Wizard's **Names** page contains the following fields:  
  
|Field|Contents|  
|-----------|--------------|  
|**Short name**|The name you entered for the control.|  
|**Class**|The C++ class name created to implement the control.|  
|**.h file**|The file created to contain the definition of the C++ class.|  
|**.cpp file**|The file created to contain the implementation of the C++ class.|  
|**CoClass**|The name of the component class for this control.|  
|**Interface**|The name of the interface on which the control will implement its custom methods and properties.|  
|**Type**|A description for the control.|  
|**ProgID**|The readable name that can be used to look up the CLSID of the control.|  
  
 You have to make several additional settings in the ATL Control Wizard.  
  
#### To enable support for rich error information and connection points  
  
1.  Click **Options** to open the **Options** page.  
  
2.  Select the **Connection points** check box. This will create support for an outgoing interface in the IDL file.  
  
 You can also make the control insertable, which means it can be embedded into applications that support embedded objects, such as Excel or Word.  
  
#### To make the control insertable  
  
1.  Click **Appearance** to open the **Appearance** page.  
  
2.  Select the **Insertable** check box.  
  
 The polygon displayed by the object will have a solid fill color, so you have to add a `Fill Color` stock property.  
  
#### To add a Fill Color stock property and create the control  
  
1.  Click **Stock Properties** to open the **Stock Properties** page.  
  
2.  Under **Not supported**, scroll down the list of possible stock properties. Double-click `Fill Color` to move it to the **Supported** list.  
  
3.  This completes the options for the control. Click **Finish**.  
  
 As the wizard created the control, several code changes and file additions occurred. The following files were created:  
  
|File|Description|  
|----------|-----------------|  
|PolyCtl.h|Contains most of the implementation of the C++ class `CPolyCtl`.|  
|PolyCtl.cpp|Contains the remaining parts of `CPolyCtl`.|  
|PolyCtl.rgs|A text file that contains the registry script used to register the control.|  
|PolyCtl.htm|A Web page containing a reference to the newly created control.|  
  
 The wizard also performed the following code changes:  
  
-   Added an `#include` statement to the stdafx.h and stdafx.cpp files to include the ATL files necessary for supporting controls.  
  
-   Changed Polygon.idl to include details of the new control.  
  
-   Added the new control to the object map in Polygon.cpp.  
  
 Now you can build the control to see it in action.  
  
## Building and Testing the Control  
  
#### To build and test the control  
  
1.  On the **Build** menu, click **Build Polygon**.  
  
     Once the control finishes building, right-click PolyCtl.htm in **Solution Explorer** and select **View in Browser**. The HTML Web page containing the control will be displayed. You should see a page with the title “ATL 8.0 test page for object PolyCtl” and the text **PolyCtl**. This is your control.  
  
> [!NOTE]
>  When completing this tutorial, if you receive an error message where the DLL file cannot be created, close the PolyCtl.htm file and the ActiveX Control Test container and build the solution again. If you still cannot create the DLL, reboot the computer or log off (if you are using Terminal Services).  
  
 Next, you will add a custom property to the control.  
  
 [Back to Step 1](../atl/creating-the-project-atl-tutorial-part-1.md) &#124; [On to Step 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md)  
  
## See Also  
 [Tutorial](../atl/active-template-library-atl-tutorial.md)

