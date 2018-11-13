---
title: "Overview of Windows Programming in C++"
ms.date: "11/13/2018"
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
---
# Overview of Windows Programming in C++

You can use Visual C++ to write many kinds of programs that run on a Windows. Well-written C++ programs have these qualities:

- efficient in memory requirements
- economical in power consumption
- able to take full advantage of multicore and many-core devices
- able to do general computing on the graphics processing unit (GPGPU)
- able to take advantage of other recent advances in hardware.

There are several broad categories of Windows apps that you can develop with Visual C++. These categories have different programming models which have been introduced over the years. Each model uses different libraries and APIs to provide access to the platform and create user interfaces such as windows and dialog boxes. The C++ standard library as well as third-party libraries can be used in any of these categories, with a few restrictions for UWP.

## <a name="BK_Native"></a> Native desktop client applications

The term *native desktop client applicaton* refers to a C or C++ application that uses the original Windows Win32 and/or COM APIs to access the operating system. Those APIs are themselves written mostly in C. When creating this kind of application, you have the choice of programming directly against a C-style message loop that processes operating system events, or using *Microsoft Foundation Classes* (MFC), a C++ library that wraps the Win32 message loop and other functions in a way that is somewhat object-oriented. Each approach is still totally supported and each has millions of lines of code running in the world today.

If you are just learning Windows C++ programming, it is probably best to start with Win32. After you have a basic understanding of Win32, you will be better able to learn MFC. 

Topics for desktop applications:
- here: [Get Started with Win32 and C++](/windows/desktop/LearnWin32/learn-to-program-for-windows)
- [MFC Desktop Applications](/mfc/mfc-desktop-applications)

On Windows 10, you can use Visual C++ to create many kinds of desktop programs:

- Command-line apps and utilities. For more information, see [Console Applications](console-applications-in-visual-cpp.md).

- Consumer applications that have sophisticated graphical user interfaces. For more information, see [Hilo: Developing C++ Applications for Windows](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx)

- Enterprise and line-of-business apps that run on the .NET Framework. Most .NET Framework applications are written in C# or Visual Basic. You can use C++/CLI to create interop layers that enable .NET code to consume native C++ libraries. For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

- SQL database clients that run in native code. For more information, see [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

- Device drivers. For more information, see [Windows Driver Kit (WDK)](/windows-hardware/drivers/index)

- Windows services. For more information, see [Services](/windows/desktop/services/services).

You can use Visual C++ to package almost any kind of custom high-performance functionality in Win32 DLLs or in COM DLLs that can be consumed by C++ apps or by apps that are written in other languages—for example, C# or Visual Basic. For more information about WIn32 DLLs, see [DLLs in Visual C++](../build/dlls-in-visual-cpp.md). For more information about COM development, see [Component Object Model (COM)](/windows/desktop/com/component-object-model--com--portal).

- **.NET Framework applications**. Most .NET Framework applications are written in C# or Visual Basic. You can use C++/CLI to create wrappers that enable .NET applications to consume native C++ libraries. For more information, see [.NET Programming with C++/CLI ](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

##  <a name="BK_WindowsUniversal"></a> Windows Universal Apps

- [Windows Universal apps](#BK_WindowsUniversal). The third category of Windows apps was introduced with Windows 8, and support for this category of apps continues in Windows 10. These apps are frequently referred to as just "Windows apps" and they include desktop and mobile apps that target a variety of devices. The original C++ support for UWP consisted of (1) C++/CX, a dialect of C++ with syntax extensions, or (2) the Windows Runtime Library (WRL) which is based on standard C++ and COM. Both C++/CX and WRL are still supported, but for new projects we recommend [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt). 

  UWP apps were originally designed to run full-screen, although in Windows 10 users have the option of running them in a desktop window. These apps are touch-oriented, but it is easy to use the mouse to operate if users prefer or if a touch screen is not available. These apps are distributed from the Microsoft Store, a fact which led to them being called "Store" apps.

  UWP apps are able to run on all Windows 10 devices such as tablets and mobile phones, as well as on the desktop. On the desktop, they are able to run as a desktop window, instead of always running full-screen. These apps can also run on the Xbox, and on future devices.  UWP apps run on the Windows Runtime, which provides user interface elements, services, and an interface to the diverse hardware devices that are supported on Windows.

  With Windows 10, apps are able to run on all Windows 10 devices such as tablets and mobile phones, as well as on the desktop. On the desktop, they are able to run as a desktop window, instead of always running full-screen. These apps can also run on the Xbox, and on future devices.  The programming model for the two types of apps is different from Win32 desktop applications. These Windows apps run on the Windows Runtime, which provides user interface elements, essential services for these apps and provides, and an interface to the diverse hardware devices that are supported. These apps compile to native code and have a XAML user interface, or use DirectX. You can also write Windows Runtime components in native code that other Windows apps can consume—these include apps that are written in C#, Visual Basic, or JavaScript. For more information, see [Create a UWP "Hello world" app in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp), [Create a simple UWP game with DirectX](/windows/uwp/gaming/tutorial--create-your-first-uwp-directx-game), and [Creating Windows Runtime components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

> [!TIP]
> For Windows 10, you can use the Desktop App Converter to package your existing desktop application for deployment through the Microsoft Store. For more information, see [Using Visual C++ Runtime in Centennial project](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) and [Bring your desktop app to the Universal Windows Platform (UWP) with the Desktop Bridge](https://msdn.microsoft.com/windows/uwp/porting/desktop-to-uwp-root).

For Universal Windows Platform samples, see [Windows Universal Samples on GitHub](https://github.com/Microsoft/Windows-universal-samples)

If you have an existing Windows 8.1 project and want to port it to Windows 10, see [Porting to the Universal Windows Platform](../porting/porting-to-the-universal-windows-platform-cpp.md). If you have existing classic Win32 desktop libraries and code that you want to integrate into a UWP app, see [How to: Use Existing C++ Code in a Universal Windows Platform App](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).

For more information on UWP in general, see [What's a Universal Windows Platform (UWP) app?](/windows/uwp/get-started/whats-a-uwp).

For more information on all of these concepts, see [Guide to Windows Universal Apps](/windows/uwp/get-started/universal-application-platform-guide).

## Games

DirectX games can run on the PC or Xbox. For more information, see [DirectX Graphics and Gaming](/windows/desktop/directx).

## SDKs, libraries, and header files

Visual C++ includes the C Runtime Library (CRT), the C++ Standard Library, and other Microsoft-specific libraries. The include folders that contain header files for these libraries are located either in the Visual Studio installation directory under the \VC\ folder, or in the case of the CRT, in the Windows SDK installation folder.

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
