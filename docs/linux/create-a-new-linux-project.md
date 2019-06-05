---
title: "Create a new C++ Linux project in Visual Studio"
ms.date: "06/07/2019"
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
---

# Create a new Linux project

First, make sure you have the **Linux Development Workload** for Visual Studio installed. For more information, see [Download, install, and setup the Linux workload](download-install-and-setup-the-linux-development-workload.md).

When creating a new C++ project in Visual Studio for Linux, you have the choice of creating a Visual Studio project, or a CMake project. This topic describes how to create a Visual Studio project. For information about creating and working with existing CMake Projects, see [Configure a Linux CMake Project ](cmake-linux-project.md).

To create a new Linux project in Visual Studio, do the following:

::: moniker range="vs-2019"

1. Select **File > New Project** in Visual Studio, or press **Ctrl + Shift + N**.
1. Set the **Language** to **C++** and search for "Linux". Select the project type you would like to create. Click **Next**, then enter a Name and Location, and click **Create**.

   ![New Linux Project](media/newproject-vs2019.png)

::: moniker-end

::: moniker range="vs-2017"

1. Select **File > New Project** in Visual Studio, or press **Ctrl + Shift + N**.
1. Select the **Visual C++ > Cross Platform > Linux** node and then select the project type you would like to create, enter a Name and Location, and click **OK**.

   ![New Linux Project](media/newproject.png)

::: moniker-end



   | Project Type | Description
   | ------------ | ---
   | **Blink (Raspberry)**           | Project targeted for a Raspberry Pi device with sample code written to blink an LED
   | **Console Application (Linux)** | Project targeted for any Linux computer with sample code written to output text to the console
   | **Empty Project (Linux)**       | Project targeted for any Linux computer with no sample code written
   | **Makefile Project (Linux)**    | Project targeted for any Linux computer which will be built using a standard Makefile build system

## Next Steps

[Configure a Linux project](configure-a-linux-project.md)