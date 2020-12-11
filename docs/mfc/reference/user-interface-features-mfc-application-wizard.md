---
description: "Learn more about: User Interface Features, MFC Application Wizard"
title: "User Interface Features, MFC Application Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfc.exe.ui"]
helpviewer_keywords: ["MFC Application Wizard, user interface features"]
ms.assetid: 59e7b829-a665-42eb-be23-3f2a36eb2dad
---
# User Interface Features, MFC Application Wizard

This topic explains the options that you can use to specify the look of your application. The user interface features available for your project depend on the type of application you specified in the [Application Type, MFC Application Wizard](../../mfc/reference/application-type-mfc-application-wizard.md) page of the MFC Application Wizard. For example, if you create a single document interface application, you cannot add child frame styles.

- **Main frame styles**

   Sets the features of your application's main window frame.

   |Option|Description|
   |------------|-----------------|
   |**Thick frame**|Creates a window that has a sizing border. The default.|
   |**Minimize box**|Includes a minimize box in the main frame window. The default.|
   |**Maximize box**|Includes a maximize box in the main frame window. The default.|
   |**Minimized**|Opens the main frame window as an icon.|
   |**Maximized**|Opens the main frame window to the full size of the display.|
   |**System menu**|Includes a system menu in the main frame window. The default.|
   |**About box**|Includes an **About** box for the application. The user can access this box from the application's **Help** menu. The default, and unchangeable unless you select **Dialog based**, in the [Application Type, MFC Application Wizard](../../mfc/reference/application-type-mfc-application-wizard.md) page.<br /><br /> **Note** Usually, an unavailable option indicates that the wizard does not apply the option to the project, whether the unavailable item's check box is selected or cleared. In this case, the wizard always adds an **About** box to the project unless you first specify the project as dialog based and then uncheck the box.|
   |**Initial status bar**|Adds a status bar to your application. The status bar contains automatic indicators for the keyboard's CAPS LOCK, NUM LOCK, and SCROLL LOCK keys and a message line that displays help strings for menu commands and toolbar buttons. Clicking this option also adds menu commands to display or hide the status bar. By default, an application has a status bar. Not available for dialog-based application types.|
   |**Split window**|Provides a splitter bar. The splitter bar splits the application's main views. In a multiple document interface (MDI) application, the MDI child frame's client window is a splitter window, and in a single document interface (SDI) application and multiple top level document application, the main frame's client window is a splitter window. Not available for dialog-based application types.|

- **Child frame styles**

   Specifies the appearance and initial state of the child frames in your application. Child frame styles are available for MDI applications only.

   |Option|Description|
   |------------|-----------------|
   |**Child minimize box**|Specifies whether a child window has a minimize button (enabled by default).|
   |**Child maximize box**|Specifies whether a child window has a maximize button (enabled by default).|
   |**Child maximized**|Specifies whether a child window is initially maximized by setting the cs.style flag WS_MAXIMIZE in the [PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow) member function of `CChildFrame`.|

- **Command bars (menu/toolbar/ribbon)**

   Indicates whether your application includes menus, toolbars, and/or a ribbon. Not available for dialog-based applications.

   |Option|Description|
   |------------|-----------------|
   |**Use a classic menu**|Specifies that your application contains a classic, non-draggable menu.|
   |**Use a classic docking toolbar**|Adds a standard Windows toolbar to your application. The toolbar contains buttons for creating a new document; opening and saving document files; cutting copying, pasting, or printing text; and entering Help mode. Enabling this option also adds menu commands to display or hide the toolbar.|
   |**Use a browser style toolbar**|Adds an Internet Explorer-style toolbar to your application.|
   |**Use a menu bar and toolbar**|Indicates that your application contains a draggable menu bar and a toolbar.|
   |**User-defined toolbars and images**|Allows the user to customize the toolbar and the toolbar images at runtime.|
   |**Personalized menu behavior**|Specifies whether the menu contains the full list of items when opened, or if it contains only the commands that the user most frequently uses.|
   |**Use a ribbon**|Uses an Office 2007-like ribbon in your application instead of a menu bar or toolbar.|

- **Dialog title**

   For [CDialog Class](../../mfc/reference/cdialog-class.md)-based applications only, this title appears in the title bar of the dialog box. To edit this field, you must first select the **Dialog based** option under **Application type**. For more information, see [Application Type, MFC Application Wizard](../../mfc/reference/application-type-mfc-application-wizard.md).

## See also

[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)
