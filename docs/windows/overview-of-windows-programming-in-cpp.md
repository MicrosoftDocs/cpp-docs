---
description: "Learn more about: An overview of the types of Windows desktop applications you can build in C++."
title: "Windows C++ desktop application types"
ms.date: 03/26/2024
---
# Windows C++ desktop application types

A *desktop application* in C++ is a native application that can access the full set of Windows APIs, and either runs in a window or in the system console. Desktop applications in C++ can run on Windows XP through Windows 11 (although Windows XP is no longer officially supported and there are many new Windows APIs since then).

Any desktop application in C++ can use C Runtime (CRT) and Standard Library classes and functions, COM objects, and the public Windows functions, which collectively are known as the Windows API. For an introduction to Windows desktop applications in C++, see [Get Started with Win32 and C++](/windows/win32/LearnWin32/learn-to-program-for-windows).

There are several broad categories of Windows applications that you can create with C++, described below. Each has its own programming model and set of Windows-specific libraries. The C++ standard library and third-party C++ libraries can be used in any of them.

For documentation on the Windows platform itself, see [Windows documentation](/windows/index).

## Native desktop client applications

A *native desktop client application*, or *Win32* application, is a Windows desktop application written in C or C++ that uses native [Windows C APIs or Component Object Model (COM) APIs](/windows/win32/apiindex/windows-api-list) CRT and Standard Library APIs, and 3rd party libraries. A Win32 application that runs in a window requires the developer to handle Windows messages inside a Windows procedure function. Despite the name, a Win32 application can be compiled as a 32-bit (x86) or 64-bit (x64) binary. In the Visual Studio IDE, the terms x86 and Win32 are synonymous.

- To get started with traditional Windows C++ programming, see [Get Started with Win32 and C++](/windows/win32/LearnWin32/learn-to-program-for-windows). 
- For an example of a traditional C++ desktop application that uses sophisticated graphics, see [Hilo: Developing C++ Applications for Windows](/previous-versions/msdn10/ff708696(v=msdn.10)).

## Command line (console) applications

C++ console applications run from the command line in a console window and can display text output only.

- For more information, see [Create a console calculator in C++](../get-started/tutorial-console-cpp.md).

## UWP applications

The Universal Windows Platform (UWP) is the modern Windows API. UWP apps run on Windows 11, Windows 10, XBox, Windows Phone, Surface Hub, and other devices. UWP apps use XAML for the user-interface, and are fully touch-enabled. A desktop application is distinct from a Universal Windows Platform (UWP) app.
- For more information about desktop vs. UWP applications, see [Choose your technology](/windows/win32/choose-your-technology).
- For more information about UWP, see [What's a Universal Windows Platform (UWP) app](/windows/uwp/get-started/whats-a-uwp) and [Guide to Windows Universal Apps](/windows/uwp/get-started/universal-application-platform-guide).

The original C++ support for UWP consisted of C++/CX, a dialect of C++ with syntax extensions, or the Windows Runtime Library (WRL), which is based on standard C++ and COM. Both C++/CX and WRL are still supported, but not recommended for new development.

For new projects, we recommend [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt), which is entirely based on standard C++ and provides faster performance.

A C++/CLI application or component uses extensions to C++ syntax (as allowed by the C++ Standard) to enable interaction between .NET and native C++code.  A C++/CLI application can have parts that run natively and parts that run on the .NET Framework with access to the .NET Base Class Library. C++/CLI is the preferred option when you have native C++ code that needs to work with code written in C# or Visual Basic. It's intended for use in .NET DLLs rather than in user interface code.

- For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

### Desktop Bridge

In Windows 10 and later, you can package your existing desktop application or COM object as a UWP app. It can use UWP features such as touch, or call APIs from the modern Windows API set. You can also add a UWP app to a desktop solution in Visual Studio, package them together in a single package, and use Windows APIs to communicate between them.

Visual Studio 2017 version 15.4 and later lets you create a Windows Application Package Project to greatly simplify the work of packaging your existing desktop application. A few restrictions apply to the registry calls or APIs your desktop application can use. However, in many cases you can create alternate code paths to achieve similar functionality while running in an app package. 

- For more information, see [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## C++ or .NET?

In general, .NET programming in C# is less complex, less error-prone, and has a more modern object-oriented API than Win32 or MFC. In most cases, its performance is more than adequate.

.NET features the Windows Presentation Foundation (WPF) for rich graphics, and you can consume both Win32 and the modern Windows Runtime API. As a general rule, we recommend using C++ for desktop applications when you require:

- precise control over memory usage
- the utmost economy in power consumption
- usage of the GPU for general computing
- access to DirectX
- heavy usage of standard C++ libraries

It's also possible to combine the power and efficiency of C++ with .NET programming. You can create a user interface in C# and use C++/CLI to enable the application to consume native C++ libraries.

- For more information, see [.NET Programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

## Games

DirectX games can run on the PC or Xbox. 

- For more information, see [DirectX Graphics and Gaming](/windows/win32/directx).

## SQL Server database clients

To access SQL Server databases from native code, use ODBC or OLE DB.

- For more information, see [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

## Windows device drivers

Drivers are low-level components that make data from hardware devices accessible to applications and other operating system components.

- For more information, see [Windows Driver Kit (WDK)](/windows-hardware/drivers/index).

## Windows services

A Windows *service* is a program that can run in the background with little or no user interaction. These programs are called *daemons* on UNIX systems.

- For more information, see [Services](/windows/win32/services/services).

## COM

The [Component Object Model (COM)](/windows/win32/com/the-component-object-model) is a specification that enables programs written in different languages to interoperate with one another.

Many Windows components are implemented as COM objects and follow standard COM rules for object creation, interface discovery, and object destruction.  Using COM objects from C++ desktop applications is relatively straightforward, but writing your own COM object is more advanced.

The [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) provides macros and helper functions that simplify COM development. For more information, see [ATL COM desktop components](../atl/atl-com-desktop-components.md).

## MFC

An MFC application is a Windows desktop application that uses the [Microsoft Foundation Classes](../mfc/mfc-desktop-applications.md) to create the user interface. An MFC application can also use COM components and CRT and Standard Library APIs.

MFC provides a thin C++ object-oriented wrapper over the window message loop and Windows APIs. MFC is the default choice for applications—especially enterprise-type applications—that have many user interface controls or custom user controls.

MFC provides convenient helper classes for window management, serialization, text manipulation, printing, and modern user interface elements such as the ribbon. To be effective with MFC, you should be familiar with Win32.

## SDKs, libraries, and header files

Visual Studio includes the C Runtime Library (CRT), the C++ Standard Library, and other Microsoft-specific libraries. Most of the folders that contain header files for these libraries are located in the Visual Studio installation directory under the \VC\ folder (for example, `C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.39.33519\include\`). The Windows and CRT header files are found in the Windows SDK installation folder (for example, `C:\Program Files (x86)\Windows Kits\10\Include\10.0.22621.0\ucrt\`)

The vcpkg package manager lets you conveniently install hundreds of third-party open-source libraries for Windows. For more information, see [vcpkg](/vcpkg/).

The Microsoft libraries include:

- Microsoft Foundation Classes (MFC): An object-oriented framework for creating traditional Windows programs—especially enterprise applications—that have rich user interfaces that feature buttons, list boxes, tree views, and other controls. For more information, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): A powerful helper library for creating COM components. For more information, see [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): A library that enables high-performance general computational work on the GPU. For more information, see [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Concurrency Runtime: A library that simplifies the work of parallel and asynchronous programming for multicore and many-core devices. For more information, see [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Many Windows programming scenarios also require the Windows SDK, which includes the header files that enable access to the Windows operating system components. By default, Visual Studio installs the Windows SDK as a component of the C++ Desktop workload, which enables development of Universal Windows apps. To develop UWP apps, you need a Windows 10 or later version of the Windows SDK.
- For more information, and a download link, see [Windows SDK](https://dev.windows.com/downloads/windows-sdk).
- For more information about the Windows SDKs for earlier versions of Windows, see the [Windows SDK archive](https://developer.microsoft.com/windows/downloads/sdk-archive).

The default location for all versions of the Windows SDK that you install is: **`Program Files (x86)\Windows Kits`**.

## Development Tools

Visual Studio includes a powerful debugger for native code, static analysis tools, graphics debugging tools, a full-featured code editor, support for unit tests, and many other tools and utilities.

- For more information, see [Get started developing with Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), and [Overview of C++ development in Visual Studio](../overview/overview-of-cpp-development.md).

## In this section

|Link|Description|
| ----------- | ----------------- |
| [Walkthrough: Creating Windows desktop applications (C++)](walkthrough-creating-windows-desktop-applications-cpp.md) | Create a native Windows desktop application. |
| [How to: Use the Windows SDK in a Windows desktop application](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md) | Contains steps for setting up your project to build using the Windows SDK. |
| [Walkthrough: Create a standard C++ program](walkthrough-creating-a-standard-cpp-program-cpp.md) | Create a Windows console application. |
| [Walkthrough: Create a console calculator in C++](../get-started/tutorial-console-cpp.md)|Create a simple Windows console application. A Win32 (or Win64) console application has no window of its own and no message loop. It runs in the console window, and input and output are handled through the command line.|
| [Deploying native desktop applications](deploying-native-desktop-applications-visual-cpp.md) | Deploy native applications on Windows. |
| [Walkthrough: Creating and using a static library](../build/walkthrough-creating-and-using-a-static-library-cpp.md)|How to create a `.lib` binary file.|
| [Windows Desktop Wizard](windows-desktop-wizard.md) | Use the wizard to create new Windows projects. |
| [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) | Use the ATL library to create COM components in C++. |
| [ATL and MFC Shared classes](../atl-mfc-shared/atl-mfc-shared-classes.md) | Use classes such as `CString` that are shared in ATL and MFC. |
| [Microsoft Foundation Classes (MFC)](../mfc/mfc-desktop-applications.md) | Use MFC to create large or small Windows applications with dialogs and controls |
| [Data access](../data/data-access-in-cpp.md) | OLE DB and ODBC |
| [Text and strings](../text/text-and-strings-in-visual-cpp.md) | Various string types on Windows. |
| [Working with resource files](working-with-resource-files.md) | How to add images, icons, string tables, and other resources to a desktop application. |
| [Resources for creating a game using DirectX (C++)](resources-for-creating-a-game-using-directx.md) | Links to content for creating games in C++. |

## Related Articles

|Title|Description|
|-----------|-----------------|
|[Windows development](/windows/win32/index)|Contains information about the Windows API and COM. (Some Windows APIs and third-party DLLs are implemented as COM objects.)|
|[Hilo: Developing C++ applications for Windows 7](/previous-versions/msdn10/ff708696(v=msdn.10))|Describes how to create a rich-client Windows desktop application that uses Windows Animation and Direct2D to create a carousel-based user interface. This tutorial hasn't been updated since Windows 7, but still provides a thorough introduction to Win32 programming.|
[.NET development with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Create wrappers for native C++ libraries that enable it to communication with .NET applications and components.|
|[Component extensions for .NET and UWP](../extensions/component-extensions-for-runtime-platforms.md)|Reference for syntax elements shared by C++/CX and C++/CLI.|
|[Universal Windows apps (C++)](../cppcx/universal-windows-apps-cpp.md)|Write UWP applications using C++/CX or Windows Runtime Template Library (WRL).|
|[C++ attributes for COM and .NET](attributes/cpp-attributes-com-net.md)|Nonstandard attributes for Windows-only programming using .NET or COM.|

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
