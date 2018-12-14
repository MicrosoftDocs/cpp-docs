---
title: "/Qspectre"
ms.date: "10/12/2018"
f1_keywords: ["/Qspectre"]
helpviewer_keywords: ["/Qspectre"]
---
# /Qspectre

Specifies compiler generation of instructions to mitigate certain Spectre variant 1 security vulnerabilities.

## Syntax

> **/Qspectre**

## Remarks

The **/Qspectre** option is available in Visual Studio 2017 version 15.5.5 and later, and in Visual Studio 2015 Update 3 through [KB 4338871](https://support.microsoft.com/help/4338871/visual-studio-2015-update-3-spectre-variant-1-toolset-qspectre). It causes the compiler to insert instructions to mitigate certain [Spectre security vulnerabilities](https://spectreattack.com/spectre.pdf). These vulnerabilities, called *speculative execution side-channel attacks*, affect many operating systems and modern processors, including processors from Intel, AMD, and ARM.

The **/Qspectre** option is off by default.

In its initial release, the **/Qspectre** option only worked on optimized code. In Visual Studio 2017 version 15.7 and later, the **/Qspectre** option is supported at all optimization levels.

Microsoft Visual C++ libraries are also available in versions with Spectre mitigation. The Spectre-mitigated libraries for Visual Studio 2017 can be downloaded in the Visual Studio Installer. They are found in the **Individual Components** tab under **Compilers, build tools, and runtimes**, and have "Libs for Spectre" in the name. Both DLL and static runtime libraries with mitigation enabled are available for a subset of the Visual C++ runtimes: VC++ start-up code, vcruntime140, msvcp140, concrt140, and vcamp140. The DLLs are supported for application-local deployment only; the contents of the Visual C++ 2017 Runtime Libraries Redistributable have not been modified. You can also install Spectre-mitigated libraries for MFC and ATL, found in the **Individual Components** tab under **SDKs, libraries, and frameworks**.

### Applicability

If your code operates on data that crosses a trust boundary then we recommend that you use the **/Qspectre** option to rebuild and redeploy your code to mitigate this issue as soon as possible. Examples of code that operates on data that crosses a trust boundary include code that loads untrusted input that can affect execution, for example, code that makes remote procedure calls, parses untrusted input or files, or uses other local inter-process communication (IPC) interfaces. Standard sandboxing techniques may not be sufficient. You should investigate your sandboxes carefully before you decide that your code does not cross a trust boundary.

### Availability

The **/Qspectre** option is available in Visual Studio 2017 version 15.5.5 and in all updates to Microsoft MSVC compilers (MSVC) made on or after January 23, 2018. Use the Visual Studio Installer to update the compiler, and to install the Spectre-mitigated libraries as individual components. The **/Qspectre** option is also available in Visual Studio 2015 Update 3 through a patch. For more information, see [KB 4338871](https://support.microsoft.com/help/4338871).

All versions of Visual Studio 2017 version 15.5 and all Previews of Visual Studio 2017 version 15.6 include an undocumented option, **/d2guardspecload**, that is equivalent to the initial behavior of **/Qspectre**. You can use **/d2guardspecload** to apply the same mitigations to your code in these versions of the compiler. Please update your build to use **/Qspectre** in compilers that support the option; the **/Qspectre** option may also support new mitigations in later versions of the compiler.

### Effect

The **/Qspectre** option outputs code to mitigate Specter variant 1, Bounds Check Bypass, [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). It works by insertion of instructions that act as a speculative code execution barrier. The specific instructions used to mitigate processor speculation depend upon the processor and its micro-architecture, and may change in future versions of the compiler.

When the **/Qspectre** option is enabled, the compiler attempts to identify instances where speculative execution may bypass bounds checks and inserts the barrier instructions. It is important to note that there are limits to the analysis that a compiler can perform to identify instances of variant 1. As such, there is no guarantee that all possible instances of variant 1 are instrumented under **/Qspectre**.

### Performance impact

The performance impact of **/Qspectre** has been seen to be negligible in several very large code bases, but there are no guarantees that performance of your code under **/Qspectre** remains unaffected. You should benchmark your code to determine the effect of the option on performance. If you know that the mitigation is not required in a performance-critical block or loop, the mitigation can be selectively disabled by use of a [__declspec(spectre(nomitigation))](../../cpp/spectre.md) directive. This directive is not available in compilers that only support the  **/d2guardspecload** option.

### Required libraries

The **/Qspectre** compiler option generates code that implicitly links versions of the runtime libraries that have been built to provide Spectre mitigations. These libraries are optional components that must be installed by using the Visual Studio Installer:

- VC++ 2017 version *version_numbers* Libs for Spectre \[(x86 and x64) | (ARM) | (ARM64)]
- Visual C++ ATL for \[(x86/x64) | ARM | ARM64] with Spectre Mitigations
- Visual C++ MFC for \[x86/x64 | ARM | ARM64] with Spectre Mitigations

If you build your code by using **/Qspectre** and these libraries are not installed, the build system reports **warning MSB8038: Spectre mitigation is enabled but Spectre mitigated libraries are not found**. If your MFC or ATL code fails to build and the linker reports an error such as **fatal error LNK1104: cannot open file 'oldnames.lib'**, these missing libraries may be the cause.

### Additional information

For more details please see the official [Microsoft Security Advisory ADV180002, Guidance to mitigate speculative execution side-channel vulnerabilities](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Guidance is also available from Intel, [Speculative Execution Side Channel Mitigations](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf), and ARM, [Cache Speculation Side-channels](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). For a Windows-specific overview of Spectre and Meltdown mitigations, see [Understanding the performance impact of Spectre and Meltdown mitigations on Windows Systems](https://cloudblogs.microsoft.com/microsoftsecure/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/) on the Microsoft Secure blog. For an overview of Spectre vulnerability addressed by the MSVC mitigations, see [Spectre mitigations in MSVC](https://blogs.msdn.microsoft.com/vcblog/2018/01/15/spectre-mitigations-in-msvc./) on the Visual C++ Team Blog.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **/Qspectre** compiler option in the **Additional Options** box. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)
