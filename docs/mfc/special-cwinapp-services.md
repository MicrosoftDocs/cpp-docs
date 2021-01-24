---
description: "Learn more about: Special CWinApp Services"
title: "Special CWinApp Services"
ms.date: "11/04/2016"
f1_keywords: ["LoadStdProfileSettings", "EnableShellOpen"]
helpviewer_keywords: ["files [MFC], most recently used", "DragAcceptFiles method [MFC]", "MRU lists", "GDI+, initializing for MFC", "GDI+, suppressing background thread [MFC]", "CWinApp class [MFC], shell registration", "application objects [MFC], services", "CWinApp class [MFC], initializing GDI+", "MFC, shell registration", "CWinApp class [MFC], File Manager drag and drop", "LoadStdProfileSettings method [MFC]", "MFC, most-recently-used file list", "RegisterShellFileTypes method [MFC]", "drag and drop [MFC], files", "registering file types", "Shell, registering file types", "services, provided by CWinApp", "CWinApp class [MFC], recently used documents", "CWinApp class [MFC], services", "files [MFC], drag and drop", "EnableShellOpen method [MFC]", "registry [MFC], most recently used files", "MFC, file operations", "registration [MFC], shell"]
ms.assetid: 0480cd01-f629-4249-b221-93432d95b431
---
# Special CWinApp Services

Besides running the message loop and giving you an opportunity to initialize the application and clean up after it, [CWinApp](../mfc/reference/cwinapp-class.md) provides several other services.

## <a name="_core_shell_registration"></a> Shell Registration

By default, the MFC Application Wizard makes it possible for the user to open data files that your application has created by double-clicking them in File Explorer or File Manager. If your application is an MDI application and you specify an extension for the files your application creates, the MFC Application Wizard adds calls to the [RegisterShellFileTypes](../mfc/reference/cwinapp-class.md#registershellfiletypes) and [EnableShellOpen](../mfc/reference/cwinapp-class.md#enableshellopen) member functions of [CWinApp](../mfc/reference/cwinapp-class.md) to the `InitInstance` override that it writes for you.

`RegisterShellFileTypes` registers your application's document types with File Explorer or File Manager. The function adds entries to the registration database that Windows maintains. The entries register each document type, associate a file extension with the file type, specify a command line to open the application, and specify a dynamic data exchange (DDE) command to open a document of that type.

`EnableShellOpen` completes the process by allowing your application to receive DDE commands from File Explorer or File Manager to open the file chosen by the user.

This automatic registration support in `CWinApp` eliminates the need to ship a .reg file with your application or to do special installation work.

If you want to initialize GDI+ for your application (by calling [GdiplusStartup](/windows/win32/api/gdiplusinit/nf-gdiplusinit-gdiplusstartup) in your [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) function), you have to suppress the GDI+ background thread.

You can do this by setting the `SuppressBackgroundThread` member of the [GdiplusStartupInput](/windows/win32/api/gdiplusinit/ns-gdiplusinit-gdiplusstartupinput) structure to **TRUE**. When suppressing the GDI+ background thread, the `NotificationHook` and `NotificationUnhook` calls should be made just prior to entering and exiting the application's message loop. For more information on these calls, see [GdiplusStartupOutput](/windows/win32/api/gdiplusinit/ns-gdiplusinit-gdiplusstartupoutput). Therefore, a good place to call `GdiplusStartup` and the hook notification functions would be in an override of the virtual function [CWinApp::Run](../mfc/reference/cwinapp-class.md#run), as shown below:

[!code-cpp[NVC_MFCDocView#6](../mfc/codesnippet/cpp/special-cwinapp-services_1.cpp)]

If you do not suppress the background GDI+ thread, DDE commands can be prematurely issued to the application before its main window has been created. The DDE commands issued by the shell can be prematurely aborted, resulting in error messages.

## <a name="_core_file_manager_drag_and_drop"></a> File Manager Drag and Drop

Files can be dragged from the file view window in File Manager or File Explorer to a window in your application. You might, for example, enable one or more files to be dragged to an MDI application's main window, where the application could retrieve the file names and open MDI child windows for those files.

To enable file drag and drop in your application, the MFC Application Wizard writes a call to the [CWnd](../mfc/reference/cwnd-class.md) member function [DragAcceptFiles](../mfc/reference/cwnd-class.md#dragacceptfiles) for your main frame window in your `InitInstance`. You can remove that call if you do not want to implement the drag-and-drop feature.

> [!NOTE]
> You can also implement more general drag-and-drop capabilities—dragging data between or within documents—with OLE. For information, see the article [OLE drag and drop](../mfc/drag-and-drop-ole.md).

## <a name="_core_keeping_track_of_the_most_recently_used_documents"></a> Keeping Track of the Most Recently Used Documents

As the user opens and closes files, the application object keeps track of the four most recently used files. The names of these files are added to the File menu and updated when they change. The framework stores these file names in either the registry or in the .ini file, with the same name as your project and reads them from the file when your application starts up. The `InitInstance` override that the MFC Application Wizard creates for you includes a call to the [CWinApp](../mfc/reference/cwinapp-class.md) member function [LoadStdProfileSettings](../mfc/reference/cwinapp-class.md#loadstdprofilesettings), which loads information from the registry or .ini file, including the most recently used file names.

These entries are stored as follows:

- In Windows NT, Windows 2000, and later, the value is stored to a registry key.

- In Windows 3.x, the value is stored in the WIN.INI file.

- In Windows 95 and later, the value is stored in a cached version of WIN.INI.

## See also

[CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)
