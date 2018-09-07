---
title: "Dependency Side Effects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["dependencies, side effects", "NMAKE program, dependents"]
ms.assetid: d4e8db25-fdc0-4d73-81ec-1538f2e1b3e8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Dependency Side Effects
If a target is specified with a colon (:) in two dependency lines in different locations, and if commands appear after only one of the lines, NMAKE interprets the dependencies as if adjacent or combined. It does not invoke an inference rule for the dependency that has no commands, but instead assumes that the dependencies belong to one description block and executes the commands specified with the other dependency. For example, this set of rules:  
  
```Output  
bounce.exe : jump.obj  
   echo Building bounce.exe...  
  
bounce.exe : up.obj  
```  
  
 is evaluated as this:  
  
```Output  
bounce.exe : jump.obj up.obj  
   echo Building bounce.exe...  
```  
  
 This effect does not occur if a double colon (`::`) is used. For example, this set of rules:  
  
```Output  
bounce.exe :: jump.obj  
   echo Building bounce.exe...  
  
bounce.exe :: up.obj  
```  
  
 is evaluated as this:  
  
```Output  
bounce.exe : jump.obj  
   echo Building bounce.exe...  
  
bounce.exe : up.obj  
# invokes an inference rule  
```  
  
## See Also  
 [Targets](../build/targets.md)