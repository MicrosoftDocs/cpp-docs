---
title: "Reading Ranges | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Reading Ranges
**ANSI 4.9.6.2** The interpretation of a dash (-) character that is neither the first nor the last character in the scanlist for % [ conversion in the `fscanf` function  
  
 The following line  
  
```  
fscanf( fileptr, "%[A-Z]", strptr);  
```  
  
 reads any number of characters in the range A-Z into the string to which `strptr` points.  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)