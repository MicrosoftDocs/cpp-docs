---
title: "CL Environment Variables"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CL Environment Variables
The CL tool uses the following environment variables:  
  
-   CL and _CL\_, if defined. The CL tool prepends the options and arguments defined in the CL environment variable to the command line arguments, and appends the options and arguments defined in _CL\_, before processing.  
  
-   INCLUDE, which must point to the \include subdirectory of your Visual C++ installation.  
  
-   LIBPATH, which specifies directories to search for metadata files referenced with [#using](../VS_visualcpp/#using-Directive--C---.md). See `#using` for more information on LIBPATH.  
  
 You can set the CL or _CL\_ environment variable using the following syntax:  
  
```  
SET CL=[ [option] ... [file] ...] [/link link-opt ...]  
SET _CL_=[ [option] ... [file] ...] [/link link-opt ...]  
```  
  
 For details on the arguments to the CL and _CL\_ environment variables, see [Compiler Command-Line Syntax](../VS_visualcpp/Compiler-Command-Line-Syntax.md).  
  
 You can use these environment variables to define the files and options you use most often and use the command line to define specific files and options for specific purposes. The CL and _CL\_ environment variables are limited to 1024 characters (the command-line input limit).  
  
 You cannot use the /D option to define a symbol that uses an equal sign (=). You can substitute the number sign (#) for an equal sign. In this way, you can use the CL or _CL_environment variables to define preprocessor constants with explicit values—for example, `/DDEBUG#1` to define `DEBUG=1`.  
  
 For related information, see [Set Environment Variables](../VS_visualcpp/Setting-the-Path-and-Environment-Variables-for-Command-Line-Builds.md).  
  
## Examples  
 The following is an example of settting the CL environment variable:  
  
```  
SET CL=/Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ  
```  
  
 When this environment variable is set, if you enter `CL INPUT.C` at the command line, this is the effective command:  
  
```  
CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ INPUT.C  
```  
  
 The following example causes a plain CL command to compile the source files FILE1.c and FILE2.c, and then link the object files FILE1.obj, FILE2.obj, and FILE3.obj:  
  
```  
SET CL=FILE1.C FILE2.C  
SET _CL_=FILE3.OBJ  
CL  
```  
  
 This has the same effect as the following command line:  
  
```  
CL FILE1.C FILE2.C FILE3.OBJ  
```  
  
## See Also  
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)