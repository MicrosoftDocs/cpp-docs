---
title: "Compiler Warning (level 1) C4103 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4103"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4103"]
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4103
'filename' : alignment changed after including header, may be due to missing #pragma pack(pop)  
  
 Packing affects the layout of classes, and commonly, if packing changes across header files, there can be problems.  
  
 Use #pragma [pack](../../preprocessor/pack.md)(pop) before exiting the header file to resolve this warning.  
  
 The following sample generates C4103:  
  
```  
// C4103.h  
#pragma pack(push, 4)  
  
// defintions and declarations  
  
// uncomment the following line to resolve  
// #pragma pack(pop)  
```  
  
 And then,  
  
```  
// C4103.cpp  
// compile with: /LD /W1  
#include "c4103.h"   // C4103  
```