---
title: "-TLBID (Specify Resource ID for TypeLib) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/tlbid"
  - "VC.Project.VCLinkerTool.TypeLibraryResourceID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tlb files, specifying resource ID"
  - "-TLBID linker option"
  - ".tlb files, specifying resource ID"
  - "/TLBID linker option"
  - "TLBID linker option"
  - "type libraries, specifying resource ID"
ms.assetid: 434b28a2-4656-4d52-ac82-8b18bf486fb2
caps.latest.revision: 8
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
# /TLBID (Specify Resource ID for TypeLib)
```  
/TLBID:id  
```  
  
## Remarks  
 where:  
  
 `id`  
 A user-specified value for a linker-created type library. It overrides the default resource ID of 1.  
  
## Remarks  
 When compiling a program that uses attributes, the linker will create a type library. The linker will assign a resource ID of 1 to the type library.  
  
 If this resource ID conflicts with one of your existing resources, you can specify another ID with /TLBID. The range of values that you can pass to `id` is 1 to 65535.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **TypeLib Resource ID** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryResourceID%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)