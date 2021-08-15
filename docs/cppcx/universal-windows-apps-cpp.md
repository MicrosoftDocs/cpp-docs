---
description: "Learn more about: Universal Windows Apps (C++)"
title: "Universal Windows Apps (C++)"
ms.date: "03/30/2018"
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
ms.topic: "overview"
---
# Universal Windows Apps (C++)

The Universal Windows Platform (UWP) is the modern programming interface for Windows. With UWP you write an application or component once and deploy it on any Windows 10 device. You can write a component in C++ and applications written in any other UWP-compatible language can use it.

Most of the UWP documentation is in the Windows content tree at [Universal Windows Platform documentation](/windows/uwp/). There you will find beginning tutorials as well as reference documentation.

For new UWP apps and components, we recommend that you use [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/), a new standard C++17 language projection for Windows Runtime APIs. C++/WinRT is available in the Windows 10 SDK from version 1803 onward. C++/WinRT is implemented entirely in header files, and is designed to provide you with first-class access to the modern Windows API. Unlike the C++/CX implementation, C++/WinRT doesn't use non-standard syntax or Microsoft language extensions, and it takes full advantage of the C++ compiler to create highly-optimized output. For more information, see [Introduction to C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt).

You can use the Desktop Bridge app converter to package your existing desktop application for deployment through the Microsoft Store. For more information, see [Using Visual C++ Runtime in Centennial project](https://devblogs.microsoft.com/cppblog/using-visual-c-runtime-in-centennial-project/) and [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## UWP apps that use C++/CX

[C++/CX language reference](visual-c-language-reference-c-cx.md)\
Describes the set of extensions that simplify C++ consumption of Windows Runtime APIs and enable error handling that's based on exceptions.

[Building apps and libraries (C++/CX)](building-apps-and-libraries-c-cx.md)\
Describes how to create DLLs and static libraries that can be accessed from a C++/CX app or component.

[Tutorial: Create a UWP "Hello, World" app in C++/CX](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)\
A walkthrough that introduces the basic concepts of UWP app development in C++/CX.

[Creating Windows Runtime Components in C++/CX](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)\
Describes how to create DLLs that other UWP apps and components can consume.

[UWP game programming](/windows/uwp/gaming/)\
Describes how to use DirectX and C++/CX to create games.

## UWP Apps that Use the Windows Runtime C++ Template Library (WRL)

The Windows Runtime C++ Template Library provides the low-level COM interfaces by which ISO C++ code can access the Windows Runtime in an exception-free environment. In most cases, we recommend that you use C++/WinRT or C++/CX instead of the Windows Runtime C++ Template Library for UWP app development. For information about the Windows Runtime C++ Template Library, see [Windows Runtime C++ Template Library (WRL)](wrl/windows-runtime-cpp-template-library-wrl.md).

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)<br/>
[Overview of Windows Programming in C++](../windows/overview-of-windows-programming-in-cpp.md)<br/>
