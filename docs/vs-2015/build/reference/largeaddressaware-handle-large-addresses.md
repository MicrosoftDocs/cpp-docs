---
title: "-LARGEADDRESSAWARE (Handle Large Addresses) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.LargeAddressAware"
  - "/largeaddressaware"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LARGEADDRESSAWARE linker option"
  - "-LARGEADDRESSAWARE linker option"
  - "/LARGEADDRESSAWARE linker option"
ms.assetid: a29756c8-e893-47a9-9750-1f0d25359385
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /LARGEADDRESSAWARE (Handle Large Addresses)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-LARGEADDRESSAWARE (Handle Large Addresses)](https://docs.microsoft.com/cpp/build/reference/largeaddressaware-handle-large-addresses).  
  
  
LARGEADDRESSAWARE[:NO]  
```  
  
## Remarks  
 The /LARGEADDRESSAWARE option tells the linker that the application can handle addresses larger than 2 gigabytes. In the 64-bit compilers, this option is enabled by default. In the 32-bit compilers, /LARGEADDRESSAWARE:NO is enabled if /LARGEADDRESSAWARE is not otherwise specified on the linker line.  
  
 If an application was linked with /LARGEADDRESSAWARE, DUMPBIN [/HEADERS](../../build/reference/headers.md) will display information to that effect.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **System** property page.  
  
4.  Modify the **Enable Large Addresses** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

