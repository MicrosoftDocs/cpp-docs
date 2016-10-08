---
title: "-vmm, -vms, -vmv (General Purpose Representation)"
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
H1: /vmm, /vms, /vmv (General Purpose Representation)
ms.assetid: 0fcd7ae0-3031-4c62-a2a8-e154c8685dae
caps.latest.revision: 12
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
# -vmm, -vms, -vmv (General Purpose Representation)
Used when [/vmb, /vmg (Representation Method)](../VS_visualcpp/-vmb---vmg--Representation-Method-.md) is selected as the [representation method](../VS_visualcpp/-vmb---vmg--Representation-Method-.md). These options indicate the inheritance model of the not-yet-encountered class definition.  
  
## Syntax  
  
```  
/vmm  
/vms  
/vmv  
```  
  
## Remarks  
 The options are described in the following table.  
  
|Option|Description|  
|------------|-----------------|  
|**/vmm**|Specifies the most general representation of a pointer to a member of a class to be one that uses multiple inheritance.<br /><br /> The corresponding [inheritance keyword](../VS_visualcpp/Inheritance-Keywords.md) and argument to [#pragma pointers_to_members](../VS_visualcpp/pointers_to_members.md) is **multiple_inheritance**.<br /><br /> This representation is larger than that required for single inheritance.<br /><br /> If the inheritance model of a class definition for which a pointer to a member is declared is virtual, the compiler generates an error.|  
|**/vms**|Specifies the most general representation of a pointer to a member of a class to be one that uses either no inheritance or single inheritance.<br /><br /> The corresponding [inheritance keyword](../VS_visualcpp/Inheritance-Keywords.md) and argument to [#pragma pointers_to_members](../VS_visualcpp/pointers_to_members.md) is **single_inheritance**.<br /><br /> This is the smallest possible representation of a pointer to a member of a class.<br /><br /> If the inheritance model of a class definition for which a pointer to a member is declared is multiple or virtual, the compiler generates an error.|  
|**/vmv**|Specifies the most general representation of a pointer to a member of a class to be one that uses virtual inheritance. It never causes an error and is the default.<br /><br /> The corresponding [inheritance keyword](../VS_visualcpp/Inheritance-Keywords.md) and argument to [#pragma pointers_to_members](../VS_visualcpp/pointers_to_members.md) is **virtual_inheritance**.<br /><br /> This option requires a larger pointer and additional code to interpret the pointer than the other options.|  
  
 When you specify one of these inheritance-model options, that model is used for all pointers to class members, regardless of their inheritance type or whether the pointer is declared before or after the class. Therefore, if you always use single-inheritance classes, you can reduce code size by compiling with **/vms**; however, if you want to use the most general case (at the expense of the largest data representation), compile with **/vmv**.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [/vmb, /vmg (Representation Method)](../VS_visualcpp/-vmb---vmg--Representation-Method-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)