---
title: "How to: Create Menus, SubMenus, and Shortcut Menus"
ms.custom: ""
ms.date: "10/20/2016"
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
# How to: Create Menus, SubMenus, and Shortcut Menus
To add a menu to the Visual Studio integrated development environment (IDE), a VSPackage must use the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] architecture for command-group menus. A command-group menu enables the sharing of commands by components and the IDE. For more information about command-group menus, see [How VSPackages Add User Interface Elements](../Topic/How%20VSPackages%20Add%20User%20Interface%20Elements.md).  
  
 In VSPackages, menus are defined in the [Menus](../Topic/Menus%20Element.md) section of a .vsct file. A .vsct file defines menus, toolbars, groups, and commands. A command is what a user clicks to perform a function. A group is a container for commands. A menu is a container for groups. To create a basic menu, you must create a menu, a command group, and at least one command.  
  
 There are three basic ways that a menu can appear in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]:  
  
-   As a menu on the main menu bar.  
  
-   As a submenu of another menu.  
  
-   As a shortcut menu (typically displayed by a right-click).  
  
 This topic shows how to create each kind of menu. The following walkthroughs also show how to do this:  
  
-   [Adding a Menu to the Visual Studio Menu Bar](../Topic/Adding%20a%20Menu%20to%20the%20Visual%20Studio%20Menu%20Bar.md)  
  
-   [Adding a Submenu to a Menu](../Topic/Adding%20a%20Submenu%20to%20a%20Menu.md)  
  
-   [Adding a Shortcut Menu in a Tool Window](../Topic/Adding%20a%20Shortcut%20Menu%20in%20a%20Tool%20Window.md)  
  
### To create a menu, submenu, or shortcut menu  
  
1.  In your project, double-click the .vsct file to open it in the editor.  
  
     If your project does not have a .vsct file, add one. If you are creating a package by using the Visual Studio Package Template, select **Menu Command**; doing this will generate a .vsct file.  
  
2.  In the `Symbols` section, find the [GuidSymbol](../Topic/GuidSymbol%20Element.md) element that contains the groups and commands.  
  
3.  Create an [IDSymbol](../Topic/IDSymbol%20Element.md) element for each menu, group, or command that you want to add, as shown in the following example.  
  
     [!CODE [ButtonGroup#01](../CodeSnippet/VS_Snippets_VSSDK/buttongroup#01)]  
  
     The `name` attributes of the `GuidSymbol` and `IDSymbol` elements provide the GUID:ID pair for each new menu, group, or command. The `GUID` represents a command set that is defined for your VSPackage. You can define multiple command sets. Each GUID:ID pair must be unique.  
  
4.  Define the new menu in the `Menus` section, as follows:  
  
    1.  Set the `guid` and `id` fields to match the GUID:ID of the new menu.  
  
    2.  Set the `priority` attribute.  
  
         The `priority` attribute is used by the .vsct file to determine the location of the menu among the other objects in the parent group.  
  
         Menus that have lower-priority values are displayed before menus that have higher-priority values. Duplicate priority values are permitted, but the relative position of menus that have equal priority is determined by the order in which VSPackages are processed at run time, and that order cannot be predetermined. Omitting the `priority` attribute sets its value to 0.  
  
         Do not set a priority for a shortcut menu, because its placement is determined by the code that calls it.  
  
    3.  For menus and submenus, set the `type` attribute to `Menu`, which describes a typical menu. For shortcut menus, set the `type` attribute to `Context`.  
  
         For descriptions of other valid menu types, such as toolbars and menu controllers, see [Menu Element](../Topic/Menu%20Element.md).  
  
    4.  In the menu definition, create a [Strings](../Topic/Strings%20Element.md) section that contains a [ButtonText](../Topic/ButtonText%20Element.md) element to contain the name of the menu as it appears in the IDE, and a [CommandName](../Topic/CommandName%20Element.md) element to contain the name of the command that is used to access the menu in the **Command** window.  
  
         If the button text string includes the '&' character, the user can open the menu by pressing ALT plus the character that immediately follows the '&'.  
  
    5.  Add command flags, as appropriate, to change the appearance and behavior of the menu. To do this, add a [CommandFlag](../Topic/Command%20Flag%20Element.md) element in the menu definition. For more information, see [Command Flag Element](../Topic/Command%20Flag%20Element.md).  
  
5.  Set the parent of the menu. For a standard menu or submenu, do this in one of the following ways, depending on your design:  
  
    -   In the `Menu` element, create a [Parent](../Topic/Parent%20Element.md) element and set its `guid` and `id` fields to the GUID:ID of the group that will host the menu, also known as the *primary parent group*. The parent group can be a group that you created in the `Symbols` section, a group from another package, or a group from the IDE. For example, to add your menu to the top-level menu bar of the IDE, near the **Tools** menu, set the parent to guidSHLMainMenu:IDG_VS_MM_TOOLSADDINS.  
  
         The following example shows a menu that will appear on the Visual Studio menu bar.  
  
         [!CODE [TopLevelMenu#01](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#01)]  
  
    -   You may omit the `Parent` element if the menu is to be positioned by using command placement. Create a [CommandPlacements](../Topic/CommandPlacements%20Element.md) section before the `Symbols` section, and add a [CommandPlacement](../Topic/CommandPlacement%20Element.md) element that has the GUID:ID of the menu, a priority, and a parent, as shown in the following example.  
  
         [!CODE [ButtonGroup#04](../CodeSnippet/VS_Snippets_VSSDK/buttongroup#04)]  
  
         Creating multiple command placements that have the same GUID:ID and have different parents causes a menu to appear in multiple locations. For more information, see [CommandPlacements Element](../Topic/CommandPlacements%20Element.md).  
  
     A standard menu must have a group on the Visual Studio menu bar as its parent. For a submenu, the parent must be a group on another menu (or on a toolbar or other menu type). For a menu or submenu to be displayed, it must host a group that contains at least one active command, or have the `AlwaysCreate` command flag set.  
  
     Shortcut menus do not have parents or command placements. Instead, they must be activated in code. Typically, a shortcut menu is activated in response to a right-click on a control surface. The following example defines a shortcut menu.  
  
     [!CODE [ButtonGroup#06](../CodeSnippet/VS_Snippets_VSSDK/buttongroup#06)]  
  
6.  In the [Groups](../Topic/Groups%20Element.md) section, create a [Group](../Topic/Group%20Element.md) element to contain the commands that are to appear on your menu. The `Symbols` section must include an entry that has the same GUID:ID as the new `Group` element.  
  
    1.  Set the priority of the group so that it will appear where you want it on your menu.  
  
         The boundaries of each group on the menu will appear as horizontal lines.  
  
    2.  Set the parent for this new group to the GUID:ID of the menu that you created. Doing this puts the group of commands on the menu.  
  
     The group in the following example appears on the top-level menu that was shown in an earlier example.  
  
     [!CODE [TopLevelMenu#02](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#02)]  
  
     Menus can contain both commands and submenus. A submenu (sometimes referred to as a cascading menu) is just a menu, but it is one that is added to another menu's group and is exposed only when that other menu is invoked. By putting the menu that is shown in the following example in a group in the top-level menu, it becomes a submenu.  
  
     [!CODE [TopLevelMenu#06](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#06)]  
  
7.  Add commands to the menu by creating command entries in the [Buttons](../Topic/Buttons%20Element.md) section and setting the parent of each to the GUID:ID of your group. Each [Button](../Topic/Button%20Element.md) element must have a GUID:ID that corresponds to an entry in the `Symbols` section.  
  
     Use the `priority` attribute of each button entry to specify the order in which the commands appear in the group.  
  
     The following example defines a command that will appear on the top-level menu.  
  
     [!CODE [TopLevelMenu#03](../CodeSnippet/VS_Snippets_VSSDK/toplevelmenu#03)]  
  
     For more information about buttons and menu items, see [Button Element](../Topic/Button%20Element.md).  
  
     For information about how to implement menu commands in code, see [MenuCommands Vs. OleMenuCommands](../misc/menucommands-vs-olemenucommands.md) or the walkthroughs that are mentioned earlier in this topic.  
  
### To activate a shortcut menu  
  
1.  Obtain the GUID:ID of the shortcut menu. By default, the package template creates a `GuidList` class in a PkgCmdID.cs file to hold the GUID of the command set. The template also creates a `PkgCmdIdList` class in a PkgCmdId.cs file to hold the integer ID values of commands that are declared in the template. Shortcut menus and any additional commands must be declared after the template is finished. The following example shows these declarations.  
  
     [!code-cs[TWShortcutMenu#12](../misc/codesnippet/CSharp/how-to-create-menus-submenus-and-shortcut-menus_8.cs)]  
  
     This step can be omitted if the GUID and ID values will be used directly. However, we recommend that you set the values here for readability.  
  
2.  Attach to an event handler. Typically, shortcut menus attach to the right-click of a control surface, as shown in the following example.  
  
     [!code-cs[TWShortcutMenu#43](../misc/codesnippet/CSharp/how-to-create-menus-submenus-and-shortcut-menus_9.cs)]  
  
     The <xref:System.Windows.Forms.Control.PointToScreen*> method converts the click position, which is relative to the control, to a screen position. The <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService.ShowContextMenu*> method displays the shortcut menu.  
  
     The file that contains the event handler must include the <xref:System.ComponentModel.Design> namespace to access the <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService> class, and the <xref:Microsoft.VisualStudio.Shell> namespace to access the <xref:System.ComponentModel.Design.IMenuCommandService> interface.  
  
     [!code-cs[TWShortcutMenu#41](../misc/codesnippet/CSharp/how-to-create-menus-submenus-and-shortcut-menus_10.cs)]  
  
## See Also  
 [MenuCommands Vs. OleMenuCommands](../misc/menucommands-vs-olemenucommands.md)   
 [VSCT XML Schema Reference](../Topic/VSCT%20XML%20Schema%20Reference.md)   
 [Extending Menus and Commands](../Topic/Extending%20Menus%20and%20Commands.md)