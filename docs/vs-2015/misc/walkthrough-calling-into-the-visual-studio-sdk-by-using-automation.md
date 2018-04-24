---
title: "Walkthrough: Calling into the Visual Studio SDK By Using Automation | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "walkthroughs [Visual Studio SDK], calling with automation"
ms.assetid: ca4dab48-632c-4c2a-8c84-57c027e37987
caps.latest.revision: 31
manager: "douge"
---
# Walkthrough: Calling into the Visual Studio SDK By Using Automation
This walkthrough illustrates how to create a Visual Studio add-in that consumes a Visual Studio service. The add-in you create gets a service provider and uses it to obtain a service. You can use this same technique to obtain any proffered Visual Studio service. For more information on services and service providers, see [Using and Providing Services](http://msdn.microsoft.com/library/c0b415ba-b825-4da0-9faf-8a60a663e302). The procedures below demonstrate how to create an add-in and then obtain a service from the add-in.  
  
## Creating an Add-In  
 In this section, you create a Visual Studio add-in using the Visual Studio Add-In project template.  
  
#### To create an add-in  
  
1.  Create a new Visual Studio project (**File/New/Project**).  
  
2.  In the left pane of the **New Project** dialog box, expand the **Other Project Types** node and then click the **Extensibility** node. Select **Visual Studio Add-in**.  
  
3.  Create a new add-in project named `Addin`.  
  
     In the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Add-In wizard, click **Next**.  
  
4.  On the **Select a Programming Language**  page, select **Create an Add-In using Visual C#** or **Create an Add-In using Visual Basic**.  
  
5.  On the **Select an Application Host** page, select **Microsoft Visual Studio \<version>**.  
  
6.  On the **Enter a Name and Description** page, type `MyAddin` in the **Name** box and `MyAddin Walkthrough` in the **Description** box.  
  
7.  On the **Choose Add-In Options** page, select the option for a Tools menu item under **Would you like to create command bar UI for your Add-In?**. Clear the other check boxes.  
  
8.  Accept all other defaults.  
  
9. Build the solution and verify that it compiles without errors.  
  
## Obtaining a Service from an Add-In  
 The following steps guide you through acquiring a service from your add-in.  
  
#### To obtain a service  
  
1.  Open the file Connect.cs or Connect.vb and add these lines to the `using` (C#) or `Imports` (Visual Basic) statements:  
  
     [!code-csharp[VSSDKAddin#1](../snippets/csharp/VS_Snippets_VSSDK/vssdkaddin/cs/connect.cs#1)]
     [!code-vb[VSSDKAddin#1](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkaddin/vb/connect.vb#1)]  
  
2.  Right-click the project node in **Solution Explorer** and add these .NET references:  
  
    ```  
    Microsoft.VisualStudio.OLE.Interop  
    Microsoft.VisualStudio.Shell.Interop  
    ```  
  
3.  Add these lines of code to the `if(commandName == "Addin.Connect.Addin")` or `If commandName = "Addin.Connect.Addin" Then` clause of the `Exec` method:  
  
     [!code-csharp[VSSDKAddin#2](../snippets/csharp/VS_Snippets_VSSDK/vssdkaddin/cs/connect.cs#2)]
     [!code-vb[VSSDKAddin#2](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkaddin/vb/connect.vb#2)]  
  
     This code casts the current application object (type `DTE2`) into an `IOleServiceProvider`, then calls `QueryService` to obtain the <xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell> service. This service provides an <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell> interface. The <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.ShowMessageBox%2A> method displays a message box when the add-in runs.  
  
4.  Build and start the Addin project in debug mode by pressing F5.  
  
     This starts another instance of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].  
  
5.  In the new [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] instance, on the **Tools** menu, click **Addin**. The message box displays this:  
  
    ```  
    MyAddin  
    Inside Addin.Connect  
    ```  
  
## See Also  
 [How to: Deactivate and Remove an Add-In](http://msdn.microsoft.com/library/5d9bc34f-ab3b-4477-950f-79fb820acb8c)