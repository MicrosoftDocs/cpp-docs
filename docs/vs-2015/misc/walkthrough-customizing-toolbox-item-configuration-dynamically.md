---
title: "Walkthrough: Customizing Toolbox Item Configuration Dynamically | Microsoft Docs"
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
  - "Toolbox [Visual Studio SDK], adding controls (custom formats)"
ms.assetid: 761f44b7-c748-4ff5-921f-fc4f71784b0e
caps.latest.revision: 45
manager: "douge"
---
# Walkthrough: Customizing Toolbox Item Configuration Dynamically
This walkthrough shows how a managed VSPackage can supply dynamic configuration support for the <xref:System.Drawing.Design.ToolboxItem> objects.  
  
> [!NOTE]
>  The simplest way to add custom controls to the Toolbox is to use the Toolbox Control templates that are included in the Visual Studio SDK. This topic relates to advanced Toolbox development.  
>   
>  For more information about how to create toolbox controls by using the templates, see [How to: Create a Toolbox Control That Uses Windows Forms](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) and [Creating a WPF Toolbox Control](http://msdn.microsoft.com/library/9cc34db9-b0d1-4951-a02f-7537fbbb51ad).  
  
 This walkthrough guides you through the following steps:  
  
1.  Add and correctly register all **Toolbox** controls in the VSPackage objects by using the <xref:System.ComponentModel.ToolboxItemAttribute> and <xref:System.Drawing.ToolboxBitmapAttribute> classes.  
  
2.  Create the following two controls and add icons for each of them to the **Toolbox**:  
  
    -   One control that declares an associated default <xref:System.Drawing.Design.ToolboxItem>.  
  
    -   One control that declares an associated custom **Toolbox** item that is derived from the <xref:System.Drawing.Design.ToolboxItem> class.  
  
3.  Write an implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>, and register it by doing the following things:  
  
    1.  Defining a filter class that derives from the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> class and specifies the <xref:System.Drawing.Design.ToolboxItem> instances that this implementation will act on.  
  
    2.  Applying a <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute>, which references the filter class, to the class that implements the <xref:Microsoft.VisualStudio.Shell.Package> class for the VSPackage.  
  
4.  Register the VSPackage as a provider of <xref:System.Drawing.Design.ToolboxItem> objects by applying the <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> to the class that implements the <xref:Microsoft.VisualStudio.Shell.Package> class for the VSPackage.  
  
5.  At package load time, use reflection to generate a list of all <xref:System.Drawing.Design.ToolboxItem> objects that the VSPackage provides.  
  
6.  Create a handler for the <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events. Doing this guarantees that the VSPackage's <xref:System.Drawing.Design.ToolboxItem> objects are correctly loaded.  
  
7.  Implement a command on the VSPackage to force re-initialization of the **Toolbox**.  
  
## Prerequisites  
 To follow this walkthrough, you must install the Visual Studio SDK. For more information, see [Visual Studio SDK](http://msdn.microsoft.com/library/1f7c348a-114c-4243-b392-3531e9c9c6fd).  
  
## Locations for the Visual Studio Package Project Template  
 The Visual Studio Package project template can be found in three different locations in the **New Project** dialog:  
  
1.  Under Visual Basic Extensibility. The default language of the project is Visual Basic.  
  
2.  Under C# Extensibility. The default language of the project is C#.  
  
3.  Under Other Project Types Extensibility. The default language of the project is C++.  
  
## Creating a Managed VSPackage  
 Complete the following procedures to create a managed VSPackage.  
  
#### To create a managed VSPackage to provide toolbox items  
  
1.  Create a VSPackage named `ItemConfiguration`. For more information, see [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](http://msdn.microsoft.com/library/1985fa7d-aad4-4866-b356-a125b6a246de).  
  
2.  In the **Visual Studio Package** template, add a menu command.  
  
     Name the command `Initialize ItemConfigurationVB` for Visual Basic or `Initialize ItemConfigurationCS` for Visual C#.  
  
3.  For [!INCLUDE[vbprvb](../includes/vbprvb-md.md)], add the following namespaces to the imported namespaces list in the generated project:  
  
    -   Company.ItemConfiguration  
  
    -   System  
  
    -   System.ComponentModel  
  
    -   System.Drawing  
  
    -   System.Windows.Forms  
  
4.  Add a reference to the <xref:System.Drawing.Design?displayProperty=fullName> .NET Framework component.  
  
 If you follow this walkthrough for more than one language, you must update the project to disambiguate the generated assemblies.  
  
#### To disambiguate Visual Basic and Visual C# VSPackages  
  
1.  For [!INCLUDE[vbprvb](../includes/vbprvb-md.md)]:  
  
    1.  Open the project properties, and select the **Application** tab.  
  
         Change the assembly name to `ItemConfigurationVB`, and change the default namespace to `Company.ItemConfigurationVB`.  
  
    2.  Select the **References** tab.  
  
         Update the imported namespaces list.  
  
         Remove Company.ItemConfiguration.  
  
         Add Company.ItemConfigurationVB.  
  
2.  For [!INCLUDE[csprcs](../includes/csprcs-md.md)]:  
  
    1.  Open the project properties, and select the **Application** tab.  
  
         Change the assembly name to `ItemConfigurationCS`, and change the default namespace to `Company.ItemConfigurationCS`.  
  
    2.  Open the ItemConfigurationPackage class in the code editor.  
  
         To use the refactoring tools to rename the existing namespace, right-click the existing namespace name, `ItemConfiguration`, point to **Refactor**, and then click **Rename**. Change the name to `ItemConfigurationCS`.  
  
3.  Save all changes.  
  
#### To test the generated code  
  
1.  Compile and start the VSPackage in the Visual Studio experimental hive.  
  
2.  On the **Tools** menu, click **Initialize Item Configuration VB** or **Initialize Item Configuration CS**.  
  
     Doing this opens a message box that contains text that indicates that the package's menu item handler was called.  
  
3.  Close the experimental version of [!INCLUDE[vs_current_short](../includes/vs-current-short-md.md)].  
  
## Creating Toolbox Controls  
 In this section, you create and register a user control, `Control1`, that declares an associated default **Toolbox** item. You also create and register a second user control, `Control2`, and an associated custom **Toolbox** item, `Control2_ToolboxItem`, that is derived from the <xref:System.Drawing.Design.ToolboxItem> class. For more information about how to author Windows Forms controls and <xref:System.Drawing.Design.ToolboxItem> classes, see [Developing Windows Forms Controls at Design Time](http://msdn.microsoft.com/library/e5a8e088-7ec8-4fd9-bcb3-9078fd134829).  
  
#### To create default and custom toolbox items  
  
1.  Use the instructions in [Walkthrough: Autoloading Toolbox Items](../misc/walkthrough-autoloading-toolbox-items.md) to create a default **Toolbox** item and a custom **Toolbox** item, as follows.  
  
    1.  Complete the procedure, "To create a **Toolbox** control that will be used with a default ToolboxItem." Update the <xref:System.ComponentModel.DescriptionAttribute> to reference this project.  
  
         The resulting code for the `Control1` class should resemble the following code.  
  
         [!code-csharp[DynamicToolboxMembers#01](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/control1.cs#01)]
         [!code-vb[DynamicToolboxMembers#01](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/control1.vb#01)]  
  
    2.  Complete the procedure, "To create a **Toolbox** control for using a custom ToolboxItem-derived class." Update the <xref:System.ComponentModel.DescriptionAttribute> to reference this project.  
  
         The resulting code for the `Control2` and `Control2_ToolboxItem` classes should resemble the following code.  
  
         [!code-csharp[DynamicToolboxMembers#02](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/control2.cs#02)]
         [!code-vb[DynamicToolboxMembers#02](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/control2.vb#02)]  
  
2.  Save the files.  
  
## Embedding Bitmap Icons  
 The <xref:System.Drawing.ToolboxBitmapAttribute> attribute that is applied to each control specifies which icon to associate with that control. Create the bitmaps for both controls, and name them as follows:  
  
-   `Control1.bmp`, for the `Control1` class.  
  
-   `Control2.bmp`, for the `Control2` class.  
  
#### To embed a bitmap icon for a Toolbox item  
  
1.  Add a new bitmap to the project, as follows:  
  
    1.  In **Solution Explorer**, right-click the VSPackage project, point to **Add**, and then click **New Item**.  
  
    2.  In the **Add New Item** dialog box, select **Bitmap File**, and enter the name of the bitmap.  
  
2.  Use the bitmap editor to create a 16x16 icon, as follows.  
  
    1.  On the **View** menu, click **Properties Window**.  
  
    2.  In the **Properties** window, set **Height** and **Width** to 16.  
  
    3.  Use the editor to create the icon image.  
  
3.  In **Solution Explorer**, right-click the bitmap item, and then click **Properties**.  
  
4.  Set the **Build Action** property to **Embedded Resource**.  
  
5.  Save all open files.  
  
## Adding a Dynamic Toolbox Configuration Provider  
 In this section, you create and register a class that implements the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface. This class is instantiated and used by the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integrated development environment (IDE) to configure **Toolbox** controls.  
  
> [!NOTE]
>  Because the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] environment instantiates an instance of the implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>, do not implement the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface on the class that implements <xref:Microsoft.VisualStudio.Shell.Package> for a VSPackage.  
  
#### To create and register a toolbox control configuration object  
  
1.  In **Solution Explorer**, add a class to the ItemConfiguration project, and name it `ToolboxConfig`.  
  
2.  Add the following namespace statements to the file.  
  
     [!code-csharp[DynamicToolboxMembers#03](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/toolboxconfig.cs#03)]
     [!code-vb[DynamicToolboxMembers#03](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/toolboxconfig.vb#03)]  
  
3.  Ensure that the `ToolboxConfig` class is `public` and implements the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface.  
  
4.  Apply a <xref:System.Runtime.InteropServices.GuidAttribute> and a <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> to the `ToolboxConfig` class`.`  
  
    -   For [!INCLUDE[vbprvb](../includes/vbprvb-md.md)], use an assembly name of `"ItemConfigurationVB, Version=*, Culture=*, PublicKeyToken=*"`.  
  
    -   For [!INCLUDE[csprcs](../includes/csprcs-md.md)], use an assembly name of `"ItemConfigurationCS, Version=*, Culture=*, PublicKeyToken=*"`.  
  
     Doing this restricts the `ToolboxConfig` class to working on <xref:System.Drawing.Design.ToolboxItem> objects that are provided by the assembly that contains the current VSPackage.  
  
     [!code-csharp[DynamicToolboxMembers#04](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/toolboxconfig.cs#04)]
     [!code-vb[DynamicToolboxMembers#04](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/toolboxconfig.vb#04)]  
  
     You can generate a GUID by clicking **Create GUID** on the **Tools** menu. Select **the format with square braces**, click **Copy**, and then paste the GUID in your code. change the keyword `GUID` to `Guid`.  
  
5.  Implement the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> method of the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface so that the method only acts on the two <xref:System.Drawing.Design.ToolboxItem> classes, `Control1` and `Control2`.  
  
     The implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> applies instances of <xref:System.ComponentModel.ToolboxItemFilterAttribute> to the two <xref:System.Drawing.Design.ToolboxItem> objects so that:  
  
    -   The <xref:System.Drawing.Design.ToolboxItem> that is implemented by `Control1` is only available in the **Toolbox** for designers that handle <xref:System.Windows.Forms.UserControl> objects.  
  
    -   The <xref:System.Drawing.Design.ToolboxItem> that is implemented by `Control2` is not available in the **Toolbox** for designers that handle <xref:System.Windows.Forms.UserControl> objects.  
  
     [!code-csharp[DynamicToolboxMembers#05](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/toolboxconfig.cs#05)]
     [!code-vb[DynamicToolboxMembers#05](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/toolboxconfig.vb#05)]  
  
## Modifying the VSPackage Implementation  
 The default implementation of the VSPackage that is provided by the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Package template must be modified to do the following things:  
  
-   Register as a **Toolbox** item provider.  
  
-   Register the class that provides the dynamic **Toolbox** control configuration for the VSPackage.  
  
-   Use the <xref:System.Drawing.Design.ToolboxService> to load all the <xref:System.Drawing.Design.ToolboxItem> objects that are provided by the VSPackage assembly.  
  
-   Handle <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events.  
  
#### To modify the Package implementation for a Toolbox item provider on the VSPackage  
  
1.  Open the ItemConfigurationPackage class in the code editor.  
  
2.  Modify the declaration of the `ItemConfigurationPackage` class, which is the implementation of the <xref:Microsoft.VisualStudio.Shell.Package> class in the solution.  
  
    1.  Add the following namespace statements to the file.  
  
         [!code-csharp[DynamicToolboxMembers#06](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#06)]
         [!code-vb[DynamicToolboxMembers#06](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#06)]  
  
    2.  To register the VSPackage as providing **Toolbox** items, apply a <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> to the package. To register the `ToolboxConfig` class as providing a **Toolbox** control dynamic configuration, apply a <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> to the package.  
  
         [!code-csharp[DynamicToolboxMembers#07](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#07)]
         [!code-vb[DynamicToolboxMembers#07](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#07)]  
  
        > [!NOTE]
        >  The only argument of <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> is the version of <xref:System.Drawing.Design.ToolboxItem> that is provided by the VSPackage. By changing this value, you force the IDE to load the VSPackage even if it has an earlier cached version of <xref:System.Drawing.Design.ToolboxItem>.  
  
    3.  Create two new `private` fields in the `ItemConfiguration` class, as follows:  
  
         An <xref:System.Collections.ArrayList> member, named `ToolboxItemList`, to hold a list of the <xref:System.Drawing.Design.ToolboxItem> objects that the `ItemConfiguration` class manages.  
  
         A <xref:System.String>, named `CategoryTab`, that contains the **Toolbox** tab that is used to hold the <xref:System.Drawing.Design.ToolboxItem> objects that the `ItemConfiguration` class manages.  
  
         [!code-csharp[DynamicToolboxMembers#08](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#08)]
         [!code-vb[DynamicToolboxMembers#08](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#08)]  
  
     The result of this modification resembles the following code:  
  
     [!code-csharp[DynamicToolboxMembers#09](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#09)]
     [!code-vb[DynamicToolboxMembers#09](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#09)]  
  
3.  Define an `OnRefreshToolbox` method to handle the <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events.  
  
     The `OnRefreshToolbox` method uses the list of <xref:System.Drawing.Design.ToolboxItem> objects that is contained in the `ToolboxItemList` field and does the following things:  
  
    -   Removes all <xref:System.Drawing.Design.ToolboxItem> objects from the **Toolbox** tab that is defined by the `CategoryTab` field.  
  
    -   Adds to the **Toolbox** tab new instances of all <xref:System.Drawing.Design.ToolboxItem> objects that are listed in the `ToolboxItemList` field.  
  
    -   Sets the **Toolbox** tab as the active tab.  
  
     [!code-csharp[DynamicToolboxMembers#10](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#10)]
     [!code-vb[DynamicToolboxMembers#10](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#10)]  
  
4.  For [!INCLUDE[csprcs](../includes/csprcs-md.md)], in the constructor, register the `OnRefreshToolbox` method as the event hander for the <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events.  
  
     [!code-csharp[DynamicToolboxMembers#11](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#11)]  
  
5.  Modify the `Initialize` method in `ItemConfigurationPackage` to fill the `ToolboxItemList` field by calling the <xref:System.Drawing.Design.ToolboxService.GetToolboxItems%2A> method of the <xref:System.Drawing.Design.ToolboxService?displayProperty=fullName> class. The **Toolbox** service gets all the **Toolbox** item classes that are defined in the currently executing assembly. The `ToolboxItemList` field is used by the **Toolbox** event handlers to load the **Toolbox** items.  
  
     Add the following code at the end of the `Initialize` method.  
  
     [!code-csharp[DynamicToolboxMembers#12](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#12)]
     [!code-vb[DynamicToolboxMembers#12](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#12)]  
  
    > [!NOTE]
    >  As an exercise, one could develop a mechanism for testing the version of the VSPackage or the items, and only update if the VSPackage version has changed or if the version of the <xref:System.Drawing.Design.ToolboxItem> has changed.  
  
## Initializing the Toolbox  
  
#### To implement a command to initialize the Toolbox  
  
-   In the `ItemConfigurationPackage` class, change the `MenuItemCallBack` method, which is the menu item's command handler.  
  
     Replace the existing implementation of the `MenuItemCallBack` method by using the following code:  
  
     [!code-csharp[DynamicToolboxMembers#13](../snippets/csharp/VS_Snippets_VSSDK/dynamictoolboxmembers/cs/dynamictoolboxmemberspackage.cs#13)]
     [!code-vb[DynamicToolboxMembers#13](../snippets/visualbasic/VS_Snippets_VSSDK/dynamictoolboxmembers/vb/dynamictoolboxmemberspackage.vb#13)]  
  
## Building and Running the Solution  
 You can exercise the product of this walkthrough by using an instance of Visual Studio that is running in the experimental hive.  
  
#### To exercise this walkthrough  
  
1.  In Visual Studio, on the **Build** menu, click **Rebuild Solution**.  
  
2.  Press F5 to start a second instance of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in the experimental registry hive.  
  
     For more information about how to use the experimental hive, see [The Experimental Instance](http://msdn.microsoft.com/library/ead0df4e-6f88-4b42-9297-581b7902f050).  
  
3.  Click the **Tools** menu.  
  
     A command named **Initialize ItemConfiguration VB** or **Initialize ItemConfiguration CS** appears at the top of the menu, together with an icon that has the numeral 1.  
  
4.  Create a new [!INCLUDE[csprcs](../includes/csprcs-md.md)] or [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] Windows Forms application.  
  
     A <xref:System.Windows.Forms.Form>-based designer appears.  
  
5.  Add a user control to the project.  
  
     A user control designer appears.  
  
6.  Pin the **Toolbox** open, and switch between the two design views.  
  
     Notice that which **Toolbox** item is visible and which one is hidden depends on which designer has focus.  
  
7.  Drag the first **Toolbox** item onto the user control to add an instance of `Control1` to the user control.  
  
8.  Drag the second **Toolbox** item onto the form to add an instance of `Control2` to the form.  
  
9. Build the Windows application.  
  
     The user control for the application is now available in the **Toolbox**.  
  
10. Add the application's user control to the form, and then rebuild the application and run it.  
  
     When the application runs, click each control on the form to get the associated message box.  
  
## Analysis of the Implementation  
 Because the `assemblyFilter` parameter is present in the <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> class constructor, only <xref:System.Drawing.Design.ToolboxItem> objects in the assembly produced in this walkthrough are acted on by the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> method of the `ToolboxConfg` class.  
  
 Therefore, whenever the **ItemConfiguration Walkthrough**category is active on the **Toolbox**, the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> method of the `ToolboxConfg` class is called, and <xref:System.ComponentModel.ToolboxItemFilterAttribute> instances are applied on the <xref:System.Drawing.Design.ToolboxItem> objects that are implemented by `Control1` and `Control2`.  
  
## See Also  
 [Extending the Toolbox](../misc/extending-the-toolbox.md)   
 [Registering Toolbox Support Features](../misc/registering-toolbox-support-features.md)   
 [Advanced Toolbox Control Development](../misc/advanced-toolbox-control-development.md)   
 [Toolbox Walkthroughs](../misc/toolbox-walkthroughs.md)