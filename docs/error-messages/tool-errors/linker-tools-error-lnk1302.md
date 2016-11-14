---
title: "Linker Tools Error LNK1302 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1302"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1302"
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
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
# Linker Tools Error LNK1302
only support linking safe .netmodules; unable to link file .netmodule  
  
 A .netmodule (compiled with **/LN**) was passed to the linker in a user attempt to invoke MSIL linking.  A C++ module is valid for MSIL linking if it is compiled with **/clr:safe**.  
  
 To correct this error, compile with **/clr:safe** to enable MSIL linking, or pass the **/clr** or **/clr:pure** .obj file to the linker instead of the module.  
  
 For more information, see  
  
-   [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md)  
  
-   [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md)