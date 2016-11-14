---
title: "-SECTION (Specify Section Attributes) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/section"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SECTION linker option"
  - "-SECTION linker option"
  - "section attributes"
  - "/SECTION linker option"
ms.assetid: 92b69d81-e421-462e-b46f-7d0dff9b9d16
caps.latest.revision: 11
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
# /SECTION (Specify Section Attributes)
```  
/SECTION:name,[[!]{DEKPRSW}][,ALIGN=#]  
```  
  
## Remarks  
 The /SECTION option changes the attributes of a section, overriding the attributes set when the .obj file for the section was compiled.  
  
 A section in a portable executable (PE) file is roughly equivalent to a segment or the resources in a new executable (NE) file. Sections contain either code or data. Unlike segments, sections are blocks of contiguous memory with no size constraints. Some sections contain code or data that your program declared and uses directly, while other data sections are created for you by the linker and library manager (lib.exe) and contain information vital to the operating system. For more information on NE files, see Knowledge Base article "Executable-File Header Format" (Q65122). You can find Knowledge Base articles in the MSDN Library, or at [http://support.microsoft.com](http://support.microsoft.com).  
  
 Specify a colon (:) and a section *name*. The *name* is case sensitive.  
  
 Do not use the following names, as they will conflict with standard names. For example, .sdata is used on RISC platforms:  
  
-   .arch  
  
-   .bss  
  
-   .data  
  
-   .edata  
  
-   .idata  
  
-   .pdata  
  
-   .rdata  
  
-   .reloc  
  
-   .rsrc  
  
-   .sbss  
  
-   .sdata  
  
-   .srdata  
  
-   .text  
  
-   .xdata  
  
 Specify one or more attributes for the section. The attribute characters, listed below, are not case sensitive. You must specify all attributes that you want the section to have; an omitted attribute character causes that attribute bit to be turned off. If you do not specify R, W, or E, the existing read, write, or executable status remains unchanged.  
  
 To negate an attribute, precede its character with an exclamation point (!). The meanings of the attribute characters are shown below.  
  
|Character|Attribute|Meaning|  
|---------------|---------------|-------------|  
|E|Execute|The section is executable|  
|R|Read|Allows read operations on data|  
|W|Write|Allows write operations on data|  
|S|Shared|Shares the section among all processes that load the image|  
|D|Discardable|Marks the section as discardable|  
|K|Cacheable|Marks the section as not cacheable|  
|P|Pageable|Marks the section as not pageable|  
  
 K and P are peculiar in that the section flags that correspond to them are in the negative sense. If you specify one of them on the .text section (/SECTION:.text,K), there will be no difference in the section flags when you run [DUMPBIN](../../build/reference/dumpbin-options.md) with the [/HEADERS](../../build/reference/headers.md) option; it was already implicitly cached. To remove the default, specify /SECTION:.text,!K and DUMPBIN will reveal section characteristics, including "Not Cached."  
  
 A section in the PE file that does not have E, R, or W set is probably invalid.  
  
 The ALIGN*=#* lets you specify an alignment value for a particular section. See [/ALIGN](../../build/reference/align-section-alignment.md) for more information.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)