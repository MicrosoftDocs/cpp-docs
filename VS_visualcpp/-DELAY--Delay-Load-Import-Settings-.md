---
title: "-DELAY (Delay Load Import Settings)"
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
H1: /DELAY (Delay Load Import Settings)
ms.assetid: 9334b332-cc58-4dae-b10f-a4c75972d50c
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
# -DELAY (Delay Load Import Settings)
```  
/DELAY:UNLOAD  
/DELAY:NOBIND  
```  
  
## Remarks  
 The /DELAY option controls [delayed loading](../VS_visualcpp/Linker-Support-for-Delay-Loaded-DLLs.md) of DLLs:  
  
-   The UNLOAD qualifier tells the delay-load helper function to support explicit unloading of the DLL. The Import Address Table (IAT) is reset to its original form, invalidating IAT pointers and causing them to be overwritten.  
  
     If you do not select UNLOAD, any call to [FUnloadDelayLoadedDLL](../VS_visualcpp/Explicitly-Unloading-a-Delay-Loaded-DLL.md) will fail.  
  
-   The NOBIND qualifier tells the linker not to include a bindable IAT in the final image. The default is to create the bindable IAT for delay-loaded DLLs. The resulting image cannot be statically bound. (Images with bindable IATs may be statically bound prior to execution.) See [/BIND](../VS_visualcpp/-BIND.md).  
  
     If the DLL is bound, the helper function will attempt to use the bound information instead of calling [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212.aspx) on each of the referenced imports. If either the timestamp or the preferred address does not match those of the loaded DLL, the helper function will assume the bound IAT is out of date and will proceed as if the bound IAT does not exist.  
  
     NOBIND causes your program image to be larger but can speed load time of the DLL. If you never intend to bind the DLL, NOBIND will prevent the bound IAT from being generated.  
  
 To specify DLLs to delay load, use the [/DELAYLOAD](../VS_visualcpp/-DELAYLOAD--Delay-Load-Import-.md) option.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For information, see [Working with Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Expand **Configuration Properties**, **Linker**, and then select **Advanced**.  
  
3.  Modify the **Delay Loaded DLL** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)