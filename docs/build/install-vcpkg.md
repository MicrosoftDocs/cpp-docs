---
title: "Install vcpkg on Windows, Linux, and macOS"
description: "Learn how to install and update vcpkg on Windows, macOS, and Linux."
ms.date: 12/17/2020
ms.topic: "reference"
ms.technology: "cpp-ide"
---
# Install vcpkg on Windows, Linux, and macOS

You install vcpkg by making a local clone (copy) from the vcpkg GitHub repo.

## Install vcpkg

Choose your platform for specific instructions:

### [Linux](#tab/linux)

Prerequisites for Linux:

- [Git](https://git-scm.com/downloads)
- g++ version 6 or greater

#### To install Linux development tools

Different Linux distros may require you install different packages. Follow these instructions on Debian, Ubuntu, popOS, and other Debian-based distributions:

1. In a shell window, run this command:

   **`sudo apt-get update`**

1. When the update completes, run this command:

   **`sudo apt-get install build-essential tar curl zip unzip`**

Follow these instructions on CentOS:

1. In a shell window, run this command:

   **`sudo yum install centos-release-scl`**

1. Next, install and enable the development tools by running these commands:

   **`sudo yum install devtoolset-7`**

   **`scl enable devtoolset-7 bash`**

For any other distributions, make sure you're installing g++ 6 or above.

#### To copy and set up vcpkg on Linux

1. In a shell window, create a directory for your cloned instance of vcpkg. If you plan to install libraries for different build targets, it's a good idea to include the target in the directory name. We recommend short path names without spaces, like *`./x64`* or *`./iot`*, since otherwise you may run into path issues for some port build systems. In the shell window, change to the directory you just made.

1. Clone the vcpkg repo from GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg).

   > **`git clone https://github.com/microsoft/vcpkg`**

   This command creates a local copy of the repo in a *`vcpkg`* subdirectory. This location is the vcpkg *root directory* for this clone of vcpkg.

1. Next, change to the vcpkg root directory, and run the vcpkg bootstrapper command:

   > **`./bootstrap-vcpkg.sh`**

   The bootstrapper configures vcpkg with the locations of the compiler, tools, and standard libraries.

### [macOS](#tab/macos)

Prerequisites for macOS:

- macOS developer tools
- On macOS 10.14 or below, you will also need:
  - Homebrew
  - g++ version 6 or greater

#### To install macOS developer tools

1. On macOS 10.15, run this command in Terminal:

   **`xcode-select --install`**

   Then follow along with the prompts in the windows that comes up.

On macOS 10.14 and previous, you'll also need to install g++ from homebrew. This procedure is only necessary if you're using a macOS version before 10.15.

#### To install GCC for macOS before 10.15

1. To install Homebrew, open Terminal, and then run the following command:

   **`/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"`**

1. To install an up-to-date version of gcc, run this command in Terminal:

   **`brew install gcc`**

#### To copy and set up vcpkg on macOS

1. In Terminal, create a directory for your cloned instance of vcpkg. If you plan to install libraries for different build targets, it's a good idea to include the target in the directory name. We recommend short path names without spaces, like *`./macos`* or *`./iot`*, since otherwise you may run into path issues for some port build systems. In Terminal, change to the directory you just made.

1. Clone the vcpkg repo from GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg).

   > **`git clone https://github.com/microsoft/vcpkg`**

   This command creates a local copy of the repo in a *`vcpkg`* subdirectory. This location is the vcpkg *root directory* for this clone of vcpkg.

1. Next, change to the vcpkg root directory, and run the vcpkg bootstrapper command:

   > **`./bootstrap-vcpkg.sh`**

   The bootstrapper configures vcpkg with the locations of the compiler, tools, and standard libraries.

### [Windows](#tab/windows)

Prerequisites:

- Windows 7 or newer
- [Git for Windows](https://git-scm.com/downloads)
- [Visual Studio](https://visualstudio.microsoft.com/) 2015 Update 3 or greater with the English language pack

#### To copy and set up vcpkg on Windows

1. In a Command Prompt window, create a directory for your cloned instance of vcpkg. If you plan to install libraries for different build targets, it's a good idea to include the target in the directory name. We recommend short path names without spaces, like *`C:\src\win32\`* or *`C:\dev\iot\`*, since otherwise you may run into path issues for some port build systems. In the command window, change to the directory you just made.

1. Clone the vcpkg repo from GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg).

   > **`git clone https://github.com/microsoft/vcpkg`**

   This command creates a local copy of the repo in a *`vcpkg`* subdirectory. This location is the vcpkg *root directory* for this clone of vcpkg.

1. Once the download is complete, change to the *`vcpkg`* directory in your command prompt window.

1. In the vcpkg root directory, run the vcpkg bootstrapper command:

   > **`bootstrap-vcpkg.bat`**

   The bootstrapper configures vcpkg with the locations of the Microsoft C/C++ tools, libraries, and the Windows SDK.

---

Once vcpkg is set up, you're ready to install libraries. For more information, see [Manage libraries with vcpkg](manage-libraries-with-vcpkg.md). vcpkg can also be integrated with Visual Studio on Windows, or with Visual Studio Code on any platform. For more information, see [Integrate vcpkg](integrate-vcpkg.md).

## Update vcpkg

The vcpkg package manager is updated regularly on GitHub. To update your clone of vcpkg to the latest version, from the vcpkg root directory, run **`git pull`**. This command syncs your copy of vcpkg with the version on GitHub. After download is complete, run the bootstrapper again. The bootstrapper rebuilds the vcpkg program, but leaves your installed libraries in place.

## Uninstall vcpkg

To uninstall vcpkg, just delete the *`vcpkg`* directory. Deleting this directory uninstalls the vcpkg distribution, and all the libraries that vcpkg has installed.

However if you have executed **`vcpkg integrate install`** you should execute **`vcpkg integrate remove`** to ensure the integration is cleaned, before the folder is removed. For more information, see [Integrate vcpkg](integrate-vcpkg.md).

## See also

[vcpkg: a C++ package manager for Windows, Linux, and macOS](./vcpkg.md)\
[vcpkg on GitHub](https://github.com/Microsoft/vcpkg)\
[Integrate vcpkg](integrate-vcpkg.md)\
[Manage libraries with vcpkg](manage-libraries-with-vcpkg.md)\
[vcpkg command-line reference](vcpkg-command-line-reference.md)\
[Quick start](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Frequently asked questions](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
