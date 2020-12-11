---
description: "Learn more about: Fatal Error C1902"
title: "Fatal Error C1902"
ms.date: "11/04/2016"
f1_keywords: ["C1902"]
helpviewer_keywords: ["C1902"]
ms.assetid: 2dc066cc-fcb1-4725-8bcb-9f44dd0905b7
---
# Fatal Error C1902

program database manager mismatch; please check your installation

A program database file (.pdb) was created using a newer version of mspdb*XXX*.dll than the one the compiler found on your system. This error usually indicates that mspdbsrv.exe or mspdbcore.dll are missing or have different versions than mspdb*XXX*.dll. (The *XXX* placeholder in the mspdb*XXX*.dll file name changes with each product release. For example, in Visual Studio 2015, the file name is mspdb140.dll.)

Ensure matching versions of mspdbsrv.exe, mspdbcore.dll, and mspdb*XXX*.dll are installed on your system. Ensure that mismatched versions have not been copied to the directory that contains the compiler and link tools for your target platform. For example, you might have copied the files so you could invoke the compiler or link tool from the command prompt without setting the **PATH** environment variable accordingly.
