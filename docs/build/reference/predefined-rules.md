---
description: "Learn more about: Predefined Rules"
title: "Predefined Rules"
ms.date: "11/04/2016"
helpviewer_keywords: ["rules, predefined", "NMAKE program, predefined rules", "predefined rules in NMAKE"]
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
---
# Predefined Rules

Predefined inference rules use NMAKE-supplied command and options macros.

|Rule|Command|Default<br /><br /> action|Batch<br /><br /> Rule|Platform nmake runs on|
|----------|-------------|------------------------|--------------------|----------------------------|
|.asm.exe|$(AS) $(AFLAGS) $<|ml $<|no|x86|
|.asm.obj|$(AS) $(AFLAGS) /c $<|ml /c $<|yes|x86|
|.asm.exe|$(AS) $(AFLAGS) $<|ml64 $<|no|x64|
|.asm.obj|$(AS) $(AFLAGS) /c $<|ml64 /c $<|yes|x64|
|.c.exe|$(CC) $(CFLAGS) $<|cl $<|no|all|
|.c.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|yes|all|
|.cc.exe|$(CC) $(CFLAGS) $<|cl $<|no|all|
|.cc.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|yes|all|
|.cpp.exe|$(CPP) $(CPPFLAGS) $<|cl $<|no|all|
|.cpp.obj|$(CPP) $(CPPFLAGS) /c $<|cl /c $<|yes|all|
|.cxx.exe|$(CXX) $(CXXFLAGS) $<|cl $<|no|all|
|.cxx.obj|$(CXX) $(CXXFLAGS) /c $<|cl /c $<|yes|all|
|.rc.res|$(RC) $(RFLAGS) /r $<|rc /r $<|no|all|

## See also

[Inference Rules](inference-rules.md)
