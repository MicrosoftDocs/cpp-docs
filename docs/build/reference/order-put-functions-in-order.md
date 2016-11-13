---
title: "-ORDER (Put Functions in Order) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.FunctionOrder"
  - "/order"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ORDER linker option"
  - "-ORDER linker option"
  - "LINK tool [C++], program optimizing"
  - "/ORDER linker option"
  - "LINK tool [C++], swap tuning"
  - "paging, optimizing"
ms.assetid: ecf5eb3e-e404-4e86-9a91-4e5ec157261a
caps.latest.revision: 9
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
# /ORDER (Put Functions in Order)
```  
/ORDER:@filename  
```  
  
## Parameters  
 *filename*  
 A text file specifying the linking order for COMDAT functions.  
  
## Remarks  
 The /ORDER option tells LINK to optimize your program by placing certain COMDATs into the image in a predetermined order. LINK places the functions in the specified order within each section in the image.  
  
 Specify the order in *filename*, which is a text file (response file) that lists the COMDATs in the order you want to link them. Each line in *filename* contains the name of one COMDAT. An object contains COMDATs if it has been compiled with the /Gy option. Function names are case sensitive.  
  
 LINK uses decorated forms of identifiers. The compiler decorates an identifier when it creates the .obj file. Use the [DUMPBIN](../../build/reference/dumpbin-reference.md) tool to get the decorated form of an identifier when you need to specify it to the linker. For more information on decorated names, see [Decorated Names](../../build/reference/decorated-names.md).  
  
 If more than one /ORDER specification is used, the last one specified takes effect.  
  
 Ordering allows you to optimize your program's paging behavior through swap tuning by grouping a function with the functions it calls. You can also group frequently called functions together. These techniques increase the probability that a called function is in memory when it is needed and will not have to be paged from disk.  
  
 The linker will prepend an underscore (_) to every decorated name in *filename* unless the name starts with a question mark (?) or at sign (@). For example, if an object file contains `extern "C" int func(int)` and `int main(void)`, DUMPBIN [/SYMBOLS](../../build/reference/symbols.md) will list these decorated names:  
  
```  
009 00000000 SECT3  notype ()    External     | _func  
00A 00000008 SECT3  notype ()    External     | _main  
```  
  
 However, the name specified in the order file should be `func` and `main`.  
  
 The /ORDER option disables incremental linking.  
  
> [!NOTE]
>  LINK cannot order static functions because static function names are not public symbol names. When /ORDER is specified, linker warning LNK4037 is generated for each symbol, in the order file, that is either static or not found.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Function Order** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.FunctionOrder%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)