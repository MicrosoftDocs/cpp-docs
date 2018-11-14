---
title: "Overview of Windows Programming in C++"
ms.date: "11/15/2018"
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
---
# Overview of Windows Programming in C++

There are several broad categories of Windows applications that you can create with C++. Each has its own programming model and set of Windows-specific libraries, but the C++ standard library as well as third-party C++ libraries can be used in any of them. 

## <a name="command_line"></a> Command line (console) applications

C++ console applications run from the command line in a console window and can display text output only. For more information, see [Console Applications](console-applications-in-visual-cpp.md).
 
## <a name="BK_Native"></a> Native desktop client applications

The term *native desktop client applicaton* refers to a C or C++ windowed application that uses the original Windows Win32 APIs to access the operating system. Those APIs are themselves written mostly in C. When creating this kind of application, you have the choice of programming directly against a C-style message loop that processes operating system events, or using *Microsoft Foundation Classes* (MFC), a C++ library that wraps Win32 in a way that is somewhat object-oriented. Each approach is still totally supported and each has millions of lines of code running in the world today.

If you are just learning Windows C++ programming, it is probably best to start with Win32. After you have a basic understanding of Win32, you will be better able to learn MFC.

For more information, see [Get Started with Win32 and C++](/windows/desktop/LearnWin32/learn-to-program-for-windows) and [MFC Desktop Applications](/mfc/mfc-desktop-applications). For an example of a C++ desktop application that uses sohpisticated graphics, see [Hilo: Developing C++ Applications for Windows](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx).

### C++ or .NET?

For most desktop application scenarios, we recommend using C# and .NET. This is because .NET programming is generally less complex, less error-prone, and has a more modern object-oriented API than Win32/COM. In most cases, its performance is more than adequate. .NET features the Windows Presentation Foundation (WPF) for rich graphics, and you can consume Win32 as well as the modern Windows Runtime API (see UWP below). If your C# application needs to use a standard C++ library, you can create a .NET-callable wrapper for it by using C++/CLI.

As a general rule, we recomend using C++ when you require:

- precise control over memory usage
- the utmost economy in power consumption
- usage of the GPU for general computing
- access to DirectX
- heavy usage of standard C++ libraries

## COM Components

Many parts of the Windows operating system are based on the Component Object Model (COM) which defines a binary standard that enables the component to be consumed from client applications written in any computer language. In C++ you can use the Active Template Library (ATL) to simplify the work of creating your own COM components. For more information, see [Component Object Model (COM)](/windows/desktop/com/component-object-model--com--portal) and [ATL COM desktop components](../atl/atl-com-desktop-components.md).

##  <a name="BK_WindowsUniversal"></a> Windows Universal Apps

The Universal Windows Platform (UWP) is the modern Windows API. UWP apps run on any Windows 10 device, use XAML for the user-interface, and are fully touch-enabled. For more information about UWP, see [What's a Universal Windows Platform (UWP) app?](/windows/uwp/get-started/whats-a-uwp) and [Guide to Windows Universal Apps](/windows/uwp/get-started/universal-application-platform-guide).

The original C++ support for UWP consisted of (1) C++/CX, a dialect of C++ with syntax extensions, or (2) the Windows Runtime Library (WRL) which is based on standard C++ and COM. Both C++/CX and WRL are still supported, but for new projects we recommend [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt). 

> [!TIP]
> For Windows 10, you can package your existing C++ desktop application as-is for deployment through the Microsoft Store. For more information, see [Package desktop applications (Desktop Bridge)](/windows/uwp/porting/desktop-to-uwp-root).

## Games

DirectX games can run on the PC or Xbox. For more information, see [DirectX Graphics and Gaming](/windows/desktop/directx).

## .NET wrappers for C++ libraries

You can use C++/CLI to create an interop layer that enables .NET code to consume native C++ libraries. For more information, see [.NET Programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## SQL Server database clients

To access SQL Server databases from native code, use ODBC or OLE DB. For more information, see [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## Windows device drivers

Drivers are low-level components that make data from hardware devices accessible to applications and other operating system components. For more information, see [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## Windows services

A Windows *service* is a program that can run in the background with little or no user interaction. In UNIX these are called *daemons*. For more information, see [Services](/windows/desktop/services/services).


## SDKs, libraries, and header files

Visual Studio includes the C Runtime Library (CRT), the C++ Standard Library, and other Microsoft-specific libraries. The include folders that contain header files for these libraries are located either in the Visual Studio installation directory under the \VC\ folder, or in the case of the CRT, in the Windows SDK installation folder.

You can use the [Vcpkg package manager](../vcpkg.md) to conveniently install hundreds of third-party open-source libraries for Windows.

The Microsoft libraries include:

- Microsoft Foundation Classes (MFC): An object-oriented framework for creating traditional Windows programs—especially enterprise applications—that have rich user interfaces that feature buttons, list boxes, tree views, and other controls. For more information, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): A powerful helper library for creating COM components. For more information, see [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): A library that enables high-performance general computational work on the GPU. For more information, see [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Concurrency Runtime: A library that simplifies the work of parallel and asynchronous programming for multicore and many-core devices. For more information, see [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Many Windows programming scenarios also require the Windows SDK, which includes the header files that enable access to the Windows operating system components. By default, Visual Studio installs the Windows SDK as a component of the C++ Desktop workload, which enables development of Universal Windows apps. To develop UWP apps, you need the Windows 10 version of the Windows SDK. For information, see [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). (For more information about the Windows SDKs for earlier versions of Windows, see the [Windows SDK archive](https://developer.microsoft.com/windows/downloads/sdk-archive)).

**Program Files (x86)\Windows Kits** is the default location for all versions of the Windows SDK that you have installed.

Other platforms such as Xbox and Azure have their own SDKs that you may have to install. For more information, see the DirectX Developer Center and the Azure Developer Center.

## Development Tools

Visual Studio includes a powerful debugger for native code, static analysis tools, graphics debugging tools, a full-featured code editor, support for unit tests, and many other tools and utilities. For more information, see [Get started developing with Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), and [IDE and Development Tools](../ide/ide-and-tools-for-visual-cpp-development.md).

## In this section
|Title|Description|
|-----------|-----------------|
|[Windows Desktop Applications in C++](desktop-applications-visual-cpp.md)| How to create traditional desktop applications.|
|[Active Template Library (ATL)](../atl/TOC.md)|Use the ATL library to create COM components in C++.|
|[Microsoft Foundation Classes (MFC)](../mfc/TOC.md)|Use MFC to create large or small Windows applications with dialogs and controls|
|[ATL and MFC Shared Classes](../atl-mfc-shared/TOC.md)|Use classes such as CString that are shared in ATL and MFC.|
|[.NET Development with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Create wrappers for native C++ libraries that enable it to communication with .NET applications and components.|
|[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)|Reference for syntax elements shared by C++/CX and C++/CLI.|
|[Universal Windows Apps (C++)](universal-windows-apps-cpp.md)|Write UWP applications using C++/CX or Windows Runtime Template Library (WRL).|
|[C++ Attributes for COM and .NET](attributes/cpp-attributes-com-net.md)|Non-standard attributes for Windows-only programming using .NET or COM.|

## Related Articles

|Title|Description|
|-----------|-----------------|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Parent topic for Visual C++ developer content.|
