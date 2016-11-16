---
title: "CL Invokes the Linker | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compiling source code [C++], without linking"
  - "invoking linker from the compiler"
  - "LINK tool [C++], invoking from CL compiler"
  - "cl.exe compiler [C++], compiling without linking"
  - "cl.exe compiler [C++], controlling linker"
ms.assetid: eae47ef7-09eb-40c9-b318-7c714cd452fc
caps.latest.revision: 8
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
# CL Invokes the Linker
CL automatically invokes the linker after compiling unless the /c option is used. CL passes to the linker the names of .obj files created during compiling and the names of any other files specified on the command line. The linker uses the options listed in the LINK environment variable. You can use the /link option to specify linker options on the CL command line. Options that follow the /link option override those in the LINK environment variable. The options in the following table suppress linking.  
  
|Option|Description|  
|------------|-----------------|  
|/c|Compile without linking|  
|/E, /EP, /P|Preprocess without compiling or linking|  
|/Zg|Generate function prototypes|  
|/Zs|Check syntax|  
  
 For further details about linking, see [Linker Options](../../build/reference/linker-options.md).  
  
## Example  
 Assume that you are compiling three C source files: MAIN.c, MOD1.c, and MOD2.c. Each file includes a call to a function defined in a different file:  
  
-   MAIN.c calls the function `func1` in MOD1.c and the function `func2` in MOD2.c.  
  
-   MOD1.c calls the standard library functions `printf_s` and `scanf_s`.  
  
-   MOD2.c calls graphics functions named `myline` and `mycircle`, which are defined in a library named MYGRAPH.lib.  
  
 To build this program, compile with the following command line:  
  
```  
CL MAIN.c MOD1.C MOD2.C MYGRAPH.lib  
```  
  
 CL first compiles the C source files and creates the object files MAIN.obj, MOD1.obj, and MOD2.obj. The compiler places the name of the standard library in each .obj file. For more details, see [Use Run-Time Library](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
 CL passes the names of the .obj files, along with the name MYGRAPH.lib, to the linker. The linker resolves the external references as follows:  
  
1.  In MAIN.obj, the reference to `func1` is resolved using the definition in MOD1.obj; the reference to `func2` is resolved using the definition in MOD2.obj.  
  
2.  In MOD1.obj, the references to `printf_s` and `scanf_s` are resolved using the definitions in the library that the linker finds named within MOD1.obj.  
  
3.  In MOD2.obj, the references to `myline` and `mycircle` are resolved using the definitions in MYGRAPH.lib.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)