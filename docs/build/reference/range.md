---
title: "-RANGE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/RANGE"]
dev_langs: ["C++"]
helpviewer_keywords: ["/RANGE dumpbin option", "-RANGE dumpbin option"]
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /RANGE
Modifies the output of dumpbin when used with other dumpbin options, such as /RAWDATA or /DISASM.  
  
## Syntax  
  
```  
/RANGE:vaMin[,vaMax]  
```  
  
## Flags  
 **vaMin**  
 The virtual address at which you want the dumpbin operation to begin.  
  
 **vaMax** (optional)  
 The virtual address at which you want the dumpbin operation to end. If not specified, dumpbin will go to the end of the file.  
  
## Remarks  
 To see the virtual addresses for an image, use the map file for the image (RVA + Base), the **/DISASM** or **/HEADERS** option of dumpbin, or the disassembly window in the Visual Studio debugger.  
  
## Example  
 In this example, **/range** is used to modify the display of the **/disasm** option. In this example, the starting value is expressed as a decimal number and the ending value is specified as a hex number.  
  
```  
dumpbin /disasm /range:4219334,0x004061CD t.exe  
```  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)