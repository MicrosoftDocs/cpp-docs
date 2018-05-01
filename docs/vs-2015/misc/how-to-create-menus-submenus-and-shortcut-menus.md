---
title: "How to: Create Menus, SubMenus, and Shortcut Menus | Microsoft Docs"
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
  - "command bars, architecture"
  - "menus, creating"
  - "menus, architecture"
  - "commands, menus"
  - "menus"
ms.assetid: 62004fd9-7f99-4f00-8d01-1dde53e23dbb
caps.latest.revision: 46
manager: "douge"
---
# How to: Create Menus, SubMenus, and Shortcut Menus
To add a menu to the Visual Studio integrated development environment (IDE), a VSPackage must use the [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] architecture for command-group menus. A command-group menu enables the sharing of commands by components and the IDE. For more information about command-group menus, see [How VSPackages Add User Interface Elements](http://msdn.microsoft.com/library/abc5d9d9-b267-48a1-92ad-75fbf2f4c1b9).  
  
 In VSPackages, menus are defined in the [Menus](http://msdn.microsoft.com/library/d825a99b-e05c-4dd9-8933-a180216d667a) section of a .vsct file. A .vsct file defines menus, toolbars, groups, and commands. A command is what a user clicks to perform a function. A group is a container for commands. A menu is a container for groups. To create a basic menu, you must create a menu, a command group, and at least one command.  
  
 There are three basic ways that a menu can appear in [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]:  
  
-   As a menu on the main menu bar.  
  
-   As a submenu of another menu.  
  
-   As a shortcut menu (typically displayed by a right-click).  
  
 This topic shows how to create each kind of menu. The following walkthroughs also show how to do this:  
  
-   [Adding a Menu to the Visual Studio Menu Bar](http://msdn.microsoft.com/library/58fc1a31-2aeb-441c-8e48-c7d5cbcfe501)  
  
-   [Adding a Submenu to a Menu](http://msdn.microsoft.com/library/692600cb-d052-40e2-bdae-4354ae7c6c84)  
  
-   [Adding a Shortcut Menu in a Tool Window](http://msdn.microsoft.com/library/50234537-9e95-4b7e-9cb7-e5cf26d6e9d2)  
  
### To create a menu, submenu, or shortcut menu  
  
1.  In your project, double-click the .vsct file to open it in the editor.  
  
     If your project does not have a .vsct file, add one. If you are creating a package by using the Visual Studio Package Template, select **Menu Command**; doing this will generate a .vsct file.  
  
2.  In the `Symbols` section, find the [GuidSymbol](http://msdn.microsoft.com/library/11fb3545-8974-4776-9a54-6b6e7739ae31) element that contains the groups and commands.  
  
3.  Create an [IDSymbol](http://msdn.microsoft.com/library/760cfd20-3c06-422c-9103-98bfa1f387f8) element for each menu, group, or command that you want to add, as shown in the following example.  
  
     [!code[ButtonGroup#01](../snippets/common/VS_Snippets_VSSDK/buttongroup/common/buttongroup.vsct#01)]  
  
     The `name` attributes of the `GuidSymbol` and `IDSymbol` elements provide the GUID:ID pair for each new menu, group, or command. The `GUID` represents a command set that is defined for your VSPackage. You can define multiple command sets. Each GUID:ID pair must be unique.  
  
4.  Define the new menu in the `Menus` section, as follows:  
  
    1.  Set the `guid` and `id` fields to match the GUID:ID of the new menu.  
  
    2.  Set the `priority` attribute.  
  
         The `priority` attribute is used by the .vsct file to determine the location of the menu among the other objects in the parent group.  
  
         Menus that have lower-priority values are displayed before menus that have higher-priority values. Duplicate priority values are permitted, but the relative position of menus that have equal priority is determined by the order in which VSPackages are processed at run time, and that order cannot be predetermined. Omitting the `priority` attribute sets its value to 0.  
  
         Do not set a priority for a shortcut menu, because its placement is determined by the code that calls it.  
  
    3.  For menus and submenus, set the `type` attribute to `Menu`, which describes a typical menu. For shortcut menus, set the `type` attribute to `Context`.  
  
         For descriptions of other valid menu types, such as toolbars and menu controllers, see [Menu Element](http://msdn.microsoft.com/library/ce0560f3-b4c9-4ab2-a99c-d4e10f37b9e0).  
  
    4.  In the menu definition, create a [Strings](http://msdn.microsoft.com/library/23a42074-a689-481d-824f-b43aa448f266) section that contains a [ButtonText](http://msdn.microsoft.com/library/56aba884-0356-4894-ae4e-32d3938f6865) element to contain the name of the menu as it appears in the IDE, and a [CommandName](http://msdn.microsoft.com/library/a338b767-aa7e-4536-9908-e19a50ab60ac) element to contain the name of the command that is used to access the menu in the **Command** window.  
  
         If the button text string includes the '&' character, the user can open the menu by pressing ALT plus the character that immediately follows the '&'.  
  
    5.  Add command flags, as appropriate, to change the appearance and behavior of the menu. To do this, add a [CommandFlag](http://msdn.microsoft.com/library/5ef63399-d2db-4dc1-97ce-be1bd4ef4e39) element in the menu definition. For more information, see [Command Flag Element](http://msdn.microsoft.com/library/5ef63399-d2db-4dc1-97ce-be1bd4ef4e39).  
  
5.  Set the parent of the menu. For a standard menu or submenu, do this in one of the following ways, depending on your design:  
  
    -   In the `Menu` element, create a [Parent](http://msdn.microsoft.com/library/e4624ac8-1b9a-4940-910a-528a661cefad) element and set its `guid` and `id` fields to the GUID:ID of the group that will host the menu, also known as the *primary parent group*. The parent group can be a group that you created in the `Symbols` section, a group from another package, or a group from the IDE. For example, to add your menu to the top-level menu bar of the IDE, near the **Tools** menu, set the parent to guidSHLMainMenu:IDG_VS_MM_TOOLSADDINS.  
  
         The following example shows a menu that will appear on the Visual Studio menu bar.  
  
         [!code[TopLevelMenu#01](../snippets/common/VS_Snippets_VSSDK/toplevelmenu/common/toplevelmenu.vsct#01)]  
  
    -   You may omit the `Parent` element if the menu is to be positioned by using command placement. Create a [CommandPlacements](http://msdn.microsoft.com/library/78a5724a-3b9f-4c78-9c0d-8faa3924f81c) section before the `Symbols` section, and add a [CommandPlacement](http://msdn.microsoft.com/library/2cbd7ac8-c55a-43d8-a26d-713b3d790016) element that has the GUID:ID of the menu, a priority, and a parent, as shown in the following example.  
  
         [!code[ButtonGroup#04](../snippets/common/VS_Snippets_VSSDK/buttongroup/common/buttongroup.vsct#04)]  
  
         Creating multiple command placements that have the same GUID:ID and have different parents causes a menu to appear in multiple locations. For more information, see [CommandPlacements Element](http://msdn.microsoft.com/library/78a5724a-3b9f-4c78-9c0d-8faa3924f81c).  
  
     A standard menu must have a group on the Visual Studio menu bar as its parent. For a submenu, the parent must be a group on another menu (or on a toolbar or other menu type). For a menu or submenu to be displayed, it must host a group that contains at least one active command, or have the `AlwaysCreate` command flag set.  
  
     Shortcut menus do not have parents or command placements. Instead, they must be activated in code. Typically, a shortcut menu is activated in response to a right-click on a control surface. The following example defines a shortcut menu.  
  
     [!code[ButtonGroup#06](../snippets/common/VS_Snippets_VSSDK/buttongroup/common/buttongroup.vsct#06)]  
  
6.  In the [Groups](http://msdn.microsoft.com/library/740ca4ec-79fa-4b98-8f9a-2a137f9f7f98) section, create a [Group](http://msdn.microsoft.com/library/69faee18-cbf4-470a-b952-c1919c583df8) element to contain the commands that are to appear on your menu. The `Symbols` section must include an entry that has the same GUID:ID as the new `Group` element.  
  
    1.  Set the priority of the group so that it will appear where you want it on your menu.  
  
         The boundaries of each group on the menu will appear as horizontal lines.  
  
    2.  Set the parent for this new group to the GUID:ID of the menu that you created. Doing this puts the group of commands on the menu.  
  
     The group in the following example appears on the top-level menu that was shown in an earlier example.  
  
     [!code[TopLevelMenu#02](../snippets/common/VS_Snippets_VSSDK/toplevelmenu/common/toplevelmenu.vsct#02)]  
  
     Menus can contain both commands and submenus. A submenu (sometimes referred to as a cascading menu) is just a menu, but it is one that is added to another menu's group and is exposed only when that other menu is invoked. By putting the menu that is shown in the following example in a group in the top-level menu, it becomes a submenu.  
  
     [!code[TopLevelMenu#06](../snippets/common/VS_Snippets_VSSDK/toplevelmenu/common/toplevelmenu.vsct#06)]  
  
7.  Add commands to the menu by creating command entries in the [Buttons](http://msdn.microsoft.com/library/9f2cf94d-dec5-4776-a836-9a89c75f0c87) section and setting the parent of each to the GUID:ID of your group. Each [Button](http://msdn.microsoft.com/library/96dccf51-2b00-4700-9d28-924b34c21ecd) element must have a GUID:ID that corresponds to an entry in the `Symbols` section.  
  
     Use the `priority` attribute of each button entry to specify the order in which the commands appear in the group.  
  
     The following example defines a command that will appear on the top-level menu.  
  
     [!code[TopLevelMenu#03](../snippets/common/VS_Snippets_VSSDK/toplevelmenu/common/toplevelmenu.vsct#03)]  
  
     For more information about buttons and menu items, see [Button Element](http://msdn.microsoft.com/library/96dccf51-2b00-4700-9d28-924b34c21ecd).  
  
     For information about how to implement menu commands in code, see [MenuCommands Vs. OleMenuCommands](../misc/menucommands-vs-olemenucommands.md) or the walkthroughs that are mentioned earlier in this topic.  
  
### To activate a shortcut menu  
  
1.  Obtain the GUID:ID of the shortcut menu. By default, the package template creates a `GuidList` class in a PkgCmdID.cs file to hold the GUID of the command set. The template also creates a `PkgCmdIdList` class in a PkgCmdId.cs file to hold the integer ID values of commands that are declared in the template. Shortcut menus and any additional commands must be declared after the template is finished. The following example shows these declarations.  
  
     [!code-csharp[TWShortcutMenu#12](../snippets/csharp/VS_Snippets_VSSDK/twshortcutmenu/cs/pkgcmdid.cs#12)]  
  
     This step can be omitted if the GUID and ID values will be used directly. However, we recommend that you set the values here for readability.  
  
2.  Attach to an event handler. Typically, shortcut menus attach to the right-click of a control surface, as shown in the following example.  
  
     [!code-csharp[TWShortcutMenu#43](../snippets/csharp/VS_Snippets_VSSDK/twshortcutmenu/cs/mycontrol.xaml.cs#43)]  
  
     The <xref:System.Windows.Forms.Control.PointToScreen%2A> method converts the click position, which is relative to the control, to a screen position. The <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService.ShowContextMenu%2A> method displays the shortcut menu.  
  
     The file that contains the event handler must include the <xref:System.ComponentModel.Design> namespace to access the <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService> class, and the <xref:Microsoft.VisualStudio.Shell> namespace to access the <xref:System.ComponentModel.Design.IMenuCommandService> interface.  
  
     [!code-csharp[TWShortcutMenu#41](../snippets/csharp/VS_Snippets_VSSDK/twshortcutmenu/cs/mycontrol.xaml.cs#41)]  
  
## See Also  
 [MenuCommands Vs. OleMenuCommands](../misc/menucommands-vs-olemenucommands.md)   
 [VSCT XML Schema Reference](http://msdn.microsoft.com/library/49e7efae-e713-4762-a824-96fdaf92cdc9)   
 [Extending Menus and Commands](http://msdn.microsoft.com/library/7b2be4b9-e3fe-4412-874f-ae72ebc84c4b)