---
title: "/Qspectre | Microsoft Docs"
ms.custom: ""
ms.date: "1/23/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
f1_keywords: ["/Qspectre"]
helpviewer_keywords: ["/Qspectre"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /Qspectre

Specifies compiler generation of instructions to mitigate certain Spectre variant 1 security vulnerabilities.

## Syntax

> **/Qspectre**

## Remarks

The **/Qspectre** option causes the compiler to insert instructions to mitigate certain [Spectre security vulnerabilities](https://spectreattack.com/spectre.pdf). These vulnerabilities, called *speculative execution side-channel attacks*, affect many operating systems and modern processors, including processors from Intel, AMD, and ARM.

The **/Qspectre** option is off by default.

In its initial release, the **/Qspectre** option only works on optimized code. You should make sure to compile your code with any of the optimization options (for example, [/O2 or /O1](o1-o2-minimize-size-maximize-speed.md) but not [/Od](od-disable-debug.md)) to make sure the mitigation is applied. Similarly, inspect any code that uses [#pragma optimize("stg", off)](../../preprocessor/optimize.md).

### Applicability

If your code operates on data that crosses a trust boundary then we recommend that you use the **/Qspectre** option to rebuild and redeploy your code to mitigate this issue as soon as possible. Examples of code that operates on data that crosses a trust boundary include code that loads untrusted input that can affect execution, for example, code that makes remote procedure calls, parses untrusted input or files, or uses other local inter-process communication (IPC) interfaces. Standard sandboxing techniques may not be sufficient. You should investigate your sandboxes carefully before you decide that your code does not cross a trust boundary.

### Availability

The **/Qspectre** option is available in Visual Studio 2017 version 15.5.5 and all updates to Microsoft Visual C++ compilers (MSVC) made on or after January 23, 2018.

All versions of Visual Studio 2017 version 15.5 and all Previews of Visual Studio version 15.6 already include an undocumented option, **/d2guardspecload**, that is equivalent to the initial behavior of **/Qspectre**. You can use **/d2guardspecload** to apply the same mitigations to your code in these versions of the compiler. Please update your build to use **/Qspectre** in compilers that support the option; the **/Qspectre** option may also support new mitigations in later versions of the compiler.

### Effect

The **/Qspectre** option outputs code to mitigate Specter variant 1, Bounds Check Bypass, [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). It works by insertion of instructions that act as a speculative code execution barrier. The specific instructions used to mitigate processor speculation depend upon the processor and its micro-architecture, and may change in future versions of the compiler.

When the **/Qspectre** option is enabled, the compiler attempts to identify instances where speculative execution may bypass bounds checks and inserts the barrier instructions. It is important to note that there are limits to the analysis that a compiler can perform to identify instances of variant 1. As such, there is no guarantee that all possible instances of variant 1 are instrumented under **/Qspectre**.

### Performance impact

The performance impact of **/Qspectre** has been seen to be negligible in several very large code bases, but there are no guarantees that performance of your code under **/Qspectre** remains unaffected. You should benchmark your code to determine the effect of the option on performance. If you know that the mitigation is not required in a performance-critical block or loop, the mitigation can be selectively disabled by use of a [__declspec(spectre(nomitigation))](../../cpp/spectre.md) directive. This directive is not available in compilers that only support the  **/d2guardspecload** option.

### Additional information

For more details please see the official [Microsoft Security Advisory ADV180002, Guidance to mitigate speculative execution side-channel vulnerabilities](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Guidance is also available from Intel, [Speculative Execution Side Channel Mitigations](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf), and ARM, [Cache Speculation Side-channels](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). For a Windows-specific overview of Spectre and Meltdown mitigations, see [Understanding the performance impact of Spectre and Meltdown mitigations on Windows Systems](https://cloudblogs.microsoft.com/microsoftsecure/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/) on the Microsoft Secure blog. For an overview of Spectre vulnerability addressed by the MSVC mitigations, see [Spectre mitigations in MSVC](https://blogs.msdn.microsoft.com/vcblog/2018/01/15/spectre-mitigations-in-msvc./) on the Visual C++ Team Blog.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **/Qspectre** compiler option in the **Additional Options** box. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](../../build/reference/q-options-low-level-operations.md)  
[Compiler Options](../../build/reference/compiler-options.md)  
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)  
