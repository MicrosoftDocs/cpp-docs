---
title: "-DEBUG (Generate Debug Info) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.GenerateDebugInformation"
  - "/debug"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEBUG linker option"
  - "/DEBUG linker option"
  - "-DEBUG linker option"
  - "PDB files"
  - "debugging [C++], debug information files"
  - "generate debug info linker option"
  - "pdb files, generating debug info"
  - ".pdb files, generating debug info"
  - "debugging [C++], linker option"
  - "program databases [C++]"
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DEBUG (Generate Debug Info)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-DEBUG (Generate Debug Info)](https://docs.microsoft.com/cpp/build/reference/debug-generate-debug-info).  
  
  
DEBUG[:{FASTLINK|FULL|NONE}]  
```  
  
## Remarks  

The **/DEBUG** option creates debugging information for the .exe file or DLL.    
  
The linker puts the debugging information into a program database (PDB) file. It updates the PDB during subsequent builds of the program.  
  
An executable (.exe file or DLL) created for debugging contains the name and path of the corresponding PDB. The debugger reads the embedded name and uses the PDB when you debug the program. The linker uses the base name of the program and the extension .pdb to name the program database, and embeds the path where it was created. To override this default, set [/PDB](../../build/reference/pdb-use-program-database.md) and specify a different file name.  

The **/DEBUG:FULL** option is the linker default for debug builds. This option is set when you specify /DEBUG with no additional options. This option moves all private symbol information from individual compilation products (object files and libraries) into a single PDB, and can be the most time-consuming part of the link. However, the full PDB can be used to debug the executable when no other build products are available, such as when the executable is deployed.

The **/DEBUG:FASTLINK** option leaves private symbol information in the individual compilation products used to build the executable. It generates a limited PDB that indexes into the debug information in the object files and libraries (and any associated PDB files) used to build the executable instead of making a full copy. This option can link from two to four times as fast as full PDB generation, and is recommended when you are debugging locally and have the build products available. This limited PDB can't be used for debugging when the required build products are not available, such as when the executable is deployed on another computer.

The **/DEBUG:NONE** option does not generate a PDB, and is the linker default for release builds.
  
The compiler's [C7 Compatible](../../build/reference/z7-zi-zi-debug-information-format.md) (/Z7) option causes the compiler to leave the debugging information in the .obj files. You can also use the [Program Database](../../build/reference/z7-zi-zi-debug-information-format.md) (/Zi) compiler option to store the debugging information in a PDB for the .obj file. The linker looks for the object's PDB first in the absolute path written in the .obj file, and then in the directory that contains the .obj file. You cannot specify an object's PDB file name or location to the linker.  
  
[/INCREMENTAL](../../build/reference/incremental-link-incrementally.md) is implied when /DEBUG is specified.  
  
/DEBUG changes the defaults for the [/OPT](../../build/reference/opt-optimizations.md) option from REF to NOREF and from ICF to NOICF, so if you want the original defaults, you must explicitly specify /OPT:REF or /OPT:ICF.  
  
It is not possible to create an .exe or .dll that contains debug information. Debug information is always placed in a .obj or .pdb file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debugging** property page.  
  
4.  Modify the **Generate Debug Info** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

