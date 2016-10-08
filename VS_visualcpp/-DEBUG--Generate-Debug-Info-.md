---
title: "-DEBUG (Generate Debug Info)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /DEBUG (Generate Debug Info)
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -DEBUG (Generate Debug Info)
```  
/DEBUG  
```  
  
## Remarks  
 The /DEBUG option creates debugging information for the .exe file or DLL.  
  
 The linker puts the debugging information into a program database (PDB). It updates the PDB during subsequent builds of the program.  
  
 An .exe file or DLL created for debugging contains the name and path of the corresponding PDB. The debugger reads the embedded name and uses the PDB when you debug the program. The linker uses the base name of the program and the extension .pdb to name the program database, and embeds the path where it was created. To override this default, set [/PDB](../VS_visualcpp/-PDB--Use-Program-Database-.md) and specify a different file name.  
  
 The compiler's [Line Numbers Only](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) (/Zd) or [C7 Compatible](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) (/Z7) option causes the compiler to leave the debugging information in the .obj files. You can also use the [Program Database](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) (/Zi) compiler option to store the debugging information in a PDB for the .obj file. The linker looks for the object's PDB first in the absolute path written in the .obj file, and then in the directory that contains the .obj file. You cannot specify an object's PDB file name or location to the linker.  
  
 [/INCREMENTAL](../VS_visualcpp/-INCREMENTAL--Link-Incrementally-.md) is implied when /DEBUG is specified.  
  
 /DEBUG changes the defaults for the [/OPT](../VS_visualcpp/-OPT--Optimizations-.md) option from REF to NOREF and from ICF to NOICF (so, you will need to explicitly specify /OPT:REF or /OPT:ICF).  
  
 See Knowledge Base article Q121366, INFO: PDB and DBG Files - What They Are and How They Work, for more information on .PDB and .DBG files. You can find Knowledge Base articles in the MSDN Library, or at [http://support.microsoft.com](http://support.microsoft.com/).  
  
 It is not possible to create an .exe or .dll that contains debug information. Debug information is always placed in a .pdb file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debugging** property page.  
  
4.  Modify the **Generate Debug Info** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)