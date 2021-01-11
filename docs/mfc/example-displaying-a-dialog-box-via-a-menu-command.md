---
description: "Learn more about: Example: Displaying a Dialog Box via a Menu Command"
title: "Example: Displaying a Dialog Box via a Menu Command"
ms.date: "09/07/2019"
helpviewer_keywords: ["MFC dialog boxes [MFC], examples", "MFC dialog boxes [MFC], displaying", "modeless dialog boxes [MFC], displaying", "dialog boxes [MFC], MFC", "modal dialog boxes [MFC], displaying", "examples [MFC], dialog boxes", "menu items [MFC], examples"]
ms.assetid: e8692549-acd7-478f-9c5e-ba310ce8cccd
---
# Example: Displaying a Dialog Box via a Menu Command

This topic contains procedures to:

- Display a modal dialog box through a menu command.

- Display a modeless dialog box through a menu command.

Both sample procedures are for MFC applications and will work in an application you create with the [MFC Application Wizard](reference/mfc-application-wizard.md).

The procedures use the following names and values:

|Item|Name or value|
|----------|-------------------|
|Application|DisplayDialog|
|Menu command|Test command on View menu; Command ID = ID_VIEW_TEST|
|Dialog box|Test dialog box; Class = CTestDialog; Header file = TestDialog.h; Variable = testdlg, ptestdlg|
|Command handler|OnViewTest|

### To display a modal dialog box

1. Create the menu command; see [Creating Menus or Menu Items](../windows/menu-editor.md).

1. Create the dialog box; see [Starting the Dialog Editor](../windows/creating-a-new-dialog-box.md).

1. Add a class for your dialog box. See [Adding a Class](../ide/adding-a-class-visual-cpp.md) for more information.

1. In **Class View**, select the document class (CDisplayDialogDoc). In the **Properties** window, click the **Events** button. Double-click the ID of the menu command (ID_VIEW_TEST). Next, click the down arrow and select **\<Add> OnViewTest**.

   If you added the menu command to the mainframe of an MDI application, select the application class (CDisplayDialogApp) instead.

1. Add the following include statement to CDisplayDialogDoc.cpp (or CDisplayDialogApp.cpp) after the existing include statements:

   ```cpp
   #include "TestDialog.h"
   ```

1. Add the following code to `OnViewTest` to implement the function:

   ```cpp
   CTestDialog testdlg;
   testdlg.DoModal();
   ```

### To display a modeless dialog box

1. Do the first four steps to display a modal dialog box, except select the view class (CDisplayDialogView) in step 4.

1. Edit DisplayDialogView.h:

   - Declare the dialog box class preceding the first class declaration:

   ```cpp
   class CTestDialog;
   ```

   - Declare a pointer to the dialog box after the Attributes public section:

   ```cpp
   CTestDialog* m_pTestDlg;
   ```

1. Edit DisplayDialogView.cpp:

   - Add the following include statement after the existing include statements:

   ```cpp
   #include "TestDialog.h"
   ```

   - Add the following code to the constructor:

   ```cpp
   m_pTestDlg = NULL;
   ```

   - Add the following code to the destructor:

   ```cpp
   delete m_pTestDlg;
   ```

   - Add the following code to `OnViewTest` to implement the function:

   ```cpp
   if (NULL == m_pTestDlg)
   {
      m_pTestDlg = new CTestDialog(this);
      m_pTestDlg->Create(CTestDialog::IDD, this);
   }
   m_pTestDlg->ShowWindow(SW_SHOW);
   ```

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Modal and Modeless Dialog Boxes](modal-and-modeless-dialog-boxes.md)
