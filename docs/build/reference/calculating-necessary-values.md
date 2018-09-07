---
title: "Calculating Necessary Values | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["helper functions, calculating necessary values"]
ms.assetid: 4f037d0f-881a-4a48-a9d2-9f8872dfccb7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Calculating Necessary Values
Two critical pieces of information need to be calculated by the delay helper routine. To that end, there are two inline functions in delayhlp.cpp for calculating this information.  
  
-   The first calculates the index of the current import into the three different tables (import address table (IAT), bound import address table (BIAT), and unbound import address table (UIAT)).  
  
-   The second counts the number of imports in a valid IAT.  
  
```  
// utility function for calculating the index of the current import  
// for all the tables (INT, BIAT, UIAT, and IAT).  
__inline unsigned  
IndexFromPImgThunkData(PCImgThunkData pitdCur, PCImgThunkData pitdBase) {  
    return pitdCur - pitdBase;  
    }  
  
// utility function for calculating the count of imports given the base  
// of the IAT. NB: this only works on a valid IAT!  
__inline unsigned  
CountOfImports(PCImgThunkData pitdBase) {  
    unsigned        cRet = 0;  
    PCImgThunkData  pitd = pitdBase;  
    while (pitd->u1.Function) {  
        pitd++;  
        cRet++;  
        }  
    return cRet;  
    }  
```  
  
## See Also  
 [Understanding the Helper Function](understanding-the-helper-function.md)