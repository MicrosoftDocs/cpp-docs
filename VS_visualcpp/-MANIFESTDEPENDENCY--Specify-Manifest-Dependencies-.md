---
title: "-MANIFESTDEPENDENCY (Specify Manifest Dependencies)"
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
H1: /MANIFESTDEPENDENCY (Specify Manifest Dependencies)
ms.assetid: e4b68313-33a2-4c3e-908e-ac2b9f7d6a73
caps.latest.revision: 12
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
# -MANIFESTDEPENDENCY (Specify Manifest Dependencies)
```  
/MANIFESTDEPENDENCY:manifest_dependency  
```  
  
## Remarks  
 /MANIFESTDEPENDENCY lets you specify attributes that will be placed in the <dependency\> section of the manifest file.  
  
 See [/MANIFEST (Create Side-by-Side Assembly Manifest)](../VS_visualcpp/-MANIFEST--Create-Side-by-Side-Assembly-Manifest-.md) for information on how to create a manifest file.  
  
 For more information on the <dependency\> section of the manifest file, see [Publisher Configuration Files](http://msdn.microsoft.com/library/aa375682).  
  
 /MANIFESTDEPENDENCY information can be passed to the linker in one of two ways:  
  
-   Directly on the command line (or in a response file) with /MANIFESTDEPENDENCY.  
  
-   Via the [comment](../VS_visualcpp/comment--C-C---.md) pragma.  
  
 The following example shows a /MANIFESTDEPENDENCY comment passed via pragma,  
  
```  
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"")  
```  
  
 which results in the following entry in the manifest file:  
  
```  
<dependency>  
  <dependentAssembly>  
    <assemblyIdentity type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*' />  
  </dependentAssembly>  
</dependency>  
```  
  
 The same /MANIFESTDEPENDENCY comments can be passed at the command line as follows:  
  
```  
"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"  
```  
  
 The linker will collect /MANIFESTDEPENDENCY comments, eliminate duplicate entries, and then add the resulting XML string to the manifest file.  If the linker finds conflicting entries, the manifest file will become corrupt and the application will fail to launch (an entry may be added to the event log, indicating the source of the failure).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Manifest File** property page.  
  
5.  Modify the **Additional Manifest Dependencies** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalManifestDependencies?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)