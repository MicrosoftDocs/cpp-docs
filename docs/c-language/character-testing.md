---
description: "Learn more about: Character Testing"
title: "Character Testing"
ms.date: "11/04/2016"
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
---
# Character Testing

**ANSI 4.3.1** The sets of characters tested for by the `isalnum`, `isalpha`, `iscntrl`, `islower`, `isprint`, and `isupper` functions

The following list describes these functions as they are implemented by the Microsoft C compiler.

|Function|Tests For|
|--------------|---------------|
|`isalnum`|Characters 0 - 9, A-Z, a-z ASCII 48-57, 65-90, 97-122|
|`isalpha`|Characters A-Z, a-z ASCII 65-90, 97-122|
|`iscntrl`|ASCII 0 -31, 127|
|`islower`|Characters a-z ASCII 97-122|
|`isprint`|Characters A-Z, a-z, 0 - 9, punctuation, space ASCII 32-126|
|`isupper`|Characters A-Z ASCII 65-90|

## See also

[Library Functions](../c-language/library-functions.md)
