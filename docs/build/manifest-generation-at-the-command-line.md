---
description: "Learn more about: Manifest Generation at the Command Line"
title: "Manifest Generation at the Command Line"
ms.date: "11/04/2016"
helpviewer_keywords: ["manifests [C++]", "manifest tool (mt.exe)"]
ms.assetid: fc2ff255-82b1-4c44-af76-8405c5850292
---
# Manifest Generation at the Command Line

When building C/C++ applications from the command line using nmake or similar tools, the manifest is generated after the linker has processed all object files and built the final binary. The linker collects assembly information stored in the object files and combines this information into a final manifest file. By default the linker will generate a file named *binary_name*.*extension*.manifest to describe the final binary. The linker does not embed a manifest file inside the binary and can only generate a manifest as an external file. There are several ways to embed a manifest inside the final binary, such as using the [Manifest Tool (mt.exe)](/windows/win32/sbscs/mt-exe) or compiling the manifest into a resource file. It is important to keep in mind that specific rules have to be followed when embedding a manifest inside the final binary to enable such features as incremental linking, signing, and edit and continue. These and other options are discussed in [How to: Embed a Manifest Inside a C/C++ Application](how-to-embed-a-manifest-inside-a-c-cpp-application.md) when building on the command line.

## See also

[Manifests](/windows/win32/sbscs/manifests)<br/>
[/INCREMENTAL (Link Incrementally)](reference/incremental-link-incrementally.md)<br/>
[Strong Name Assemblies (Assembly Signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)<br/>
[Edit and Continue](/visualstudio/debugger/edit-and-continue)<br/>
[Understanding Manifest Generation for C/C++ Programs](understanding-manifest-generation-for-c-cpp-programs.md)<br/>
