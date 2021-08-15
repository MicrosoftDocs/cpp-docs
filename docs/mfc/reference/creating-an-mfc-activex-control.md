---
description: "Learn more about: Creating an MFC ActiveX Control"
title: "Creating an MFC ActiveX Control"
ms.date: "08/19/2019"
f1_keywords: ["vc.appwiz.activex.project"]
helpviewer_keywords: ["MFC ActiveX controls [MFC], creating", "ActiveX controls [MFC], creating"]
ms.assetid: 8bd5a93c-d04d-414e-bb28-163fdc1c0dd5
---
# Creating an MFC ActiveX Control

ActiveX control programs are modular programs designed to give a specific type of functionality to a parent application. For example, you can create a control such as a button for use in a dialog, or toolbar for use in a Web page.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information, see [ActiveX Controls](../activex-controls.md).

The easiest way to create an MFC ActiveX control is to use the [MFC ActiveX Control Wizard](../../mfc/reference/mfc-activex-control-wizard.md).

### To create an MFC ActiveX Control using the MFC ActiveX Control Wizard

1. Follow the instructions in the help topic [Creating an MFC Application](creating-an-mfc-application.md) but choose **MFC ActiveX Control** from the list of available templates.

1. Define your [application settings](../../mfc/reference/application-settings-mfc-activex-control-wizard.md), [control names](../../mfc/reference/control-names-mfc-activex-control-wizard.md), and [control settings](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) using the MFC ActiveX Control Wizard.

    > [!NOTE]
    >  Skip this step to keep the wizard default settings.

1. Click **Finish** to close the wizard and open your new project in the development environment.

After you have created your project, you can view the files created in **Solution Explorer**. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, see [File Types Created for Visual Studio C++ projects](../../build/reference/file-types-created-for-visual-cpp-projects.md).

After you have created your project, you can use the code wizards to add [functions](../../ide/adding-a-member-function-visual-cpp.md#add-member-function-wizard), [variables](../../ide/adding-a-member-variable-visual-cpp.md#add-member-variable-wizard), [events](../../ide/adding-an-event-visual-cpp.md#add-event-wizard), [properties](../../ide/adding-a-property-visual-cpp.md#names-add-property-wizard), and [methods](../../ide/adding-a-method-visual-cpp.md#add-method-wizard). For more information about customizing your ActiveX control, see [MFC ActiveX Controls](../../mfc/mfc-activex-controls.md).

## See also

[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Property Pages](../../build/reference/property-pages-visual-cpp.md)
