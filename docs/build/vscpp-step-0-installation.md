---
title: Install C++ support in Visual Studio 2017 | Microsoft Docs
description: "Install Visual Studio support for Visual C++"
ms.custom: "mvc"
ms.date: 12/12/2017
ms.topic: "tutorial"
ms.technology: ["devlang-C++"]
ms.devlang: "C++"
dev_langs: ["C++"]
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Install C++ support in Visual Studio

If you haven't downloaded and installed Visual Studio 2017 and the Visual C++ tools yet, here's how to get started.

## Prerequisites

- A broadband internet connection. The Visual Studio installer can download several gigabytes of data.

- A computer that runs Microsoft Windows 7 or later versions. We recommend Windows 10 for the best development experience. Make sure that the latest updates are applied to your system before you install Visual Studio.

- Enough free disk space. Visual Studio requires at least 7GB of disk space, and can take 50GB or more if many common options are installed. We recommend you install it on your C: drive.

For details on the disk space and operating system requirements, see [Visual Studio 2017 System Requirements](https://www.visualstudio.com/productinfo/vs2017-system-requirements-vs). The installer reports how much disk space is required for the options you select.

## Visual Studio 2015 Installation

 To install Visual Studio 2015, go to [Download older versions of Visual Studio](https://www.visualstudio.com/vs/older-downloads/). Run the setup program and choose **Custom installation** and then choose the C++ component. 

 In general, we highly recommend that you use Visual Studio 2017 even if you need to compile your code using the Visual Studio 2015 compiler. For more information, see [Use native multi-targeting in Visual Studio to build old projects](../porting/use-native-multitargeting.md).

## Visual Studio 2017 Installation

1. Download the latest Visual Studio 2017 installer for Windows.

   > [!div class="nextstepaction"]
   > <a target="frameTarget" href="https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15&utm_source=docs&utm_medium=clickbutton">Install Visual Studio 2017 Community</a>

   >[!Tip]
   > The Community edition is for individual developers, classroom learning, academic research, and open source development. For other uses, install <a target="frameTarget" href="https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Professional&rel=15&utm_source=docs&utm_medium=clickbutton">Visual Studio 2017 Professional</a> or <a target="frameTarget" href="https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Enterprise&rel=15&utm_source=docs&utm_medium=clickbutton">Visual Studio 2017 Enterprise</a>.

1. Find the installer file you downloaded and run it. It may be displayed in your browser, or you may find it in your Downloads folder. The installer needs Administrator privileges to run. You may see a **User Account Control** dialog asking you to give permission to let the installer make changes to your system; choose **Yes**. If you are having trouble, find the downloaded file in File Explorer, right-click on the installer icon, and choose **Run as Administrator** from the context menu.

   ![Run the Visual Studio 2017 installer](../build/media/vscpp-concierge-run-installer.gif "Run the Visual Studio installer")

1. The installer presents you with a list of workloads, which are groups of related options for specific development areas. Support for C++ is now part of optional workloads that aren't installed by default.

   ![Desktop development with C++](../build/media/desktop-development-with-cpp.png "Desktop development with C++")

    For C++, select the **Desktop development with C++** workload and then choose **Install**.

   ![Install the Desktop development with C++ workload](../build/media/vscpp-concierge-choose-workload.gif "Install the Desktop development with C++ workload")

1. When the installation completes, choose the **Launch** button to start Visual Studio.

   The first time you run Visual Studio, you are asked to sign in with a Microsoft Account. If you don't have one, you can create one for free. You must also choose a theme. Don't worry, you can change it later if you want to. 

   It may take Visual Studio several minutes to to get ready for use the first time you run it. Here's what it looks like in a quick time-lapse:

   ![Visual Studio 2017 sign in](../build/media/vscpp-quickstart-first-run.gif "Visual Studio 2017 sign in")

   Visual Studio starts much faster when you run it again.

1. When Visual Studio opens, check to see if the flag icon in the title bar is highlighted:

   ![Visual Studio 2017 notification flag](../build/media/vscpp-first-start-page-flag.png "Visual Studio 2017 notification flag")

   If it is highlighted, select it to open the **Notifications** window. If there are any updates available for Visual Studio, we recommend you install them now. Once the installation is complete, restart Visual Studio.

When Visual Studio is running, you are ready to continue to the next step.

## Next Steps

> [!div class="nextstepaction"]
> [Create a C++ project](vscpp-step-1-create.md)

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
