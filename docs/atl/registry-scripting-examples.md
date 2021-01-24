---
description: "Learn more about: Registry Scripting Examples"
title: "Registry Scripting Examples"
ms.date: "11/04/2016"
helpviewer_keywords: ["scripting, examples", "registrar scripts [ATL]", "scripts, Registrar scripts", "registry, Registrar"]
ms.assetid: b6df80e1-e08b-40ee-9243-9b381b172460
---
# Registry Scripting Examples

The scripting examples in this topic demonstrate how to add a key to the system registry, register the Registrar COM server, and specify multiple parse trees.

## Add a Key to HKEY_CURRENT_USER

The following parse tree illustrates a simple script that adds a single key to the system registry. In particular, the script adds the key, `MyVeryOwnKey`, to `HKEY_CURRENT_USER`. It also assigns the default string value of `HowGoesIt` to the new key:

```rgs
HKEY_CURRENT_USER
{
    'MyVeryOwnKey' = s 'HowGoesIt'
}
```

This script can easily be extended to define multiple subkeys as follows:

```rgs
HKCU
{
    'MyVeryOwnKey' = s 'HowGoesIt'
    {
        'HasASubkey'
        {
            'PrettyCool' = d '55'
            val 'ANameValue' = s 'WithANamedValue'
        }
    }
}
```

Now, the script adds a subkey, `HasASubkey`, to `MyVeryOwnKey`. To this subkey, it adds both the `PrettyCool` subkey (with a default `DWORD` value of 55) and the `ANameValue` named value (with a string value of `WithANamedValue`).

## <a name="_atl_register_the_registrar_com_server"></a> Register the Registrar COM Server

The following script registers the Registrar COM server itself.

```rgs
HKCR
{
    ATL.Registrar = s 'ATL Registrar Class'
    {
        CLSID = s '{44EC053A-400F-11D0-9DCD-00A0C90391D3}'
    }
    NoRemove CLSID
    {
        ForceRemove {44EC053A-400F-11D0-9DCD-00A0C90391D3} = s 'ATL Registrar Class'
        {
            ProgID = s 'ATL.Registrar'
            InprocServer32 = s '%MODULE%'
            {
                val ThreadingModel = s 'Apartment'
            }
        }
    }
}
```

At run time, this parse tree adds the `ATL.Registrar` key to `HKEY_CLASSES_ROOT`. To this new key, it then:

- Specifies `ATL Registrar Class` as the key's default string value.

- Adds `CLSID` as a subkey.

- Specifies `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` for `CLSID`. (This value is the Registrar's CLSID for use with `CoCreateInstance`.)

Since `CLSID` is shared, it should not be removed in Unregister mode. The statement, `NoRemove CLSID`, does this by indicating that `CLSID` should be opened in Register mode and ignored in Unregister mode.

The `ForceRemove` statement provides a housekeeping function by removing a key and all of its subkeys before re-creating the key. This can be useful if the names of the subkeys have changed. In this scripting example, `ForceRemove` checks to see if `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` already exists. If it does, `ForceRemove`:

- Recursively deletes `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` and all of its subkeys.

- Re-creates `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.

- Adds `ATL Registrar Class` as the default string value for `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.

The parse tree now adds two new subkeys to `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`. The first key, `ProgID`, gets a default string value that is the ProgID. The second key, `InprocServer32`, gets a default string value, `%MODULE%`, that is a preprocessor value explained in the section, [Using Replaceable Parameters (The Registrar's Preprocessor)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md), of this article. `InprocServer32` also gets a named value, `ThreadingModel`, with a string value of `Apartment`.

## Specify Multiple Parse Trees

To specify more than one parse tree in a script, simply place one tree at the end of another. For example, the following script adds the key, `MyVeryOwnKey`, to the parse trees for both `HKEY_CLASSES_ROOT` and `HKEY_CURRENT_USER`:

```rgs
HKCR
{
    'MyVeryOwnKey' = s 'HowGoesIt'
}
HKEY_CURRENT_USER
{
    'MyVeryOwnKey' = s 'HowGoesIt'
}
```

> [!NOTE]
> In a Registrar script, 4K is the maximum token size. (A token is any recognizable element in the syntax.) In the previous scripting example, `HKCR`, `HKEY_CURRENT_USER`, `'MyVeryOwnKey'`, and `'HowGoesIt'` are all tokens.

## See also

[Creating Registrar Scripts](../atl/creating-registrar-scripts.md)
