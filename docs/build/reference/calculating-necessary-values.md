---
description: "Learn more about: Calculating necessary values for delay loading"
title: "Calculate necessary values for delay loading"
ms.date: "01/19/2021"
helpviewer_keywords: ["helper functions, calculating necessary values"]
---
# Calculate necessary values for delay loading

The delay load helper routine needs to calculate two critical pieces of information. To help, there are two inline functions in *`delayhlp.cpp`* to calculate this information.

- The first, `IndexFromPImgThunkData`, calculates the index of the current import into the three different tables (import address table (IAT), bound import address table (BIAT), and unbound import address table (UIAT)).

- The second, `CountOfImports`, counts the number of imports in a valid IAT.

```C
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

[Understanding the helper function](understanding-the-helper-function.md)
