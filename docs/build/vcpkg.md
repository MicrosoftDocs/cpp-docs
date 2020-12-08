---
title: "vcpkg: a C++ package manager for Windows, Linux, and macOS"
description: "vcpkg is a command-line package manager that greatly simplifies the acquisition and installation of open-source C++ libraries on Windows, macOS, and Linux."
ms.date: "07/06/2020"
ms.technology: "cpp-ide"
ms.assetid: f50d459a-e18f-4b4e-814b-913e444cedd6
---
# vcpkg: a C++ package manager for Windows, Linux, and macOS

vcpkg is a command-line package manager for C++. It greatly simplifies the acquisition and installation of third-party libraries on Windows, Linux, and macOS. If your project uses third-party libraries, we recommend that you use vcpkg to install them. vcpkg supports both open-source and proprietary libraries. All libraries in the vcpkg Windows catalog have been tested for compatibility with Visual Studio 2015, Visual Studio 2017, and Visual Studio 2019. Between the Windows and Linux/macOS catalogs, vcpkg now supports over 1900 libraries. The C++ community is adding more libraries to both catalogs on an ongoing basis.

## Simple yet flexible

With a single command, you can download sources and build a library. vcpkg is itself an open-source project, available on GitHub. It's possible to customize your private vcpkg clones in any way you like. For example, specify different libraries, or different versions of libraries than the ones found in the public catalog. You can have multiple clones of vcpkg on a single machine. Each one may be set to produce a custom collection of libraries, with your preferred compilation switches. Each clone is a self-contained environment with its own copy of vcpkg.exe that operates only on its own hierarchy. vcpkg isn't added to any environment variables, and has no dependency on the Windows Registry or Visual Studio.

## Sources, not binaries

For libraries in the Windows catalog, vcpkg downloads sources instead of binaries<sup>1</sup>. It compiles those sources using the most recent version of Visual Studio that it can find. In C++, it's important that both your application code and any libraries you use are compiled by the same compiler, and compiler version. By using vcpkg, you eliminate or at least greatly reduce the potential for mismatched binaries and the problems they can cause. In teams that are standardized on a specific version of a compiler, one team member can use vcpkg to download sources and compile a set of binaries. Then they can use the export command to zip up the binaries and headers for other team members. For more information, see [Export compiled binaries and headers](#export_binaries_per_project) below.

You can also create a vcpkg clone that has private libraries in the ports collection. Add a port that downloads your prebuilt binaries and headers. Then, write a *portfile.cmake* file that simply copies those files to the preferred location.

<sup>1</sup> *Note: sources are unavailable for some proprietary libraries. In these cases, vcpkg downloads compatible prebuilt binaries.*

## Installation

Clone the vcpkg repo from GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg). You can download to any folder location you prefer. This location is the vcpkg *root*. Once the download is complete, change to that directory in your command shell.

In the vcpkg root directory, run the vcpkg bootstrapper:

- **`bootstrap-vcpkg.bat`** (Windows)
- **`./bootstrap-vcpkg.sh`** (Linux, macOS)

On Linux or macOS, you may need to prefix vcpkg commands by using **`./`** in the examples that follow. Remember to run these commands from the vcpkg root directory.

## Search the list of available libraries

To see what packages are available, type **`vcpkg search`** at the command prompt.

This command enumerates the control files in the *vcpkg/ports* subfolders. You'll see a listing like this:

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

You can filter on a pattern, for example **`vcpkg search ta`**:

```cmd
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### Install a library on your local machine

After you get the name of a library by using **`vcpkg search`**, you use **`vcpkg install`** to download the library and compile it. vcpkg uses the library's portfile in the *ports* directory. If a triplet isn't specified, vcpkg installs and compiles for the default triplet for the target platform: x86-windows, x64-linux.cmake, or x64-osx.cmake.

For Linux libraries, vcpkg depends on gcc being installed on the local machine. On macOS, vcpkg uses Clang.

When the portfile specifies dependencies, vcpkg downloads and installs them too. After downloading, vcpkg builds the library by using the same build system the library uses. CMake and (on Windows) MSBuild projects are preferred, but MAKE is supported along with any other build system. If vcpkg can't find the specified build system on the local machine, it downloads and installs it.

```cmd
> vcpkg install boost:x86-windows

The following packages will be built and installed:
    boost:x86-windows
  * bzip2:x86-windows
  * zlib:x86-windows
Additional packages (*) will be installed to complete this operation.
```

For CMake projects, use `CMAKE_TOOLCHAIN_FILE` to make libraries available with `find_package()`. For example, on Linux or macOS:

```cmd
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake
```

On Windows:

```cmd
cmake .. -DCMAKE_TOOLCHAIN_FILE=vcpkg\scripts\buildsystems\vcpkg.cmake
```

Some libraries include installable options. For example, when you search for the curl library, you'll also see a list of supported options in square brackets:

```cmd
> vcpkg search curl
curl                 7.68.0-3         A library for transferring data with URLs
curl[tool]                            Builds curl executable
curl[non-http]                        Enables protocols beyond HTTP/HTTPS/HTTP2
curl[http2]                           HTTP2 support
curl[ssl]                             Default SSL backend
curl[ssh]                             SSH support via libssh2
curl[openssl]                         SSL support (OpenSSL)
curl[winssl]                          SSL support (Secure Channel / "WinSSL")
curl[mbedtls]                         SSL support (mbedTLS)
curl[sectransp]                       SSL support (sectransp)
curl[c-ares]                          c-ares support
curl[sspi]                            SSPI support
curl[brotli]                          brotli support (brotli)
curlpp               2018-06-15-3     C++ wrapper around libcURL
```

In this case, the square brackets **`[`** and **`]`** are literals, not metacharacters.

You can specify a specific option to install on the command line. For example, to install libraries for curl using the default SSL backend for Windows, use the **`vcpkg install curl[ssl]:x86-windows`** command. The command installs any required prerequisites, including the core library, if needed:

```cmd
> vcpkg list
curl:x86-windows            7.68.0-3   A library for transferring data with URLs
curl[non-http]:x86-windows             Enables protocols beyond HTTP/HTTPS/HTTP2
curl[ssl]:x86-windows                  Default SSL backend
curl[sspi]:x86-windows                 SSPI support
curl[winssl]:x86-windows               SSL support (Secure Channel / "WinSSL")
zlib:x86-windows            1.2.11-6   A compression library
```

## List the libraries already installed

After you've installed some libraries, you can use **`vcpkg list`** to see what you have:

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

Run **`vcpkg integrate install`** to configure Visual Studio to locate all vcpkg header files and binaries on a per-user basis. There's no need for manual editing of VC++ Directories paths. If you have multiple clones of vcpkg, the clone you run this command from becomes the new default location.

Now you can #include headers simply by typing the folder/header, and autocomplete assists you. No additional steps are required for linking to libs or adding project references. The following illustration shows how Visual Studio finds the azure-storage-cpp headers. vcpkg places its headers in the */installed* subfolder, partitioned by target platform. The following diagram shows the list of include files in the */was* subfolder for the library:

![vcpkg and IntelliSense](media/vcpkg-intellisense.png "vcpkg and IntelliSense")

### Per project

If you need to use a specific version of a library that's different from the version in your active vcpkg instance, follow these steps:

1. Make a new clone of vcpkg
1. Modify the portfile for the library to obtain the version you need
1. Run **`vcpkg install <library>`**.
1. Use **`vcpkg integrate project`** to create a NuGet package that references that library on a per-project basis.

## Integrate with Visual Studio Code (Linux/macOS)

Run **`vcpkg integrate install`** to configure Visual Studio Code on Linux/macOS. This command sets the location of the vcpkg enlistment and enables IntelliSense on source files.

## Target Linux from Windows via WSL

You can produce Linux binaries on a Windows machine by using the Windows Subsystem for Linux, or WSL. Follow the instructions to [Set up WSL on Windows 10](/windows/wsl/install-win10). Then, configure it with the [Visual Studio extension for Linux](https://devblogs.microsoft.com/cppblog/targeting-windows-subsystem-for-linux-from-visual-studio/). It's okay to put all your built libraries for Windows and Linux into the same folder. They're accessible from both Windows and WSL.

## <a name="export_binaries_per_project"></a> Export compiled binaries and headers

It's inefficient to make everyone on a team download and build common libraries. A single team member can use the **`vcpkg export`** command to create a common zip file of the binaries and headers, or a NuGet package. Then, it's easy to share it with other team members.

## Update/upgrade installed libraries

The public catalog is kept up to date with the latest versions of the libraries. To determine which of your local libraries are out-of-date, use **`vcpkg update`**. When you're ready to update your ports collection to the latest version of the public catalog, run the **`vcpkg upgrade`** command. It automatically downloads and rebuilds any or all of your installed libraries that are out of date.

By default, the **`vcpkg upgrade`** command only lists the libraries that are out of date; it doesn't upgrade them. To actually upgrade the libraries, use the **`--no-dry-run`** option.

```cmd
> vcpkg upgrade --no-dry-run
```

### Upgrade Options

- **`--no-dry-run`**  Perform the upgrade; when not specified, the command only lists the out-of-date packages.
- **`--keep-going`**  Continue installing packages even if one fails.
- **`--triplet <t>`**  Set the default triplet for unqualified packages.
- **`--vcpkg-root <path>`**  Specify the vcpkg directory to use instead of current directory or tool directory.

### Upgrade example

The following example shows how to upgrade only specified libraries. vcpkg automatically pulls in dependencies as necessary.

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

Type **`vcpkg remove`** to remove an installed library. If any other libraries depend on it, you're asked to rerun the command with **`--recurse`**, which causes all downstream libraries to be removed.

## Customize vcpkg

You can modify your clone of vcpkg in any way you like. You can even create multiple vcpkg clones, then modify the portfiles in each one. That's a simple way to obtain specific library versions, or to specify particular command-line parameters. For example, individual groups of developers in an enterprise might work on software that has dependencies specific to their group. The solution is to set up a clone of vcpkg for each team. Then, modify the clones to download the library versions and set the compilation switches that each team needs.

## Update vcpkg

The vcpkg package manager is updated regularly on GitHub. To update your clone of vcpkg to the latest version, from the vcpkg root directory, run **`git pull`**. This command syncs your copy of vcpkg with the version on GitHub. After download is complete, run the bootstrapper again. The bootstrapper rebuilds the vcpkg program, but leaves your installed libraries in place.

## Uninstall vcpkg

To uninstall vcpkg, just delete the vcpkg directory. Deleting this directory uninstalls the vcpkg distribution, and all the libraries that vcpkg has installed.

However if you have executed **`vcpkg integrate install`** you should execute **`vcpkg integrate remove`** to ensure the integration is cleaned, before the folder is removed.

## Send feedback about vcpkg

Use the **`vcpkg contact --survey`** command to send feedback to Microsoft about vcpkg, including bug reports and suggestions for features.

## The vcpkg folder hierarchy

All vcpkg functionality and data is self-contained in a single directory hierarchy, called an "instance". There are no registry settings or environment variables. You can have any number of instances of vcpkg on a machine, and they won't interfere with each other.

The contents of a vcpkg instance are:

- buildtrees - contains subfolders of sources from which each library is built
- docs - documentation and examples
- downloads - cached copies of any downloaded tools or sources. vcpkg searches here first when you run the install command.
- installed - Contains the headers and binaries for each installed library. When you integrate with Visual Studio, you're essentially telling it add this folder to its search paths.
- packages - Internal folder for staging between installs.
- ports - Files that describe each library in the catalog, its version, and where to download it. You can add your own ports if needed.
- scripts - Scripts (CMake, PowerShell) used by vcpkg.
- toolsrc - C++ source code for vcpkg and related components
- triplets - Contains the settings for each supported target platform (for example, x86-windows or x64-uwp).

## Command-line reference

|Command|Description|
|---------|---------|
|**`vcpkg search [pat]`**|Search for packages available to install|
|**`vcpkg install <pkg>...`**|Install a package|
|**`vcpkg remove <pkg>...`**|Uninstall a package|
|**`vcpkg remove --outdated`**|Uninstall all out-of-date packages|
|**`vcpkg list`**|List installed packages|
|**`vcpkg update`**|Display list of packages for updating|
|**`vcpkg upgrade`**|Rebuild all outdated packages|
|**`vcpkg hash <file> [alg]`**|Hash a file by specific algorithm, default SHA512|
|**`vcpkg integrate install`**|Make installed packages available user-wide. Requires admin privileges on first use|
|**`vcpkg integrate remove`**|Remove user-wide integration|
|**`vcpkg integrate project`**|Generate a referencing NuGet package for individual VS project use|
|**`vcpkg export <pkg>... [opt]...`**|Export a package|
|**`vcpkg edit <pkg>`**|Open up a port for editing (uses %EDITOR%, default 'code')|
|**`vcpkg create <pkg> <url> [archivename]`**|Create a new package|
|**`vcpkg cache`**|List cached compiled packages|
|**`vcpkg version`**|Display version information|
|**`vcpkg contact --survey`**|Display contact information to send feedback.|

### Options

|Option|Description|
|---------|---------|
|**`--triplet <t>`**|Specify the target architecture triplet. (default: `%VCPKG_DEFAULT_TRIPLET%`, see also **`vcpkg help triplet`**)|
|**`--vcpkg-root <path>`**|Specify the vcpkg root directory (default: `%VCPKG_ROOT%`)|
