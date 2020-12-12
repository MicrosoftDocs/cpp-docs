---
description: "Learn more about: Framework (MFC)"
title: "Framework (MFC)"
ms.date: "09/17/2019"
helpviewer_keywords: ["encapsulation [MFC], Win32 API", "MFC, application framework", "wrapper classes [MFC], explained", "Win32 [MFC], API encapsulation by MFC", "application framework [MFC], about MFC application framework", "APIs [MFC], encapsulation by MFC Win32", "encapsulation [MFC]", "Windows API [MFC], encapsulation by MFC", "encapsulated Win32 API [MFC]"]
ms.assetid: 3be0fec8-9843-4119-ae42-ece993ef500b
---
# Framework (MFC)

Your work with the Microsoft Foundation Class (MFC) Library framework is based largely on a few major classes and several Visual C++ tools. Some classes encapsulate a large portion of the Win32 application programming interface (API). Other classes encapsulate application concepts such as documents, views, and the application itself. Still others encapsulate OLE features and ODBC and DAO data-access functionality.  (DAO is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.)

For example, Win32's concept of window is encapsulated by MFC class `CWnd`. That is, a C++ class called `CWnd` encapsulates or "wraps" the `HWND` handle that represents a Windows window. Likewise, class `CDialog` encapsulates Win32 dialog boxes.

Encapsulation means that the C++ class `CWnd`, for example, contains a member variable of type `HWND`, and the class's member functions encapsulate calls to Win32 functions that take an `HWND` as a parameter. The class member functions typically have the same name as the Win32 function they encapsulate.

## In This Section

[SDI and MDI](sdi-and-mdi.md)

[Documents, Views, and the Framework](documents-views-and-the-framework.md)

[Wizards and Resource Editors](wizards-and-the-resource-editors.md)

## In Related Sections

[Building on the Framework](building-on-the-framework.md)

[How the Framework Calls Your Code](how-the-framework-calls-your-code.md)

[CWinApp: The Application Class](cwinapp-the-application-class.md)

[Document Templates and the Document/View Creation Process](document-templates-and-the-document-view-creation-process.md)

[Message Handling and Mapping](message-handling-and-mapping.md)

[Window Objects](window-objects.md)

## See also

[Using the Classes to Write Applications for Windows](using-the-classes-to-write-applications-for-windows.md)
