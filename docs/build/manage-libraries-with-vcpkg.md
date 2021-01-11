---
title: "Manage libraries with vcpkg"
description: "Learn how to manage libraries by using vcpkg on Windows, macOS, and Linux."
ms.date: 12/11/2020
ms.technology: "cpp-ide"
---
# Manage libraries with vcpkg

Once you [install vcpkg](install-vcpkg.md), you can use it to obtain and build libraries on your local machine.

## Search the list of available libraries

### [Windows](#tab/windows)

To see what packages are available, type **`vcpkg search`** at the command prompt.

This command enumerates the control files in the *`vcpkg/ports`* subfolders. You'll see a listing like this:

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

### [macOS](#tab/macos)

To see what packages are available, change to the vcpkg root directory, and enter **`./vcpkg search`** in Terminal.

This command enumerates the control files in the *`vcpkg/ports`* subfolders. You'll see a listing like this:

```Terminal
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

```Terminal
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### Install a library on your computer

After you get the name of a library by using **`vcpkg search`**, you use **`vcpkg install`** to download the library and compile it. vcpkg uses the library's portfile in the *ports* directory. If a triplet isn't specified, vcpkg installs and compiles for the default triplet for the target platform: x86-windows, x64-linux.cmake, or x64-osx.cmake.

For Linux libraries, vcpkg depends on gcc being installed on the local machine. On macOS, vcpkg uses Clang.

When the portfile specifies dependencies, vcpkg downloads and installs them too. After downloading, vcpkg builds the library by using the same build system the library uses. CMake and (on Windows) MSBuild projects are preferred, but MAKE is supported along with any other build system. If vcpkg can't find the specified build system on the local machine, it downloads and installs it.

```Terminal
$ ./vcpkg install boost

The following packages will be built and installed:
    boost:x86-macos
  * bzip2:x86-macos
  * zlib:x86-macos
Additional packages (*) will be installed to complete this operation.
```

For CMake projects, use `CMAKE_TOOLCHAIN_FILE` to make libraries available with `find_package()`. For example:

```Terminal
cmake .. -DCMAKE_TOOLCHAIN_FILE=./vcpkg/scripts/buildsystems/vcpkg.cmake
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

You can specify a specific option to install on the command line. For example, to install libraries for curl using the default SSL backend, use the **`./vcpkg install curl[ssl]`** command. The command installs any required prerequisites, including the core library, if needed.

### [Linux](#tab/linux)

To see what packages are available, change to the vcpkg root directory in the shell, then enter **`./vcpkg search`**.

This command enumerates the control files in the *`vcpkg/ports`* subfolders. You'll see a listing like this:

```shell
ace       6.4.3   The ADAPTIVE Communication Environment
anax      2.1.0-1 An open source C++ entity system. \<https://github...
antlr4    4.6-1   ANother Tool for Language Recognition
apr       1.5.2   The Apache Portable Runtime (APR) is a C library ...
asio      1.10.8  Asio is a cross-platform C++ library for network ...
assimp    3.3.1   The Open Asset import library
atk       2.24.0  GNOME Accessibility Toolkit
...
```

You can filter on a pattern, for example **`./vcpkg search ta`**:

```shell
botan       2.0.1      A cryptography library written in C++11
portaudio   19.0.6.00  PortAudio Portable Cross-platform Audio I/O API P...
taglib      1.11.1-2   TagLib Audio Meta-Data Library
```

### Install a library on your Linux machine

After you get the name of a library by using **`./vcpkg search`**, you use **`/vcpkg install`** to download the library and compile it. vcpkg uses the library's portfile in the *`ports`* directory. If a triplet isn't specified, vcpkg installs and compiles for the default triplet for the target platform, such as x64-linux.cmake.

For Linux libraries, vcpkg depends on gcc being installed on the local machine.

When the portfile specifies dependencies, vcpkg downloads and installs them too. After downloading, vcpkg builds the library by using the same build system the library uses. CMake projects are preferred, but MAKE is supported along with any other build system. If vcpkg can't find the specified build system on the local machine, it downloads and installs it.

```shell
$ ./vcpkg install boost:x64-linux

The following packages will be built and installed:
    boost:x64-linux
  * bzip2:x64-linux
  * zlib:x64-linux
Additional packages (*) will be installed to complete this operation.
```

For CMake projects, use `CMAKE_TOOLCHAIN_FILE` to make libraries available with `find_package()`. For example:

```shell
cmake .. -DCMAKE_TOOLCHAIN_FILE=./vcpkg/scripts/buildsystems/vcpkg.cmake
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

You can specify a specific option to install on the command line. For example, to install libraries for curl using the default SSL backend, use the **`./vcpkg install curl[ssl]`** command. The command installs any required prerequisites, including the core library, if needed.

---

## List the libraries already installed

After you've installed some libraries, you can use **`vcpkg list`** command on Windows to see what you have. The Linux and macOS commands are analogous.

```cmd
> vcpkg list

boost:x86-windows       1.64-3   Peer-reviewed portable C++ source libraries
bzip2:x86-windows       1.0.6-1  High-quality data compressor.
cpprestsdk:x86-windows  2.9.0-2  C++11 JSON, REST, and OAuth library The C++ REST ...
openssl:x86-windows     1.0.2k-2 OpenSSL is an open source project that provides a...
websocketpp:x86-windows 0.7.0    Library that implements RFC6455 The WebSocket Pro...
zlib:x86-windows        1.2.11   A compression library
```

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

The following example shows how to upgrade only specified libraries on Windows. The Linux and macOS commands are analogous. vcpkg automatically pulls in dependencies as necessary.

```cmd
c:\users\username\vcpkg> vcpkg upgrade tiny-dnn:x86-windows zlib
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

## See also

[vcpkg: a C++ package manager for Windows, Linux, and macOS](./vcpkg.md)\
[vcpkg on GitHub](https://github.com/Microsoft/vcpkg)\
[Install vcpkg](install-vcpkg.md)\
[Integrate vcpkg](integrate-vcpkg.md)\
[vcpkg command-line reference](vcpkg-command-line-reference.md)\
[Quick start](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Frequently asked questions](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)\
[Installing and Using Packages Example: SQLite](https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md)
