---
title: "Putting a User Control in a Tool Window | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "tool windows, adding user controls"
  - "user controls [Visual Studio SDK], adding to tool windows"
  - "user controls [Visual Studio SDK]"
ms.assetid: 869f3195-e152-4e61-802c-51d6b7ba3e36
caps.latest.revision: 29
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
# Putting a User Control in a Tool Window
This walkthrough demonstrates how to add a user control to a tool window.  
  
 A user control is a collection of Windows controls bound together in one control. To add a user control to a tool window, all you really have to do is have the user control appear in the **Toolbox**. The user control that is used in this walkthrough is the clock control developed in [Walkthrough: Authoring a Composite Control with Visual C#](../Topic/Walkthrough:%20Authoring%20a%20Composite%20Control%20with%20Visual%20C%23.md).  
  
## Prerequisites  
 To follow this walkthrough, you must install the Visual Studio SDK. For more information, see [Visual Studio SDK](/visual-studio/extensibility/visual-studio-sdk).  
  
## Creating the User Control  
  
1.  Follow the steps in [Walkthrough: Authoring a Composite Control with Visual C#](../Topic/Walkthrough:%20Authoring%20a%20Composite%20Control%20with%20Visual%20C%23.md) to create the clock control. Do not create the alarm clock control.  
  
> [!NOTE]
>  The following steps assume that you have named the clock control `ctlClock`.  
  
## Creating a Tool Window Extension  
  
1.  Create a VSIX project named `MyToolWindowPackageUC` that has a tool window named `MyToolWindow`. If you need help doing this, see [Creating an Extension with a Tool Window](/visual-studio/extensibility/creating-an-extension-with-a-tool-window).  
  
## Adding the User Control  
  
1.  In **Solution Explorer**, right-click the solution **MyToolWindowPackageUC**, point to **Add**, and then click **Existing Project**.  
  
2.  In the **Add Existing Project** dialog box, open the ctlClockLib project and select the ctlClock.lib.csproj project file. Click **OK**. This enables the user control that you can use in the designer.  
  
3.  In **Solution Explorer**, right-click MyToolWindowControl.cs and select **View Designer**. This opens the forms designer that shows the generated control for the tool window.  
  
4.  Open the **Toolbox**, find the section labeled **ctlClockLib Components** and double-click the **ctlClock** control in that section to add the control to the form. As soon as you hide the **Toolbox**, you should see a time display in your tool window form.  
  
5.  In the designer, select the clock control that was just added and change the **Anchor** property to just be **Top**.  
  
6.  In **Solution Explorer**, right-click the ctlClockLib project node and then click **Properties**.  
  
7.  On the **Signing** tab, select **Sign the assembly**. In the **Choose a strong name key file** box, click **\<browse>** and navigate to the key.snk file in the **MyToolWindowPackageUC** project folder.  
  
8.  Compile the program and make sure there are no errors. This step registers the VSPackage and its tool window with Visual Studio.  
  
9. Press F5 to open an instance of Visual Studio in the experimental hive.  
  
10. In the experimental Visual Studio, on the **View** menu, point to **Other Windows** and then click **MyToolWindow**. This displays your tool window, which has a running time display.  
  
## See Also  
 [Walkthrough: Authoring a Composite Control with Visual C#](../Topic/Walkthrough:%20Authoring%20a%20Composite%20Control%20with%20Visual%20C%23.md)