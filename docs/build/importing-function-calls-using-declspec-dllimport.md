---
title: "Importing function calls using __declspec(dllimport)"
description: "How and why to use __declspec(dllimport) when calling DLL data and functions."
ms.date: "05/03/2020"
helpviewer_keywords: ["importing function calls [C++]", "dllimport attribute [C++], function call imports", "__declspec(dllimport) keyword [C++]", "function calls [C++], importing"]
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
---
# Importing function calls using `__declspec(dllimport)`

Annotating calls by using the **`__declspec(dllimport)`** can make them faster. **`__declspec(dllimport)`** is always required to access exported DLL data.

## Import a function from a DLL

The following code example shows how to use **`__declspec(dllimport)`** to import function calls from a DLL into an application. Assume that `func1` is a function that's in a DLL separate from the executable file that contains the **main** function.

Without **`__declspec(dllimport)`**, given this code:

```C
int main(void)
{
   func1();
}
```

the compiler generates code that looks like this:

```asm
call func1
```

and the linker translates the call into something like this:

```asm
call 0x4000000         ; The address of 'func1'.
```

If `func1` exists in another DLL, the linker can't resolve this address directly because it has no way of knowing what the address of `func1` is. In 32-bit and 64-bit environments, the linker generates a thunk at a known address. In a 32-bit environment the thunk looks like:

```asm
0x40000000:    jmp DWORD PTR __imp_func1
```

Here `__imp_func1` is the address for the `func1` slot in the import address table of the executable file. All these addresses are known to the linker. The loader only has to update the executable file's import address table at load time for everything to work correctly.

That's why using **`__declspec(dllimport)`** is better: because the linker doesn't generate a thunk if it's not required. Thunks make the code larger (on RISC systems, it can be several instructions) and can degrade your cache performance. If you tell the compiler the function is in a DLL, it can generate an indirect call for you.

So now this code:

```C
__declspec(dllimport) void func1(void);
int main(void)
{
   func1();
}
```

generates this instruction:

```asm
call DWORD PTR __imp_func1
```

There's no thunk and no `jmp` instruction, so the code is smaller and faster. You can also get the same effect without **`__declspec(dllimport)`** by using whole program optimization. For more information, see [/GL (Whole Program Optimization)](reference/gl-whole-program-optimization.md).

For function calls within a DLL, you don't want to have to use an indirect call. The linker already knows the function's address. It takes extra time and space to load and store the address of the function before an indirect call. A direct call is always faster and smaller. You only want to use **`__declspec(dllimport)`** when calling DLL functions from outside the DLL itself. Don't use **`__declspec(dllimport)`** on functions inside a DLL when building that DLL.

## See also

[Importing into an Application](importing-into-an-application.md)
