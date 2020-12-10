---
description: "Learn more about: Creating a File Explorer-Style MFC Application"
title: "Creating a File Explorer-Style MFC Application"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfcexplorer.project"]
helpviewer_keywords: ["browsers [MFC], Explorer-style applications", "MFC applications [MFC], Windows Explorer-style", "Explorer-style applications [MFC], creating"]
ms.assetid: f843ab5d-2d5d-41ca-88a4-badc0d2f8052
---
# Creating a File Explorer-Style MFC Application

Many Windows system applications use the user interface (UI) for File Explorer. When you start File Explorer, for example, you see an application with a vertical splitter bar dividing the client area. The left side of the client area provides navigation and browsing features, and the right side of the client area shows details pertinent to the selection in the left pane. When a user clicks an item in the left pane, the application repopulates the right pane. In an MDI application, you can use commands on the **View** menu to change the amount of detail shown in the right pane. (In an SDI or multiple top-level document application, you can change the detail using the toolbar buttons only.)

The contents of the panes depend on the application. In a file-system browser, the left pane shows a hierarchical view of directories or machines, or machine groups, while the right pane displays folders, individual files, or machines, and details about them. The contents do not necessarily have to be files. They could be e-mail messages, error reports, or other items in a database.

The wizard creates the following classes for you:

- The `CLeftView` class defines the left pane of the client area. It is always derived from [CTreeView](../../mfc/reference/ctreeview-class.md).

- The C*ProjName*View class defines the right pane of the client area. By default, it is derived from [CListView](../../mfc/reference/clistview-class.md) but can be another type of view depending on the class you specify from the **Base class** list in the [Generated Classes](../../mfc/reference/generated-classes-mfc-application-wizard.md) page of the wizard.

The generated application can have a single document interface (SDI), a multiple document interface (MDI), or a multiple top-level documents architecture. Each frame window the application creates is vertically split using [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md). Coding this application type is similar to coding a normal MFC application that uses a splitter, except that this type of application has separate control views within each splitter pane.

If you use the default list view in the right pane, the wizard creates additional menu choices (in MDI applications only) and toolbar buttons to switch the view's style among large icons, small icons, list, and detail modes.

### To begin creating a File Explorer-style MFC executable

1. Follow the directions in [Creating an MFC Application](../../mfc/reference/creating-an-mfc-application.md).

1. In the MFC Application Wizard [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md) page, select the **File Explorer** project style.

1. Set any other options you desire on the other pages of the wizard.

1. Click **Finish** to generate the skeleton application.

For more information, see:

- [Multiple Document Types, Views, and Frame Windows](../../mfc/multiple-document-types-views-and-frame-windows.md)

- [Derived View Classes](../../mfc/derived-view-classes-available-in-mfc.md)

- [Application Design Choices](../../mfc/application-design-choices.md)

## See also

[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)<br/>
[Creating a Web Browser-Style MFC Application](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)<br/>
[Creating a Forms-Based MFC Application](../../mfc/reference/creating-a-forms-based-mfc-application.md)
