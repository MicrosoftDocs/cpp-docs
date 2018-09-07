---
title: "Linker Tools Warning LNK4222 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4222"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4222"]
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
  
 will require two slots. (Be aware that you can also export with the [/EXPORT](../../build/reference/export-exports-a-function.md) linker option.)