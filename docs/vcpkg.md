---
title: vcpkg-- A C++ package manager for Windows, Linux and MacOS | Microsoft Docs
description: vcpkg is a command line package manager that greatly simplifies the acquisition and installation of open-source C++ libraries on Windows.
keywords: vcpkg
author: mikeblome
ms.author: mblome
ms.date: 05/14/2018
ms.technology: ["cpp-ide"]
ms.tgt_pltfrm: "windows"
ms.assetid: f50d459a-e18f-4b4e-814b-913e444cedd6
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.workload: ["cplusplus"]
---
# vcpkg: A C++ package manager for Windows, Linux and MacOS

vcpkg is a command-line package manager that greatly simplifies the acquisition and installation of third-party libraries on Windows, Linux and MacOS. If your project uses third-party libraries, we recommend that you use vcpkg to install them. vcpkg supports both open-source and proprietary libraries. All libraries in the vcpkg Windows catalog have been tested for compatibility with Visual Studio 2015 and Visual Studio 2017. As of May 2018 there are over 900 libraries in the Windows catalog and over 350 in the Linux/MacOS catalog. The C++ community is adding more libraries to both catalogs on an ongoing basis.

## Simple yet flexible

With a single command, you can download sources and build a library. vcpkg is itself an open-source project, available on GitHub. You can customize your private clone(s) in any way you like. For example, you can specify different libraries, or different versions of libraries than what are found in the public catalog. You can have multiple clones of vcpkg on a single machine, each one producing custom sets of libraries and/or compilation switches, etc. Each clone is a self-contained, x-copyable environment with its own copy of vcpkg.exe that operates only on its own hierarchy. vcpkg is not added to any environment variables, and has no dependency on the Windows Registry or Visual Studio.

## Sources not binaries

For libraries in the Windows catalog, vcpkg downloads sources instead of binaries[1]. It compiles those sources using Visual Studio 2017, or Visual Studio 2015 if 2017 is not installed. In C++, it is very important that any libraries you use are complied with the same compiler, and compiler version, as the application code that links to it. By using vcpkg, you eliminate or at least greatly reduce the potential for mismatched binaries and the problems they can cause. In teams that are standardized on a specific version of a compiler, one team member can use vcpkg to download sources and compile a set of binaries and then use the export command to zip up the binaries and headers for other team members. For more information, see [Export compiled binaries and headers](#export_binaries_per_project) below.

If you create a vcpkg clone with private libraries in the ports collection, you can add a port that downloads prebuilt binaries and headers and write a portfile.cmake file that simply copies those files to the desired location.

[1] *Note: for some proprietary libraries, sources are not available. Vcpkg will download compatible prebuilt binaries in these cases.*

## Installation

Clone the vcpkg repo from GitHub: https://github.com/Microsoft/vcpkg. You can download to any folder location you prefer.

Run the bootstrapper in the root folder:

- **bootstrap-vcpkg.bat** (Windows)
- **./bootstrap-vcpkg.sh** (Linux, MacOS)

## Search the list of available libraries

To see what packages are available, at the command prompt type: **vcpkg search**

This command enumerates the control files in the vcpkg/ports subfolders. You will see a listing like this:

```cmd
ace       6.4.3   The ADAPTIVE Communication Environment
anax      2.1.0-1 An open source C++ entity system. \<https://github...
antlr4    4.6-1   ANother Tool for Language Recognition
apr       1.5.2   The Apache Portable Runtime (APR) is a C library ...
asio      1.10.8  Asio is a cross-platform C++ library for network ...
assimp    3.3.1   The Open Asset import library
atk       2.24.0  GNOME Accessibility Toolkit
...
```

You can filter on a pattern, for example **vcpkg search ta**:

```cmd
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library

```

### Install a library on your local machine

After you get the name of a library by using **vcpkg search**, you use **vcpkg install** to download the library and compile it. vcpkg uses the library's portfile in the ports directory. If no triplet is specified, vcpkg will install and compile for the default triplet for the target platform: x86-windows, x64-linux.cmake, or x64-osx.cmake.

For Linux libraries, vcpkg depends on gcc being installed on the local machine. On MacOS, vcpkg uses Clang.

If the portfile specifies dependencies, vcpkg downloads and installs those also. After downloading, vcpkg builds the library by using whatever build system the library uses. CMake and (on Windows) MSBuild projects are preferred, but MAKE is supported along with any other build system. If vcpkg cannot find the specified build system on the local machine, it downloads and installs it.

```cmd
> vcpkg install boost:x86-windows

The following packages will be built and installed:
    boost:x86-windows
  * bzip2:x86-windows
  * zlib:x86-windows
Additional packages (*) will be installed to complete this operation.

```

For CMAKE projects, use CMAKE_TOOLCHAIN_FILE to make libraries available with `find_package()`. For example:

```cmd
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake (Linux/MacOS)
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg\scripts\buildsystems\vcpkg.cmake (Windows)
```

## List the libraries already installed

After you have installed some libraries, you can use **vcpkg list** to see what you have:

```cmd
> vcpkg list

boost:x86-windows       1.64-3   Peer-reviewed portable C++ source libraries
bzip2:x86-windows       1.0.6-1  High-quality data compressor.
cpprestsdk:x86-windows  2.9.0-2  C++11 JSON, REST, and OAuth library The C++ REST ...
openssl:x86-windows     1.0.2k-2 OpenSSL is an open source project that provides a...
websocketpp:x86-windows 0.7.0    Library that implements RFC6455 The WebSocket Pro...
zlib:x86-windows        1.2.11   A compression library
```

## Integrate with Visual Studio (Windows)

### Per-user

Run **vcpkg integrate install** to configure Visual Studio to locate all vcpkg header files and binaries on a per-user basis without the need for manual editing of VC++ Directories paths. If you have multiple clones, the clone from which you run this command becomes the new default location.

Now you can #include headers simply by typing the folder/header, and auto-complete assists you. No additional steps are required for linking to libs or adding project references. The following illustration shows how Visual Studio finds the azure-storage-cpp headers. vcpkg places its headers in the **/installed** subfolder, partitioned by target platform. The following diagram shows the list of include files in the **/was** subfolder for the library:

![vcpkg IntelliSense integration](media/vcpkg-intellisense.png "vcpkg and IntelliSense")

### Per project

If you need to use a specific version of a library that is different from the version in your active vcpkg instance, follow these steps:

1. Make a new clone of vcpkg
1. Modify the portfile for the library to obtain the version you need
1. Run **vcpkg install \<library>**.
1. Use **vcpkg integrate project** to create a NuGet package that references that library on a per-project basis.

## Integrate with Visual Studio Code (Linux/MacOS)

Run **vcpkg integrate install** to configure Visual Studio Code on Linux/MacOS with the location of the vcpkg enlistement and enable IntelliSense on source files.

## Target Linux from Windows via WSL

You can produce Linux binaries from a Windows machine by using the Windows Subsystem for Linux (WSL). Follow the instructions to [Set up WSL on Windows 10](/windows/wsl/install-win10), and configure it with the [Visual Studio extension for Linux](https://blogs.msdn.microsoft.com/vcblog/2017/02/08/targeting-windows-subsystem-for-linux-from-visual-studio/). You can put all your built libraries for both Windows and Linux into the same folder and access it from both Windows and WSL.

## <a name="export_binaries_per_project"></a> Export compiled binaries and headers

Requiring everyone on a team to download and build libraries can be inefficient. A single team member can do that work, and then use **vcpkg export** to create a zip file of the binaries and headers, or a NuGet package (various format available), that can be easily shared with other team members.

## Update/upgrade installed libraries

The public catalog is kept up-to-date with the latest versions of the libraries. To determine which of your local libraries are out-of-date, use **vcpkg update**. When you're ready to update your ports collection to the latest version of the public catalog, run the **vcpkg upgrade** command to automatically download and rebuild any or all of your installed libraries that are out of date.

By default, the **upgrade** command only lists the libraries that are out of date; it doesn’t upgrade them. To perform the upgrade, use the **--no-dry-run** option.

```cmd
  vcpkg upgrade --no-dry-run
```

### Upgrade Options

- **--no-dry-run**  Perform the upgrade; when not specified, the command only lists the out-of-date packages.
- **--keep-going**  Continue installing packages even if one fails.
- **--triplet \<t>**  Set the default triplet for unqualified packages.
- **--vcpkg-root \<path>**  Specify the vcpkg directory to use instead of current directory or tool directory.

### Upgrade example

The following example shows how to upgrade only specified libraries. Note that vcpgk automatically pulls in dependencies as necessary.

```cmd
c:\users\satyan\vcpkg> vcpkg upgrade tiny-dnn:x86-windows zlib
The following packages are up-to-date:
   tiny-dnn:x86-windows

The following packages will be rebuilt:
    * libpng[core]:x86-windows
    * tiff[core]:x86-windows
      zlib[core]:x86-windows
Additional packages (*) will be modified to complete this operation.
If you are sure you want to rebuild the above packages, run this command with the --no-dry-run option.
```

## Contribute new libraries

You can include any libraries you like in your private ports collection. To suggest a new library for the public catalog, open an issue on the [GitHub vcpkg issue page](https://github.com/Microsoft/vcpkg/issues).

## Remove a library

Type **vcpkg remove** to remove an installed library. If any other libraries depend on it, you are asked to rerun the command with **--recurse**, which causes all downstream libraries to be removed.

## Customize vcpkg

You can modify your clone of vcpkg in any way you like. You can create multiple vcpkg clones and modify the portfiles in each one to obtain specific versions of libraries or specify command-line parameters. For example, in an enterprise, one group of developers might be working on software that has one set of dependencies, and another group might have a different set. You can set up two clones of vcpkg, and modify each one to download the versions of the libraries and the compilation switches, etc, according to your needs.

## Uninstall vcpkg

Just delete the directory.

## Send feedback about vcpkg

Use the **vcpkg contact --survey** command to send feedback to Microsoft about vcpkg, including bug reports and suggestions for features.

## The vcpkg folder hierarchy

All vcpkg functionality and data is self-contained in a single directory hierarchy, called an "instance". There are no registry settings or environment variables. You can have any number of instances of vcpkg on a machine and they do not interfere with each other.

The contents of a vcpkg instance are:

- buildtrees -- contains subfolders of sources from which each library is built
- docs -- documentation and examples
- downloads -- cached copies of any downloaded tools or sources. vcpkg searches here first when you run the install command .
- installed-- Contains the headers and binaries for each installed library. When you integrate with Visual Studio, you are essentially telling it add this folder to its search paths.
- packages -- Internal folder for staging between installs.
- ports -- Files that describe each library in the catalog, its version, and where to download it. You can add your own ports if needed.
- scripts -- Scripts (cmake, powershell) used by vcpkg.
- toolsrc -- C++ source code for vcpkg and related components
- triplets -- Contains the settings for each supported target platform (for example, x86-windows or x64-uwp).

## Command-line reference

|Command|Description|
|---------|---------|
|**vcpkg search [pat]**|Search for packages available to install|
|**vcpkg install \<pkg>...**|Install a package|
|**vcpkg remove \<pkg>...**|Uninstall a package|
|**vcpkg remove --outdated**|Uninstall all out-of-date packages|
|**vcpkg list**|List installed packages|
|**vcpkg update**|Display list of packages for updating|
|**vcpkg upgrade**|Rebuild all outdated packages|
|**vcpkg hash \<file> [alg]**|Hash a file by specific algorithm, default SHA512|
|**vcpkg integrate install**|Make installed packages available user-wide. Requires admin privileges on first use|
|**vcpkg integrate remove**|Remove user-wide integration|
|**vcpkg integrate project**|Generate a referencing NuGet package for individual VS project use|
|**vcpkg export \<pkg>... [opt]...**|Export a package|
|**vcpkg edit \<pkg>**|Open up a port for editing (uses %EDITOR%, default 'code')|
|**vcpkg create \<pkg> \<url> [archivename]**|Create a new package|
|**vcpkg cache**|List cached compiled packages|
|**vcpkg version**|Display version information|
|**vcpkg contact --survey**|Display contact information to send feedback.|

### Options

|Option|Description|
|---------|---------|
|**--triplet \<t>**|Specify the target architecture triplet. (default: `%VCPKG_DEFAULT_TRIPLET%`, see also **vcpkg help triplet**)|
|**--vcpkg-root \<path>**|Specify the vcpkg root directory (default: `%VCPKG_ROOT%`)|
