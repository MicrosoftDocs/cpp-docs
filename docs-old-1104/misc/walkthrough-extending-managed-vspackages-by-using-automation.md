---
title: "Walkthrough: Extending Managed VSPackages By Using Automation | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "managed VSPackages, extending using automation"
  - "automation [Visual Studio SDK], walkthroughs"
  - "automation [Visual Studio SDK], managed VSPackages"
ms.assetid: 7fd2000b-8ec3-4d83-b169-d38008fb57ee
caps.latest.revision: 35
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
# Walkthrough: Extending Managed VSPackages By Using Automation
This walkthrough illustrates how to use automation to create a managed VSPackage that manipulates the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integrated development environment (IDE). You create a sample managed VSPackage and then use automation methods in the resulting VSPackage to display [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] properties in the **Output** window.  
  
## Prerequisites  
 To follow this walkthrough, you must install the Visual Studio SDK. For more information, see [Visual Studio SDK](/visual-studio/extensibility/visual-studio-sdk).  
  
## Locations for the Visual Studio Package Project Template  
 The Visual Studio Package project template can be found in three different locations in the **New Project** dialog:  
  
1.  Under Visual Basic Extensibility. The default language of the project is Visual Basic.  
  
2.  Under C# Extensibility. The default language of the project is C#.  
  
3.  Under Other Project Types Extensibility. The default language of the project is C++.  
  
### To create a managed VSPackage  
  
1.  Create a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Package project named `Auto`.  
  
     For more information about how to create a managed VSPackage, see [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
2.  On the **Select a Programming Language** page, set the language to [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)].  
  
3.  Keep the default values in the **Basic VSPackage Information** page.  
  
4.  On the **Select VSPackage Options** page, select the **Menu Command** check box.  
  
5.  On the **Command Options** page, change the **Command Name** to `Auto`.  
  
6.  Click the **Finish** button.  
  
     The template generates a managed project named Auto.  
  
7.  Build the solution and verify that it compiles without errors.  
  
### To call the Automation model  
  
1.  In **Solution Explorer**, right-click the Auto project node and then click **Add**, **Reference**.  
  
2.  On the **.NET** tab of the **Reference** dialog box, double-click **EnvDTE**.  
  
     This adds a reference to the EnvDTE automation namespace.  
  
3.  In the AutoPackage file, add the following namespace reference.  
  
     [!code-cs[VSSDKAuto#1](../misc/codesnippet/CSharp/walkthrough-extending-managed-vspackages-by-using-automation_1.cs)]
     [!code-vb[VSSDKAuto#1](../misc/codesnippet/VisualBasic/walkthrough-extending-managed-vspackages-by-using-automation_1.vb)]  
  
4.  In the AutoPackage file, replace the body of the `MenuItemCallback` method with the following lines:  
  
     [!code-cs[VSSDKAuto#2](../misc/codesnippet/CSharp/walkthrough-extending-managed-vspackages-by-using-automation_2.cs)]
     [!code-vb[VSSDKAuto#2](../misc/codesnippet/VisualBasic/walkthrough-extending-managed-vspackages-by-using-automation_2.vb)]  
  
 This code calls <xref:Microsoft.VisualStudio.Shell.Package.GetService*> to obtain a <xref:EnvDTE.DTE> automation object that represents the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE. The automation code in `MenuItemCallback` creates a new pane in the **Output** window named **Test**. The [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] name and version is then written to the new **Output** pane.  
  
1.  Build and start the Auto project in debug mode by pressing F5.  
  
     This starts the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] experimental build ([!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Exp).  
  
    > [!NOTE]
    >  Both versions of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] are open at this point.  
  
2.  In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Exp, on the **Tools** menu, click **Auto**.  
  
     A new pane named **Test** opens in the **Output** window and displays the following:  
  
    ```  
    Name is Microsoft Visual Studio  
    Version is x.xx  
    ```  
  
     Where x.xx is the latest [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] version number.  
  
     For more information about automation samples, see [Automation Samples for Visual Studio](http://www.microsoft.com/downloads/details.aspx?familyid=3ff9c915-30e5-430e-95b3-621dccd25150&displaylang=en).  
  
## See Also  
 [Extending the Visual Studio Environment](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)