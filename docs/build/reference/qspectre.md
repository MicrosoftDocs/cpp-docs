---
description: "Learn more about: /Qspectre"
title: "/Qspectre"
ms.date: 07/02/2021
f1_keywords: ["VC.Project.VCCLCompilerTool.SpectreMitigation"]
helpviewer_keywords: ["/Qspectre"]
---
# /Qspectre

Specifies compiler generation of instructions to mitigate certain Spectre variant 1 security vulnerabilities.

## Syntax

> **`/Qspectre`**

## Remarks

The **`/Qspectre`** option causes the compiler to insert instructions to mitigate certain [Spectre security vulnerabilities](https://spectreattack.com/spectre.pdf). These vulnerabilities are called *speculative execution side-channel attacks*. They affect many operating systems and modern processors, including processors from Intel, AMD, and ARM.

The **`/Qspectre`** option is available starting in Visual Studio 2017 version 15.5.5 and all later versions. It's available in Visual Studio 2015 Update 3 through [KB 4338871](https://support.microsoft.com/help/4338871/visual-studio-2015-update-3-spectre-variant-1-toolset-qspectre).

The **`/Qspectre`** option is off by default.

In its initial release, the **`/Qspectre`** option only worked on optimized code. Starting in Visual Studio 2017 version 15.7, the **`/Qspectre`** option is supported at all optimization levels.

Several Microsoft C++ libraries are also available in versions with Spectre mitigation. The Spectre-mitigated libraries for Visual Studio can be downloaded in the Visual Studio Installer. They're found in the **Individual Components** tab under **Compilers, build tools, and runtimes**, and have "Libs for Spectre" in the name. Both DLL and static runtime libraries with mitigation enabled are available for a subset of the Visual C++ runtimes: VC++ start-up code, vcruntime140, msvcp140, concrt140, and vcamp140. The DLLs are supported for application-local deployment only. The contents of the Visual C++ Runtime Libraries Redistributable haven't been modified.

You can also install Spectre-mitigated libraries for MFC and ATL. They're found in the **Individual Components** tab under **SDKs, libraries, and frameworks**.

> [!NOTE]
> There are no versions of Spectre-mitigated libraries for Universal Windows (UWP) apps or components. App-local deployment of such libraries isn't possible.

### Applicability

If your code operates on data that crosses a trust boundary, then we recommend you use the **`/Qspectre`** option to rebuild and redeploy your code to mitigate this issue as soon as possible. An example of such code is code that loads untrusted input that can affect execution. For example, code that makes remote procedure calls, parses untrusted input or files, or uses other local inter-process communication (IPC) interfaces. Standard sandboxing techniques may not be sufficient. Investigate your sandboxes carefully before you decide your code doesn't cross a trust boundary.

### Availability

The **`/Qspectre`** option is available starting in Visual Studio 2017 version 15.5.5, and in all updates to Microsoft C/C++ compilers (MSVC) made on or after January 23, 2018. Use the Visual Studio Installer to update the compiler, and to install the Spectre-mitigated libraries as individual components. The **`/Qspectre`** option is also available in Visual Studio 2015 Update 3 through a patch. For more information, see [KB 4338871](https://support.microsoft.com/help/4338871).

All versions of Visual Studio 2017 version 15.5, and all Previews of Visual Studio 2017 version 15.6. include an undocumented option, **/`d2guardspecload`**. It's equivalent to the initial behavior of **`/Qspectre`**. You can use **`/d2guardspecload`** to apply the same mitigations to your code in these versions of the compiler. We recommend you update your build to use **`/Qspectre`** in compilers that support the option. The **`/Qspectre`** option may also support new mitigations in later versions of the compiler.

### Effect

The **`/Qspectre`** option outputs code to mitigate Specter variant 1, Bounds Check Bypass, [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). It works by insertion of instructions that act as a speculative code execution barrier. The specific instructions used to mitigate processor speculation depend upon the processor and its micro-architecture, and may change in future versions of the compiler.

When you enable the **`/Qspectre`** option, the compiler attempts to identify instances where speculative execution may bypass bounds checks. That's where it inserts the barrier instructions. It's important to be aware of the limits to the analysis that a compiler can do to identify instances of variant 1. As such, there's no guarantee that all possible instances of variant 1 are instrumented under **`/Qspectre`**.

### Performance impact

The effect of **`/Qspectre`** on performance appeared to be negligible in several sizable code bases. However, there are no guarantees that performance of your code under **`/Qspectre`** remains unaffected. You should benchmark your code to determine the effect of the option on performance. If you know that the mitigation isn't required in a performance-critical block or loop, you can selectively disable the mitigation by use of a [`__declspec(spectre(nomitigation))`](../../cpp/spectre.md) directive. This directive isn't available in compilers that only support the **`/d2guardspecload`** option.

### Required libraries

The **`/Qspectre`** compiler option mitigates issues in your own code. For greater protection, we strongly recommend you also use libraries built to provide Spectre mitigations. Several of the Microsoft runtime libraries are available with Spectre mitigations.

::: moniker range=">=msvc-150"

These libraries are optional components that must be installed by using the Visual Studio Installer:

- MSVC version *version_numbers* Libs for Spectre \[(x86 and x64) | (ARM) | (ARM64)]
- Visual C++ ATL for \[(x86/x64) | ARM | ARM64] with Spectre Mitigations
- Visual C++ MFC for \[x86/x64 | ARM | ARM64] with Spectre Mitigations

::: moniker-end

::: moniker range=">=msvc-160"

The default MSBuild-based project system in the Visual Studio IDE lets you specify a [Spectre Mitigation](./c-cpp-prop-page.md#spectre-mitigation) property for your projects. This property sets the **`/Qspectre`** compiler option and changes the library paths to link the Spectre-mitigated runtime libraries. If these libraries aren't installed when you build your code, the build system reports warning [MSB8040](/visualstudio/msbuild/errors/msb8040). If your MFC or ATL code fails to build, and the linker reports an error such as "fatal error LNK1104: cannot open file 'oldnames.lib'", these missing libraries may be the cause.

::: moniker-end

::: moniker range="msvc-150"

The default MSBuild-based project system in the Visual Studio IDE lets you specify a [Spectre Mitigation](./c-cpp-prop-page.md#spectre-mitigation) property for your projects. This property sets the **`/Qspectre`** compiler option and changes the library paths to link the Spectre-mitigated runtime libraries. If these libraries aren't installed when you build your code, the build system reports warning MSB8038: "Spectre mitigation is enabled but Spectre mitigated libraries are not found". If your MFC or ATL code fails to build, and the linker reports an error such as "fatal error LNK1104: cannot open file 'oldnames.lib'", these missing libraries may be the cause.

::: moniker-end

::: moniker range=">=msvc-150"

There are several ways to specify the Spectre-mitigated libraries to the build command line. You can specify the path to the Spectre-mitigated libraries by using the [`/LIBPATH`](./libpath-additional-libpath.md) linker option to make them the default libraries. You can use the [`/NODEFAULTLIB`](./nodefaultlib-ignore-libraries.md) linker option and explicitly link the Spectre-mitigated libraries. Or, you can set the `LIBPATH` environment variable to include the path to the Spectre-mitigated libraries for your target platform. One way to set this path in the environment is to use a developer command prompt set up by using the `spectre_mode` option. For more information, see [Use the developer tools in an existing command window](../building-on-the-command-line.md#use-the-developer-tools-in-an-existing-command-window).

::: moniker-end

::: moniker range="msvc-140"

Spectre-mitigated runtime libraries for x86, x64 and ARM platforms are available as part of the patch available through [KB 4338871](https://support.microsoft.com/help/4338871). By default, these libraries are installed in the following directories:

- x86: *`C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib\spectre`*
- x64: *`C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib\spectre\amd64`*
- ARM: *`C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib\spectre\arm`*

There are several ways to specify the Spectre-mitigated libraries to the build command line. You can specify the path to the Spectre-mitigated libraries by using the [`/LIBPATH`](./libpath-additional-libpath.md) linker option to make them the default libraries. You can use the [`/NODEFAULTLIB`](./nodefaultlib-ignore-libraries.md) linker option and explicitly link the Spectre-mitigated libraries. Or, you can set the `LIBPATH` environment variable to include the path to the Spectre-mitigated libraries for your target architecture. For more information, see [Use the Microsoft C++ toolset from the command line](../building-on-the-command-line.md).

::: moniker-end

### Additional information

For more information, see the official [Microsoft Security Advisory ADV180002, Guidance to mitigate speculative execution side-channel vulnerabilities](https://msrc.microsoft.com/update-guide/vulnerability/ADV180002). Guidance is also available from Intel, [Speculative Execution Side Channel Mitigations](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf), and ARM, [Cache Speculation Side-channels](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf).

For a Windows-specific overview of Spectre and Meltdown mitigations, see [Understanding the performance impact of Spectre and Meltdown mitigations on Windows Systems](https://www.microsoft.com/security/blog/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/).

For an overview of Spectre vulnerabilities addressed by the MSVC mitigations, see [Spectre mitigations in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc./) on the C++ Team Blog.

### To set this compiler option in the Visual Studio development environment

::: moniker range=">=msvc-150"

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Select a new value for the **Spectre Mitigation** property. Choose **OK** to apply the change.

::: moniker-end

::: moniker range="msvc-140"

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the *`/Qspectre`* compiler option in the **Additional Options** box. Choose **Apply** to apply the change.

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. For each Platform in your project properties, edit the **Additional Library Directories** property. Set the path to the Spectre-mitigated runtime library directory for the target platform, and then choose **Apply** to apply the change. When done, choose **OK**.

::: moniker-end

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/Q` options (Low-level operations)](q-options-low-level-operations.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
