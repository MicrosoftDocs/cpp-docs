---
description: "Learn more about: Overview of Windows Programming in C++"
title: "Overview of Windows Programming in C++"
ms.date: "09/17/2019"
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
---
# Overview of Windows Programming in C++

There are several broad categories of Windows applications that you can create with C++. Each has its own programming model and set of Windows-specific libraries, but the C++ standard library and third-party C++ libraries can be used in any of them.

This section discusses how to use Visual Studio and the MFC/ATL wrapper libraries to create Windows programs. For documentation on the Windows platform itself, see [Windows documentation](/windows/index).

## Command line (console) applications

C++ console applications run from the command line in a console window and can display text output only. For more information, see [Create a console calculator in C++](../get-started/tutorial-console-cpp.md).

## Native desktop client applications

A *native desktop client application* is a C or C++ windowed application that uses the original native [Windows C APIs or Component Object Model (COM) APIs](/windows/win32/apiindex/windows-api-list) to access the operating system. Those APIs are themselves written mostly in C. There's more than one way to create a native desktop app: You can program using the Win32 APIs directly, using a C-style message loop that processes operating system events. Or, you can program using *Microsoft Foundation Classes* (MFC), a lightly object-oriented C++ library that wraps Win32. Neither approach is considered "modern" compared to the Universal Windows Platform (UWP), but both are still fully supported and have millions of lines of code running in the world today. A Win32 application that runs in a window requires the developer to work explicitly with Windows messages inside a Windows procedure function. Despite the name, a Win32 application can be compiled as a 32-bit (x86) or 64-bit (x64) binary. In the Visual Studio IDE, the terms x86 and Win32 are synonymous.

To get started with traditional Windows C++ programming, see [Get Started with Win32 and C++](/windows/win32/LearnWin32/learn-to-program-for-windows). After you gain some understanding of Win32, it will be easier to learn about [MFC Desktop Applications](../mfc/mfc-desktop-applications.md). For an example of a traditional C++ desktop application that uses sophisticated graphics, see [Hilo: Developing C++ Applications for Windows](/previous-versions/msdn10/ff708696(v=msdn.10)).

### C++ or .NET?

In general, .NET programming in C# is less complex, less error-prone, and has a more modern object-oriented API than Win32 or MFC. In most cases, its performance is more than adequate. .NET features the Windows Presentation Foundation (WPF) for rich graphics, and you can consume both Win32 and the modern Windows Runtime API. As a general rule, we recommend using C++ for desktop applications when you require:

- precise control over memory usage
- the utmost economy in power consumption
- usage of the GPU for general computing
- access to DirectX
- heavy usage of standard C++ libraries

It's also possible to combine the power and efficiency of C++ with .NET programming. You can create a user interface in C# and use C++/CLI to enable the application to consume native C++ libraries. For more information, see [.NET Programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## COM Components

The [Component Object Model (COM)](/windows/win32/com/the-component-object-model) is a specification that enables programs written in different languages to communicate with one another. Many Windows components are implemented as COM objects and follow standard COM rules for object creation, interface discovery, and object destruction.  Using COM objects from C++ desktop applications is relatively straightforward, but writing your own COM object is more advanced. The [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) provides macros and helper functions that simplify COM development. For more information, see [ATL COM desktop components](../atl/atl-com-desktop-components.md).

## Universal Windows Platform apps

The Universal Windows Platform (UWP) is the modern Windows API. UWP apps run on any Windows 10 device, use XAML for the user-interface, and are fully touch-enabled. For more information about UWP, see [What's a Universal Windows Platform (UWP) app?](/windows/uwp/get-started/whats-a-uwp) and [Guide to Windows Universal Apps](/windows/uwp/get-started/universal-application-platform-guide).

The original C++ support for UWP consisted of (1) C++/CX, a dialect of C++ with syntax extensions, or (2) the Windows Runtime Library (WRL), which is based on standard C++ and COM. Both C++/CX and WRL are still supported. For new projects, we recommend [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt), which is entirely based on standard C++ and provides faster performance.

## Desktop Bridge

In Windows 10, you can package your existing desktop application or COM object as a UWP app, and add UWP features such as touch, or call APIs from the modern Windows API set. You can also add a UWP app to a desktop solution in Visual Studio, and package them together in a single package and use Windows APIs to communicate between them.

Visual Studio 2017 version 15.4 and later lets you create a Windows Application Package Project to greatly simplify the work of packaging your existing desktop application. A few restrictions apply to the registry calls or APIs your desktop application can use. However, in many cases you can create alternate code paths to achieve similar functionality while running in an app package. For more information, see [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## Games

DirectX games can run on the PC or Xbox. For more information, see [DirectX Graphics and Gaming](/windows/win32/directx).

## SQL Server database clients

To access SQL Server databases from native code, use ODBC or OLE DB. For more information, see [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## Windows device drivers

Drivers are low-level components that make data from hardware devices accessible to applications and other operating system components. For more information, see [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## Windows services

A Windows *service* is a program that can run in the background with little or no user interaction. These programs are called *daemons* on UNIX systems. For more information, see [Services](/windows/win32/services/services).

## SDKs, libraries, and header files

Visual Studio includes the C Runtime Library (CRT), the C++ Standard Library, and other Microsoft-specific libraries. Most of the include folders that contain header files for these libraries are located in the Visual Studio installation directory under the \VC\ folder. The Windows and CRT header files are found in the Windows SDK installation folder.

The [Vcpkg package manager](../build/vcpkg.md) lets you conveniently install hundreds of third-party open-source libraries for Windows.

The Microsoft libraries include:

- Microsoft Foundation Classes (MFC): An object-oriented framework for creating traditional Windows programs—especially enterprise applications—that have rich user interfaces that feature buttons, list boxes, tree views, and other controls. For more information, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): A powerful helper library for creating COM components. For more information, see [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): A library that enables high-performance general computational work on the GPU. For more information, see [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Concurrency Runtime: A library that simplifies the work of parallel and asynchronous programming for multicore and many-core devices. For more information, see [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Many Windows programming scenarios also require the Windows SDK, which includes the header files that enable access to the Windows operating system components. By default, Visual Studio installs the Windows SDK as a component of the C++ Desktop workload, which enables development of Universal Windows apps. To develop UWP apps, you need the Windows 10 version of the Windows SDK. For information, see [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). (For more information about the Windows SDKs for earlier versions of Windows, see the [Windows SDK archive](https://developer.microsoft.com/windows/downloads/sdk-archive)).

**Program Files (x86)\Windows Kits** is the default location for all versions of the Windows SDK that you've installed.

Other platforms such as Xbox and Azure have their own SDKs that you may have to install. For more information, see the DirectX Developer Center and the Azure Developer Center.

## Development Tools

Visual Studio includes a powerful debugger for native code, static analysis tools, graphics debugging tools, a full-featured code editor, support for unit tests, and many other tools and utilities. For more information, see [Get started developing with Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), and [Overview of C++ development in Visual Studio](../overview/overview-of-cpp-development.md).

## In this section

|Title|Description|
|-----------|-----------------|
|[Walkthrough: Creating a Standard C++ Program](walkthrough-creating-a-standard-cpp-program-cpp.md)| Create a Windows console application.|
|[Walkthrough: Creating Windows Desktop Applications (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Create a native Windows desktop application.|
|[Windows Desktop Wizard](windows-desktop-wizard.md)|Use the wizard to create new Windows projects.|
|[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)|Use the ATL library to create COM components in C++.|
|[Microsoft Foundation Classes (MFC)](../mfc/mfc-desktop-applications.md)|Use MFC to create large or small Windows applications with dialogs and controls|
|[ATL and MFC Shared Classes](../atl-mfc-shared/atl-mfc-shared-classes.md)|Use classes such as CString that are shared in ATL and MFC.|
|[Data Access](../data/data-access-in-cpp.md)| OLE DB and ODBC|
|[Text and Strings](../text/text-and-strings-in-visual-cpp.md)|Various string types on Windows.|
|[Resources for Creating a Game Using DirectX](resources-for-creating-a-game-using-directx.md)
|[How to: Use the Windows 10 SDK in a Windows Desktop Application](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Windows SDK|
|[Working with Resource Files](working-with-resource-files.md)|How to add images, icons, string tables, and other resources to a desktop application.|
|[Resources for Creating a Game Using DirectX (C++)](resources-for-creating-a-game-using-directx.md)|Links to content for creating games in C++.|
|[How to: Use the Windows 10 SDK in a Windows Desktop Application](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contains steps for setting up your project to build using the Windows 10 SDK.|
|[Deploying Native Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)|Deploy native applications on Windows.|

## Related Articles

|Title|Description|
|-----------|-----------------|
|[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)|Parent topic for Visual C++ developer content.|
[.NET Development with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Create wrappers for native C++ libraries that enable it to communication with .NET applications and components.|
|[Component Extensions for .NET and UWP](../extensions/component-extensions-for-runtime-platforms.md)|Reference for syntax elements shared by C++/CX and C++/CLI.|
|[Universal Windows Apps (C++)](../cppcx/universal-windows-apps-cpp.md)|Write UWP applications using C++/CX or Windows Runtime Template Library (WRL).|
|[C++ Attributes for COM and .NET](attributes/cpp-attributes-com-net.md)|Non-standard attributes for Windows-only programming using .NET or COM.|
