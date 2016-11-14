---
title: "How to: Create a Toolbox Control That Uses Windows Forms | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Toolbox control"
  - "winforms"
  - "toolbox"
ms.assetid: abbd3c3c-3a6e-4539-bd6c-a5891dead234
caps.latest.revision: 12
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Create a Toolbox Control That Uses Windows Forms
The Windows Forms Toolbox Control template that is included in the [!INCLUDE[vssdk_dev11_long](../misc/includes/vssdk_dev11_long_md.md)] lets you create Windows Forms controls that are automatically added to the **Toolbox** when the extension is installed. This topic shows how to use the template to create a **Toolbox** control that you can distribute to other users..  
  
> [!NOTE]
>  To find out how to download the Visual Studio SDK, see [Visual Studio Extensibility Developer Center](http://go.microsoft.com/fwlink/?linkid=121964) on the MSDN Web site.  
  
## Creating a Toolbox Control  
 Use the Windows Forms Toolbox Control template to create the project, and then build a user interface (UI) in the designer.  
  
#### To create a Windows Forms Toolbox Control project  
  
1.  On the **File** menu, click **New**, and then click **Project**.  
  
2.  In the **New Project** dialog box, under **Installed Templates**, click the node for your preferred programming language and then click **Extensibility**. In the list of project types, select **Windows Forms Toolbox Control**.  
  
3.  In the **Name** box, type the name you want to use for the project. Click **OK**.  
  
     Visual Studio creates a solution that contains a user control, an attribute to put the control in the **Toolbox**, and a VSIX manifest for deployment.  
  
#### To build the control UI  
  
1.  In **Solution Explorer**, double-click ToolboxControl.cs to open it in the designer.  
  
2.  From the **Toolbox**, drag any controls you want to the design surface, and arrange them according to your design.  
  
3.  In the **Properties** window, set public properties on the user control and on the child controls.  
  
## Coding the Control  
 By default, your control will appear in the **Toolbox** as **ToolboxControl1** in a **Toolbox** item group that has the same name as your solution. You can change these names in the ToolboxControl.cs file.  
  
#### To code the control  
  
1.  In **Solution Explorer**, right-click ToolboxControl.cs and then click **View Code** to open the file in code view.  
  
2.  At the definition of the partial class that implements the control, right-click the class name, click **Refactor**, and then click **Rename**. Change the name of the class to the name that you want to be displayed in the **Toolbox** when the control is installed.  
  
3.  Immediately above the class definition, in the `ProvideToolboxControl` attribute declaration, change the value of the first parameter to the name of the item group that will host the control in the **Toolbox**.  
  
     The following example shows the `ProvideToolboxControl` attribute and the adjusted class definition for a control named `Counter` in the `General` item group.  
  
     [!code-cs[ToolboxControlWinForms#07](../misc/codesnippet/CSharp/how-to-create-a-toolbox-control-that-uses-windows-forms_1.cs)]  
  
4.  Implement the properties, methods, and events for the control.  
  
## Building, Testing, and Deployment  
 Pressing F5 builds the project, which includes a .vsix deployment file, and opens a second instance of Visual Studio that has the control installed in the **Toolbox**.  
  
#### To build and test the control  
  
1.  Press F5.  
  
2.  In the new instance of Visual Studio, create a Windows Forms Application project.  
  
3.  Find your control in the **Toolbox** and drag it to the design surface.  
  
4.  In the **Properties** window, verify that your properties appear as expected.  
  
5.  Add any code or additional controls that are required to test your methods and events.  
  
6.  Press F5 to open the Windows Forms application.  
  
7.  Verify that the properties, methods, and events of your control behave as expected.  
  
#### To deploy the control  
  
1.  After you build the tested project, open the \bin\debug\ folder of the project in File Explorer and locate the .vsix file.  
  
2.  Upload the .vsix file to a network or to a Web site.  
  
     If you upload the file to the [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkID=123847) Web site, other users can use **Extension Manager** in Visual Studio to find the control and install it.  
  
## See Also  
 [Creating a WPF Toolbox Control](/visual-studio/extensibility/creating-a-wpf-toolbox-control)