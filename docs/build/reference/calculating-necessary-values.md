---
description: "Learn more about: Calculating Necessary Values"
title: "Calculating Necessary Values"
ms.date: "11/04/2016"
helpviewer_keywords: ["helper functions, calculating necessary values"]
ms.assetid: 4f037d0f-881a-4a48-a9d2-9f8872dfccb7
---
# Calculating Necessary Values

Two critical pieces of information need to be calculated by the delay helper routine. To that end, there are two inline functions in delayhlp.cpp for calculating this information.

- The first calculates the index of the current import into the three different tables (import address table (IAT), bound import address table (BIAT), and unbound import address table (UIAT)).

- The second counts the number of imports in a valid IAT.

```cpp
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

## See also

[Understanding the Helper Function](understanding-the-helper-function.md)
