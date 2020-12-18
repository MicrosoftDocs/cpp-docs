---
title: "vcpkg: a C++ package manager for Windows, Linux, and macOS"
description: "vcpkg is a command-line package manager that greatly simplifies the acquisition and installation of open-source C++ libraries on Windows, macOS, and Linux."
ms.custom: "contperf-fy21q2"
ms.date: 12/11/2020
ms.topic: "overview"
ms.technology: "cpp-ide"
---
# vcpkg: a C++ package manager for Windows, Linux, and macOS

vcpkg is a cross-platform command-line package manager for C and C++ libraries. It simplifies the acquisition and installation of third-party libraries on Windows, Linux, and macOS. If your project uses third-party libraries, we recommend that you use vcpkg to install them. vcpkg supports both open-source and proprietary libraries. All libraries in the vcpkg Windows catalog have been tested for compatibility with Visual Studio 2015, Visual Studio 2017, and Visual Studio 2019. Between the Windows and Linux/macOS catalogs, vcpkg now supports thousands of libraries. The C++ community adds more libraries to both catalogs on an ongoing basis.

## How to get and use vcpkg

Install vcpkg by making a local clone from its GitHub repo [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg). Then run the vcpkg-bootstrapper script to set it up. For detailed installation instructions, see [Install vcpkg](install-vcpkg.md). To integrate vcpkg with your Visual Studio or Visual Studio Code development environment, see [Integrate vcpkg](integrate-vcpkg.md). Then, to use vcpkg to install or update a library, see [Manage libraries with vcpkg](manage-libraries-with-vcpkg.md). For more information about vcpkg commands, see [vcpkg command-line reference](vcpkg-command-line-reference.md).

## How vcpkg works

The vcpkg project is open-source, available on GitHub. A *clone* or local copy of the vcpkg repo contains the vcpkg executable and a *catalog*, a list of packages that describe a library and its options. Each package includes one or more *ports*, information about how to obtain and build the library from sources, or download a binary version, for a specific target environment. When you use vcpkg to install a library, it uses the package and port information to download and produce a local copy of the library in a subdirectory of the vcpkg directory, ready for you to use.

When a library is available in source form, vcpkg downloads sources instead of binaries. It compiles those sources using the most recent version of the C or C++ compiler and tools that it can find. For C++ ABI compatibility, it's important that both your application code and any libraries you use are compiled by the same version of the same compiler. By using vcpkg, you eliminate or at least greatly reduce the potential for mismatched binaries and the problems they can cause. In teams that standardize on a specific version of a compiler, one team member can use vcpkg to download sources and compile a set of binaries. It's inefficient to make everyone on a team download and build common libraries. One team member can use the **`vcpkg export`** command to create a common zip file of the binaries and headers, or a NuGet package. Then, it's easy to share it with other team members.

## Customize vcpkg instances for different targets

You can clone multiple copies, or *instances*, of vcpkg on your machine, and customize each one for specific purposes. In each instance, you can install different libraries, or even different versions of libraries than the ones found in the public catalog. Each instance may be set to produce a custom collection of libraries, using your preferred compiler options. Every instance is a self-contained environment with its own copy of vcpkg.exe that operates only on its own hierarchy. vcpkg isn't added to any environment variables, and has no dependency on the Windows Registry or Visual Studio.

You can also create a vcpkg clone that has private libraries in the ports collection. You can add a port that downloads your prebuilt binaries and headers. Then, write a *portfile.cmake* file that simply copies those files to the preferred location.

## The vcpkg folder hierarchy

All vcpkg functionality and data is self-contained in a single directory hierarchy per instance. There are no registry settings or environment variables. You can have any number of instances of vcpkg on a machine, and they won't interfere with each other.

The contents of a vcpkg instance are:

- *`buildtrees`* - Contains subfolders of sources from which each library is built.
- *`docs`* - documentation and examples.
- *`downloads`* - Cached copies of any downloaded tools or sources. vcpkg searches here first when you run the install command.
- *`installed`* - Contains the headers and binaries for each installed library. When you integrate with Visual Studio, you're essentially telling it add this folder to its search paths.
- *`packages`* - Internal folder for staging between installs.
- *`ports`* - Files that describe each library in the catalog, its version, and where to download it. You can add your own ports if needed.
- *`scripts`* - Scripts (CMake, PowerShell) used by vcpkg.
- *`toolsrc`* - C++ source code for vcpkg and related components.
- *`triplets`* - Contains the settings for each supported target platform (for example, x86-windows or x64-uwp).

## Telemetry

vcpkg collects usage data in order to help us improve your experience. The data collected by Microsoft is anonymous. You can opt-out of telemetry by re-running the **`bootstrap-vcpkg.bat`** or **`bootstrap-vcpkg.sh`** script using the **`-disableMetrics`** option. Or, pass the **`--disable-metrics`** option to vcpkg on the command line. You can also disable metrics by setting the `VCPKG_DISABLE_METRICS` environment variable.

## Send feedback about vcpkg

Use the **`vcpkg contact --survey`** command to send feedback to Microsoft about vcpkg, including bug reports and suggestions for features. For more information, see [vcpkg command-line reference](vcpkg-command-line-reference.md).

## See also

[vcpkg on GitHub](https://github.com/Microsoft/vcpkg)\
[Install vcpkg](install-vcpkg.md)\
[Integrate vcpkg](integrate-vcpkg.md)\
[Manage libraries with vcpkg](manage-libraries-with-vcpkg.md)\
[vcpkg command-line reference](vcpkg-command-line-reference.md)\
[Quick start](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Frequently asked questions](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
