---
title: "component | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["vc-pragma.component", "component_CPP"]
dev_langs: ["C++"]
helpviewer_keywords: ["component pragma", "pragmas, component"]
ms.assetid: 7b66355e-3201-4c14-8190-f4a2a81a604a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# component
Controls the collecting of browse information or dependency information from within source files.  
  
## Syntax  
  
```  
#pragma component( browser, { on | off }[, references [, name ]] )  
#pragma component( minrebuild, on | off )  
#pragma component( mintypeinfo, on | off )  
```  
  
## Remarks  
  
### Browser  
You can turn collecting on or off, and you can specify particular names to be ignored as information is collected.  
  
Using on or off controls the collection of browse information from the pragma forward. For example:  
  
```  
#pragma component(browser, off)  
```  
  
stops the compiler from collecting browse information.  
  
> [!NOTE]
> To turn on the collecting of browse information with this pragma, [browse information must first be enabled](../build/reference/building-browse-information-files-overview.md).  
  
The `references` option can be used with or without the *name* argument. Using `references` without *name* turns on or off the collecting of references (other browse information continues to be collected, however). For example:  
  
```  
#pragma component(browser, off, references)  
```  
  
stops the compiler from collecting reference information.  
  
Using `references` with *name* and `off` prevents references to *name* from appearing in the browse information window. Use this syntax to ignore names and types you are not interested in and to reduce the size of browse information files. For example:  
  
```  
#pragma component(browser, off, references, DWORD)  
```  
  
ignores references to DWORD from that point forward. You can turn collecting of references to DWORD back on by using `on`:  
  
```  
#pragma component(browser, on, references, DWORD)  
```  
  
This is the only way to resume collecting references to *name*; you must explicitly turn on any *name* that you have turned off.  
  
To prevent the preprocessor from expanding *name* (such as expanding NULL to 0), put quotes around it:  
  
```  
#pragma component(browser, off, references, "NULL")  
```  
  
### Minimal Rebuild  
The Visual C++ minimal rebuild feature requires that the compiler create and store C++ class dependency information, which takes disk space. To save disk space, you can use `#pragma component( minrebuild, off )` whenever you don't need to collect dependency information, for instance, in unchanging header files. Insert `#pragma component(minrebuild, on)` after unchanging classes to turn dependency collection back on.  
  
### Reduce Type Information  
The `mintypeinfo` option reduces the debugging information for the region specified. The volume of this information is considerable, impacting .pdb and .obj files. You cannot debug classes and structures in the mintypeinfo region. Use of the mintypeinfo option can be helpful to avoid the following warning:  
  
```  
LINK : warning LNK4018: too many type indexes in PDB "filename", discarding subsequent type information  
```  
  
For more information, see the [Enable Minimal Rebuild](../build/reference/gm-enable-minimal-rebuild.md) (/Gm) compiler option.  
  
## See Also  
 
[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)