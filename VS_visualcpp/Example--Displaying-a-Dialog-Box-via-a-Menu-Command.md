---
title: "Example: Displaying a Dialog Box via a Menu Command"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Example: Displaying a Dialog Box via a Menu Command
This topic contains procedures to:  
  
-   Display a modal dialog box through a menu command.  
  
-   Display a modeless dialog box through a menu command.  
  
 Both sample procedures are for MFC applications and will work in an application you create with the [MFC Application Wizard](../VS_visualcpp/MFC-Application-Wizard.md).  
  
 The procedures use the following names and values:  
  
|Item|Name or value|  
|----------|-------------------|  
|Application|DisplayDialog|  
|Menu command|Test command on View menu; Command ID = ID_VIEW_TEST|  
|Dialog box|Test dialog box; Class = CTestDialog; Header file = TestDialog.h; Variable = testdlg, ptestdlg|  
|Command handler|OnViewTest|  
  
### To display a modal dialog box  
  
1.  Create the menu command; see [Creating Menus or Menu Items](../VS_visualcpp/Creating-a-Menu.md).  
  
2.  Create the dialog box; see [Starting the Dialog Editor](../VS_visualcpp/Creating-a-New-Dialog-Box.md).  
  
3.  Add a class for your dialog box. See [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md) for more information.  
  
4.  In **Class View**, select the document class (CDisplayDialogDoc). In the **Properties** window, click the **Events** button. Double-click the ID of the menu command (ID_VIEW_TEST) in the left pane of the **Properties** window and select **Command**. In the right pane, click the down arrow and select **<Add\> OnViewTest**.  
  
     If you added the menu command to the mainframe of an MDI application, select the application class (CDisplayDialogApp) instead.  
  
5.  Add the following include statement to CDisplayDialogDoc.cpp (or CDisplayDialogApp.cpp) after the existing include statements:  
  
     [!CODE [NVC_MFCControlLadenDialog#42](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#42)]  
  
6.  Add the following code to `OnViewTest` to implement the function:  
  
     [!CODE [NVC_MFCControlLadenDialog#43](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#43)]  
  
### To display a modeless dialog box  
  
1.  Do the first four steps to display a modal dialog box, except select the view class (CDisplayDialogView) in step 4.  
  
2.  Edit DisplayDialogView.h:  
  
    -   Declare the dialog box class preceding the first class declaration:  
  
         [!CODE [NVC_MFCControlLadenDialog#44](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#44)]  
  
    -   Declare a pointer to the dialog box after the Attributes public section:  
  
         [!CODE [NVC_MFCControlLadenDialog#45](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#45)]  
  
3.  Edit DisplayDialogView.cpp:  
  
    -   Add the following include statement after the existing include statements:  
  
         [!CODE [NVC_MFCControlLadenDialog#42](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#42)]  
  
    -   Add the following code to the constructor:  
  
         [!CODE [NVC_MFCControlLadenDialog#46](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#46)]  
  
    -   Add the following code to the destructor:  
  
         [!CODE [NVC_MFCControlLadenDialog#47](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#47)]  
  
    -   Add the following code to `OnViewTest` to implement the function:  
  
         [!CODE [NVC_MFCControlLadenDialog#48](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#48)]  
  
 Also, see the following Knowledge Base article:  
  
-   Q251059 : HOWTO: Provide Your Own Window Class Name for an MFC Dialog Box  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Modal and Modeless Dialog Boxes](../VS_visualcpp/Modal-and-Modeless-Dialog-Boxes.md)