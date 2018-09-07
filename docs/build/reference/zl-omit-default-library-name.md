---
title: "-Zl (Omit Default Library Name) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/zi", "VC.Project.VCCLCompilerTool.OmitDefaultLibName"]
dev_langs: ["C++"]
helpviewer_keywords: ["-Zl compiler option [C++]", "ZI compiler option", "Omit Default Library Name compiler option", "/Zl compiler option [C++]", "default libraries, omitting names"]
ms.assetid: b27d39d0-44d6-498c-84ae-27c1326fee59
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Zl (Omit Default Library Name)
Omits the default C runtime library name from the .obj file. By default, the compiler puts the name of the library into the .obj file to direct the linker to the correct library.  
  
## Syntax  
  
```  
/Zl  
```  
  
## Remarks  
 For more information on the default library, see [Use Run-Time Library](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
 You can use **/Zl** to compile .obj files you plan to put into a library. Although omitting the library name saves only a small amount of space for a single .obj file, the total space saved is significant in a library that contains many object modules.  
  
 This option is an advanced option. Setting this option removes certain C Runtime library support that may be required by your application, resulting in link-time errors if your application depends on this support. If you use this option you must provide the required components in some other way.  
  
 Use [/NODEFAULTLIB (Ignore Libraries)](../../build/reference/nodefaultlib-ignore-libraries.md). to direct the linker to ignore library references in all .obj files.  
  
 For more information, see [CRT Library Features](../../c-runtime-library/crt-library-features.md).  
  
 When compiling with **/Zl**, `_VC_NODEFAULTLIB` is defined.  For example:  
  
```  
// vc_nodefaultlib.cpp  
// compile with: /Zl  
void Test() {  
   #ifdef _VC_NODEFAULTLIB  
      int i;  
   #endif  
  
   int i;   // C2086  
}  
```  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Omit Default Library Names** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)