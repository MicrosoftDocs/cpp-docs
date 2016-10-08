---
title: "-Fi (Preprocess Output File Name)"
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
H1: /Fi (Preprocess Output File Name)
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
caps.latest.revision: 5
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
# -Fi (Preprocess Output File Name)
Specifies the name of the output file to which the [/P (Preprocess to a File)](../VS_visualcpp/-P--Preprocess-to-a-File-.md) compiler option writes preprocessed output.  
  
## Syntax  
  
```  
/Fipathname  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`pathname`|The name and path of the output file produced by the **/P** compiler option.|  
  
## Remarks  
 Use the **/Fi** compiler option in combination with the **/P** compiler option.  
  
 If you specify only a path for the `pathname` parameter, the base name of the source file is used as the base name of the preprocessed output file. The `pathname` parameter does not require a particular file name extension. However, an extension of ".i" is used if you do not specify a file name extension.  
  
## Example  
 The following command line preprocesses PROGRAM.cpp, preserves comments, adds [#line](../VS_visualcpp/#line-Directive--C-C---.md) directives, and writes the result to the MYPROCESS.i file.  
  
```  
CL /P /FiMYPROCESS.I PROGRAM.CPP  
```  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [/P (Preprocess to a File)](../VS_visualcpp/-P--Preprocess-to-a-File-.md)   
 [Specifying the Pathname](../VS_visualcpp/Specifying-the-Pathname.md)