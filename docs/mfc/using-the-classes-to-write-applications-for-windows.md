---
description: "Learn more about: Using the Classes to Write Applications for Windows"
title: "Using the Classes to Write Applications for Windows"
ms.date: "11/04/2016"
helpviewer_keywords: ["Windows applications [MFC], MFC application framework", "MFC, application development", "applications [OLE], MFC application framework", "MFC ActiveX controls [MFC], creating", "OLE applications [MFC], MFC application framework", "database applications [MFC], creating"]
ms.assetid: 73f63470-857d-43dd-9a54-b38b7be0f1b7
---
# Using the Classes to Write Applications for Windows

Taken together, the classes in the Microsoft Foundation Class (MFC) Library make up an "application framework," on which you build an application for the Windows operating system. At a very general level, the framework defines the skeleton of an application and supplies standard user-interface implementations that can be placed onto the skeleton. Your job as programmer is to fill in the rest of the skeleton, which are those things that are specific to your application. You can get a head start by using the MFC Application Wizard to create the files for a very thorough starter application. You use the Microsoft Visual C++ resource editors to design your user-interface elements visually, Class View commands to connect those elements to code, and the class library to implement your application-specific logic.

Version 3.0 and later of the MFC framework supports programming for Win32 platforms, including Microsoft Windows 95 and later, and Windows NT versions 3.51 and later. MFC Win32 support includes multithreading. Use version 1.5*x* if you need to do 16-bit programming.

This family of articles presents a broad overview of the application framework. It also explores the major objects that make up your application and how they are created. Among the topics covered in these articles are the following:

- [The framework](../mfc/framework-mfc.md).

- Division of labor between the framework and your code, as described in [Building on the Framework](../mfc/building-on-the-framework.md).

- [The application class](../mfc/cwinapp-the-application-class.md), which encapsulates application-level functionality.

- How [document templates](../mfc/document-templates-and-the-document-view-creation-process.md) create and manage documents and their associated views and frame windows.

- Class [CWnd](../mfc/window-objects.md), the root base class of all windows.

- [Graphic objects](../mfc/graphic-objects.md), such as pens and brushes.

Other parts of the framework include:

- [Window Objects: Overview](../mfc/window-objects.md)

- [Message handling and mapping](../mfc/message-handling-and-mapping.md)

- [CObject, The Root Base Class in MFC](../mfc/using-cobject.md)

- [Document/View Architecture](../mfc/document-view-architecture.md)

- [Dialog Boxes](../mfc/dialog-boxes.md)

- [Controls](../mfc/controls-mfc.md)

- [Control Bars](../mfc/control-bars.md)

- [OLE](../mfc/ole-in-mfc.md)

- [Memory Management](../mfc/memory-management.md)

   Besides giving you an advantage in writing applications for the Windows operating system, MFC also makes it much easier to write applications that specifically use OLE linking and embedding technology. You can make your application an OLE visual editing container, an OLE visual editing server, or both, and you can add Automation so that other applications can use objects from your application or even drive it remotely.

- [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)

   The OLE control development kit (CDK) is now fully integrated with the framework. This article family supplies an overview of ActiveX control development with MFC. (ActiveX controls were formerly known as OLE controls.)

- [Database Programming](../data/data-access-programming-mfc-atl.md)

   MFC also supplies two sets of database classes that simplify writing data-access applications. Using the ODBC database classes, you can connect to databases through an Open Database Connectivity (ODBC) driver, select records from tables, and display record information in an on-screen form. Using the Data Access Object (DAO) classes, you can work with databases through the Microsoft Jet database engine or external (non-Jet) data sources, including ODBC data sources.

   In addition, MFC is fully enabled for writing applications that use Unicode and multibyte character sets (MBCS), specifically double-byte character sets (DBCS).

For a general guide to MFC documentation, see [General MFC Topics](../mfc/general-mfc-topics.md).

## See also

[General MFC Topics](../mfc/general-mfc-topics.md)
