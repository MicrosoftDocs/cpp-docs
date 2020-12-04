---
description: "Learn more about: Form Views (MFC)"
title: "Form Views (MFC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["user interfaces [MFC], forms", "forms [MFC]", "applications [MFC], forms-based", "forms-based applications [MFC]", "forms [MFC], adding to applications"]
ms.assetid: efbe73c1-4ca4-4613-aac2-30d916e92c0e
---
# Form Views (MFC)

You can add forms to any Visual C++ application that supports the MFC libraries, including a [forms-based application](reference/creating-a-forms-based-mfc-application.md) (one whose view class is derived from `CFormView`). If you did not initially create your application to support forms, Visual C++ will add this support for you when you insert a new form. In an SDI or MDI application, which implements the default [document/view architecture](document-view-architecture.md), when the user chooses the **New** command (by default, on the **File** menu), Visual C++ prompts the user to choose from the available forms.

With an SDI application, when the user chooses the **New** command, the current instance of the form continues to run but a new instance of the application with the selected form is created if one is not found. In an MDI application, the current instance of the form continues to run when the user chooses the **New** command.

> [!NOTE]
> You can insert a form into a dialog-based application (one whose dialog class is based on `CDialog` and one in which no view class is implemented). However, without the document/view architecture, Visual C++ does not automatically implement the **File**&#124;**New** functionality. You must create a way for the user to view additional forms, such as by implementing a tabbed dialog box with various property pages.

When you insert a new form into your application, Visual C++ does the following:

- Creates a class based on one of the form-style classes that you choose (`CFormView`, `CRecordView`, `CDaoRecordView`, or `CDialog`).

- Creates a dialog resource with appropriate styles (or you can use an existing dialog resource that has not yet been associated with a class).

   If you choose an existing dialog resource, you may need to set these styles by using the Properties page for the dialog box. Styles for a dialog box must include:

     **WS_CHILD**=On

     **WS_BORDER**=Off

     **WS_VISIBLE**=Off

     **WS_CAPTION**=Off

For applications based on the document/view architecture, the **New Form** command (right-click in Class View) also:

- Creates a `CDocument`-based class

   Instead of having a new class created, you can use any existing `CDocument`-based class in your project.

- Generates a document template (derived from `CDocument`) with string, menu, and icon resources.

   You can also create a new class on which to base the template.

- Adds a call to `AddDocumentTemplate` in your application's `InitInstance` code.

   Visual C++ adds this code for each new form you create, which adds the form to the list of available forms when the user chooses the **New** command. This code includes the form's associated resource ID and the names of the associated document, view, and frame classes that together make up the new form object.

   Document templates serve as the connection between documents, frame windows, and views. For a single document, you can create many templates.

For more information, see:

- [Create a Forms-Based Application](reference/creating-a-forms-based-mfc-application.md)

- [Inserting a Form into a Project](inserting-a-form-into-a-project.md)

## See also

[User Interface Elements](user-interface-elements-mfc.md)
