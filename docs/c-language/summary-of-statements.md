---
title: "Summary of C statements"
description: "A summary of the statement grammar in the Microsoft C implementation."
ms.date: 08/24/2020
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
---
# Summary of C statements

*`statement`*:\
&emsp;*`labeled-statement`*\
&emsp;*`compound-statement`*\
&emsp;*`expression-statement`*\
&emsp;*`selection-statement`*\
&emsp;*`iteration-statement`*\
&emsp;*`jump-statement`*\
&emsp;*`try-except-statement`* /\* Microsoft-specific \*/\
&emsp;*`try-finally-statement`* /\* Microsoft-specific \*/

*`jump-statement`*:\
&emsp;**`goto`** *`identifier`* **`;`**\
&emsp;**`continue ;`**\
&emsp;**`break ;`**\
&emsp;**`return`** *`expression`*<sub>opt</sub> **`;`**\
&emsp;**`__leave ;`** /\* Microsoft-specific<sup>1</sup> \*/

*`compound-statement`*:\
&emsp;**`{`** *`declaration-list`*<sub>opt</sub> *`statement-list`*<sub>opt</sub> **`}`**

*`declaration-list`*:\
&emsp;*`declaration`*\
&emsp;*`declaration-list`* *`declaration`*

*`statement-list`*:\
&emsp;*`statement`*\
&emsp;*`statement-list`* *`statement`*

*`expression-statement`*:\
&emsp;*`expression`*<sub>opt</sub> **`;`**

*`iteration-statement`*:\
&emsp;**`while (`** *`expression`* **`)`** *`statement`*\
&emsp;**`do`** *`statement`* **`while (`** *`expression`* **`) ;`**\
&emsp;**`for (`** *`expression`*<sub>opt</sub> **`;`** *`expression`*<sub>opt</sub> **`;`** *`expression`*<sub>opt</sub> **`)`** *`statement`*

*`selection-statement`*:\
&emsp;**`if (`** *`expression`* **`)`** *`statement`*\
&emsp;**`if (`** *`expression`* **`)`** *`statement`* **`else`** *`statement`*\
&emsp;**`switch (`** *`expression`* **`)`** *`statement`*

*`labeled-statement`*:\
&emsp;*`identifier`* **`:`** *`statement`*\
&emsp;**`case`** *`constant-expression`* **`:`** *`statement`*\
&emsp;**`default :`** *`statement`*

*`try-except-statement`*: /\* Microsoft-specific \*/\
&emsp;**`__try`** *`compound-statement`* **`__except (`** *`expression`* **`)`** *`compound-statement`*

*`try-finally-statement`*: /\* Microsoft-specific \*/\
&emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

1 The **`__leave`** keyword is only valid within the **`__try`** block of a *`try-except-statement`* or a *`try-finally-statement`*.

## See also

[Phrase structure grammar](../c-language/phrase-structure-grammar.md)
