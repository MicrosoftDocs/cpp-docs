---
title: "Example: Displaying a Dialog Box via a Menu Command | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC dialog boxes, examples"
  - "MFC dialog boxes, displaying"
  - "modeless dialog boxes, displaying"
  - "dialog boxes, MFC"
  - "modal dialog boxes, displaying"
  - "examples [MFC], dialog boxes"
  - "menu items, examples"
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Example: Displaying a Dialog Box via a Menu Command
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Example: Displaying a Dialog Box via a Menu Command](https://docs.microsoft.com/cpp/mfc/example-displaying-a-dialog-box-via-a-menu-command).  
  
  
This topic contains procedures to:  
  
-   Display a modal dialog box through a menu command.  
  
-   Display a modeless dialog box through a menu command.  
  
 Both sample procedures are for MFC applications and will work in an application you create with the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md).  
  
 The procedures use the following names and values:  
  
|Item|Name or value|  
|----------|-------------------|  
|Application|DisplayDialog|  
|Menu command|Test command on View menu; Command ID = ID_VIEW_TEST|  
|Dialog box|Test dialog box; Class = CTestDialog; Header file = TestDialog.h; Variable = testdlg, ptestdlg|  
|Command handler|OnViewTest|  
  
### To display a modal dialog box  
  
1.  Create the menu command; see [Creating Menus or Menu Items](../windows/creating-a-menu.md).  
  
2.  Create the dialog box; see [Starting the Dialog Editor](../mfc/creating-a-new-dialog-box.md).  
  
3.  Add a class for your dialog box. See [Adding a Class](../ide/adding-a-class-visual-cpp.md) for more information.  
  
4.  In **Class View**, select the document class (CDisplayDialogDoc). In the **Properties** window, click the **Events** button. Double-click the ID of the menu command (ID_VIEW_TEST) in the left pane of the **Properties** window and select **Command**. In the right pane, click the down arrow and select **\<Add> OnViewTest**.  
  
     If you added the menu command to the mainframe of an MDI application, select the application class (CDisplayDialogApp) instead.  
  
5.  Add the following include statement to CDisplayDialogDoc.cpp (or CDisplayDialogApp.cpp) after the existing include statements:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#42](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#42)]  
  
6.  Add the following code to `OnViewTest` to implement the function:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#43](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#43)]  
  
### To display a modeless dialog box  
  
1.  Do the first four steps to display a modal dialog box, except select the view class (CDisplayDialogView) in step 4.  
  
2.  Edit DisplayDialogView.h:  
  
    -   Declare the dialog box class preceding the first class declaration:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#44](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.h#44)]  
  
    -   Declare a pointer to the dialog box after the Attributes public section:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#45](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.h#45)]  
  
3.  Edit DisplayDialogView.cpp:  
  
    -   Add the following include statement after the existing include statements:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#42](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#42)]  
  
    -   Add the following code to the constructor:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#46](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#46)]  
  
    -   Add the following code to the destructor:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#47](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#47)]  
  
    -   Add the following code to `OnViewTest` to implement the function:  
  
         [!code-cpp[NVC_MFCControlLadenDialog#48](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#48)]  
  
 Also, see the following Knowledge Base article:  
  
-   Q251059 : HOWTO: Provide Your Own Window Class Name for an MFC Dialog Box  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Modal and Modeless Dialog Boxes](../mfc/modal-and-modeless-dialog-boxes.md)





