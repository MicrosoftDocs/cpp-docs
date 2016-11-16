---
title: "region, endregion | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.endregion"
  - "endregion_CPP"
  - "region_CPP"
  - "vc-pragma.region"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, region"
  - "pragmas, endregion"
  - "endregion pragma"
  - "region pragma"
ms.assetid: c697f807-622f-4796-851b-68a42bbecd84
caps.latest.revision: 7
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
# region, endregion
**#pragma region** lets you specify a block of code that you can expand or collapse when using the [outlining feature](/visualstudio/ide/outlining) of the Visual Studio Code Editor.  
  
## Syntax  
  
```  
#pragma region name  
#pragma endregion comment  
```  
  
#### Parameters  
 `comment`(optional)  
 A comment that will display in the code editor.  
  
 *name*(optional)  
 The name of the region.  This name will display in the code editor.  
  
## Remarks  
 **#pragma endregion** marks the end of a **#pragma region** block.  
  
 A `#region` block must be terminated with **#pragma endregion**.  
  
## Example  
  
```  
// pragma_directives_region.cpp  
#pragma region Region_1  
void Test() {}  
void Test2() {}  
void Test3() {}  
#pragma endregion Region_1  
  
int main() {}  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)