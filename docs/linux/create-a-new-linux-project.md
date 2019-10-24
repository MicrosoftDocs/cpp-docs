---
title: "Create a new C++ Linux project in Visual Studio"
ms.date: "10/24/2019"
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
---

# Create a new Linux project

::: moniker range="vs-2015"

Linux projects are available in Visual Studio 2017 and later.

::: moniker-end

First, make sure you have the **Linux Development Workload** for Visual Studio installed. For more information, see [Download, install, and setup the Linux workload](download-install-and-setup-the-linux-development-workload.md).

When you create a new C++ project for Linux in Visual Studio, you can choose to create a Visual Studio project or a CMake project. This article describes how to create a Visual Studio project. In general, for new projects that might include open-source code or that you intend to compile for cross-platform development, we recommend that you use CMake with Visual Studio. With a CMake project you can build and debug the same project on both Windows and Linux. For more information, see [Create and configure a Linux CMake Project](cmake-linux-project.md).

If you have an existing Windows Visual Studio solution that you would like to extend to compile for Linux, and CMake is not an option, then you can add a Visual Studio Linux project to the Windows solution, along with a **Shared Items** project. Put the code that is shared between both platforms in the Shared Items project, and add a reference to that project from the Windows and Linux projects.

## To create a new Linux project

To create a new Linux project in Visual Studio, follow these steps:

::: moniker range="vs-2019"

1. Select **File > New Project** in Visual Studio, or press **Ctrl + Shift + N**.
1. Set the **Language** to **C++** and search for "Linux". Select the project type to create, and then choose **Next**. Enter a **Name** and **Location**, and choose **Create**.

   ![New Linux Project](media/newproject-vs2019.png)

::: moniker-end

::: moniker range="vs-2017"

1. Select **File > New Project** in Visual Studio, or press **Ctrl + Shift + N**.
1. Select the **Visual C++ > Cross Platform > Linux** node, and then select the project type to create. Enter a **Name** and **Location**, and choose **OK**.

   ![New Linux Project](media/newproject.png)

::: moniker-end

   | Project Type | Description |
   | ------------ | --- |
   | **Blink (Raspberry)**           | Project targeted for a Raspberry Pi device, with sample code that blinks an LED |
   | **Console Application (Linux)** | Project targeted for any Linux computer, with sample code that outputs text to the console |
   | **Empty Project (Linux)**       | Project targeted for any Linux computer, with no sample code |
   | **Makefile Project (Linux)**    | Project targeted for any Linux computer, built using a standard Makefile build system |

   ::: moniker range="vs-2019"

   Visual Studio 2019 enables you to create a new CMake project. For more information, see [Create and configure a Linux CMake Project ](cmake-linux-project.md).
   
   ::: moniker-end

## Next Steps

[Configure a Linux project](configure-a-linux-project.md)
