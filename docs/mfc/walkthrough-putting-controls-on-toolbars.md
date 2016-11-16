---
title: "Walkthrough: Putting Controls On Toolbars | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Customize dialog box, adding controls"
  - "toolbars, adding controls"
ms.assetid: 8fc94bdf-0da7-45d9-8bc4-52b7b1edf205
caps.latest.revision: 24
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
# Walkthrough: Putting Controls On Toolbars
This topic describes how to add a toolbar button that contains a Windows control to a toolbar. In MFC, a toolbar button must be a [CMFCToolBarButton Class](../mfc/reference/cmfctoolbarbutton-class.md)-derived class, for example [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md), [CMFCToolBarEditBoxButton Class](../mfc/reference/cmfctoolbareditboxbutton-class.md), [CMFCDropDownToolbarButton Class](../mfc/reference/cmfcdropdowntoolbarbutton-class.md), or [CMFCToolBarMenuButton Class](../mfc/reference/cmfctoolbarmenubutton-class.md).  
  
## Adding Controls to Toolbars  
 To add a control to a toolbar, follow these steps:  
  
1.  Reserve a dummy resource ID for the button in the parent toolbar resource. For more information about how to create buttons by using the Toolbar Editor in Visual Studio, see the [Toolbar Editor](../mfc/toolbar-editor.md) topic.  
  
2.  Reserve a toolbar image (button icon) for the button in all bitmaps of the parent toolbar.  
  
3.  In the message handler that processes the `AFX_WM_RESETTOOLBAR` message, do the following:  
  
    1.  Construct the button control by using a `CMFCToolbarButton`-derived class.  
  
    2.  Replace the dummy button with the new control by using [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton). You can construct the button object on the stack, because `ReplaceButton` copies the button object and maintains the copy.  
  
> [!NOTE]
>  If you enabled customization in your application, you may have to reset the toolbar by using the **Reset** button on the **Toolbars** tab of the **Customize** dialog box to see the updated control in your application after recompiling. The toolbar state is saved in the Windows registry, and the registry information is loaded and applied after the `ReplaceButton` method is executed during application startup.  
  
## Toolbar Controls and Customization  
 The **Commands** tab of the **Customize** dialog box contains a list of commands that are available in the application. By default, the **Customize** dialog box processes the application menus and builds a list of standard toolbar buttons in each menu category. To retain the extended functionality that the toolbar controls provide, you must replace the standard toolbar button with the custom control in the **Customize** dialog box.  
  
 When you enable customization, you create the **Customize** dialog box in the customization handler `OnViewCustomize` by using the [CMFCToolBarsCustomizeDialog Class](../mfc/reference/cmfctoolbarscustomizedialog-class.md) class. Before you display the **Customize** dialog box by calling [CMFCToolBarsCustomizeDialog::Create](../mfc/reference/cmfctoolbarscustomizedialog-class.md#cmfctoolbarscustomizedialog__create), call [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#cmfctoolbarscustomizedialog__replacebutton) to replace the standard button with the new control.  
  
## Example: Creating a Find Combo Box  
 This section describes how to create a `Find` combo box control that appears on a toolbar and contains recently-used search strings. The user can type a string in the control and then press the enter key to search a document, or press the escape key to return the focus to the main frame. This example assumes that the document is displayed in a [CEditView Class](../mfc/reference/ceditview-class.md)-derived view.  
  
### Creating the Find Control  
 First, create the `Find` combo box control:  
  
1.  Add the button and its commands to the application resources:  
  
    1.  In the application resources, add a new button with an `ID_EDIT_FIND` command ID to a toolbar in your application and to any bitmaps associated with the toolbar.  
  
    2.  Create a new menu item with the ID_EDIT_FIND command ID.  
  
    3.  Add a new string "Find the text\nFind" to the string table and assign it an `ID_EDIT_FIND_COMBO` command ID. This ID will be used as the command ID of the `Find` combo box button.  
  
        > [!NOTE]
        >  Because `ID_EDIT_FIND` is a standard command that is processed by `CEditView`, you are not required to implement a special handler for this command.  However, you must implement a handler for the new command `ID_EDIT_FIND_COMBO`.  
  
2.  Create a new class, `CFindComboBox`, derived from [CComboBox Class](../mfc/reference/ccombobox-class.md).  
  
3.  In the `CFindComboBox` class, override the `PreTranslateMessage` virtual method. This method will enable the combo box to process the [WM_KEYDOWN](http://msdn.microsoft.com/library/windows/desktop/ms646280) message. If the user hits the escape key (`VK_ESCAPE`), return the focus to the main frame window. If the user hits the Enter key (`VK_ENTER`), post to the main frame window a `WM_COMMAND` message that contains the `ID_EDIT_FIND_COMBO` command ID.  
  
4.  Create a class for the `Find` combo box button, derived from [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md). In this example, it is named `CFindComboButton`.  
  
5.  The constructor of `CMFCToolbarComboBoxButton` takes three parameters: the command ID of the button, the button image index, and the style of the combo box. Set these parameters as follows:  
  
    1.  Pass the `ID_EDIT_FIND_COMBO` as the command ID.  
  
    2.  Use [CCommandManager::GetCmdImage](http://msdn.microsoft.com/en-us/4094d08e-de74-4398-a483-76d27a742dca) with `ID_EDIT_FIND` to obtain the image index.  
  
    3.  For a list of available combo box styles, see [Combo-Box Styles](../mfc/reference/combo-box-styles.md).  
  
6.  In the `CFindComboButton` class, override the `CMFCToolbarComboBoxButton::CreateCombo` method. Here you should create the `CFindComboButton` object and return a pointer to it.  
  
7.  Use the [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macro to make the combo button persistent. The workspace manager automatically loads and saves the button's state in the Windows registry.  
  
8.  Implement the `ID_EDIT_FIND_COMBO` handler in your document view. Use [CMFCToolBar::GetCommandButtons](../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__getcommandbuttons) with `ID_EDIT_FIND_COMBO` to retrieve all `Find` combo box buttons. There can be several copies of a button with the same command ID because of customization.  
  
9. In the ID_EDIT_FIND message handler `OnFind`, use [CMFCToolBar::IsLastCommandFromButton](../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__islastcommandfrombutton) to determine whether the find command was sent from the `Find` combo box button. If so, find the text and add the search string to the combo box.  
  
### Adding the Find Control to the Main Toolbar  
 To add the combo box button to the toolbar, follow these steps:  
  
1.  Implement the `AFX_WM_RESETTOOLBAR` message handler `OnToolbarReset` in the main frame window.  
  
    > [!NOTE]
    >  The framework sends this message to the main frame window when a toolbar is initialized during application startup, or when a toolbar is reset during customization. In either case, you must replace the standard toolbar button with the custom `Find` combo box button.  
  
2.  In the `AFX_WM_RESETTOOLBAR` handler, examine the toolbar ID, that is, the `WPARAM` of the `AFX_WM_RESETTOOLBAR` message. If the toolbar ID is equal to that of the toolbar that contains the `Find` combo box button, call [CMFCToolBar::ReplaceButton](../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton) to replace the `Find` button (that is, the button with the command ID `ID_EDIT_FIND)` with a `CFindComboButton` object.  
  
    > [!NOTE]
    >  You can construct a `CFindComboBox` object on the stack, because `ReplaceButton` copies the button object and maintains the copy.  
  
### Adding the Find Control to the Customize Dialog Box  
 In the customization handler `OnViewCustomize`, call [CMFCToolBarsCustomizeDialog::ReplaceButton](../mfc/reference/cmfctoolbarscustomizedialog-class.md#cmfctoolbarscustomizedialog__replacebutton) to replace the `Find` button (that is, the button with the command ID `ID_EDIT_FIND)` with a `CFindComboButton` object.  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../mfc/reference/cmfctoolbarbutton-class.md)   
 [CMFCToolBarComboBoxButton Class](../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [CMFCToolBarsCustomizeDialog Class](../mfc/reference/cmfctoolbarscustomizedialog-class.md)
