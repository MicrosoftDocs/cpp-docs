---
description: "Learn more about: Understanding parse trees"
title: "ATL Registrar and Parse Trees"
ms.date: 04/15/2021
helpviewer_keywords: ["parse trees"]
---
# Understanding parse trees

You can define one or more parse trees in your registrar script, where each parse tree has the following form:

> \<root-key>{\<registry expression>}+

where:

> *\<root-key>* ::=\
> &emsp;**`HKEY_CLASSES_ROOT`** &vert; **`HKEY_CURRENT_USER`** &vert;\
> &emsp;**`HKEY_LOCAL_MACHINE`** &vert; **`HKEY_USERS`** &vert;\
> &emsp;**`HKEY_PERFORMANCE_DATA`** &vert; **`HKEY_DYN_DATA`** &vert;\
> &emsp;**`HKEY_CURRENT_CONFIG`** &vert; **`HKCR`** &vert; **`HKCU`** &vert;\
> &emsp;**`HKLM`** &vert; **`HKU`** &vert; **`HKPD`** &vert; **`HKDD`** &vert; **`HKCC`**
>
> *\<registry-expression>* ::=\
> &emsp; *\<Add-Key>* &vert; *\<Delete-Key>*
>
> *\<Add-Key>* ::=\
> &emsp; \[**`ForceRemove`** &vert; **`NoRemove`** &vert; **`val`**] *\<Key-Name>* \[*\<Key-Value>*] \[ **`{`** *\<Add-Key>* **`}`** ]
>
> *\<Delete-Key>* ::=\
> &emsp; **`Delete`** *\<Key-Name>*
>
> *\<Key-Name>* ::=\
> &emsp; **`'`***\<AlphaNumeric>*+**`'`**
>
> *\<AlphaNumeric>* ::=\
> &emsp; any non-null character.
>
> *\<Key-Value>* ::=\
> &emsp; *\<Key-Type>* *\<Key-Name>*
>
> *\<Key-Type>* ::=\
> &emsp; **`s`** &vert; **`d`**

> [!NOTE]
> **`HKEY_CLASSES_ROOT`** and **`HKCR`** are equivalent; **`HKEY_CURRENT_USER`** and **`HKCU`** are equivalent; and so on.

A parse tree can add multiple keys and subkeys to the \<root-key>. The Registrar keeps each subkey handle open until the parser has completed parsing all of its subkeys. It's more efficient than operating on a single key at a time. Here's an example:

```rgs
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

Here, the Registrar initially opens (creates) `HKEY_CLASSES_ROOT\MyVeryOwnKey`. It then sees that `MyVeryOwnKey` has a subkey. Rather than close the key to `MyVeryOwnKey`, the Registrar keeps the handle and opens (creates) `HasASubKey` using this parent handle. (The system registry can be slower when no parent handle is open.) So, opening `HKEY_CLASSES_ROOT\MyVeryOwnKey` and then opening `HasASubKey` with `MyVeryOwnKey` as the parent is faster than opening `MyVeryOwnKey`, closing `MyVeryOwnKey`, and then opening `MyVeryOwnKey\HasASubKey`.

## See also

[Creating registrar scripts](../atl/creating-registrar-scripts.md)
