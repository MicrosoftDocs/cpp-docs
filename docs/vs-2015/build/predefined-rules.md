---
title: "Predefined Rules | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rules, predefined"
  - "NMAKE program, predefined rules"
  - "predefined rules in NMAKE"
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Predefined Rules
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Predefined Rules](https://docs.microsoft.com/cpp/build/predefined-rules).  
  
  
Predefined inference rules use NMAKE-supplied command and options macros.  
  
|Rule|Command|Default<br /><br /> action|Batch<br /><br /> Rule|Platform nmake runs on|  
|----------|-------------|------------------------|--------------------|----------------------------|  
|.asm.exe|$(AS) $(AFLAGS) $<|ml $<|no|x86|  
|.asm.obj|$(AS) $(AFLAGS) /c $<|ml /c $<|yes|x86|  
|.asm.exe|$(AS) $(AFLAGS) $<|ml64 $<|no|[!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
|.asm.obj|$(AS) $(AFLAGS) /c $<|ml64 /c $<|yes|[!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
|.c.exe|$(CC) $(CFLAGS) $<|cl $<|no|all|  
|.c.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|yes|all|  
|.cc.exe|$(CC) $(CFLAGS) $<|cl $<|no|all|  
|.cc.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|yes|all|  
|.cpp.exe|$(CPP) $(CPPFLAGS) $<|cl $<|no|all|  
|.cpp.obj|$(CPP) $(CPPFLAGS) /c $<|cl /c $<|yes|all|  
|.cxx.exe|$(CXX) $(CXXFLAGS) $<|cl $<|no|all|  
|.cxx.obj|$(CXX) $(CXXFLAGS) /c $<|cl /c $<|yes|all|  
|.rc.res|$(RC) $(RFLAGS) /r $<|rc /r $<|no|all|  
  
## See Also  
 [Inference Rules](../build/inference-rules.md)

