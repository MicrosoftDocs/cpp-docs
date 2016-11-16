---
title: "How to: Use Existing C++ Code in a Universal Windows Platform App | Microsoft Docs"
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
ms.assetid: 87e5818c-3081-42f3-a30d-3dca2cf0645c
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
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
# How to: Use Existing C++ Code in a Universal Windows Platform App
This topic contains a discussion and procedures for porting C++ libraries (DLLs and static libraries) to the Universal Windows Platform (UWP), which is a necessary part of creating a Windows 10 UI layer that works with your existing classic Win32 C++ code or standard, cross-platform C++ code. There are several ways to use existing C++ code in a Universal Windows App.  
  
 UWP Apps run in a protected environment, and as a result, many Win32, COM, and CRT API calls that might compromise the security of the platform are not allowed. The compiler can detect such calls and generate an error, if the /ZW option is used. You can use the App Certification Kit on your application to detect code that calls forbidden APIs. See [Using the App Certification Kit](https://msdn.microsoft.com/library/windows/apps/hh694081.aspx).  
  
 If source code is available for the library, you might be able to eliminate the forbidden API calls. For details including a list of APIs that are allowed or forbidden, see [Win32 and COM for Windows Runtime Apps and Universal Windows platform (UWP) Apps](https://msdn.microsoft.com/library/windows/apps/br205762.aspx) and [CRT Functions Not Supported with /ZW](https://msdn.microsoft.com/library/windows/apps/jj606124.aspx). Some alternatives can be found at [Alternatives to Windows APIs in Windows Runtime apps and Universal Windows Platform (UWP) apps](https://msdn.microsoft.com/library/windows/apps/hh464945.aspx).  
  
 If you just try to add a reference from a Universal Windows Project to a classic desktop library, you get an error message that says the library is not compatible. In the case of a static library, you can link to your library simply by adding the library (.lib file) to your linker input, just as you would in a classic Win32 application. For libraries where only a binary is available, this is the only option. A static library is linked into your app's executable, but a Win32 DLL that you consume in a UWP app must be packaged into the app by including it in the project and marking it as Content. To load a Win32 DLL in a Universal Windows Platform app, you also have to call [LoadPackagedLibrary](https://msdn.microsoft.com/library/windows/desktop/hh447159.aspx) instead of LoadLibrary or LoadLibraryEx.  
  
 If you have source code for the DLL or static library, you can recompile with /ZW as a UWP project. If you do that, you can add a reference using the Solution Explorer, and use it in C++ UWP apps. In the case of a DLL, you link with the export library.  
  
 To expose functionality to callers in other languages, you can convert the library into a Windows Runtime Component. Windows Runtime Components differ from ordinary DLLs in that they include metadata in the form of .winmd files which describe the contents in a way that .NET and JavaScript consumers require. To expose API elements to other languages, you can add C++/CX constructs, such as ref classes, and make them public, or use the [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 The preceding discussion doesn't apply to the case of COM components, which must be handled differently. If you have a COM server in an EXE or DLL, you can use it in a Universal Windows Project as long as you package it as a [registration-free COM component](https://msdn.microsoft.com/library/dd408052.aspx), add it to your project as a Content file, and instantiate it using [CoCreateInstanceFromApp](https://msdn.microsoft.com/library/windows/apps/hh404137.aspx). See [Using Free-COM DLL in Windows Store C++ Project](http://blogs.msdn.com/b/win8devsupport/archive/2013/05/20/using-free-com-dll-in-windows-store-c-project.aspx).  
  
 If you have an existing COM library that you want to port to the Universal Windows Platform, you might be able to convert it into a Windows Runtime Component by using the [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md). The WRL does not support all the features of ATL and OLE, so whether such a port is feasible depends on how much your COM code depends on what features of COM, ATL, and OLE your component requires.  
  
 These are the various ways that you can use existing C++ code in Universal Windows Platform projects. Some ways do not require code to be recompiled with the component extensions (C++/CX) enabled (that is, with the /ZW option), and some do, so if you need to keep code in standard C++, or preserve a classic Win32 compilation environment for some code, you can do so, with appropriate architecture choices. For example, all your code that contains Universal Windows Platform UI and types that are to be exposed to C#, Visual Basic, and JavaScript callers should be in Windows App projects and Windows Runtime Component projects. Code that needs to be consumed only in C++ (including C++/CX) code can either be in a project that compiles with the /WX option or a standard C++ project. Binary-only code can be used by linking it in as a static library, or packaged with the app as content and loaded in a DLL only if it doesn't use forbidden APIs.  
  
 Regardless of which of these development scenarios you choose, you should be aware of a number of macro definitions that you can use in your code so that you can compile code conditionally under both classic desktop Win32 and Universal Windows Platform.  
  
```cpp  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)  
```  
  
 These statements respectively apply to Windows Store apps, Windows Phone Store apps, both, or neither (classic Win32 desktop only). These macros are only available in Windows SDK 8.1 and later, so if your code needs to compile with earlier versions of the Windows SDK or for other platforms besides Windows, then you should also consider the case that none of them are defined.  
  
 This topic contains the following procedures.  
  
1.  [Using a Win32 DLL in a Universal Windows Platform App](#BK_Win32DLL)  
  
2.  [Using a native C++ static library in a UWP App](#BK_StaticLib)  
  
3.  [Porting a C++ Library to a Windows Runtime Component](#BK_WinRTComponent)  
  
##  <a name="BK_Win32DLL"></a> Using a Win32 DLL in a Universal Windows Platform App  
 For better security and reliability, Universal Windows Apps run in a restricted runtime environment, so you can't just use any native DLL the way you would in a classic Windows desktop application. If you have source code for a DLL, you can port the code so that it runs on the UWP. You start by changing a few project settings and project file metadata to identify the project as a UWP project. You need to compile the library code using the /ZW option, which enables C++/CX. Certain API calls are not allowed in UWP apps due to stricter controls associated with that environment. See [Win32 and COM for Windows Runtime apps and Universal Windows Platform (UWP) apps](https://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
 The following procedure applies to the case where you have a native DLL that exposes functions using __declspec(dllexport).  
  
#### To port a native DLL to the UWP without creating a new project  
  
1.  If you have a native DLL that exports functions by using __declspec(dllexport), you can call those functions from a UWP app by recompiling the DLL as a UWP project. For example, suppose we have a DLL that exports a couple of classes and their methods, with code like the following header file:  
  
    ```  
    // giraffe.h  
    #pragma once  
  
    #ifdef _DLL  
    #define GIRAFFE_API __declspec(dllexport)  
    #else  
    #define GIRAFFE_API   
    #endif  
  
    GIRAFFE_API int giraffeFunction();  
  
    class Giraffe  
    {  
    int id;  
        Giraffe(int id_in);  
    friend class GiraffeFactory;  
  
    public:  
    GIRAFFE_API int GetID();  
    };  
  
    class GiraffeFactory  
    {  
    static int nextID;  
  
    public:  
    GIRAFFE_API GiraffeFactory();  
    GIRAFFE_API static int GetNextID();  
    GIRAFFE_API static Giraffe* Create();  
    };  
    ```  
  
     And the following code file:  
  
    ```  
    // giraffe.cpp  
    #include "stdafx.h"  
    #include "giraffe.h"  
  
    Giraffe::Giraffe(int id_in) : id(id_in)  
    {  
    }  
  
    int Giraffe::GetID()  
    {  
    return id;  
    }  
  
    int GiraffeFactory::nextID = 0;  
  
    GiraffeFactory::GiraffeFactory()  
    {  
    nextID = 0;  
    }  
  
    int GiraffeFactory::GetNextID()  
    {  
    return nextID;  
    }  
  
    Giraffe* GiraffeFactory::Create()  
    {  
    return new Giraffe(nextID++);  
    }  
  
    int giraffeFunction();  
    ```  
  
     Everything else in the project (stdafx.h, dllmain.cpp) is part of the standard Win32 project template. If you want to follow along, but don't want to use your own DLL yet with these steps, try creating a Win32 project, select DLL in the project wizard, and then add a header file giraffe.h and code file giraffe.cpp, and copy the contents from the code in this step into the appropriate files.  
  
     The code defines the macro GIRAFFE_API which resolves to __declspec(dllexport) when _DLL is defined (that is, when the project is built as a DLL).  
  
2.  Open the Project Properties for the DLL project, and set the Configuration to **All Configurations**.  
  
3.  In the Project Properties, under **C/C++**, **General** tab, set **Consume Windows Runtime Extension** to **Yes (/ZW)**. This enables component extensions (C++/CX).  
  
4.  In **Solution Explorer**, select the project node, open the shortcut menu and choose **Unload Project**. Then, open the shortcut menu on the unloaded project node, and choose to edit the project file. Locate the WindowsTargetPlatformVersion element and replace it with the following elements.  
  
    ```xml  
    <AppContainerApplication>true</AppContainerApplication>  
    <ApplicationType>Windows Store</ApplicationType>  
    <WindowsTargetPlatformVersion>10.0.10156.0</WindowsTargetPlatformVersion>  
    <WindowsTargetPlatformMinVersion>10.0.10156.0</WindowsTargetPlatformMinVersion>  
    <ApplicationTypeRevision>10.0</ApplicationTypeRevision>  
    ```  
  
     Close the .vcxproj file, open the shortcut menu again and choose **Reload Project**.  
  
     Solution Explorer now identifies the project as a Universal Windows project.  
  
5.  Make sure your precompiled header file name is correct. In the Precompiled Headers section, change Precompiled Header File from pch.h to stdafx.h. If you don't do this, you see the following error.  
  
    ```Output  
    error C2857: '#include' statement specified with the /Ycpch.h command-line option was not found in the source file  
    ```  
  
     The issue is that the Universal Windows projects use a different naming convention for the precompiled header file.  
  
6.  Build the project. You might get some errors about incompatible command line options. For example, the frequently used option Enable Minimal Rebuild (/Gm) is set by default in many C++ projects, and is incompatible with /ZW.  
  
     Some functions are not available when you compile for the Universal Windows Platform. You will see compiler errors about any problems. Address these until you have a clean build.  
  
7.  To use the DLL in a UWP app in the same solution, open the shortcut menu for the UWP project node, and choose **Add, Reference**.  
  
     Under **Projects, Solution**, select the checkbox next to the DLL project, and choose the **OK** button.  
  
8.  Include the library's header file(s) in your UWP app's pch.h file.  
  
    ```  
    #include "..\MyNativeDLL\giraffe.h"  
    ```  
  
9. Add code as usual in the UWP project to invoke functions and create types from the DLL.  
  
    ```  
    MainPage::MainPage()  
    {  
    InitializeComponent();  
    GiraffeFactory gf;  
    Giraffe* g = gf.Create();  
    int id = g->GetID();  
    }  
  
    ```  
  
##  <a name="BK_StaticLib"></a> Using a native C++ static library in a UWP App  
 You can use a native C++ static library in a UWP project, but there are some restrictions and limitations to be aware of. Start by reading this [topic](https://msdn.microsoft.com/library/hh771041.aspx) about static libraries in C++/CX. You can access the native code in your static library from your UWP app, but it's not recommended to create public ref types in such a static library. If you compile a static library with the /ZW option, the librarian (actually the linker in disguise) warns:  
  
```  
LNK4264: archiving object file compiled with /ZW into a static library; note that when authoring Windows Runtime types it is not recommended to link with a static library that contains Windows Runtime metadata  
```  
  
 However, you can use a static library in a UWP without recompiling it with /ZW. You won't be able to declare any ref types or use C++/CX constructs, but if your purpose is to simply use library of native code, then you can do so by following these steps.  
  
#### To use a native C++ static library in a UWP project  
  
1.  In the project properties for the UWP project, in the Linker section, add the path to the library in the Input property. For example, for a library in the project that places its output in *SolutionFolder*\Debug\MyNativeLibrary\MyNativeLibrary.lib, add the relative path `Debug\MyNativeLibrary\MyNativeLibrary.lib`.  
  
2.  Add an include statement to reference the header file to your pch.h in the UWP project and start adding code that uses the library.  
  
    ```  
    #include "..\MyNativeLibrary\giraffe.h"  
    ```  
  
     Do not add a reference in the **References** node in **Solution Explorer**. That mechanism only works for Windows Runtime Components.  
  
##  <a name="BK_WinRTComponent"></a> Porting a C++ Library to a Windows Runtime Component  
 If you want to consume native APIs in a static library from a UWP app, and you have the source code for the native library, you can port the code to a Windows Runtime Component. It won't be a static library anymore, it will be a DLL. You can use it in any C++ UWP app, but unlike the case of static library, you can add ref types and other C++/CX constructs which are available to clients in any UWP app code, regardless of language. Therefore, you can access these types from C#, Visual Basic, or JavaScript.  The basic procedure is to create a Windows Runtime Component project, copy the code for your static library into it, and address any errors that arise from moving the code from a standard C++ compilation to a /ZW compilation.  
  
#### To port a C++ library to a Windows Runtime Component  
  
1.  Create a Windows Runtime Component project.  
  
2.  Close the project.  
  
3.  In the Windows File Explorer, locate the project. By default, Visual Studio uses the Visual Studio 2015\Projects folder in your Documents folder. Locate the C++ library project that contains the code you want to port. Copy the source files (header files, code files, and any other resources, including in subdirectories) from your C++ library project, and paste them into the project folder, making sure to preserve the same folder structure.  
  
4.  Reopen the Windows Runtime Component project, and open the shortcut menu for the project node in **Solution Explorer**, and choose **Add, Existing Item**.  
  
5.  Select all the files to add from your original project, and choose OK. Repeat if necessary for subfolders.  
  
6.  You might now have some duplicated code. If you have more than one precompiled header (say stdafx.h and pch.h), choose one to keep. Copy any required code, such as include statements, into the one you're keeping. Then, delete the other, and in the project properties, under **Precompiled Headers**, make sure that the name of the header file is correct.  
  
     If you changed the file to use as the precompiled header, make sure that the precompiled header options are correct for each file. Select each .cpp file in turn, open its properties window, and make sure that all are set to **Use (/Yu)**, except for the desired precompiled header, which should be set to **Create (/Yc)**.  
  
7.  Build the project and resolve any errors. These errors could be caused by using the /ZW option, or they could be caused by a new version of the Windows SDK, or they might reflect dependencies such as header files that your library depends on, or differences in project settings between your old project and the new one.  
  
8.  Add public ref types to your project, or convert ordinary types to ref types, to expose entry points into the functionality you want to call from UWP apps.  
  
9. Test the component by adding a reference to it from a UWP app project, and add some code to call the public APIs you created.  
  
## See Also  
 [Porting to the Universal Windows Platform](../porting/porting-to-the-universal-windows-platform-cpp.md)