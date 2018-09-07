---
title: "Visual C++ Language Reference (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "09/15/2017"
ms.technology: "cpp-windows"
ms.topic: "language-reference"
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Visual C++ Language Reference (C++/CX)

C++/CX is a set of extensions to the C++ language that enable the creation of Windows apps and Windows Runtime components in an idiom that is as close as possible to modern C++. Use C++/CX to write Windows apps and components in native code that easily interact with Visual C#, Visual Basic, and JavaScript, and other languages that support the Windows Runtime. In those rare cases that require direct access to the raw COM interfaces, or non-exceptional code, you can use the [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).

> [!NOTE]
> C++/WinRT is a new, standard C++17 language projection for Windows Runtime APIs. It's available in the latest Windows 10 SDK from version 1803 onward. C++/WinRT is implemented entirely in header files, and designed to provide you with first-class access to the modern Windows API.

> With C++/WinRT, you can both consume and author Windows Runtime APIs using any standards-compliant C++17 compiler. C++/WinRT typically performs better and produces smaller binaries than any other language option for the Windows Runtime. We will continue to support C++/CX and WRL, but highly recommend that new applications use C++/WinRT. For more information, see [C++/WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/index).

By using C++/CX, you can create:

- C++ Universal Windows Platform (UWP) apps that use XAML to define the user interface and use the native stack. For more information, see [Create a "hello world" app in C++ (UWP)](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

- C++ Windows Runtime components that can be consumed by JavaScript-based Windows apps. For more information, see [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

- Windows DirectX games and graphics-intensive apps. For more information, see [Create a simple UWP Game with DirectX](/windows/uwp/gaming/tutorial--create-your-first-metro-style-directx-game).

## Related articles

|||
|-|-|
|[Quick Reference](../cppcx/quick-reference-c-cx.md)|Table of keywords and operators for C++/CX.|
|[Type System](../cppcx/type-system-c-cx.md)|Describes basic C++/CX types and programming constructs, and how to utilize C++/CX to consume and create Windows Runtime types.|
|[Building apps and libraries](../cppcx/building-apps-and-libraries-c-cx.md)|Discusses how to use the IDE to build apps and link to static libraries aned DLLs.|
|[Interoperating with Other Languages](../cppcx/interoperating-with-other-languages-c-cx.md)|Discusses how components that are written by using C++/CX can be used with components that are written in JavaScript, any managed language, or the Windows Runtime C++ Template Library.|
|[Threading and Marshaling](../cppcx/threading-and-marshaling-c-cx.md)|Discusses how to specify the threading and marshaling behavior of components that you create.|
|[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)|Reference documentation for the default namespace, the Platform namespace, Platform::Collections, and related namespaces.|
|[CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md)|Lists the CRT functions that are not available for use in Windows Runtime apps.|
|[How to guides for Windows 10 apps](https://msdn.microsoft.com/library/windows/apps/xaml/mt244352.aspx)|Provides high-level guidance about Windows 10 apps and links to more information.|
|[C++/CX Part 0 of \[n\]: An Introduction](https://blogs.msdn.microsoft.com/vcblog/2012/08/29/ccx-part-0-of-n-an-introduction/)<br /><br />[C++/CX Part 1 of \[n\]: A Simple Class](https://blogs.msdn.microsoft.com/vcblog/2012/09/05/ccx-part-1-of-n-a-simple-class/)<br /><br />[C++/CX Part 2 of \[n\]: Types That Wear Hats](https://blogs.msdn.microsoft.com/vcblog/2012/09/17/ccx-part-2-of-n-types-that-wear-hats/)<br /><br />[C++/CX Part 3 of \[n\]: Under Construction](https://blogs.msdn.microsoft.com/vcblog/2012/10/05/ccx-part-3-of-n-under-construction/)<br /><br />[C++/CX Part 4 of \[n\]: Static Member Functions](https://blogs.msdn.microsoft.com/vcblog/2012/10/19/ccx-part-4-of-n-static-member-functions/)|An introductory Visual C++ blog series on C++/CX.|
