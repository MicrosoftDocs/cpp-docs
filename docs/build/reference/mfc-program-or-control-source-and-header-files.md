---
description: "Learn more about: MFC Program or Control Source and Header Files"
title: "MFC Program or Control Source and Header Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["file types [C++], MFC source and header"]
ms.assetid: f61419a8-bf69-4bbb-8f7c-1734be5e6db6
---
# MFC Program or Control Source and Header Files

The following files are created when you create an MFC project in Visual Studio, depending on the options you select for the project you create. For example, your project contains *Projname*dlg.cpp and *Projname*dlg.h files only if you create a dialog-based project or class.

All of these files are located in the *Projname* directory, and in either the Header Files (.h files) folder or Source Files (.cpp files) folder in Solution Explorer.

|File name|Description|
|---------------|-----------------|
|*Projname*.h|The main include file for the program or DLL. It contains all global symbols and `#include` directives for other header files. It derives the `CPrjnameApp` class from `CWinApp` and declares an `InitInstance` member function. For a control, the `CPrjnameApp` class is derived from `COleControlModule`.|
|*Projname*.cpp|The main program source file. It creates one object of the class `CPrjnameApp`, which is derived from `CWinApp`, and overrides the `InitInstance` member function.<br /><br /> For executables, `CPrjnameApp::InitInstance` does several things. It registers document templates, which serve as a connection between documents and views; creates a main frame window; and creates an empty document (or opens a document if one is specified as a command-line argument to the application).<br /><br /> For DLLs and ActiveX (formerly OLE) controls, `CProjNameApp::InitInstance` registers the control's object factory with OLE by calling `COleObjectFactory::RegisterAll` and makes a call to `AfxOLEInit`. In addition, the member function `CProjNameApp::ExitInstance` is used to unload the control from memory with a call to **AfxOleTerm**.<br /><br /> This file also registers and unregisters the control in the Windows registration database by implementing the `DllRegisterServer` and `DllUnregisterServer` functions.|
|*Projname*ctrl.h, *Projname*ctrl.cpp|Declare and implement the `CProjnameCtrl` class. `CProjnameCtrl` is derived from `COleControl`, and skeleton implementations of some member functions are defined that initialize, draw, and serialize (load and save) the control. Message, event, and dispatch maps are also defined.|
|*Projname*dlg.cpp, *Projname*dlg.h|Created if you choose a dialog-based application. The files derive and implement the dialog class, named `CProjnameDlg`, and include skeleton member functions to initialize a dialog and perform dialog data exchange (DDX). Your About dialog class is also placed in these files instead of in *Projname*.cpp.|
|Dlgproxy.cpp, Dlgproxy.h|In a dialog-based program, the implementation and header file for the project's Automation proxy class for the main dialog. This is only used if you have chosen Automation support.|
|*Projname*doc.cpp, *Projname*doc.h|Derive and implement the document class, named `CProjnameDoc`, and include skeleton member functions to initialize a document, serialize (save and load) a document, and implement debugging diagnostics.|
|*Projname*set.h/.cpp|Created if you create a program that supports a database and contains the recordset class.|
|*Projname*view.cpp, *Projname*view.h|Derive and implement the view class, named `CProjnameView`, which is used to display and print the document data. The `CProjnameView` class is derived from one of the following MFC classes:<br /><br />- [CEditView](../../mfc/reference/ceditview-class.md)<br />- [CFormView](../../mfc/reference/cformview-class.md)<br />- [CRecordView](../../mfc/reference/crecordview-class.md)<br />- [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)<br />- [CTreeView](../../mfc/reference/ctreeview-class.md)<br />- [CListView](../../mfc/reference/clistview-class.md)<br />- [CRichEditView](../../mfc/reference/cricheditview-class.md)<br />- [CScrollView](../../mfc/reference/cscrollview-class.md)<br />- [CView](../../mfc/reference/cview-class.md)<br />- [CHTMLView](../../mfc/reference/chtmlview-class.md)<br />- [CHTMLEditView](../../mfc/reference/chtmleditview-class.md)<br /><br /> The project's view class contains skeleton member functions to draw the view and implement debugging diagnostics. If you have enabled support for printing, then message-map entries are added for print, print setup, and print preview command messages. These entries call the corresponding member functions in the base view class.|
|*Projname*PropPage.h, *Projname*PropPage.cpp|Declare and implement the `CProjnamePropPage` class. `CProjnamePropPage` is derived from `COlePropertyPage` and a skeleton member function, `DoDataExchange`, is provided to implement data exchange and validation.|
|IPframe.cpp, IPframe.h|Created if the Mini-Server or Full-Server option is selected in the application wizard's **Automation Options** page (step 3 of 6). The files derive and implement the in-place frame window class, named **CInPlaceFrame**, used when the server is in place activated by a container program.|
|Mainfrm.cpp, Mainfrm.h|Derive the **CMainFrame** class from either [CFrameWnd](../../mfc/reference/cframewnd-class.md) (for SDI applications) or [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md) (for MDI applications). The **CMainFrame** class handles the creation of toolbar buttons and the status bar, if the corresponding options are selected in the application wizard's **Application Options** page (step 4 of 6). For information on using **CMainFrame**, see [The Frame-Window Classes Created by the Application Wizard](../../mfc/frame-window-classes-created-by-the-application-wizard.md).|
|Childfrm.cpp, Childfrm.h|Derive the **CChildFrame** class from [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md). The **CChildFrame** class is used for MDI document frame windows. These files are always created if you select the MDI option.|

## See also

[File Types Created for Visual Studio C++ projects](file-types-created-for-visual-cpp-projects.md)<br>
[ATL Program or Control Source and Header Files](atl-program-or-control-source-and-header-files.md)<br>
[CLR Projects](files-created-for-clr-projects.md)
