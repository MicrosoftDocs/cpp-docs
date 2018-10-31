---
title: "/GA (Optimize for Windows Application)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.OptimizeForWindowsApplication", "/ga"]
helpviewer_keywords: ["/GA compiler option [C++]", "GA compiler option [C++]", "-GA compiler option [C++]", "Optimize for Windows compiler options"]
ms.assetid: be97323e-15a0-4836-862c-95980b51926a
---
# /GA (Optimize for Windows Application)

Results in more efficient code for an .exe file for accessing thread-local storage (TLS) variables.

## Syntax

```
/GA
```

## Remarks

**/GA** speeds access to data declared with [__declspec(thread)](../../cpp/declspec.md) in a Windows-based program. When this option is set, the [__tls_index](/windows/desktop/ProcThread/thread-local-storage) macro is assumed to be 0.

Using **/GA** for a DLL can result in bad code generation.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)