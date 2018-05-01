---
title: "Linker Tools Error LNK1309 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1309"
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1309
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1309](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1309).  
  
  
type1 module detected; invalid with switch /CLRIMAGETYPE:type2  
  
 A CLR image type was requested with **/CLRIMAGETYPE** but the linker could not produce an image of that type because one or more modules were incompatible with that type.  
  
 For example, you will see LNK1309 if you specify **/CLRIMAGETYPE:safe** and you pass a module built with **/clr:pure**.  
  
 You will also see LNK1309 if you attempt to build a partially trusted CLR pure application using ptrustu[d].lib. For information on how to create a partially trusted application, see [How to: Create a Partially Trusted Application by Removing Dependency on the CRT Library DLL](../../dotnet/create-a-partially-trusted-application.md).  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) and [/CLRIMAGETYPE (Specify Type of CLR Image)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).

