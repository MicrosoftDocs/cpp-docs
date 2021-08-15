---
title: "Summary of C statements"
description: "A summary of the statement grammar in the Microsoft C implementation."
ms.date: 08/24/2020
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
---
# Summary of C statements

*`statement`*:<br/>
&emsp;*`labeled-statement`*<br/>
&emsp;*`compound-statement`*<br/>
&emsp;*`expression-statement`*<br/>
&emsp;*`selection-statement`*<br/>
&emsp;*`iteration-statement`*<br/>
&emsp;*`jump-statement`*<br/>
&emsp;*`try-except-statement`* /\* Microsoft-specific \*/<br/>
&emsp;*`try-finally-statement`* /\* Microsoft-specific \*/

*`jump-statement`*:<br/>
&emsp;**`goto`** *`identifier`* **`;`**<br/>
&emsp;**`continue ;`**<br/>
&emsp;**`break ;`**<br/>
&emsp;**`return`** *`expression`*<sub>opt</sub> **`;`**<br/>
&emsp;**`__leave ;`** /\* Microsoft-specific<sup>1</sup> \*/

*`compound-statement`*:<br/>
&emsp;**`{`** *`declaration-list`*<sub>opt</sub> *`statement-list`*<sub>opt</sub> **`}`**

*`declaration-list`*:<br/>
&emsp;*`declaration`*<br/>
&emsp;*`declaration-list`* *`declaration`*

*`statement-list`*:<br/>
&emsp;*`statement`*<br/>
&emsp;*`statement-list`* *`statement`*

*`expression-statement`*:<br/>
&emsp;*`expression`*<sub>opt</sub> **`;`**

*`iteration-statement`*:<br/>
&emsp;**`while (`** *`expression`* **`)`** *`statement`*<br/>
&emsp;**`do`** *`statement`* **`while (`** *`expression`* **`) ;`**<br/>
&emsp;**`for (`** *`expression`*<sub>opt</sub> **`;`** *`expression`*<sub>opt</sub> **`;`** *`expression`*<sub>opt</sub> **`)`** *`statement`*

*`selection-statement`*:<br/>
&emsp;**`if (`** *`expression`* **`)`** *`statement`*<br/>
&emsp;**`if (`** *`expression`* **`)`** *`statement`* **`else`** *`statement`*<br/>
&emsp;**`switch (`** *`expression`* **`)`** *`statement`*

*`labeled-statement`*:<br/>
&emsp;*`identifier`* **`:`** *`statement`*<br/>
&emsp;**`case`** *`constant-expression`* **`:`** *`statement`*<br/>
&emsp;**`default :`** *`statement`*

*`try-except-statement`*: /\* Microsoft-specific \*/<br/>
&emsp;**`__try`** *`compound-statement`* **`__except (`** *`expression`* **`)`** *`compound-statement`*

*`try-finally-statement`*: /\* Microsoft-specific \*/<br/>
&emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

1 The **`__leave`** keyword is only valid within the **`__try`** block of a *`try-except-statement`* or a *`try-finally-statement`*.

## See also

[Phrase structure grammar](../c-language/phrase-structure-grammar.md)
