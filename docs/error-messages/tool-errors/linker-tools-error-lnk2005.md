---
title: "Linker Tools Error LNK2005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2005"
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
caps.latest.revision: 14
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
# Linker Tools Error LNK2005
*symbol* already defined in object  
  
The symbol *symbol* was defined more than once.   
  
This error is followed by fatal error [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).  
  
### Possible causes and solutions  
  
Generally, this error means you have broken the *one definition rule*, which allows only one definition for any used template, function, type, or object in a given object file, and only one definition across the entire executable for externally visible objects or functions.  
  
Here are some common causes for this error.  
  
-   A header file both declares and defines a variable. For example, if you include this header file in more than one source file in your project, an error results:  
  
    ```h  
    // LNK2005_global.h  
    bool global_bool = false;  
    ```  
  
    Possible solutions include:  
  
    -   Declare the variable in the header file but don't define it: `extern bool global_bool;` Then assign it a value in one and only one source file: `bool global_bool = false;`. You can use the variable in any source file that includes the header.  
  
    -   Declare the variable [static](../../cpp/storage-classes-cpp.md#static). This defines the variable once; the linker combines all references to the definition.  
  
    -   Declare the variable [selectany](../../cpp/selectany.md). This is similar to `static` but lets the linker pick one definition and discard the rest.  
  
-   A header file defines a function that isn't `inline`. If you include this header file in more than one source file, you get multiple definitions of the function in the executable.  
    
    ```h  
    // LNK2005_func.h  
    int sample_function(int k) { return 42 * (k % 167); }  
    ```  
  
    To fix this issue, 
    -   Add the `inline` keyword to the function: 

        ```h  
        // LNK2005_func_inline.h  
        inline int sample_function(int k) { return 42 * (k % 167); }  
        ```  
  
    -   Remove the definition from the header file and leave only the declaration, then implement the function in one and only one source file:  
  
        ```h  
        // LNK2005_func_decl.h  
        int sample_function(int);  
        ```  
  
        ```cpp  
        // LNK2005_func_impl.cpp  
        int sample_function(int k) { return 42 * (k % 167); }  
        ```  
    This can also happen if you define member functions in a header file outside the class declaration. To fix this issue, move the member function definitions inside the class. Member functions defined inside a class declaration are automatically inlined. 

-   You link more than one version of the standard library or CRT. For example, if you attempt to link both the retail and debug CRT libraries, or you attempt to link two different versions of the standard library to your executable, this error is reported many times. To fix this issue, remove all but one copy of each library from the link command. To use a library other than the defaults, on the command line, use the [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries) option. In the IDE, open the **Property Pages** dialog for your project, and in the **Linker**, **Input** property page, set either **Ignore All Default Libraries**, or **Ignore Specific Default Libraries** properties.   
  
-   You mix use of static and dynamic libraries when also using [/clr](../../build/reference/clr-common-language-runtime-compilation.md). To fix this issue, use only static libraries or only dynamic libraries for the entire executable.  
  
-   The symbol is a packaged function (created by compiling with [/Gy](../../build/reference/gy-enable-function-level-linking.md)) and was included in more than one file, but was changed between compilations. To fix this issue, recompile all files that include the packaged function.  
  
-   The symbol is defined differently in two member objects in different libraries, and both member objects were used. To fix this issue, use the symbol from only one version of the member object in any one source file.   
  
-   A constant is defined twice, with a different value in each definition. To fix this issue, define the constant only once, or use namespaces or `enum class` definitions to distinguish the constants.  
  
-   If you use uuid.lib in combination with other .lib files that define GUIDs (for example, oledb.lib and adsiid.lib). For example:  
  
    ```  
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject  
    already defined in uuid.lib(go7.obj)  
    ```  
  
     To fix this issue, add [/FORCE:MULTIPLE](../../build/reference/force-force-file-output.md) to the linker command line options, and make sure that uuid.lib is the first library referenced.
  
## Additional information  
  
If you are using an older version of the toolset, see these Knowledge Base articles for more information about specific causes for this error:  
  
-   [A LNK2005 error occurs when the CRT library and MFC libraries are linked in the wrong order in Visual C++](https://support.microsoft.com/kb/148652)  
  
-   [FIX: Global Overloaded Delete Operator Causes LNK2005](https://support.microsoft.com/kb/140440)  
  
-   [You receive LNK2005 errors when you compile an ATL executable (.exe) project in Visual C++](https://support.microsoft.com/kb/184235).  
  
