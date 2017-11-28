---
title: "Overview of Windows Programming in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/28/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
ms.assetid: efc691d7-21f3-47ae-ae56-cab999ccf59d
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Overview of Windows Programming in C++

You can use Visual C++ to write many kinds of programs that run on a Windows PC (x86, x64 or ARM), on a Windows server, in the cloud, or on Xbox. Well-written C++ programs have these qualities:
- efficient in memory requirements
- economical in power consumption 
- able to take full advantage of multicore and many-core devices
- able to do general computing on the graphics processing unit (GPGPU)   
- able to take advantage of other recent advances in hardware.

There are several broad categories of Windows apps that you can develop with Visual C++. These categories have different programming models, or app models, which have been introduced over the years. Each model uses different libraries and APIs to provide access to the platform and create user interfaces such as windows and dialog boxes. The C++ standard library as well as third-party libraries can be used in any of these categories, with a few restrictions for UWP.

##  <a name="BK_WindowsUniversal"></a> Universal Windows Platform (UWP)

UWP apps are able to run on all Windows 10 devices such as tablets and mobile phones, as well as on the desktop. On the desktop, they are able to run as a desktop window, instead of always running full-screen. These apps can also run on the Xbox, and on future devices.  UWP apps run on the Windows Runtime, which provides user interface elements, services, and an interface to the diverse hardware devices that are supported on Windows.  

You can write UWP apps in C++/CX, a dialect of C++, you can use the [C++/WinRT library](https://moderncpp.com/)for some scenarios. UWP apps compile to native code and have a XAML user interface, or use DirectX. Windows Runtime components that are written in native code that UWP apps written in other languages can consume. For more information, see [Create a Universal Windows Platform app in C++](http://go.microsoft.com/fwlink/?LinkID=534976), [Create your first UWP game using DirectX](http://go.microsoft.com/fwlink/p/?LinkId=244656), and [Creating Windows Runtime components in C++](http://go.microsoft.com/fwlink/p/?LinkId=244658).

 On Windows 10, you can use Desktop Bridge to package your existing desktop application as-is for deployment through the Microsoft Store or through your regular channels via side-loading. For more information, see [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

For Universal Windows Platform samples, see [Windows Universal Samples on GitHub](https://github.com/Microsoft/Windows-universal-samples)

If you have an existing Windows 8.1 project and want to port it to Windows 10, see [Porting to the Universal Windows Platform](../porting/porting-to-the-universal-windows-platform-cpp.md). If you have existing classic Win32 desktop libraries and code that you want to integrate into a UWP app, see [How to: Use Existing C++ Code in a Universal Windows Platform App](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).

For more information on UWP in general, see [What's a Universal Windows Platform (UWP) app?](/windows/uwp/get-started/whats-a-uwp).

## Cloud Applications
You can write Azure native code assemblies in C++ and call into them from Web Roles that are created in C#. For more information, see [C and C++ Developer Center](https://azure.microsoft.com/en-us/develop/cpp/).

##  <a name="BK_Native"></a> Desktop and Server applications

To learn the basics of writing Windows client applications for the desktop, see [Developing Windows Applications in C++](http://msdn.microsoft.com/vstudio//hh304489) and [Introduction to Windows Programming in C++](http://msdn.microsoft.com/library/windows/desktop/ff381398\(v=vs.85\).aspx).

On Windows 10, you can use Visual C++ to create many kinds of desktop programs:

- Command-line apps and utilities. For more information, see [Console Applications](../windows/console-applications-in-visual-cpp.md).

- Consumer applications that have sophisticated graphical user interfaces. For more information, see [Hilo: Developing C++ Applications for Windows](http://go.microsoft.com/fwlink/p/?LinkId=256417)

- Enterprise and line-of-business apps that run on the .NET Framework. Most .NET Framework applications are written in C# or Visual Basic. You can use C++/CLI to create interop layers that enable .NET code to consume native C++ libraries. For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

- SQL database clients that run in native code. For more information, see [SQL Server Native Client](/sql/relational-databases/native-client/odbc/sql-server-native-client-odbc).

- Add-ins for Microsoft Office applications. For more information, see [Building a C++ Add-in for Outlook 2010](http://go.microsoft.com/fwlink/p/?LinkId=256420)

- Device drivers. For more information, see [Windows Driver Kit (WDK)](http://go.microsoft.com/fwlink/p/?LinkId=256421)

- Windows services. For more information, see [Introduction to Windows Service Applications](/dotnet/framework/windows-services/introduction-to-windows-service-applications).

You can use Visual C++ to package almost any kind of custom high-performance functionality in Win32 DLLs or in COM DLLs that can be consumed by C++ apps or by apps that are written in other languages—for example, C# or Visual Basic. For more information about WIn32 DLLs, see [DLLs in Visual C++](../build/dlls-in-visual-cpp.md). For more information about COM development, see [Component Object Model (COM)](https://msdn.microsoft.com/library/windows/desktop/ms680573).

## Games

DirectX games can run on the PC or Xbox. For more information, see [DirectX Developer Center](http://go.microsoft.com/fwlink/p/?LinkId=256418).

## SDKs, libraries, and header files

Visual C++ includes the C Runtime Library (CRT), the C++ Standard Library, and other Microsoft-specific libraries. The include folders that contain header files for these libraries are located either in the Visual Studio installation directory under the \VC\ folder, or in the case of the CRT, in the Windows SDK installation folder.   

You can use the [Vcpkg package manager](../vcpkd.md) to conveniently install hundreds of third-party open-source libraries for Windows.

The Microsoft libraries include:

- Microsoft Foundation Classes (MFC): An object-oriented framework for creating traditional Windows programs—especially enterprise applications—that have rich user interfaces that feature buttons, list boxes, tree views, and other controls. For more information, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md).

- Active Template Library (ATL): A powerful helper library for creating COM components. For more information, see [ATL COM Desktop Components](../atl/atl-com-desktop-components.md).

- C++ AMP (C++ Accelerated Massive Parallelism): A library that enables high-performance general computational work on the GPU. For more information, see [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).

- Concurrency Runtime: A library that simplifies the work of parallel and asynchronous programming for multicore and many-core devices. For more information, see [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

Many Windows programming scenarios also require the Windows SDK, which includes the header files that enable access to the Windows operating system components. By default, Visual Studio installs the Windows SDK as a component of the C++ Desktop workload, which enables development of Universal Windows apps. To develop UWP apps, you need the Windows 10 version of the Windows SDK. For information, see [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk). (For more information about the Windows SDKs for earlier versions of Windows, see the [Windows SDK archive](https://developer.microsoft.com/windows/downloads/sdk-archive)). 

**Program Files (x86)\Windows Kits** is the default location for for all versions of the Windows SDK that you have installed.

Other platforms such as Xbox and Azure have their own SDKs that you may have to install. For more information, see the DirectX Developer Center and the Azure Developer Center.

## Development Tools

Visual Studio includes a powerful debugger for native code, static analysis tools, graphics debugging tools, a full-featured code editor, support for unit tests, and many other tools and utilities. For more information, see [Get started developing with Visual Studio](/visualstudio/ide/get-started-developing-with-visual-studio), and [IDE and Development Tools](../ide/ide-and-tools-for-visual-cpp-development.md).

## Related Articles

|Title|Description|
|-----------|-----------------|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Parent topic for Visual C++ developer content.|