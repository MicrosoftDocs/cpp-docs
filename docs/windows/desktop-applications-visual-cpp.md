---
description: "Learn more about: Desktop Applications (Visual C++)"
title: "Desktop Applications (Visual C++)"
ms.date: "07/28/2019"
ms.assetid: a020b534-293c-44e2-aa48-516c43ddeb8f
ms.topic: "overview"
---
# Desktop Applications (Visual C++)

A *desktop application* in C++ is a native application that can access the full set of Windows APIs and either runs in a window or in the system console. Desktop applications in C++ can run on Windows XP through Windows 10 (although Windows XP is no longer officially supported and there are many Windows APIs that have been introduced since then).

A desktop application is distinct from a Universal Windows Platform (UWP) app, which can run on PCs running Windows 10, and also on XBox, Windows Phone, Surface Hub, and other devices. For more information about desktop vs. UWP applications, see [Choose your technology](/windows/win32/choose-your-technology).

## Desktop Bridge

In Windows 10 you can package your existing desktop application or COM object as a UWP app and add UWP features such as touch, or call APIs from the modern Windows API set. You can also add a UWP app to a desktop solution in Visual Studio, and package them together in a single package and use Windows APIs to communicate between them.

In Visual Studio 2017 version 15.4 and later, you can create a Windows Application Package Project to greatly simplify the work of packaging your existing desktop application. A few restrictions apply with respect to what registry calls or APIs your desktop application uses, but in many cases you can create alternate code paths to achieve similar functionality while running in an app package. For more information, see [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## Terminology

- A *Win32* application is a Windows desktop application in C++ that can make use of native [Windows C APIs and/or COM APIs](/windows/win32/apiindex/windows-api-list) CRT and Standard Library  APIs, and 3rd party libraries. A Win32 application that runs in a window requires the developer to work explicitly with Windows messages inside a Windows procedure function. Despite the name, a Win32 application can be compiled as a 32-bit (x86) or 64-bit  (x64) binary. In the Visual Studio IDE, the terms x86 and Win32 are synonymous.

- The [Component Object Model (COM)](/windows/win32/com/the-component-object-model) is a specification that enables programs written in different languages to communicate with one another. Many Windows components are implemented as COM objects and follow standard COM rules for object creation, interface discovery and object destruction.  Using COM objects from C++ desktop applications is relatively straightforward, but writing your own COM object is more advanced. The [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) provides macros and helper functions that simplify COM development.

- An MFC application is a Windows desktop application that use the [Microsoft Foundation Classes](../mfc/mfc-desktop-applications.md) to create the user interface. An MFC application can also use COM components as well as CRT and Standard Library APIs. MFC provides a thin C++ object-oriented wrapper over the window message loop and Windows APIs. MFC is the default choice for applications—especially enterprise-type applications—that have lots of user interface controls or custom user controls. MFC provides convenient helper classes for window management, serialization, text manipulation, printing, and modern user interface elements such as the ribbon. To be effective with MFC you should be familiar with Win32.

- A C++/CLI application or component uses extensions to C++ syntax (as allowed by the C++ Standard) to enable interaction between .NET and native C++code.  A C++/CLI application can have parts that run natively and parts that run on the .NET Framework with access to the .NET Base Class Library. C++/CLI is the preferred option when you have native C++ code that needs to work with code written in C# or Visual Basic. It is intended for use in .NET DLLs rather than in user interface code. For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Any desktop application in C++ can use C Runtime (CRT) and Standard Library classes and functions, COM objects, and the public Windows functions, which collectively are known as the Windows API. For an introduction to Windows desktop applications in C++, see [Get Started with Win32 and C++](/windows/win32/LearnWin32/learn-to-program-for-windows).

## In this section

|Title|Description|
|-----------|-----------------|
|[Windows Console Applications in C++](./overview-of-windows-programming-in-cpp.md)|Contains information about console apps. A Win32 (or Win64) console application has no window of its own and no message loop. It runs in the console window, and input and output are handled through the command line.|
|[Walkthrough: Creating Windows Desktop Applications (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Create a simple Windows desktop application.|
|[Creating an Empty Windows Desktop Application](./overview-of-windows-programming-in-cpp.md)|How to create a Windows desktop project that has no default files.|
|[Adding Files to an Empty Win32 Applications](./overview-of-windows-programming-in-cpp.md)|How to add files to an empty project.|
|[Working with Resource Files](working-with-resource-files.md)|How to add images, icons, string tables, and other resources to a desktop application.|
|[Resources for Creating a Game Using DirectX (C++)](resources-for-creating-a-game-using-directx.md)|Links to content for creating games in C++.|
|[Walkthrough: Creating and Using a Static Library](../build/walkthrough-creating-and-using-a-static-library-cpp.md)|How to create a .lib binary file.|
|[How to: Use the Windows 10 SDK in a Windows Desktop Application](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contains steps for setting up your project to build using the Windows 10 SDK.|

## Related Articles

|Title|Description|
|-----------|-----------------|
|[Windows Development](/windows/win32/index)|Contains information about the Windows API and COM. (Some Windows APIs and third-party DLLs are implemented as COM objects.)|
|[Hilo: Developing C++ Applications for Windows 7](/previous-versions/msdn10/ff708696(v=msdn.10))|Describes how to create a rich-client Windows desktop application that uses Windows Animation and Direct2D to create a carousel-based user interface.  This tutorial has not been updated since Windows 7 but it still provides a thorough introduction to Win32 programming.|
|[Overview of Windows Programming in C++](overview-of-windows-programming-in-cpp.md)|Describes key features of Windows desktop programming in C++.|

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
