---
title: "Understanding Parse Trees | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parse trees"
ms.assetid: 668ce2dd-a1c3-4ca0-8135-b25267cb6a85
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
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
# Understanding Parse Trees
You can define one or more parse trees in your registrar script, where each parse tree has the following form:  
  
```  
<root key>{<registry expression>}+  
```  
  
 where:  
  
```  
<root key> ::= HKEY_CLASSES_ROOT | HKEY_CURRENT_USER |  
    HKEY_LOCAL_MACHINE | HKEY_USERS |  
    HKEY_PERFORMANCE_DATA | HKEY_DYN_DATA |  
    HKEY_CURRENT_CONFIG | HKCR | HKCU |  
    HKLM | HKU | HKPD | HKDD | HKCC  
<registry expression> ::= <Add Key> | <Delete Key>  
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name>  
 [<Key Value>][{<Add Key>}]  
<Delete Key> ::= Delete<Key Name>  
<Key Name> ::= '<AlphaNumeric>+'  
<AlphaNumeric> ::= any character not NULL, i.e. ASCII 0  
<Key Value> ::== <Key Type><Key Name>  
<Key Type> ::= s | d  
<Key Value> ::= '<AlphaNumeric>'  
```  
  
> [!NOTE]
> `HKEY_CLASSES_ROOT` and `HKCR` are equivalent; `HKEY_CURRENT_USER` and `HKCU` are equivalent; and so on.  
  
 A parse tree can add multiple keys and subkeys to the \<root key>. In doing so, it keeps a subkey's handle open until the parser has completed parsing all of its subkeys. This approach is more efficient than operating on a single key at a time, as seen in the following example:  
  
```  
HKEY_CLASSES_ROOT  
{  
 'MyVeryOwnKey'  
 {  
 'HasASubKey'  
 {  
 'PrettyCool'  
 }  
 }  
}  
```  
  
 Here, the Registrar initially opens (creates) `HKEY_CLASSES_ROOT\MyVeryOwnKey`. It then sees that `MyVeryOwnKey` has a subkey. Rather than close the key to `MyVeryOwnKey`, the Registrar retains the handle and opens (creates) `HasASubKey` using this parent handle. (The system registry can be slower when no parent handle is open.) Thus, opening `HKEY_CLASSES_ROOT\MyVeryOwnKey` and then opening `HasASubKey` with `MyVeryOwnKey` as the parent is faster than opening `MyVeryOwnKey`, closing `MyVeryOwnKey`, and then opening `MyVeryOwnKey\HasASubKey`.  
  
## See Also  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)

