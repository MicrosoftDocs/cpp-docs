---
title: "vcpkg command-line reference"
description: "Learn how to use command line options for vcpkg on Windows, macOS, and Linux."
ms.date: 12/17/2020
ms.topic: "reference"
ms.technology: "cpp-ide"
---
# vcpkg command-line reference

A quick reference to the commands available in vcpkg.

## Commands

| Command | Description |
|--|--|
| **`vcpkg search [pat]`** | Search for packages available to install |
| **`vcpkg install <pkg>...`** | Install a package |
| **`vcpkg remove <pkg>...`** | Uninstall a package |
| **`vcpkg remove --outdated`** | Uninstall all out-of-date packages |
| **`vcpkg list`** | List installed packages |
| **`vcpkg update`** | Display list of packages for updating |
| **`vcpkg upgrade`** | Rebuild all outdated packages |
| **`vcpkg hash <file> [alg]`** | Hash a file by specific algorithm, default SHA512 |
| **`vcpkg integrate install`** | Make installed packages available user-wide. Requires admin privileges on first use |
| **`vcpkg integrate remove`** | Remove user-wide integration |
| **`vcpkg integrate project`** | Generate a referencing NuGet package for individual VS project use |
| **`vcpkg export <pkg>... [opt]...`** | Export a package |
| **`vcpkg edit <pkg>`** | Open up a port for editing (uses %EDITOR%, default 'code') |
| **`vcpkg create <pkg> <url> [archivename]`** | Create a new package |
| **`vcpkg cache`** | List cached compiled packages |
| **`vcpkg version`** | Display version information |
| **`vcpkg contact --survey`** | Display contact information to send feedback. |

## Options

| Option | Description |
|--|--|
| **`--triplet <t>`** | Specify the target architecture triplet. (default: `%VCPKG_DEFAULT_TRIPLET%`, see also **`vcpkg help triplet`**) |
| **`--vcpkg-root <path>`** | Specify the vcpkg root directory (default: `%VCPKG_ROOT%`) |

## See also

[vcpkg: a C++ package manager for Windows, Linux, and macOS](./vcpkg.md)\
[vcpkg on GitHub](https://github.com/Microsoft/vcpkg)\
[Install vcpkg](install-vcpkg.md)\
[Integrate vcpkg](integrate-vcpkg.md)\
[Manage libraries with vcpkg](manage-libraries-with-vcpkg.md)\
[Quick start](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Frequently asked questions](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
