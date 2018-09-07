---
title: "Project Build Error PRJ0008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0008"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0008"]
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0008
Could not delete file 'file'.  
  
 **Make sure that the file is not open by another process and is not write-protected.**  
  
 During a rebuild or clean, Visual C++ deletes all known intermediate and output files for the build, as well as any files that meet the wildcard specifications in the **Extensions to Delete on Clean** property in the [General Configuration Settings Property Page](../../ide/general-property-page-project.md).  
  
 You will see this error if Visual C++ is not able to delete a file. To resolve the error, make the file and its directory writeable for the user doing the build.