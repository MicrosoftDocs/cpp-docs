---
title: "-DEBUG (Generate Debug Info) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 10
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
# /DEBUG (Generate Debug Info)
```  
/DEBUG[:{FASTLINK|FULL|NONE}]  
```  
  
## Remarks  

The **/DEBUG** option creates debugging information for the executable.    
  
The linker puts the debugging information into a program database (PDB) file. It updates the PDB during subsequent builds of the program.  
  
An executable (.exe file or DLL) created for debugging contains the name and path of the corresponding PDB. The debugger reads the embedded name and uses the PDB when you debug the program. The linker uses the base name of the program and the extension .pdb to name the program database, and embeds the path where it was created. To override this default, set [/PDB](../../build/reference/pdb-use-program-database.md) and specify a different file name.  

The **/DEBUG:FULL** option is the linker default for debug builds in Visual Studio 2015, set when you specify /DEBUG with no additional options. This option moves all private symbol information from individual compilation products (object files and libraries) into a single PDB, and can be the most time-consuming part of the link. However, the full PDB can be used to debug the executable when no other build products are available, such as when the executable is deployed.

The **/DEBUG:FASTLINK** option is the linker default for debug builds in Visual Studio 2017 RC, set when you specify /DEBUG with no additional options. This option leaves private symbol information in the individual compilation products used to build the executable. It generates a limited PDB that indexes into the debug information in the object files and libraries used to build the executable instead of making a full copy. This option can link from two to four times as fast as full PDB generation, and is recommended when you are debugging locally and have the build products available. This limited PDB can't be used for debugging when the required build products are not available, such as when the executable is deployed on another computer. In a developer command prompt, you can use the mspdbcmf.exe tool to generate a full PDB from this limited PDB. In Visual Studio, use the Project or Build menu items for generating a full PDB file to create a full PDB for the project or solution.

The **/DEBUG:NONE** option does not generate a PDB, and is the linker default for release builds.
  
The compiler's [C7 Compatible](../../build/reference/z7-zi-zi-debug-information-format.md) (/Z7) option causes the compiler to leave the debugging information in the .obj files. You can also use the [Program Database](../../build/reference/z7-zi-zi-debug-information-format.md) (/Zi) compiler option to store the debugging information in a PDB for the .obj file. The linker looks for the object's PDB first in the absolute path written in the .obj file, and then in the directory that contains the .obj file. You cannot specify an object's PDB file name or location to the linker.  
  
[/INCREMENTAL](../../build/reference/incremental-link-incrementally.md) is implied when /DEBUG is specified.  
  
/DEBUG changes the defaults for the [/OPT](../../build/reference/opt-optimizations.md) option from REF to NOREF and from ICF to NOICF, so if you want the original defaults, you must explicitly specify /OPT:REF or /OPT:ICF.  
  
It is not possible to create an .exe or .dll that contains debug information. Debug information is always placed in a .obj or .pdb file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](http://msdn.microsoft.com/Library/9b0d6f8b-7d4e-4e61-aa75-7d14944816cd).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debugging** property page.  
  
4.  Modify the **Generate Debug Info** property to enable PDB generation. This enables /DEBUG:FASTLINK by default in Visual Studio 2017 RC.  
  
4.  Modify the **Generate Full Program Database File** property to enable /DEBUG:FULL for full PDB generation for every incremental build.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)