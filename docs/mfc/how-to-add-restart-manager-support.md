---
description: "Learn more about: How to: Add Restart Manager Support"
title: "How to: Add Restart Manager Support"
ms.date: "11/04/2016"
helpviewer_keywords: ["Restart manager [MFC]", "C++, application crash support"]
ms.assetid: 7f3f5867-d4bc-4ba8-b3c9-dc1e7be93642
---
# How to: Add Restart Manager Support

The restart manager is a feature added to Visual Studio for Windows Vista or later operating systems. The restart manager adds support for your application if it unexpectedly closes or restarts. The behavior of the restart manager depends on the type of your application. If your application is a document editor, the restart manager enabled your application to automatically save the state and content of any open documents and restarts your application after an unexpected closure. If your application is not a document editor, the restart manager will restart the application, but it cannot save the state of the application by default.

After restart, the application displays a task dialog box if the application is Unicode. If it is an ANSI application, the application displays a Windows Message box. At this point, the user chooses whether to restore the automatically saved documents. If the user does not restore the automatically saved documents, the restart manager discards the temporary files.

> [!NOTE]
> You can override the default behavior of the restart manager for saving data and restarting the application.

By default, MFC applications created by using the project wizard in Visual Studio support the restart manager when the applications are run on a computer that has a Windows Vista or later operating system. If you do not want your application to support the restart manager, you can disable the restart manager in the new project wizard.

### To Add Support For the Restart Manager to an Existing Application

1. Open an existing MFC application in Visual Studio.

1. Open the source file for your main application. By default this is the .cpp file that has the same name as your application. For example, the main application source file for MyProject is MyProject.cpp.

1. Find the constructor for your main application. For example, if your project is MyProject, the constructor is `CMyProjectApp::CMyProjectApp()`.

1. Add the following line of code to your constructor.

```
    m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
```

1. Make sure the `InitInstance` method of your application calls its parent `InitInstance` method: [CWinApp::InitInstance](reference/cwinapp-class.md#initinstance) or `CWinAppEx::InitInstance`. The `InitInstance` method is responsible for checking the *m_dwRestartManagerSupportFlags* parameter.

1. Compile and run your application.

## See also

[CDataRecoveryHandler Class](reference/cdatarecoveryhandler-class.md)<br/>
[CWinApp::m_dwRestartManagerSupportFlags](reference/cwinapp-class.md#m_dwrestartmanagersupportflags)<br/>
[CWinApp Class](reference/cwinapp-class.md)<br/>
[CWinApp::m_nAutosaveInterval](reference/cwinapp-class.md#m_nautosaveinterval)<br/>
[CDocument::OnDocumentEvent](reference/cdocument-class.md#ondocumentevent)
