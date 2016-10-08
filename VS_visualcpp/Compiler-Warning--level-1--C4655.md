---
title: "Compiler Warning (level 1) C4655"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 540f2c7a-e4a1-49af-84b4-03eeea1bbf41
caps.latest.revision: 6
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4655
**'**   
 ***symbol* ' : variable type is new since the last build, or is defined differently elsewhere**  
  
 You changed or added a new data type since the last successful build. Edit and Continue does not support changes to existing data types.  
  
 This warning is followed by a [Fatal Error C1092](../VS_visualcpp/Fatal-Error-C1092.md). For further information, see the [Supported Code Changes](../Topic/Supported%20Code%20Changes%20\(C++\).md).  
  
### To remove this warning without ending the current debug session  
  
1.  Change the data type back to its state prior to the error.  
  
2.  From the **Debug** menu, choose **Apply Code Changes**.  
  
### To remove this warning without changing your source code  
  
1.  From the **Debug** menu, choose **Stop Debugging**.  
  
2.  From the **Build** menu, choose **Build**.