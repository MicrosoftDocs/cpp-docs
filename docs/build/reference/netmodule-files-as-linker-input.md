---
title: ".netmodule files as linker input"
description: "Describes how to use mixed .obj and .netmodule files as linker input when creating .NET assemblies."
ms.date: "01/30/2020"
helpviewer_keywords: ["MSIL linking", "linking [C++], modules", ".netmodule files", "modules, Visual C++"]
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
no-loc: [obj, netmodule, clr, pure, safe]
---
# .netmodule files as linker input

link.exe accepts MSIL *`.obj`* and *`.netmodule`* files as input. The output file produced by the linker is an assembly or a *`.netmodule`* file with no run-time dependency on any of the *`.obj`* or *`.netmodule`* files that were input to the linker.

## Remarks

*`.netmodule`* files are created by the MSVC compiler with [/LN (Create MSIL module)](ln-create-msil-module.md) or by the linker with [/NOASSEMBLY (Create a MSIL Module)](noassembly-create-a-msil-module.md). *`.obj`* files are always created in a C++ compilation. For other Visual Studio compilers, use the **/target:module** compiler option.

The linker must be passed the *`.obj`* file from the C++ compilation that created the *`.netmodule`*. Passing in a *`.netmodule`* is no longer supported because the **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017 and later.

For information on how to invoke the linker from the command line, see [Linker command-line syntax](linking.md) and [Use the MSVC toolset from the command line](../building-on-the-command-line.md).

Passing a *`.netmodule`* or *`.dll`* file to the linker that was compiled by the MSVC compiler with **/clr** can result in a linker error. For more information, see [Choosing the format of .netmodule input files](choosing-the-format-of-netmodule-input-files.md).

The linker accepts both native *`.obj`* files and MSIL *`.obj`* files compiled with **/clr**. You can pass mixed *`.obj`* files in the same build. The resulting output file's default verifiability is the same as the lowest input module's verifiability.

You can change an application that's composed of two or more assemblies to be contained in one assembly. Recompile the assemblies' sources, and then link the *`.obj`* files or *`.netmodule`* files to produce a single assembly.

Specify an entry point using [/ENTRY (Entry-point symbol)](entry-entry-point-symbol.md) when creating an executable image.

When linking with an MSIL *`.obj`* or *`.netmodule`* file, use [/LTCG (Link-time code generation)](ltcg-link-time-code-generation.md), otherwise when the linker encounters the MSIL *`.obj`* or *`.netmodule`*, it will restart the link with **/LTCG**. You'll see an informational message that the link is restarting. You can ignore this message, but to improve linker performance, explicitly specify **/LTCG**.

MSIL *`.obj`* or *`.netmodule`* files can also be passed to cl.exe.

Input MSIL *`.obj`* or *`.netmodule`* files can't have embedded resources. Embed resources in an output module or assembly file by using the [/ASSEMBLYRESOURCE (Embed a managed resource)](assemblyresource-embed-a-managed-resource.md) linker option. Or, use the **/resource** compiler option in other Visual Studio compilers.

## Examples

In C++ code, the **`catch`** block of a corresponding **`try`** will be invoked for a non-`System` exception. However, by default, the CLR wraps non-`System` exceptions with <xref:System.Runtime.CompilerServices.RuntimeWrappedException>. When an assembly is created from C++ and non-C++ modules, and you want a **`catch`** block in C++ code to be invoked from its corresponding **`try`** clause when the **`try`** block throws a non-`System` exception, you must add the `[assembly:System::Runtime::CompilerServices::RuntimeCompatibility(WrapNonExceptionThrows=false)]` attribute to the source code for the non-C++ modules.

```cpp
// MSIL_linking.cpp
// compile with: /c /clr
value struct V {};

ref struct MCPP {
   static void Test() {
      try {
         throw (gcnew V);
      }
      catch (V ^) {
         System::Console::WriteLine("caught non System exception in C++ source code file");
      }
   }
};

/*
int main() {
   MCPP::Test();
}
*/
```

By changing the `Boolean` value of the `WrapNonExceptionThrows` attribute, you modify the ability of the C++ code to catch a non-`System` exception.

```csharp
// MSIL_linking_2.cs
// compile with: /target:module /addmodule:MSIL_linking.obj
// post-build command: link /LTCG MSIL_linking.obj MSIL_linking_2.netmodule /entry:MLinkTest.Main /out:MSIL_linking_2.exe /subsystem:console
using System.Runtime.CompilerServices;

// enable non System exceptions
[assembly:RuntimeCompatibility(WrapNonExceptionThrows=false)]

class MLinkTest {
   public static void Main() {
      try {
         MCPP.Test();
      }
      catch (RuntimeWrappedException) {
         System.Console.WriteLine("caught a wrapped exception in C#");
      }
   }
}
```

```Output
caught non System exception in C++ source code file
```

## See also

- [LINK Input Files](link-input-files.md)
- [MSVC Linker Options](linker-options.md)
