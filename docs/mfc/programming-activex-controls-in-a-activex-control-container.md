---
description: "Learn more about: ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container"
title: "ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container"
ms.date: "09/12/2018"
helpviewer_keywords: ["ActiveX control containers [MFC], accessing ActiveX controls", "Confirm Classes dialog box", "wrapper classes [MFC], ActiveX controls", "ActiveX control containers [MFC], wrapper classes", "ActiveX controls [MFC], accessing", "MFC ActiveX controls [MFC], accessing in containers", "header files [MFC], for ActiveX control wrapper class", "wrapper classes [MFC], using", "ActiveX controls [MFC], wrapper classes"]
ms.assetid: ef9b2480-92d6-4191-b16e-8055c4fd7b73
---
# ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container

This article describes the process for accessing the exposed [methods](../mfc/mfc-activex-controls-methods.md) and [properties](../mfc/mfc-activex-controls-properties.md) of embedded ActiveX controls.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

Basically, you will follow these steps:

1. [Insert an ActiveX control into the ActiveX container project](../mfc/inserting-a-control-into-a-control-container-application.md) using Gallery.

1. [Define a member variable](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) (or other form of access) of the same type as the ActiveX control wrapper class.

1. [Program the ActiveX control](#_core_programming_the_activex_control) using predefined member functions of the wrapper class.

For this discussion, assume you've created a dialog-based project (named Container) with ActiveX control support. The Circ sample control, Circ, will be added to the resulting project.

Once the Circ control is inserted into the project (step 1), insert an instance of the Circ control into the application's main dialog box.

## Procedures

#### To add the Circ control to the dialog template

1. Load the ActiveX control container project. For this example, use the `Container` project.

1. Click the Resource View tab.

1. Open the **Dialog** folder.

1. Double-click the main dialog box template. For this example, use **IDD_CONTAINER_DIALOG**.

1. Click the Circ control icon on the Toolbox.

1. Click a spot within the dialog box to insert the Circ control.

1. From the **File** menu, choose **Save All** to save all modifications to the dialog box template.

## Modifications to the Project

To enable the Container application to access the Circ control, Visual C++ automatically adds the wrapper class (`CCirc`) implementation file (.CPP) to the Container project and the wrapper class header (.H) file to the dialog box header file:

[!code-cpp[NVC_MFC_AxCont#1](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_1.h)]

## <a name="_core_the_wrapper_class_header_28h29_file"></a> The Wrapper Class Header (.H) File

To get and set properties (and invoke methods) for the Circ control, the `CCirc` wrapper class provides a declaration of all exposed methods and properties. In the example, these declarations are found in CIRC.H. The following sample is the portion of class `CCirc` that defines the exposed interfaces of the ActiveX control:

[!code-cpp[NVC_MFC_AxCont#2](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_2.h)]
[!code-cpp[NVC_MFC_AxCont#3](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_3.h)]

These functions can then be called from other of the application's procedures using normal C++ syntax. For more information on using this member function set to access the control's methods and properties, see the section [Programming the ActiveX control](#_core_programming_the_activex_control).

## <a name="_core_member_variable_modifications_to_the_project"></a> Member Variable Modifications to the Project

Once the ActiveX control has been added to the project and embedded in a dialog box container, it can be accessed by other parts of the project. The easiest way to access the control is to [create a member variable](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) of the dialog class, `CContainerDlg` (step 2), that is of the same type as the wrapper class added to the project by Visual C++. You can then use the member variable to access the embedded control at any time.

When the **Add Member Variable** dialog box adds the *m_circctl* member variable to the project, it also adds the following lines to the header file (.H) of the `CContainerDlg` class:

[!code-cpp[NVC_MFC_AxCont#4](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_4.h)]
[!code-cpp[NVC_MFC_AxCont#5](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_5.h)]

In addition, a call to **DDX_Control** is automatically added to the `CContainerDlg`'s implementation of `DoDataExchange`:

[!code-cpp[NVC_MFC_AxCont#6](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_6.cpp)]

## <a name="_core_programming_the_activex_control"></a> Programming the ActiveX Control

At this point, you have inserted the ActiveX control into your dialog template and created a member variable for it. You can now use common C++ syntax to access the properties and methods of the embedded control.

As noted (in [The Wrapper Class Header (.H) File](#_core_the_wrapper_class_header_28h29_file)), the header file (.H) for the `CCirc` wrapper class, in this case CIRC.H, contains a list of member functions that you can use to get and set any exposed property value. Member functions for exposed methods are also available.

A common place to modify the control's properties is in the `OnInitDialog` member function of the main dialog class. This function is called just before the dialog box appears and is used to initialize its contents, including any of its controls.

The following code example uses the *m_circctl* member variable to modify the Caption and CircleShape properties of the embedded Circ control:

[!code-cpp[NVC_MFC_AxCont#7](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_7.cpp)]

## See also

[ActiveX Control Containers](../mfc/activex-control-containers.md)
