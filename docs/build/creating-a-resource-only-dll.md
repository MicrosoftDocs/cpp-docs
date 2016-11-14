---
title: "Creating a Resource-Only DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resource-only DLLs [C++], creating"
  - "DLLs [C++], creating"
ms.assetid: e6b1d4da-7275-467f-a58c-a0a8a5835199
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating a Resource-Only DLL
A resource-only DLL is a DLL that contains nothing but resources, such as icons, bitmaps, strings, and dialog boxes. Using a resource-only DLL is a good way to share the same set of resources among multiple programs. It is also a good way to provide an application with resources localized for multiple languages (see [Localized Resources in MFC Applications: Satellite DLLs](../build/localized-resources-in-mfc-applications-satellite-dlls.md)).  
  
 To create a resource-only DLL, you create a new Win32 DLL (non-MFC) project and add your resources to the project.  
  
-   Select Win32 Project in the **New Project** dialog box and specify a DLL project type in the Win32 Project Wizard.  
  
-   Create a new resource script that contains the resources (such as a string or a menu) for the DLL and save the .rc file.  
  
-   On the **Project** menu, click **Add Existing Item**, and then insert the new .rc file into the project.  
  
-   Specify the [/NOENTRY](../build/reference/noentry-no-entry-point.md) linker option. /NOENTRY prevents the linker from linking a reference to _main into the DLL; this option is required to create a resource-only DLL.  
  
-   Build the DLL.  
  
 The application that uses the resource-only DLL should call **LoadLibrary** to [explicitly link to the DLL](../build/loadlibrary-and-afxloadlibrary.md). To access the resources, call the generic functions **FindResource** and **LoadResource**, which work on any kind of resource, or call one of the following resource-specific functions:  
  
-   `FormatMessage`  
  
-   **LoadAccelerators**  
  
-   `LoadBitmap`  
  
-   `LoadCursor`  
  
-   `LoadIcon`  
  
-   `LoadMenu`  
  
-   `LoadString`  
  
 The application should call **FreeLibrary** when it is finished using the resources.  
  
## What do you want to know more about?  
  
-   [DELETE_PENDING_Editing Resources](http://msdn.microsoft.com/en-us/c29d31c7-2d94-40ca-8aa0-c7262883529c)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)