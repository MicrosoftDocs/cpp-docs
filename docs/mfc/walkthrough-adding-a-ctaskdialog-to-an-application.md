---
description: "Learn how to add a CTaskDialog to a MFC application"
title: "Walkthrough: Adding a CTaskDialog to an Application"
ms.date: "2/7/2025"
helpviewer_keywords: ["CTaskDialog, adding", "walkthroughs [MFC], dialogs"]
---
# Walkthrough: Adding a CTaskDialog to an application

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

This walkthrough introduces the [`CTaskDialog` class](../mfc/reference/ctaskdialog-class.md) and shows how to add it to your application.

The `CTaskDialog` is a task dialog box that replaces the Windows message box in Windows Vista or later. The `CTaskDialog` improves on the original message box and adds functionality. The Windows message box is still supported in Visual Studio.

> [!NOTE]
> Versions of Windows earlier than Windows Vista don't support the `CTaskDialog`. You must program an alternative dialog box option if you want to show a message to a user who runs your application on an earlier version of Windows. You can use the static method [CTaskDialog::IsSupported](../mfc/reference/ctaskdialog-class.md#issupported) to determine at run time whether a user's computer can display a `CTaskDialog`. In addition, the `CTaskDialog` is only available when your application is built with the Unicode library.

The `CTaskDialog` supports several optional elements to gather and display information. For example, a `CTaskDialog` can display command links, customized buttons, customized icons, and a footer. The `CTaskDialog` also has several methods that enable you to query the state of the task dialog box to determine what optional elements the user selected.

## Prerequisites

You need the following components to complete this walkthrough:

- Visual Studio 2010 or later
- Windows Vista or later

## Replace the Windows message box with a CTaskDialog

The following demonstrates the most basic use of the `CTaskDialog`, which is to replace the Windows message box. This example also changes the icon associated with the task dialog box. Changing the icon makes the `CTaskDialog` appear similar to the Windows message box.

1. Use the **MFC Application Wizard** to create a Microsoft Foundation Classes (MFC) application with all the default settings. See [Walkthrough: Using the New MFC Shell Controls](walkthrough-using-the-new-mfc-shell-controls.md) for instructions on how to open the wizard for your version of Visual Studio.
1. Call it *MyProject*.
1. Use the **Solution Explorer** to open `MyProject.cpp`.
1. Add `#include "afxtaskdialog.h"` after the list of includes.
1. Find the method `CMyProjectApp::InitInstance`. Insert the following lines of code before the `return TRUE;` statement. This code creates the strings that we use in either the Windows message box or in the `CTaskDialog`.

    ```cpp
    CString message("My message to the user");
    CString dialogTitle("My Task Dialog title");
    CString emptyString;

    // Check whether the user's computer supports `CTaskDialog`.
    // If not, display a Windows message box instead.
    if (CTaskDialog::IsSupported())
    {
        CTaskDialog taskDialog(message, emptyString, dialogTitle, TDCBF_OK_BUTTON);
        taskDialog.SetMainIcon(TD_WARNING_ICON); // Set the icon to be the same as the Windows message box
        taskDialog.DoModal();
    }
    else
    {
        AfxMessageBox(message);
    }
    ```

Compile and run the application. The application displays the task dialog box after it starts.

## Add functionality to the CTaskDialog

The following shows you how to add functionality to the `CTaskDialog` that you created in the previous procedure. The example code shows you how to execute specific instructions based on the user's selections.

1. Navigate to the **Resource View** via **View** > **Other Windows** > **Resource View**.
1. Expand the **Resource View** to the **String Table** folder. Expand it and double-click **String Table**.
1. Scroll to the bottom of the string table and add a new entry. Change the ID to `TEMP_LINE1`. Set the caption to `Command Line 1`.
1. Add another new entry. Change the ID to `TEMP_LINE2`. Set the caption to `Command Line 2`.
1. Navigate back to `MyProject.cpp`.
1. In the `CMyProjectApp::InitInstance()` function, after `CString emptyString;` add the following code:

    ```cpp
    CString expandedLabel("Hide extra information");
    CString collapsedLabel("Show extra information");
    CString expansionInfo("This is the additional information to the user,\nextended over two lines.");
    ```

1. Find the `taskDialog.DoModal()` statement and replace that statement with the following code. This code updates the task dialog box and adds new controls:

    ```cpp
    taskDialog.SetMainInstruction(L"Warning");
    taskDialog.SetCommonButtons(TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);
    taskDialog.LoadCommandControls(TEMP_LINE1, TEMP_LINE2);
    taskDialog.SetExpansionArea(expansionInfo, collapsedLabel, expandedLabel);
    taskDialog.SetFooterText(L"This is a small footnote to the user");
    taskDialog.SetVerificationCheckboxText(L"Remember your selection");
    INT_PTR result = taskDialog.DoModal();

    if (taskDialog.GetVerificationCheckboxState())
    {
        // Your code if the user selects the verification checkbox
    }

    switch (result)
    {
        case TEMP_LINE1:
            // PROCESS IF the first command line
            break;
        case TEMP_LINE2:
            // PROCESS IF the second command line
            break;
        case IDYES:
            // PROCESS IF the user clicks yes
            break;
        case IDNO:
            // PROCESS IF the user clicks no
            break;
        case IDCANCEL:
            // PROCESS IF the user clicks cancel
            break;
        default:
            // This case should not be hit because closing
            // the dialog box results in IDCANCEL
            break;
    }
    ```

Compile and run the application. The application displays the task dialog box that uses the new controls and additional information.

## Displaying a CTaskDialog Without Creating a CTaskDialog Object

The following shows you how to display a `CTaskDialog` without first creating a `CTaskDialog` object. This example continues the previous procedures.

### To Display a CTaskDialog Without Creating a CTaskDialog Object

1. Open the `MyProject.cpp` file.
1. In the `CMyProjectApp::InitInstance()` function, navigate to the closing bracket for the `if (CTaskDialog::IsSupported())` statement.
1. Insert the following code immediately before the closing bracket of the **`if`** statement (before the **`else`** block):

    ```cpp
    HRESULT result2 = CTaskDialog::ShowDialog(L"My error message",
        L"Error",
        L"New Title",
        TEMP_LINE1,
        TEMP_LINE2);
    ```

Compile and run the application. The application displays two task dialog boxes. The first dialog box is from the **To Add Functionality to the CTaskDialog** procedure; the second dialog box is from the previous procedure.

These examples don't demonstrate all the available options for a `CTaskDialog`, but should help you get started. See [CTaskDialog Class](../mfc/reference/ctaskdialog-class.md) for a full description of the class.

## See also

[Dialog Boxes](../mfc/dialog-boxes.md)\
[CTaskDialog Class](../mfc/reference/ctaskdialog-class.md)\
[CTaskDialog::CTaskDialog](../mfc/reference/ctaskdialog-class.md#ctaskdialog)
