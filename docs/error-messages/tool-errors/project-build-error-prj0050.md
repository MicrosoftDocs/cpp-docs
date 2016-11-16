---
title: "Project Build Error PRJ0050 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0050"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0050"
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Project Build Error PRJ0050
Failed to register output. Please ensure you have the appropriate permissions to modify the registry.  
  
 The Visual C++ build system was not able to register the output of the build (dll or .exe). You need to be logged on as an administrator to modify the registry.  
  
 If you are building a .dll, you can try to register the .dll manually using regsvr32.exe, this should display information about why the build failed.  
  
 If you are not building a .dll, look at the build log for the command that causes an error.