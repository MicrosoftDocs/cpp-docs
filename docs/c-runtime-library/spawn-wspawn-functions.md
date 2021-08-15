---
description: "Learn more about: _spawn, _wspawn Functions"
title: "_spawn, _wspawn Functions"
ms.date: "11/04/2016"
api_location: ["msvcr80.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcrt.dll", "msvcr120.dll", "msvcr100.dll", "msvcr90.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_spawn", "_tspawnlp", "_tspawnlpe", "_tspawnve", "_tspawnvp", "_tspawnvpe", "_tspawnl", "spawn", "_tspawnv", "_tspawnle", "wspawn"]
helpviewer_keywords: ["_tspawnve function", "_spawn functions", "_tspawnlpe function", "tspawnvpe function", "processes, creating", "tspawnve function", "_tspawnvp function", "spawn functions", "tspawnl function", "tspawnlp function", "_tspawnvpe function", "_tspawnl function", "tspawnvp function", "tspawnv function", "processes, executing new", "_tspawnv function", "tspawnle function", "process creation", "_tspawnlp function", "tspawnlpe function", "_tspawnle function"]
ms.assetid: bb47c703-5216-4e09-8023-8cf25bbf2cf9
---
# _spawn, _wspawn Functions

Each of the `_spawn` functions creates and executes a new process:

:::row:::
   :::column span="":::
      [_spawnl, _wspawnl](../c-runtime-library/reference/spawnl-wspawnl.md)\
      [_spawnle, _wspawnle](../c-runtime-library/reference/spawnle-wspawnle.md)\
      [_spawnlp, _wspawnlp](../c-runtime-library/reference/spawnlp-wspawnlp.md)\
      [_spawnlpe, _wspawnlpe](../c-runtime-library/reference/spawnlpe-wspawnlpe.md)\
   :::column-end:::
   :::column span="":::
      [_spawnv, _wspawnv](../c-runtime-library/reference/spawnv-wspawnv.md)\
      [_spawnve, _wspawnve](../c-runtime-library/reference/spawnve-wspawnve.md)\
      [_spawnvp, _wspawnvp](../c-runtime-library/reference/spawnvp-wspawnvp.md)\
      [_spawnvpe, _wspawnvpe](../c-runtime-library/reference/spawnvpe-wspawnvpe.md)\
   :::column-end:::
:::row-end:::

The letters at the end of the function name determine the variation.

|Letter|Variant|
|-|-|
| `e`  | `envp`, array of pointers to environment settings, is passed to new process.  |
| `l`  | Command-line arguments are passed individually to `_spawn` function. This suffix is typically used when a number of parameters to a new process is known in advance.  |
| `p`  | `PATH` environment variable is used to find the file to execute.  |
| `v`  | `argv`, array of pointers to command-line arguments, is passed to `_spawn` function. This suffix is typically used when a number of parameters to a new process is variable.  |

## Remarks

The `_spawn` functions each create and execute a new process. They automatically handle multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use. The `_wspawn` functions are wide-character versions of the `_spawn` functions; they do not handle multibyte-character strings. Otherwise, the `_wspawn` functions behave identically to their `_spawn` counterparts.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_tspawnl`|`_spawnl`|`_spawnl`|`_wspawnl`|
|`_tspawnle`|`_spawnle`|`_spawnle`|`_wspawnle`|
|`_tspawnlp`|`_spawnlp`|`_spawnlp`|`_wspawnlp`|
|`_tspawnlpe`|`_spawnlpe`|`_spawnlpe`|`_wspawnlpe`|
|`_tspawnv`|`_spawnv`|`_spawnv`|`_wspawnv`|
|`_tspawnve`|`_spawnve`|`_spawnve`|`_wspawnve`|
|`_tspawnvp`|`_spawnvp`|`_spawnvp`|`_wspawnvp`|
|`_tspawnvpe`|`_spawnvpe`|`_spawnvpe`|`_wspawnvpe`|

Enough memory must be available for loading and executing the new process. The `mode` argument determines the action taken by the calling process before and during `_spawn`. The following values for `mode` are defined in Process.h:

|Value|Description|
|-|-|
| `_P_OVERLAY`  | Overlays a calling process with a new process, destroying the calling process (same effect as `_exec` calls).  |
| `_P_WAIT`  | Suspends a calling thread until execution of the new process is complete (synchronous `_spawn`).  |
| `_P_NOWAIT` or `_P_NOWAITO`  | Continues to execute a calling process concurrently with the new process (asynchronous `_spawn`).  |
| `_P_DETACH`  | Continues to execute the calling process; the new process is run in the background with no access to the console or keyboard. Calls to `_cwait` against the new process fail (asynchronous `_spawn`).  |

The `cmdname` argument specifies the file that is executed as the new process and can specify a full path (from the root), a partial path (from the current working directory), or just a file name. If `cmdname` does not have a file name extension or does not end with a period (.), the `_spawn` function first tries the .com file name extension and then the .exe file name extension, the .bat file name extension, and finally the .cmd file name extension.

If `cmdname` has a file name extension, only that extension is used. If `cmdname` ends with a period, the `_spawn` call searches for `cmdname` with no file name extension. The `_spawnlp`, `_spawnlpe`, `_spawnvp`, and `_spawnvpe` functions search for `cmdname` (using the same procedures) in the directories specified by the `PATH` environment variable.

If `cmdname` contains a drive specifier or any slashes (that is, if it is a relative path), the `_spawn` call searches only for the specified file; no path searching is done.

In the past, some of these functions set `errno` to zero on success; the current behavior is to leave `errno` untouched on success, as specified by the C standard. If you need to emulate the old behavior, set `errno` to zero just before calling these functions.

> [!NOTE]
> To ensure proper overlay initialization and termination, do not use the `setjmp` or `longjmp` function to enter or leave an overlay routine.

## Arguments for the Spawned Process

To pass arguments to the new process, give one or more pointers to character strings as arguments in the `_spawn` call. These character strings form the argument list for the spawned process. The combined length of the strings forming the argument list for the new process must not exceed 1024 bytes. The terminating null character ('\0') for each string is not included in the count, but space characters (automatically inserted to separate arguments) are included.

> [!NOTE]
> Spaces embedded in strings may cause unexpected behavior; for example, passing `_spawn` the string `"hi there"` will result in the new process getting two arguments, `"hi"` and `"there"`. If the intent was to have the new process open a file named "hi there", the process would fail. You can avoid this by quoting the string: `"\"hi there\""`.

> [!IMPORTANT]
> Do not pass user input to `_spawn` without explicitly checking its content. `_spawn` will result in a call to [CreateProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessw) so keep in mind that unqualified path names could lead to potential security vulnerabilities.

You can pass argument pointers as separate arguments (in `_spawnl`, `_spawnle`, `_spawnlp`, and `_spawnlpe`) or as an array of pointers (in `_spawnv`, `_spawnve`, `_spawnvp`, and `_spawnvpe`). You must pass at least one argument, `arg0` or `argv`[0], to the spawned process. By convention, this argument is the name of the program as you would type it on the command line. A different value does not produce an error.

The `_spawnl`, `_spawnle`, `_spawnlp`, and `_spawnlpe` calls are typically used in cases where the number of arguments is known in advance. The `arg0` argument is usually a pointer to `cmdname`. The arguments `arg1` through `argn` are pointers to the character strings forming the new argument list. Following `argn`, there must be a **NULL** pointer to mark the end of the argument list.

The `_spawnv`, `_spawnve`, `_spawnvp`, and `_spawnvpe` calls are useful when there is a variable number of arguments to the new process. Pointers to the arguments are passed as an array, `argv`*.* The argument `argv`[0] is usually a pointer to a path in real mode or to the program name in protected mode, and `argv`[1] through `argv`[`n`] are pointers to the character strings forming the new argument list. The argument `argv`[`n` +1] must be a **NULL** pointer to mark the end of the argument list.

## Environment of the Spawned Process

Files that are open when a `_spawn` call is made remain open in the new process. In the `_spawnl`, `_spawnlp`, `_spawnv`, and `_spawnvp` calls, the new process inherits the environment of the calling process. You can use the `_spawnle`, `_spawnlpe`, `_spawnve`, and `_spawnvpe` calls to alter the environment for the new process by passing a list of environment settings through the `envp` argument. The argument `envp` is an array of character pointers, each element (except the final element) of which points to a null-terminated string defining an environment variable. Such a string usually has the form `NAME`=`value` where `NAME` is the name of an environment variable and `value` is the string value to which that variable is set. (Note that `value` is not enclosed in double quotation marks.) The final element of the `envp` array should be **NULL**. When `envp` itself is **NULL**, the spawned process inherits the environment settings of the parent process.

The `_spawn` functions can pass all information about open files, including the translation mode, to the new process. This information is passed in real mode through the `C_FILE_INFO` entry in the environment. The startup code normally processes this entry and then deletes it from the environment. However, if a `_spawn` function spawns a non-C process, this entry remains in the environment. Printing the environment shows graphics characters in the definition string for this entry because the environment information is passed in binary form in real mode. It should not have any other effect on normal operations. In protected mode, the environment information is passed in text form and therefore contains no graphics characters.

You must explicitly flush (using `fflush` or `_flushall`) or close any stream before calling a `_spawn` function.

New processes created by calls to `_spawn` routines do not preserve signal settings. Instead, the spawned process resets signal settings to the default.

## Redirecting Output

If you are calling `_spawn` from a DLL or a GUI application and want to redirect the output to a pipe, you have two options:

- Use the Win32 API to create a pipe, then call [AllocConsole](/windows/console/allocconsole), set the handle values in the startup structure, and call [CreateProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessw).

- Call [_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md) which will create a pipe and invoke the app using **cmd.exe /c** (or **command.exe /c**).

## Example

```c
// crt_spawn.c
// This program accepts a number in the range
// 1-8 from the command line. Based on the number it receives,
// it executes one of the eight different procedures that
// spawn the process named child. For some of these procedures,
// the CHILD.EXE file must be in the same directory; for
// others, it only has to be in the same path.
//

#include <stdio.h>
#include <process.h>

char *my_env[] =
{
   "THIS=environment will be",
   "PASSED=to child.exe by the",
   "_SPAWNLE=and",
   "_SPAWNLPE=and",
   "_SPAWNVE=and",
   "_SPAWNVPE=functions",
   NULL
};

int main( int argc, char *argv[] )
{
   char *args[4];

   // Set up parameters to be sent:
   args[0] = "child";
   args[1] = "spawn??";
   args[2] = "two";
   args[3] = NULL;

   if (argc <= 2)
   {
      printf( "SYNTAX: SPAWN <1-8> <childprogram>\n" );
      exit( 1 );
   }

   switch (argv[1][0])   // Based on first letter of argument
   {
   case '1':
      _spawnl( _P_WAIT, argv[2], argv[2], "_spawnl", "two", NULL );
      break;
   case '2':
      _spawnle( _P_WAIT, argv[2], argv[2], "_spawnle", "two",
               NULL, my_env );
      break;
   case '3':
      _spawnlp( _P_WAIT, argv[2], argv[2], "_spawnlp", "two", NULL );
      break;
   case '4':
      _spawnlpe( _P_WAIT, argv[2], argv[2], "_spawnlpe", "two",
                NULL, my_env );
      break;
   case '5':
      _spawnv( _P_OVERLAY, argv[2], args );
      break;
   case '6':
      _spawnve( _P_OVERLAY, argv[2], args, my_env );
      break;
   case '7':
      _spawnvp( _P_OVERLAY, argv[2], args );
      break;
   case '8':
      _spawnvpe( _P_OVERLAY, argv[2], args, my_env );
      break;
   default:
      printf( "SYNTAX: SPAWN <1-8> <childprogram>\n" );
      exit( 1 );
   }
   printf( "from SPAWN!\n" );
}
```

```Output
child process output
from SPAWN!
```

## See also

[Process and Environment Control](../c-runtime-library/process-and-environment-control.md)<br/>
[abort](../c-runtime-library/reference/abort.md)<br/>
[atexit](../c-runtime-library/reference/atexit.md)<br/>
[_exec, _wexec Functions](../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](../c-runtime-library/reference/exit-exit-exit.md)<br/>
[_flushall](../c-runtime-library/reference/flushall.md)<br/>
[_getmbcp](../c-runtime-library/reference/getmbcp.md)<br/>
[_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)<br/>
[_setmbcp](../c-runtime-library/reference/setmbcp.md)<br/>
[system, _wsystem](../c-runtime-library/reference/system-wsystem.md)
