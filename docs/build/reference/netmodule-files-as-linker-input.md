---
title: ".netmodule Files as Linker Input | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MSIL linking"
  - "linking [C++], modules"
  - ".netmodules"
  - "modules, Visual C++"
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# .netmodule Files as Linker Input
link.exe now accepts MSIL .obj and .netmodules as input. The output file produced by the linker will be an assembly or a .netmodule with no run-time dependency on any of the .obj or .netmodules that were input to the linker.  
  
 .netmodules are created by the Visual C++ compiler with [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md) or by the linker with [/NOASSEMBLY (Create a MSIL Module)](../../build/reference/noassembly-create-a-msil-module.md). .objs are always created in a Visual C++ compilation. For other Visual Studio compilers, use the **/target:module** compiler option.  
  
 In most cases, you will need to pass to the linker the .obj file from the Visual C++ compilation that created the .netmodule, unless the .netmodule was created with [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md). MSIL .netmodules used as input to the linker must be pure MSIL, which can be produced by the Visual C++ compiler using **/clr:safe**. Other Visual Studio compilers produce pure MSIL modules by default.  
  
 For information on how to invoke the linker from the command line, see [Linker Command-Line Syntax](../../build/reference/linker-command-line-syntax.md) and [Setting the Path and Environment Variables for Command-Line Builds](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
 Passing a .netmodule or .dll file to the linker that was compiled by the Visual C++ compiler with **/clr** or with **/clr:pure** can result in a linker error. For more information, see [Choosing the Format of .netmodule Input Files](../../build/reference/choosing-the-format-of-netmodule-input-files.md).  
  
 The linker accepts native .obj files as well as MSIL .obj files compiled with **/clr**, **/clr:pure**, or **/clr:safe**. When passing mixed .objs in the same build, the verifiability of the resulting output file will, by default, be equal to the lowest level of verifiability of the input modules. For example, if you pass a safe and pure .obj to the linker, the output file will be pure. [/CLRIMAGETYPE (Specify Type of CLR Image)](../../build/reference/clrimagetype-specify-type-of-clr-image.md) lets you specify a lower level of verifiability, if that is what you need.  
  
 If you currently have an application that is composed of two or more assemblies and you want the application to be contained in one assembly, you must recompile the assemblies and then link the .objs or .netmodules to produce a single assembly.  
  
 You must specify an entry point using [/ENTRY (Entry-Point Symbol)](../../build/reference/entry-entry-point-symbol.md) when creating an executable image.  
  
 When linking with an MSIL .obj or .netmodule file, use [/LTCG (Link-time Code Generation)](../../build/reference/ltcg-link-time-code-generation.md), otherwise when the linker encounters the MSIL .obj or .netmodule, it will restart the link with /LTCG.  
  
 MSIL .obj or .netmodule files can also be passed to cl.exe.  
  
 Input MSIL .obj or .netmodule files cannot have embedded resources. A resource is embedded in an output file (module or assembly) with [/ASSEMBLYRESOURCE (Embed a Managed Resource)](../../build/reference/assemblyresource-embed-a-managed-resource.md) linker option or with the **/resource** compiler option in other Visual Studio compilers.  
  
 When performing MSIL linking, and if you do not also specify [/LTCG (Link-time Code Generation)](../../build/reference/ltcg-link-time-code-generation.md), you will see an informational message reporting that the link is restarting. This message can be ignored, but to improve linker performance with MSIL linking, explicitly specify **/LTCG**.  
  
## Example  
 In C++ code the catch block of a corresponding try will be invoked for a non System exception. However, by default, the CLR wraps non System exceptions with <xref:System.Runtime.CompilerServices.RuntimeWrappedException>. When an assembly is created from Visual C++ and non Visual C++ modules and you want a catch block in C++ code to be invoked from its corresponding try clause when the try block throws a non System exception, you must add the  
  
 [assembly:System::Runtime::CompilerServices::RuntimeCompatibility(WrapNonExceptionThrows=false)] attribute to the source code for the non C++ modules.  
  
```  
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
  
## Example  
 By changing the Boolean value of the WrapNonExceptionThrows attribute, you modify the ability of the Visual C++ code to catch a non System exception.  
  
```  
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
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)