---
title: Install C11 and C17 support in Visual Studio
description: "Install Windows SDK and CRT support for C11 and C17 in Visual Studio"
ms.date: 09/11/2020
helpviewer_keywords: ["Install preview Windows SDK"]
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
---
# Install C11 and C17 support in Visual Studio

::: moniker range="<=msvc-150"

Support for C11 and C17 standards requires Visual Studio 2019 version 16.8 or later. To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end

::: moniker range="msvc-160"

Support for C11 and C17 standards is available starting in Visual Studio 2019 version 16.8. Support requires an updated Universal C Runtime (UCRT) and the latest Windows SDK updates, to work properly with the conforming preprocessor ([`/Zc:preprocessor`](../build/reference/zc-preprocessor.md)).

Windows SDK releases correspond with Windows OS releases. Since there hasn't been a Windows release with these changes, you'll need an *Insider Preview Windows SDK*. That's a preview version of the Windows SDK that corresponds with Windows builds currently being *flighted*, or tested, by Windows Insiders. After you install the Insider Preview Windows 10 SDK, Visual Studio projects configured to use the latest Windows SDK will use the Insider Preview.

## Prerequisites

- Visual Studio 2019 version 16.8 or later installed and running on your computer. In the install, include the Desktop development with C++ workload. You can download the latest Preview from the [Visual Studio Preview](https://visualstudio.microsoft.com/vs/preview/) page. If Visual Studio isn't installed yet, see [Install C++ support in Visual Studio](../build/vscpp-step-0-installation.md) for installation instructions.

## Step 1: Sign in by using an Insider Microsoft Account

Anyone can create a free [Microsoft account](https://signup.live.com/) and then opt into the Insider program. Go to the [Windows Insider Program for Developers](https://insider.windows.com/for-developers) page, choose **Register**, and sign in.

After you register, you're given an option to start flighting Insider versions of Windows. This step isn't necessary to download and use the Insider Windows 10 SDK. When you register for Windows Insider, it doesn't automatically opt in your machines to download new Windows flights.

Once you get to the **Welcome to the Windows Insider Program** page, you don't need to choose **Flight now**. Continue to the next step to download the Insider Preview Windows 10 SDK.

## Step 2: Download the Insider Preview Windows 10 SDK

You can install the Insider Preview Windows SDK from the [Windows Insider Preview Downloads](https://www.microsoft.com/software-download/windowsinsiderpreviewSDK) page. If you see a message that says "you need to be a member of the Windows Insider program," make sure you've signed in. Use the same Microsoft account you used for the Insider program. If you see a message that says "We are sorry, the page you requested cannot be found," try changing the locale in the URL to *en-us*.

The Insider page claims that use of a Windows 10 Insider Preview OS is required. It's only true for some of the content included in the Windows SDK. That content may depend on new APIs not present on older versions of Windows. However, the Windows and Universal C Runtime headers can install and are usable without an Insider OS.

Choose **Get SDK Insider Preview – Build 20211** (or later) to begin the download. Later versions of the Windows SDK will also work.

## Step 3: Install the Insider Preview Windows 10 SDK

The Insider Preview Windows SDK downloads as an *`.iso`* file. Open the folder that contains the downloaded file in File Explorer. Mount the *`.iso`* file, and then run *`WinSDKSetup.exe`* to start installation.

On the **Specify Location** page, select **Install the Windows Software Development Kit - \<version> to this computer**, and then choose **Next**. On the **Windows Kits Privacy** page, select whether to allow Microsoft to collect insights for the Windows 10 Kits, then choose **Next**. Choose **Accept** to accept the license agreement. On the **Select the features you want to install** page, select only these features:  

- Windows SDK Signing Tools for Desktop Apps

- Windows SDK for UWP Managed Apps

- Windows SDK for UWP C++ Apps

- Windows SDK for Desktop C++ x86 Apps (if you plan to build for x86)

- Windows SDK for Desktop C++ amd64 Apps (if you plan to build for amd64)

- Windows SDK for Desktop C++ arm Apps (if you plan to build for arm)

- Windows SDK for Desktop C++ arm64 Apps (if you plan to build for arm64)

![A screenshot of the Windows SDK installer, showing the components selected for installation](media/c11-7-windows-sdk-installer-select-features.png)

Choose **Install** to install the selected SDK components. The SDK takes a couple of minutes to complete installation. When it completes, open Visual Studio.

## Step 4: Configuring C11 or C17 mode in Visual Studio

In Visual Studio, open a new or existing C project, then open your project's **Property Pages** dialog.

Set the project to use the Insiders Preview Windows 10 SDK. On the **Configuration Properties** > **General** page, set the **Windows SDK Version** property either to **10.0 (latest installed version)**, or to the specific preview version you installed.

You'll also see a new option: **C Language Standard**. Set this property to **ISO C11 Standard (`/std:c11`)** or **ISO C17 (2018) Standard (`/std:c17`)**.  

![A screenshot of the Property Pages dialog on the Configuration Properties General page, showing the C Language Standard property drop-down selection as ISO C 17](media/c11-9-project-property-page-c-language-standard.png)

The C++ Language Standard is used when the language is C++. It's the default when the file extension is *`.cpp`*. The C Language Standard version is used when the language is C. It's the default when the file extension is *`.c`*. To build using C11 or C17, put your source code in a *`.c`* file, or set the code to compile as C. You can set this property for your project on the **Configuration Properties** > **C/C++** > **Advanced** page. Set the **Compile As** property to **Compile as C code (/TC)**.

Congratulations, you've set up everything you need to build C11 and C17 code in Visual Studio!

## See also

[`/std` (Specify language standard version)](../build/reference/std-specify-language-standard-version.md)

::: moniker-end
