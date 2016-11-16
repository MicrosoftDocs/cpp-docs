---
title: "Regular DLLs Statically Linked to MFC | Microsoft Docs"
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
  - "regular DLLs [C++]"
  - "DLLs [C++], regular"
  - "USRDLLs"
  - "USRDLLs, statically linked to MFC"
  - "statically linked DLLs [C++]"
  - "regular DLLs [C++], statically linked to MFC"
ms.assetid: 2eed531c-726a-4b8a-b936-f721dc00a7fa
caps.latest.revision: 7
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
# Regular DLLs Statically Linked to MFC
A regular DLL statically linked to MFC is a DLL that uses MFC internally, and the exported functions in the DLL can be called by either MFC or non-MFC executables. As the name describes, this kind of DLL is built using the static link library version of MFC. Functions are usually exported from a regular DLL using the standard C interface. For an example of how to write, build, and use a regular DLL, see the sample [DLLScreenCap](http://msdn.microsoft.com/en-us/2171291d-3a50-403b-90a1-d93c2acb4f4a).  
  
 Note that the term USRDLL is no longer used in the Visual C++ documentation. A regular DLL that is statically linked to MFC has the same characteristics as the former USRDLL.  
  
 A regular DLL, statically linked to MFC, has the following features:  
  
-   The client executable can be written in any language that supports the use of DLLs (C, C++, Pascal, Visual Basic, and so on); it does not have to be an MFC application.  
  
-   The DLL can link to the same MFC static link libraries used by applications. There is no longer a separate version of the static link libraries for DLLs.  
  
-   Before version 4.0 of MFC, USRDLLs provided the same type of functionality as regular DLLs statically linked to MFC. As of Visual C++ version 4.0, the term USRDLL is obsolete.  
  
 A regular DLL, statically linked to MFC, has the following requirements:  
  
-   This type of DLL must instantiate a class derived from `CWinApp`.  
  
-   This type of DLL uses the `DllMain` provided by MFC. Place all DLL-specific initialization code in the `InitInstance` member function and termination code in `ExitInstance` as in a normal MFC application.  
  
-   Even though the term USRDLL is obsolete, you must still define "**_USRDLL**" on the compiler command line. This definition determines which declarations is pulled in from the MFC header files.  
  
 Regular DLLs must have a `CWinApp`-derived class and a single object of that application class, as does an MFC application. However, the `CWinApp` object of the DLL does not have a main message pump, as does the `CWinApp` object of an application.  
  
 Note that the `CWinApp::Run` mechanism does not apply to a DLL, because the application owns the main message pump. If the DLL opens modeless dialogs or has a main frame window of its own, the application's main message pump must call a routine exported by the DLL that in turn calls the `CWinApp::PreTranslateMessage` member function of the DLL's application object.  
  
 For an example of this function, see the DLLScreenCap sample.  
  
 Symbols are usually exported from a regular DLL using the standard C interface. The declaration of a function exported from a regular DLL would look something like this:  
  
```  
extern "C" __declspec(dllexport) MyExportedFunction( );  
```  
  
 All memory allocations within a regular DLL should stay within the DLL; the DLL should not pass to or receive from the calling executable any of the following:  
  
-   Pointers to MFC objects  
  
-   Pointers to memory allocated by MFC  
  
 If you need to do any of the above or need to pass MFC-derived objects between the calling executable and the DLL, you must build an extension DLL.  
  
 It is safe to pass pointers to memory that were allocated by the C run-time libraries between an application and a DLL only if you make a copy of the data. You must not delete or resize these pointers or use them without making a copy of the memory.  
  
 A DLL that is statically linked to MFC cannot also dynamically link to the shared MFC DLLs. A DLL that is statically linked to MFC is dynamically bound to an application just like any other DLL; applications link to it just like any other DLL.  
  
 The standard MFC static link libraries are named according to the convention described in [Naming Conventions for MFC DLLs](../build/naming-conventions-for-mfc-dlls.md). However, with MFC version 3.0 and later, it is no longer necessary to manually specify to the linker the version of the MFC library you want linked in. Instead, the MFC header files automatically determine the correct version of the MFC library to link in based on preprocessor defines, such as **_DEBUG** or **_UNICODE**. The MFC header files add /DEFAULTLIB directives instructing the linker to link in a specific version of the MFC library.  
  
## What do you want to do?  
  
-   [Initialize regular DLLs](../build/initializing-regular-dlls.md)  
  
## What do you want to know more about?  
  
-   [Using MFC as Part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
-   [Using Database, OLE, and Sockets Extension DLLs in Regular DLLs](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Creating an MFC DLL](../mfc/reference/mfc-dll-wizard.md)  
  
-   [Regular DLLs Dynamically Linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Extension DLLs](../build/extension-dlls-overview.md)  
  
## See Also  
 [Kinds of DLLs](../build/kinds-of-dlls.md)