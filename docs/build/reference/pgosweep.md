---
title: "pgosweep | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pgosweep program"
  - "profile-guided optimizations, pgosweep"
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
caps.latest.revision: 22
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
# pgosweep
Used in profile-guided optimization to write all profile data from a running program to the .pgc file.  
  
## Syntax  
  
```  
pgosweep [options] image pgcfile  
```  
  
#### Parameters  
 `options`  
 An optional parameter that can be left blank. The valid values for `options` are as follows:  
  
-   **/?** or **/help,** displays the help message.  
  
-   **/noreset,** preserves the count in the runtime data structures.  
  
 `image`  
 The full path of an .exe or .dll file that was created by using the compiler option /LTCG:PGINSTRUMENT.  
  
 `pgcfile`  
 The .pgc file where this command will write out the data counts.  
  
## Remarks  
 This command works on programs that were built with the /LTCG:PGINSTRUMENT compiler option. It interrupts a running program and writes the profile data to a new .pgc file. By default, the command resets counts after each write operation. If you specify the **/noreset** option, the command will record the values, but not reset them in the running program. This option will give you duplicate data if you retrieve the profile data later.  
  
 An alternative use for `pgosweep` is to retrieve profile information just for the runtime of the application. For example, you could run `pgosweep` shortly after you start the application and discard that file. This would remove profile data associated with startup costs. Then, you can run `pgosweep` before ending the application. Now the collected data has profile information only from runtime.  
  
 When you name a .pgc file (`pgcfile`) you can use the standard format, which is *appname!n*.pgc. If you use this format, the compiler will find this data in the /LTCG:PGO phase. If you do not use the standard format, you must use [pgomgr](../../build/reference/pgomgr.md) to merge the .pgc files.  
  
## Example  
  
```  
pgosweep myapp.exe myapp!1.pgc  
```  
  
 In this example, `pgosweep` writes the current profile information for myapp.exe to myapp!1.pgc.  
  
## See Also  
 [Tools for Manual Profile-Guided Optimization](../../build/reference/tools-for-manual-profile-guided-optimization.md)