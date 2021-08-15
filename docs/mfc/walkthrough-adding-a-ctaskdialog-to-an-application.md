---
description: "Learn more about: Walkthrough: Adding a CTaskDialog to an Application"
title: "Walkthrough: Adding a CTaskDialog to an Application"
ms.date: "04/25/2019"
helpviewer_keywords: ["CTaskDialog, adding", "walkthroughs [MFC], dialogs"]
ms.assetid: 3a62abb8-2d86-4bec-bdb8-5784d5f9a9f8
---
# Walkthrough: Adding a CTaskDialog to an Application

This walkthrough introduces the [CTaskDialog Class](../mfc/reference/ctaskdialog-class.md) and shows you how to add one to your application.

The `CTaskDialog` is a task dialog box that replaces the Windows message box in Windows Vista or later. The `CTaskDialog` improves the original message box and adds functionality. The Windows message box is still supported in Visual Studio.

> [!NOTE]
> Versions of Windows earlier than Windows Vista do not support the `CTaskDialog`. You must program an alternative dialog box option if you want to show a message to a user who runs your application on an earlier version of Windows. You can use the static method [CTaskDialog::IsSupported](../mfc/reference/ctaskdialog-class.md#issupported) to determine at run time whether a user's computer can display a `CTaskDialog`. In addition, the `CTaskDialog` is only available when your application is built with the Unicode library.

The `CTaskDialog` supports several optional elements to gather and display information. For example, a `CTaskDialog` can display command links, customized buttons, customized icons, and a footer. The `CTaskDialog` also has several methods that enable you to query the state of the task dialog box to determine what optional elements the user selected.

## Prerequisites

You need the following components to complete this walkthrough:

- Visual Studio 2010 or later

- Windows Vista or later

## Replacing a Windows Message Box with a CTaskDialog

The following procedure demonstrates the most basic use of the `CTaskDialog`, which is to replace the Windows message box. This example also changes the icon associated with the task dialog box. Changing the icon makes the `CTaskDialog` appear same to the Windows message box.

### To Replace a Windows Message Box with a CTaskDialog

1. Use the **MFC Application Wizard** to create an MFC application with all the default settings. See [Walkthrough: Using the New MFC Shell Controls](walkthrough-using-the-new-mfc-shell-controls.md) for instructions on how to open the wizard for your version of Visual Studio.

1. Call it *MyProject*.

1. Use the **Solution Explorer** to open the file MyProject.cpp.

1. Add `#include "afxtaskdialog.h"` after the list of includes.

1. Find the method `CMyProjectApp::InitInstance`. Insert the following lines of code before the `return TRUE;` statement. This code creates the strings that we use in either the Windows message box or in the `CTaskDialog`.

    ```cpp
    CString message("My message to the user");
    CString dialogTitle("My Task Dialog title");
    CString emptyString;
    ```

1. Add the following code after the code from step 4. This code guarantees that the user's computer supports the `CTaskDialog`. If the dialog isn't supported, the application displays a Windows message box instead.

    ```cpp
    if (CTaskDialog::IsSupported())
    {

    }
    else
    {
        AfxMessageBox(message);
    }
    ```

1. Insert the following code between the brackets after the **`if`** statement from step 5. This code creates the `CTaskDialog`.

    ```cpp
    CTaskDialog taskDialog(message, emptyString, dialogTitle, TDCBF_OK_BUTTON);
    ```

1. On the next line, add the following code. This code sets the warning icon.

    ```cpp
    taskDialog.SetMainIcon(TD_WARNING_ICON);
    ```

1. On the next line, add the following code. This code displays the task dialog box.

    ```cpp
    taskDialog.DoModal();
    ```

You can avoid step 7 if you don't want the `CTaskDialog` to display the same icon as the Windows message box. If you avoid that step, the `CTaskDialog` has no icon when the application displays it.

Compile and run the application. The application displays the task dialog box after it starts.

## Adding Functionality to the CTaskDialog

The following procedure shows you how to add functionality to the `CTaskDialog` that you created in the previous procedure. The example code shows you how to execute specific instructions based on the user's selections.

### To Add Functionality to the CTaskDialog

1. Navigate to the **Resource View**. If you can't see the **Resource View**, you can open it from the **View** menu.

1. Expand the **Resource View** until you can select the **String Table** folder. Expand it and double-click the **String Table** entry.

1. Scroll to the bottom of the string table and add a new entry. Change the ID to `TEMP_LINE1`. Set the caption to **Command Line 1**.

1. Add another new entry. Change the ID to `TEMP_LINE2`. Set the caption to **Command Line 2**.

1. Navigate back to MyProject.cpp.

1. After `CString emptyString;`, add the following code:

    ```cpp
    CString expandedLabel("Hide extra information");
    CString collapsedLabel("Show extra information");
    CString expansionInfo("This is the additional information to the user,\nextended over two lines.");
    ```

1. Find the `taskDialog.DoModal()` statement and replace that statement with the following code. This code updates the task dialog box and adds new controls:

    ```cpp
    taskDialog.SetMainInstruction(L"Warning");
    taskDialog.SetCommonButtons(
        TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);
    taskDialog.LoadCommandControls(TEMP_LINE1, TEMP_LINE2);
    taskDialog.SetExpansionArea(
        expansionInfo, collapsedLabel, expandedLabel);
    taskDialog.SetFooterText(L"This is the a small footnote to the user");
    taskDialog.SetVerificationCheckboxText(L"Remember your selection");
    ```

1. Add the following line of code that displays the task dialog box to the user and retrieves the user's selection:

    ```cpp
    INT_PTR result = taskDialog.DoModal();
    ```

1. Insert the following code after the call to `taskDialog.DoModal()`. This section of code processes the user's input:

    ```cpp
    if (taskDialog.GetVerificationCheckboxState())
    {
        // PROCESS IF the user selects the verification checkbox
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

In the code in step 9, replace the comments that start with `PROCESS IF` with the code that you want to execute under the specified conditions.

Compile and run the application. The application displays the task dialog box that uses the new controls and additional information.

## Displaying a CTaskDialog Without Creating a CTaskDialog Object

The following procedure shows you how to display a `CTaskDialog` without first creating a `CTaskDialog` object. This example continues the previous procedures.

### To Display a CTaskDialog Without Creating a CTaskDialog Object

1. Open the MyProject.cpp file if it isn't already open.

1. Navigate to the closing bracket for the `if (CTaskDialog::IsSupported())` statement.

1. Insert the following code immediately before the closing bracket of the **`if`** statement (before the **`else`** block):

    ```cpp
    HRESULT result2 = CTaskDialog::ShowDialog(L"My error message",
        L"Error",
        L"New Title",
        TEMP_LINE1,
        TEMP_LINE2);
    ```

Compile and run the application. The application displays two task dialog boxes. The first dialog box is from the **To Add Functionality to the CTaskDialog** procedure; the second dialog box is from the last procedure.

These examples don't demonstrate all the available options for a `CTaskDialog`, but should help you get started. See [CTaskDialog Class](../mfc/reference/ctaskdialog-class.md) for a full description of the class.

## See also

[Dialog Boxes](../mfc/dialog-boxes.md)<br/>
[CTaskDialog Class](../mfc/reference/ctaskdialog-class.md)<br/>
[CTaskDialog::CTaskDialog](../mfc/reference/ctaskdialog-class.md#ctaskdialog)
