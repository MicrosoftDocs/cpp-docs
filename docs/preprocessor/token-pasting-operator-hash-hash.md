---
description: "Learn more about: Token-pasting operator (##)"
title: "Token-pasting operator (##)"
ms.date: "08/29/2019"
f1_keywords: ["##"]
helpviewer_keywords: ["preprocessor, operators", "## preprocessor operator"]
ms.assetid: 4f173503-990f-4bff-aef3-ec4d1f1458ef
---
# Token-pasting operator (##)

The double-number-sign or *token-pasting* operator (**##**), which is sometimes called the *merging* or *combining* operator, is used in both object-like and function-like macros. It permits separate tokens to be joined into a single token, and therefore, can't be the first or last token in the macro definition.

If a formal parameter in a macro definition is preceded or followed by the token-pasting operator, the formal parameter is immediately replaced by the unexpanded actual argument. Macro expansion is not performed on the argument prior to replacement.

Then, each occurrence of the token-pasting operator in *token-string* is removed, and the tokens preceding and following it are concatenated. The resulting token must be a valid token. If it is, the token is scanned for possible replacement if it represents a macro name. The identifier represents the name by which the concatenated tokens will be known in the program before replacement. Each token represents a token defined elsewhere, either within the program or on the compiler command line. White space preceding or following the operator is optional.

This example illustrates use of both the stringizing and token-pasting operators in specifying program output:

```cpp
#define paster( n ) printf_s( "token" #n " = %d", token##n )
int token9 = 9;
```

If a macro is called with a numeric argument like

```cpp
paster( 9 );
```

the macro yields

```cpp
printf_s( "token" "9" " = %d", token9 );
```

which becomes

```cpp
printf_s( "token9 = %d", token9 );
```

## Example

```cpp
// preprocessor_token_pasting.cpp
#include <stdio.h>
#define paster( n ) printf_s( "token" #n " = %d", token##n )
int token9 = 9;

int main()
{
   paster(9);
}
```

```Output
token9 = 9
```

## See also

[Preprocessor operators](../preprocessor/preprocessor-operators.md)
