---
description: "Learn more about: Creating an MFC ActiveX Control Container"
title: "Creating an MFC ActiveX Control Container"
ms.date: "09/12/2018"
f1_keywords: ["vc.appwiz.activex.container"]
helpviewer_keywords: ["MFC ActiveX controls [MFC], containers", "ActiveX control containers [MFC], creating", "containers [MFC], creating", "OLE controls [MFC], containers"]
ms.assetid: ec70e137-7c14-4940-bd0e-fd4edcc63ea5
---
# Creating an MFC ActiveX Control Container

An ActiveX control container is a parent program that supplies the environment for an ActiveX (formerly OLE) control to run. You can create an application capable of containing ActiveX controls with or without MFC, but it is much easier to do with MFC.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](../activex-controls.md).

Creating an MFC container program using the [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md) allows you to access the many features of ActiveX controls and Automation that are implemented by the MFC and ActiveX classes. These features include visual editing, Automation, creating compound files, and support for controls. The MFC Application Wizard visual editing options that your parent program will support include creating a container, a mini-server, a full-server, and a program that is both a container and a server.

- **New MFC Application**. To create a new MFC program that includes Automation, visual editing, compound files, or control support, use the MFC Application Wizard and choose the appropriate Automation options.

- **Existing MFC Application**. If you are adding control containment to an existing MFC application, see [OLE Control Containers: Manually Enabling OLE Control Containment](../../mfc/activex-control-containers-manually-enabling-activex-control-containment.md).

### To create an ActiveX container for any of the following types of applications

1. [Containers](../../mfc/containers.md)

1. [Visual editing](../../mfc/ole-mfc.md)

1. [MFC ActiveX controls](../../mfc/mfc-activex-controls.md)

## See also

[C++ project types in Visual Studio](../../build/reference/visual-cpp-project-types.md)
