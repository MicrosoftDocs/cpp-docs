---
description: "Learn more about: Defining Inline C++ Functions with dllexport and dllimport"
title: "Defining Inline C++ Functions with dllexport and dllimport"
ms.date: "11/04/2016"
helpviewer_keywords: ["inline functions [C++], defining", "functions [C++], defining inline", "dllimport attribute [C++], inline functions", "dllexport attribute [C++], inline functions"]
ms.assetid: 3b48678b-e7b8-4eda-bb46-b5d34dcf7817
---
# Defining Inline C++ Functions with dllexport and dllimport

**Microsoft Specific**

You can define as inline a function with the **`dllexport`** attribute. In this case, the function is always instantiated and exported, whether or not any module in the program references the function. The function is presumed to be imported by another program.

You can also define as inline a function declared with the **`dllimport`** attribute. In this case, the function can be expanded (subject to /Ob specifications), but never instantiated. In particular, if the address of an inline imported function is taken, the address of the function residing in the DLL is returned. This behavior is the same as taking the address of a non-inline imported function.

These rules apply to inline functions whose definitions appear within a class definition. In addition, static local data and strings in inline functions maintain the same identities between the DLL and client as they would in a single program (that is, an executable file without a DLL interface).

Exercise care when providing imported inline functions. For example, if you update the DLL, don't assume that the client will use the changed version of the DLL. To ensure that you are loading the proper version of the DLL, rebuild the DLL's client as well.

**END Microsoft Specific**

## See also

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
