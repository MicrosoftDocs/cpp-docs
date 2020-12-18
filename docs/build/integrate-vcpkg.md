---
title: "Integrate vcpkg with Visual Studio or Visual Studio Code"
description: "Learn how to integrate vcpkg with Visual Studio on Windows, or Visual Studio Code on macOS and Linux."
ms.date: 12/11/2020
ms.technology: "cpp-ide"
---
# Integrate vcpkg with Visual Studio or Visual Studio Code

vcpkg is a cross-platform command-line package manager for C and C++ libraries. You can integrate it with Visual Studio on Windows, or Visual Studio Code on Linux and macOS.

## Integrate with Visual Studio on Windows

### Integrate per-user

From the vcpkg root directory, run **`vcpkg integrate install`** to configure Visual Studio to locate all vcpkg header files and binaries on a per-user basis. There's no need to edit the VC++ Directories paths in Visual Studio. If you have multiple clones of vcpkg, the clone you run this command from becomes the new default location.

Now you can include headers by typing the folder or header name, and autocomplete assists you. You don't need any extra steps to link to libraries or to add project references. The following illustration shows how Visual Studio finds the *`azure-storage-cpp`* headers. vcpkg places its headers in the *`/installed`* subfolder, partitioned by target platform. The following diagram shows the list of include files in the *`/was`* subfolder for the library:

![An IntelliSense autocompletion pop-up window in the Visual Studio editor](media/vcpkg-intellisense.png "vcpkg and IntelliSense")

### Integrate per project

If you need to use a specific version of a library that's different from the version in your active vcpkg instance, follow these steps:

1. Make a new clone of vcpkg. For more information, see [Install vcpkg](install-vcpkg.md).

1. Change to the new vcpkg root directory.

1. Modify the portfile for the library to obtain the version you need.

1. Run **`vcpkg install <library>`**. For more information, see [Manage libraries with vcpkg](manage-libraries-with-vcpkg.md).

1. Use **`vcpkg integrate project`** to create a NuGet package that references that library on a per-project basis.

## Integrate with Visual Studio Code on Linux or macOS

In your shell or Terminal window, change directories to the vcpkg root directory. Then run **`./vcpkg integrate install`** to configure Visual Studio Code on Linux or macOS. This command sets the location of the vcpkg tools and libraries, and enables IntelliSense on source files.

## Remove vcpkg integration

If you've used the **`integrate`** option, you should remove the integration before you remove a vcpkg instance. To remove and clean up your integration, change directories to the vcpkg root directory. On Windows, run **`vcpkg integrate remove`** to ensure the integration gets cleaned up. On Linux or macOS, run the **`./vcpkg integrate remove`** command.

## See also

[vcpkg: a C++ package manager for Windows, Linux, and macOS](./vcpkg.md)\
[vcpkg on GitHub](https://github.com/Microsoft/vcpkg)\
[Install vcpkg](install-vcpkg.md)\
[Manage libraries with vcpkg](manage-libraries-with-vcpkg.md)\
[vcpkg command-line reference](vcpkg-command-line-reference.md)\
[Quick start](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Frequently asked questions](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
