---
title: "__if_not_exists Statement"
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
ms.topic: language-reference
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
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
# __if_not_exists Statement
The `__if_not_exists` statement tests whether the specified identifier exists. If the identifier does not exist, the specified statement block is executed.  
  
## Syntax  
  
```  
__if_not_exists ( identifier ) {   
statements  
};  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`identifier`|The identifier whose existence you want to test.|  
|`statements`|One or more statements to execute if `identifier` does not exist.|  
  
## Remarks  
  
> [!CAUTION]
>  To achieve the most reliable results, use the `__if_not_exists` statement under the following constraints.  
  
-   Apply the `__if_not_exists` statement to only simple types, not templates.  
  
-   Apply the `__if_not_exists` statement to identifiers both inside or outside a class. Do not apply the `__if_not_exists` statement to local variables.  
  
-   Use the `__if_not_exists` statement only in the body of a function. Outside of the body of a function, the `__if_not_exists` statement can test only fully defined types.  
  
-   When you test for overloaded functions, you cannot test for a specific form of the overload.  
  
 The complement to the `__if_not_exists` statement is the [__if_exists](../VS_visualcpp/__if_exists-Statement.md) statement.  
  
## Example  
 For an example about how to use `__if_not_exists`, see [__if_exists Statement](../VS_visualcpp/__if_exists-Statement.md).  
  
## See Also  
 [Selection Statements](../VS_visualcpp/Selection-Statements--C---.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [__if_exists Statement](../VS_visualcpp/__if_exists-Statement.md)