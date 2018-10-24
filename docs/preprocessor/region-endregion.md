---
title: "region, endregion | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["vc-pragma.endregion", "endregion_CPP", "region_CPP", "vc-pragma.region"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragmas, region", "pragmas, endregion", "endregion pragma", "region pragma"]
ms.assetid: c697f807-622f-4796-851b-68a42bbecd84
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# region, endregion
`#pragma region` lets you specify a block of code that you can expand or collapse when using the [outlining feature](/visualstudio/ide/outlining) of the Visual Studio Code Editor.  
  
## Syntax  
  
```  
#pragma region name  
#pragma endregion comment  
```  
  
### Parameters  
*comment*<br/>
(Optional) A comment that will display in the code editor.  
  
*name*<br/>
(Optional) The name of the region.  This name will display in the code editor.  
  
## Remarks  
 
`#pragma endregion` marks the end of a `#pragma region` block.  
  
A `#region` block must be terminated with `#pragma endregion`.  
  
## Example  
  
```cpp  
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