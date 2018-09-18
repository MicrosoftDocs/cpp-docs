---
title: "Non-MFC DLLs: Overview | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["non-MFC DLLs [C++]", "DLLs [C++], non-MFC"]
ms.assetid: 1ed5d1ee-e20c-47d7-801d-87ea26a73842
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Non-MFC DLLs: Overview

A non-MFC DLL is a DLL that does not use MFC internally, and the exported functions in the DLL can be called by either MFC or non-MFC executable files. Functions are usually exported from a non-MFC DLL using the standard C interface.

For more information about non-MFC DLLs, see [Dynamic-Link Libraries](https://msdn.microsoft.com/library/windows/desktop/ms682589) in the Windows SDK.

## What do you want to do?

- [Walkthrough: Creating and Using a Dynamic Link Library](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)

- [Export from a DLL](../build/exporting-from-a-dll.md)

- [Link an executable to a DLL](../build/linking-an-executable-to-a-dll.md)

- [Initialize a DLL](../build/run-time-library-behavior.md#initializing-a-dll)

## What do you want to know more about?

- [Regular MFC DLLs statically linked to MFC](../build/regular-dlls-statically-linked-to-mfc.md)

- [Regular MFC DLLs dynamically linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)

- [MFC extension DLLs: Overview](../build/extension-dlls-overview.md)

## See Also

[Kinds of DLLs](../build/kinds-of-dlls.md)