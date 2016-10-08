---
title: "Creating Registrar Scripts"
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
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
caps.latest.revision: 8
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
# Creating Registrar Scripts
A registrar script provides data-driven, rather than API-driven, access to the system registry. Data-driven access is typically more efficient since it takes only one or two lines in a script to add a key to the registry.  
  
 The [ATL Control Wizard](../VS_visualcpp/ATL-Control-Wizard.md) automatically generates a registrar script for your COM server. You can find this script in the .rgs file associated with your object.  
  
 The ATL Registrar's Script Engine processes your registrar script at run time. ATL automatically invokes the Script Engine during server setup.  
  
 This article covers the following topics related to the registrar scripts:  
  
-   [Understanding Backus Nauer Form (BNF) Syntax](../VS_visualcpp/Understanding-Backus-Nauer-Form--BNF--Syntax.md)  
  
-   [Understanding Parse Trees](../VS_visualcpp/Understanding-Parse-Trees.md)  
  
-   [Registry Scripting Examples](../VS_visualcpp/Registry-Scripting-Examples.md)  
  
-   [Using Replaceable Parameters (The Registrar's Preprocessor)](../VS_visualcpp/Using-Replaceable-Parameters--The-Registrar-s-Preprocessor-.md)  
  
-   [Invoking Scripts](../VS_visualcpp/Invoking-Scripts.md)  
  
## See Also  
 [Registry Component (Registrar)](../VS_visualcpp/ATL-Registry-Component--Registrar-.md)