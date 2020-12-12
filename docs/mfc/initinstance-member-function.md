---
description: "Learn more about: InitInstance Member Function"
title: "InitInstance Member Function"
ms.date: "11/04/2016"
f1_keywords: ["InitInstance"]
helpviewer_keywords: ["InitInstance method [MFC]", "applications [MFC], initializing", "MFC, initializing", "initializing MFC applications"]
ms.assetid: 4ef09267-ff7f-4c39-91a0-57454a264f83
---
# InitInstance Member Function

The Windows operating system allows you to run more than one copy, or "instance," of the same application. `WinMain` calls [InitInstance](reference/cwinapp-class.md#initinstance) every time a new instance of the application starts.

The standard `InitInstance` implementation created by the MFC Application Wizard performs the following tasks:

- As its central action, creates the document templates that in turn create documents, views, and frame windows. For a description of this process, see [Document Template Creation](document-template-creation.md).

- Loads standard file options from an .ini file or the Windows registry, including the names of the most recently used files.

- Registers one or more document templates.

- For an MDI application, creates a main frame window.

- Processes the command line to open a document specified on the command line or to open a new, empty document.

You can add your own initialization code or modify the code written by the wizard.

> [!NOTE]
> MFC applications must be initialized as single threaded apartment (STA). If you call [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) in your `InitInstance` override, specify COINIT_APARTMENTTHREADED (rather than COINIT_MULTITHREADED).

## See also

[CWinApp: The Application Class](cwinapp-the-application-class.md)
