---
title: "How to: Use existing C++ code in a Universal Windows Platform app"
description: "Ways to use your existing code apps and libraries in Universal Windows Platform apps."
ms.date: 09/04/2020
ms.assetid: 87e5818c-3081-42f3-a30d-3dca2cf0645c
---
# How to: Use existing C++ code in a Universal Windows Platform app

There are various ways that you can use existing C++ code in Universal Windows Platform (UWP) projects. Some ways don't require code to be recompiled with the component extensions (C++/CX) enabled (that is, with the `/ZW` option), and some do. You may need to keep code in standard C++, or preserve a classic Win32 compilation environment for some code. You can still do so, with appropriate architecture choices. Consider all your code that contains UWP UI and types that are exposed to C#, Visual Basic, and JavaScript callers. This code should be in Windows App projects and Windows Runtime Component projects. Code that you only call from C++ (including C++/CX) can either be in a project that compiles with the `/ZW` option or a standard C++ project. Binary-only code that doesn't use disallowed APIs can be used by linking it in as a static library. Or, you can package it with the app as content and load it in a DLL.

Perhaps the easiest way to get your desktop program running in the UWP environment is to use the Desktop Bridge technologies. They include the Desktop App Converter, which will package your existing application as a UWP app with no code changes required. For more information, see [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

The rest of this article discusses how to port C++ libraries (DLLs and static libraries) to the Universal Windows Platform. You might want to port your code so your core C++ logic can be used with multiple UWP apps.

UWP Apps run in a protected environment. As a result, many Win32, COM, and CRT API calls that might compromise platform security aren't allowed. The `/ZW` compiler option can detect such calls and generate an error. You can use the App Certification Kit on your application to detect code that calls disallowed APIs. For more information, see [Windows App Certification Kit](/windows/uwp/debug-test-perf/windows-app-certification-kit).

If source code is available for the library, you could try to eliminate the disallowed API calls. For a list of APIs that aren't allowed, see [Win32 and COM APIs for UWP apps](/uwp/win32-and-com/win32-and-com-for-uwp-apps) and [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md). Some alternatives can be found at [Alternatives to Windows APIs in UWP apps](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).

If you just try to add a reference from a Universal Windows Project to a classic desktop library, you get an error message that says the library isn't compatible. If it's a static library, you can link to your library by adding the library (*`.lib`* file) to your linker input, the same way you would in a classic Win32 application. If only a binary library is available, it's the only option. A static library is linked into your app's executable. However, a Win32 DLL that you consume in a UWP app must be packaged into the app by including it in the project and marking it as Content. To load a Win32 DLL in a UWP app, you also have to call [`LoadPackagedLibrary`](/windows/win32/api/winbase/nf-winbase-loadpackagedlibrary) instead of `LoadLibrary` or `LoadLibraryEx`.

If you have source code for the DLL or static library, you can recompile it as a UWP project by using the `/ZW` compiler option. Then you can add a reference to it using the **Solution Explorer**, and use it in C++ UWP apps. Link the DLL by using the export library.

To expose functionality to callers in other languages, you can convert the library into a Windows Runtime Component. Windows Runtime Components differ from ordinary DLLs in that they include metadata in the form of *`.winmd`* files that describe the contents in a way that .NET and JavaScript consumers require.  To expose API elements to other languages, you can add C++/CX constructs, such as ref classes, and make them public. In Windows 10 and later, we recommend the [C++/WinRT library](https://github.com/microsoft/cppwinrt) instead of C++/CX.

The preceding discussion doesn't apply to COM components, which must be handled differently. If you have a COM server in an EXE or DLL, you can use it in a Universal Windows Project. Package it as a [registration-free COM component](/windows/win32/sbscs/creating-registration-free-com-objects), add it to your project as a Content file, and instantiate it using [`CoCreateInstanceFromApp`](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstancefromapp). For more information, see [Using Free-COM DLL in Windows Store C++ Project](/archive/blogs/win8devsupport/using-free-com-dll-in-windows-store-c-project).

If you want to port an existing COM library to the UWP, it's also possible to convert it into a Windows Runtime Component. We recommend the C++/WinRT library for such ports, but it's also possible to use the [Windows Runtime C++ Template Library (WRL)](../cppcx/wrl/windows-runtime-cpp-template-library-wrl.md). The WRL is deprecated, and it doesn't support all the features of ATL and OLE. Whether such a port is feasible depends on the features of COM, ATL, and OLE your component requires.

Whichever development scenarios you choose, you should be aware of a number of macro definitions. You can use these macros in your code, to compile code conditionally under both classic desktop Win32 and UWP.

```cpp
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
```

These statements respectively apply to UWP apps, Windows Phone Store apps, both, or neither (classic Win32 desktop only). These macros are only available in Windows SDK 8.1 and later.

This article contains the following procedures:

- [Using a Win32 DLL in a UWP App](#BK_Win32DLL)

- [Using a native C++ static library in a UWP App](#BK_StaticLib)

- [Porting a C++ Library to a Windows Runtime Component](#BK_WinRTComponent)

## <a name="BK_Win32DLL"></a> Using a Win32 DLL in a UWP App

For better security and reliability, Universal Windows Apps run in a restricted runtime environment. You can't just use any native DLL the way you would in a classic Windows desktop application. If you have source code for a DLL, you can port the code so that it runs on the UWP. You start by changing a few project settings and project file metadata to identify the project as a UWP project. You'll recompile the library code using the `/ZW` option, which enables C++/CX. Certain API calls aren't allowed in UWP apps because of stricter controls associated with that environment. For more information, see [Win32 and COM APIs for UWP apps](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

If you have a native DLL that exports functions by using `__declspec(dllexport)`, you can call those functions from a UWP app by recompiling the DLL as a UWP project. For example, suppose we have a Win32 DLL project named *Giraffe* that exports a couple of classes and their methods, with code like the following header file:

```cpp
// giraffe.h
// Define GIRAFFE_EXPORTS when building this DLL
#pragma once

#ifdef GIRAFFE_EXPORTS
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

```cpp
// giraffe.cpp
#include "pch.h"
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

Everything else in the project (*`pch.h`*, *`dllmain.cpp`*) is part of the standard Win32 project template. The code defines the macro `GIRAFFE_API`, which resolves to `__declspec(dllexport)` when `GIRAFFE_EXPORTS` is defined. That is, it's defined when the project is built as a DLL, but not when a client uses the *`giraffe.h`* header. This DLL can be used in a UWP project without changing the source code. Only some project settings and properties need to change.

The following procedure applies when you have a native DLL that exposes functions using `__declspec(dllexport)`.

### To port a native DLL to the UWP without creating a new project

1. Open your DLL project in Visual Studio.

1. Open the **Project Properties** for the DLL project, and set the **Configuration** to **All Configurations**.

1. In the **Project Properties**, under **C/C++** > **General** tab, set **Consume Windows Runtime Extension** to **Yes (/ZW)**. This property enables component extensions (C++/CX).

1. In **Solution Explorer**, select the project node, open the shortcut menu, and choose **Unload Project**. Then, open the shortcut menu on the unloaded project node, and choose to edit the project file. Locate the `WindowsTargetPlatformVersion` element and replace it with the following elements.

    ```xml
    <AppContainerApplication>true</AppContainerApplication>
    <ApplicationType>Windows Store</ApplicationType>
    <WindowsTargetPlatformVersion>10.0.10156.0</WindowsTargetPlatformVersion>
    <WindowsTargetPlatformMinVersion>10.0.10156.0</WindowsTargetPlatformMinVersion>
    <ApplicationTypeRevision>10.0</ApplicationTypeRevision>
    ```

   Close the *`.vcxproj`* file, open the shortcut menu again, and choose **Reload Project**.

   **Solution Explorer** now identifies the project as a Universal Windows project.

1. Make sure your precompiled header file name is correct. In the **Precompiled Headers** section, you may need to change **Precompiled Header File** from *`pch.h`* to *`stdafx.h`* or the other way around if you see an error like this one:

   > error C2857: '#include' statement specified with the **`/Ycpch.h`** command-line option was not found in the source file

   The issue is that older project templates use a different naming convention for the precompiled header file. Visual Studio 2019 and later projects use *`pch.h`*.

1. Build the project. You might get some errors about incompatible command-line options. For example, the now deprecated but frequently used option **Enable Minimal Rebuild (/Gm)** is set by default in many older C++ projects, and is incompatible with `/ZW`.

   Some functions aren't available when you compile for the Universal Windows Platform. You'll see compiler errors about any problems. Address these errors until you have a clean build.

1. To use the DLL in a UWP app in the same solution, open the shortcut menu for the UWP project node, and choose **Add** > **Reference**.

   Under **Projects** > **Solution**, select the checkbox next to the DLL project, and choose the **OK** button.

1. Include the library's header file(s) in your UWP app's *`pch.h`* file.

    ```cpp
    #include "..\Giraffe\giraffe.h"
    ```

1. Add code as usual in the UWP project to invoke functions and create types from the DLL.

    ```cpp
    MainPage::MainPage()
    {
        InitializeComponent();
        GiraffeFactory gf;
        Giraffe* g = gf.Create();
        int id = g->GetID();
    }
    ```

## <a name="BK_StaticLib"></a> Using a native C++ static library in a UWP App

You can use a native C++ static library in a UWP project, but there are some restrictions and limitations to be aware of. Start by reading about [static libraries in C++/CX](../cppcx/static-libraries-c-cx.md). You can access the native code in your static library from your UWP app, but it's not recommended to create public ref types in such a static library. If you compile a static library with the `/ZW` option, the librarian (actually the linker in disguise) warns:

> LNK4264: archiving object file compiled with /ZW into a static library; note that when authoring Windows Runtime types it is not recommended to link with a static library that contains Windows Runtime metadata

However, you can use a static library in a UWP app without recompiling it with `/ZW`. Your library can't declare any ref types or use C++/CX constructs. But, if your purpose is just to use a library of native code, then you can do so by following these steps.

### To use a native C++ static library in a UWP project

1. In the project properties for the UWP project, choose **Configuration Properties** > **Linker** > **Input** in the left pane. In the right pane, add the path to the library in the **Additional Dependencies** property. For example, for a library in the project that places its output in *`<SolutionFolder>\Debug\MyNativeLibrary\MyNativeLibrary.lib`*, add the relative path *`Debug\MyNativeLibrary\MyNativeLibrary.lib`*.

1. Add an include statement to reference the header file to your *`pch.h`* file (if present), or in any *`.cpp`* file as needed, and start adding code that uses the library.

   ```cpp
   #include "..\MyNativeLibrary\MyNativeLibrary.h"
   ```

   Don't add a reference in the **References** node in **Solution Explorer**. That mechanism only works for Windows Runtime Components.

## <a name="BK_WinRTComponent"></a> Porting a C++ Library to a Windows Runtime Component

Suppose you want to consume native APIs in a static library from a UWP app. If you have the source code for the native library, you can port the code to a Windows Runtime Component. It won't be a static library anymore; you'll turn it into a DLL you can use in any C++ UWP app. This procedure describes how to create a new Windows Runtime Component that uses C++/CX extensions. For information on creating a component that uses C++/WinRT instead, see [Windows Runtime components with C++/WinRT](/windows/uwp/winrt-components/create-a-windows-runtime-component-in-cppwinrt).

When you use C++/CX, you can add ref types and other C++/CX constructs, which are available to clients in any UWP app code. You can access these types from C#, Visual Basic, or JavaScript. The basic procedure is:

- Create a Windows Runtime Component (Universal Windows) project,
- copy the code for your static library into it, and
- address any errors from the compiler caused by the `/ZW` option.

### To port a C++ library to a Windows Runtime Component

1. Create a Windows Runtime Component (Universal Windows) project.

1. Close the project.

1. In the **Windows File Explorer**, locate the new project. Then, locate the C++ library project that contains the code you want to port. Copy the source files (header files, code files, and any other resources, including in subdirectories) from your C++ library project. Paste them into the new project folder, making sure to preserve the same folder structure.

1. Reopen the Windows Runtime Component project. Open the shortcut menu for the project node in **Solution Explorer**, and choose **Add** > **Existing Item**.

1. Select all the files to add from your original project, and choose **OK**. Repeat if necessary for subfolders.

1. You might now have some duplicated code. If there's more than one precompiled header (say, both *`stdafx.h`* and *`pch.h`*), choose one to keep. Copy any required code, such as include statements, into the one you're keeping. Then, delete the other one, and in the project properties, under **Precompiled Headers**, make sure that the name of the header file is correct.

   If you changed the file to use as the precompiled header, make sure that the precompiled header options are correct for each file. Select each *`.cpp`* file in turn, open its properties window, and make sure that all are set to **Use (/Yu)**, except for the precompiled header, which should be set to **Create (/Yc)**.

1. Build the project and resolve any errors. These errors could be caused by using the `/ZW` option, or they could be caused by a new version of the Windows SDK. Or, they might reflect dependencies such as header files that your library depends on, or differences in project settings between your old project and the new one.

1. Add public ref types to your project, or convert ordinary types to ref types. Use these types to expose entry points into the functionality you want to call from UWP apps.

1. Test the component by adding a reference to it from a UWP app project, and add some code to call the public APIs you created.

## See also

[Porting to the Universal Windows Platform](../porting/porting-to-the-universal-windows-platform-cpp.md)
