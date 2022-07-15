---
title: "Install the Embedded workload in Visual Studio"
description: "How to download and install the Embedded workload in Visual Studio."
ms.date: "07/12/2022"
ms.custom: intro-installation
---

# [Visual Studio](#tab/visual-studio)

## Download, install, and set up the Embedded workload

Embedded tooling is supported in Visual Studio 2022 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2022. It's found at the top of the table of contents on this page.

You can use the Visual Studio IDE on Windows to edit and debug Embedded projects.

You can use tools like the [Peripheral Viewer](./peripheral-view.md), [RTOS Viewer](./rtos-view.md), and the [Serial Monitor](./serial-monitor.md) to help interact with and debug your embedded projects.

For any of these scenarios, the **Linux and embedded development with C++** workload is required.

## Visual Studio setup

1. Type "Visual Studio Installer" in the Windows search box:

   ![Screenshot showing the Windows search box.](../../linux/media/visual-studio-installer-search.png)

1. Look for the installer under the **Apps** results and double-click it. When the installer opens, choose **Modify**, and then click on the **Workloads** tab. Scroll down to **Other toolsets** and select the **Linux and embedded development with C++** workload.

   ![Screenshot showing the Visual C++ for Linux Development workload item in Visual Studio Installer.](media/linux-and-embedded-workload.png)

1. Click **Modify** to continue with the installation.

## Next Steps

You're now ready to create or open a Linux project and configure it to run on the target system. For more information, see:

- [Create a new Linux MSBuild C++ project](../../linux/create-a-new-linux-project.md)
- [Configure a Linux CMake project](../../linux/cmake-linux-project.md)

# [Visual Studio Code](#tab/visual-studio-code)

## Install the Embedded extensions in VSCode

Embedded tools like a [Peripheral Viewer](./peripheral-view.md), [RTOS Viewer](./rtos-view.md), and a [Serial Monitor](./serial-monitor.md) are supported in VSCode. This means that you now can use Microsoft tools to help debug your embedded applications in VSCode.

## Visual Studio Code setup

1. Type Visual Studio Code in the Windows search box:

    ![Search-Visual-Studio-Code](media/windows-search-vscode.png)

1. Look for Visual Studio Code under **Apps** and double-click it. When Visual Studio Code opens, open the **Extensions Pane**.

    ![Visual Studio Code Extensions Pane](media/extensions-pane.png)

### Install the Embedded Tools extension

1. Search for and install the [Embedded Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-embedded-tools) extension.

    ![Embedded Tools extension](media/embedded-tools-extension.png)

1. Search for and install the [Serial Monitor](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-serial-monitor) extension.

    ![Serial Monitor extension](media/serial-monitor-extension.png)