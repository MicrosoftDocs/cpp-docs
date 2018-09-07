---
title: "-WINMDDELAYSIGN (Partially Sign a winmd) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.WINMDDelaySign"]
dev_langs: ["C++"]
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /WINMDDELAYSIGN (Partially Sign a winmd)
Enables partial signing of a Windows Runtime Metadata (.winmd) file by putting the public key in the file.  
  
```  
/WINMDDELAYSIGN[:NO]  
```  
  
## Remarks  
 Resembles the [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) linker option that is applied to the .winmd file. Use **/WINMDDELAYSIGN** if you want to put only the public key in the .winmd file. By default, the linker acts as if **/WINMDDELAYSIGN:NO** were specified; that is, it does not sign the winmd file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Windows Metadata** property page.  
  
4.  In the **Windows Metadata Delay Sign** drop-down list box, select the option you want.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)