---
title: "Linker Tools Warning LNK4222"
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
ms.topic: error-reference
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
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
# Linker Tools Warning LNK4222
exported symbol 'symbol' should not be assigned an ordinal  
  
 The following symbols should not be exported by ordinal:  
  
-   `DllCanUnloadNow`  
  
-   `DllGetClassObject`  
  
-   `DllGetClassFactoryFromClassString`  
  
-   `DllInstall`  
  
-   `DllRegisterServer`  
  
-   `DllRegisterServerEx`  
  
-   `DllUnregisterServer`  
  
 These functions are always located by name, using `GetProcAddress`. The linker warns about this kind of export is because it could result in a larger image. This could happen if the range of your ordinal exports is large with relatively few exports. For example,  
  
```  
EXPORTS  
   DllGetClassObject   @1  
   MyOtherAPI      @100  
```  
  
 will require 100 slots in the export address table with 98 of them (2-99) just filler. On the other hand,  
  
```  
EXPORTS  
   DllGetClassObject  
   MyOtherAPI      @100  
```  
  
 will require two slots. (Be aware that you can also export with the [/EXPORT](../VS_visualcpp/-EXPORT--Exports-a-Function-.md) linker option.)