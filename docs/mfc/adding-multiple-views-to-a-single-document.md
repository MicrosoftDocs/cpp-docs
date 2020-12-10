---
description: "Learn more about: Adding Multiple Views to a Single Document"
title: "Adding Multiple Views to a Single Document"
ms.date: "11/04/2016"
helpviewer_keywords: ["multiple views [MFC], SDI applications", "documents [MFC], multiple views", "single document interface (SDI), adding views", "views [MFC], SDI applications"]
ms.assetid: 86d0c134-01d5-429c-b672-36cfb956dc01
---
# Adding Multiple Views to a Single Document

In a single-document interface (SDI) application created with the Microsoft Foundation Class (MFC) Library, each document type is associated with a single view type. In some cases, it is desirable to have the ability to switch the current view of a document with a new view.

> [!TIP]
> For additional procedures on implementing multiple views for a single document, see [CDocument::AddView](reference/cdocument-class.md#addview) and the [COLLECT](../overview/visual-cpp-samples.md) MFC sample.

You can implement this functionality by adding a new `CView`-derived class and additional code for switching the views dynamically to an existing MFC application.

The steps are as follows:

- [Modify the Existing Application Class](#vcconmodifyexistingapplicationa1)

- [Create and Modify the New View Class](#vcconnewviewclassa2)

- [Create and Attach the New View](#vcconattachnewviewa3)

- [Implement the Switching Function](#vcconswitchingfunctiona4)

- [Add Support for Switching the View](#vcconswitchingtheviewa5)

The remainder of this topic assumes the following:

- The name of the `CWinApp`-derived object is `CMyWinApp`, and `CMyWinApp` is declared and defined in *MYWINAPP.H* and *MYWINAPP.CPP*.

- `CNewView` is the name of the new `CView`-derived object, and `CNewView` is declared and defined in *NEWVIEW.H* and *NEWVIEW.CPP*.

## <a name="vcconmodifyexistingapplicationa1"></a> Modify the Existing Application Class

For the application to switch between views, you need to modify the application class by adding member variables to store the views and a method to switch them.

Add the following code to the declaration of `CMyWinApp` in *MYWINAPP.H*:

[!code-cpp[NVC_MFCDocViewSDI#1](codesnippet/cpp/adding-multiple-views-to-a-single-document_1.h)]

The new member variables, `m_pOldView` and `m_pNewView`, point to the current view and the newly created one. The new method (`SwitchView`) switches the views when requested by the user. The body of the method is discussed later in this topic in [Implement the Switching Function](#vcconswitchingfunctiona4).

The last modification to the application class requires including a new header file that defines a Windows message (**WM_INITIALUPDATE**) that is used in the switching function.

Insert the following line in the include section of *MYWINAPP.CPP*:

[!code-cpp[NVC_MFCDocViewSDI#2](codesnippet/cpp/adding-multiple-views-to-a-single-document_2.cpp)]

Save your changes and continue to the next step.

## <a name="vcconnewviewclassa2"></a> Create and Modify the New View Class

Creating the new view class is made easy by using the **New Class** command available from Class View. The only requirement for this class is that it derives from `CView`. Add this new class to the application. For specific information on adding a new class to the project, see [Adding a Class](../ide/adding-a-class-visual-cpp.md).

Once you have added the class to the project, you need to change the accessibility of some view class members.

Modify *NEWVIEW.H* by changing the access specifier from **`protected`** to **`public`** for the constructor and destructor. This allows the class to be created and destroyed dynamically and to modify the view appearance before it is visible.

Save your changes and continue to the next step.

## <a name="vcconattachnewviewa3"></a> Create and Attach the New View

To create and attach the new view, you need to modify the `InitInstance` function of your application class. The modification adds new code that creates a new view object and then initializes both `m_pOldView` and `m_pNewView` with the two existing view objects.

Because the new view is created within the `InitInstance` function, both the new and existing views persist for the lifetime of the application. However, the application could just as easily create the new view dynamically.

Insert this code after the call to `ProcessShellCommand`:

[!code-cpp[NVC_MFCDocViewSDI#3](codesnippet/cpp/adding-multiple-views-to-a-single-document_3.cpp)]

Save your changes and continue to the next step.

## <a name="vcconswitchingfunctiona4"></a> Implement the Switching Function

In the previous step, you added code that created and initialized a new view object. The last major piece is to implement the switching method, `SwitchView`.

At the end of the implementation file for your application class (*MYWINAPP.CPP*), add the following method definition:

[!code-cpp[NVC_MFCDocViewSDI#4](codesnippet/cpp/adding-multiple-views-to-a-single-document_4.cpp)]

Save your changes and continue to the next step.

## <a name="vcconswitchingtheviewa5"></a> Add Support for Switching the View

The final step involves adding code that calls the `SwitchView` method when the application needs to switch between views. This can be done in several ways: by either adding a new menu item for the user to choose or switching the views internally when certain conditions are met.

For more information on adding new menu items and command handler functions, see [Handlers for Commands and Control Notifications](handlers-for-commands-and-control-notifications.md).

## See also

[Document/View Architecture](document-view-architecture.md)
