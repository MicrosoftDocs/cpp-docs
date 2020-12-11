---
description: "Learn more about: _pipe"
title: "_pipe"
ms.date: "4/2/2020"
api_name: ["_pipe", "_o__pipe"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["pipe", "_pipe"]
helpviewer_keywords: ["pipes, creating", "_pipe function", "pipes", "pipe function"]
ms.assetid: 8d3e9800-4041-44b5-9e93-2df0b0354a75
---
# _pipe

Creates a pipe for reading and writing.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _pipe(
   int *pfds,
   unsigned int psize,
   int textmode
);
```

### Parameters

*pfds*<br/>
Pointer to an array of two **`int`** to hold read and write file descriptors.

*psize*<br/>
Amount of memory to reserve.

*textmode*<br/>
File mode.

## Return Value

Returns 0 if successful. Returns -1 to indicate an error. On error, **errno** is set to one of these values:

- **EMFILE**, which indicates that no more file descriptors are available.

- **ENFILE**, which indicates a system-file-table overflow.

- **EINVAL**, which indicates that either the array *pfds* is a null pointer or that an invalid value for *textmode* was passed in.

For more information about these and other return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_pipe** function creates a *pipe*, which is an artificial I/O channel that a program uses to pass information to other programs. A pipe resembles a file because it has a file pointer, a file descriptor, or both, and it can be read from or written to by using the Standard Library input and output functions. However, a pipe does not represent a specific file or device. Instead, it represents temporary storage in memory that is independent of the program's own memory and is controlled entirely by the operating system.

**_pipe** resembles **_open** but opens the pipe for reading and writing and returns two file descriptors instead of one. The program can use both sides of the pipe or close the one that it doesn't need. For example, the command processor in Windows creates a pipe when it executes a command such as **PROGRAM1** | **PROGRAM2**.

The standard output descriptor of **PROGRAM1** is attached to the pipe's write descriptor. The standard input descriptor of **PROGRAM2** is attached to the pipe's read descriptor. This eliminates the need to create temporary files to pass information to other programs.

The **_pipe** function returns two file descriptors to the pipe in the *pfds* argument. The element *pfds*[0] contains the read descriptor, and the element *pfds*[1] contains the write descriptor. Pipe file descriptors are used in the same way as other file descriptors. (The low-level input and output functions **_read** and **_write** can read from and write to a pipe.) To detect the end-of-pipe condition, check for a **_read** request that returns 0 as the number of bytes read.

The *psize* argument specifies the amount of memory, in bytes, to reserve for the pipe. The *textmode* argument specifies the translation mode for the pipe. The manifest constant **_O_TEXT** specifies a text translation, and the constant **_O_BINARY** specifies binary translation. (See [fopen, _wfopen](fopen-wfopen.md) for a description of text and binary modes.) If the *textmode* argument is 0, **_pipe** uses the default translation mode that's specified by the default-mode variable [_fmode](../../c-runtime-library/fmode.md).

In multithreaded programs, no locking is performed. The file descriptors that are returned are newly opened and should not be referenced by any thread until after the **_pipe** call is complete.

To use the **_pipe** function to communicate between a parent process and a child process, each process must have only one descriptor open on the pipe. The descriptors must be opposites: if the parent has a read descriptor open, then the child must have a write descriptor open. The easiest way to do this is to bitwise or (**|**) the **_O_NOINHERIT** flag with *textmode*. Then, use **_dup** or **_dup2** to create an inheritable copy of the pipe descriptor that you want to pass to the child. Close the original descriptor, and then spawn the child process. On returning from the spawn call, close the duplicate descriptor in the parent process. For more information, see example 2 later in this article.

In the Windows operating system, a pipe is destroyed when all of its descriptors have been closed. (If all read descriptors on the pipe have been closed, then writing to the pipe causes an error.) All read and write operations on the pipe wait until there is enough data or enough buffer space to complete the I/O request.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_pipe**|\<io.h>|\<fcntl.h>,1 \<errno.h>2|

1 For **_O_BINARY** and **_O_TEXT** definitions.

2 **errno** definitions.

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example 1

```C
// crt_pipe.c
/* This program uses the _pipe function to pass streams of
* text to spawned processes.
*/

#include <stdlib.h>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <process.h>
#include <math.h>

enum PIPES { READ, WRITE }; /* Constants 0 and 1 for READ and WRITE */
#define NUMPROBLEM 8

int main( int argc, char *argv[] )
{

   int fdpipe[2];
   char hstr[20];
   int pid, problem, c;
   int termstat;

   /* If no arguments, this is the spawning process */
   if( argc == 1 )
   {

      setvbuf( stdout, NULL, _IONBF, 0 );

      /* Open a set of pipes */
      if( _pipe( fdpipe, 256, O_BINARY ) == -1 )
          exit( 1 );

      /* Convert pipe read descriptor to string and pass as argument
       * to spawned program. Program spawns itself (argv[0]).
       */
      _itoa_s( fdpipe[READ], hstr, sizeof(hstr), 10 );
      if( ( pid = _spawnl( P_NOWAIT, argv[0], argv[0],
            hstr, NULL ) ) == -1 )
          printf( "Spawn failed" );

      /* Put problem in write pipe. Since spawned program is
       * running simultaneously, first solutions may be done
       * before last problem is given.
       */
      for( problem = 1000; problem <= NUMPROBLEM * 1000; problem += 1000)
      {

         printf( "Son, what is the square root of %d?\n", problem );
         _write( fdpipe[WRITE], (char *)&problem, sizeof( int ) );

      }

      /* Wait until spawned program is done processing. */
      _cwait( &termstat, pid, WAIT_CHILD );
      if( termstat & 0x0 )
         printf( "Child failed\n" );

      _close( fdpipe[READ] );
      _close( fdpipe[WRITE] );

   }

   /* If there is an argument, this must be the spawned process. */
   else
   {

      /* Convert passed string descriptor to integer descriptor. */
      fdpipe[READ] = atoi( argv[1] );

      /* Read problem from pipe and calculate solution. */
      for( c = 0; c < NUMPROBLEM; c++ )
      {

        _read( fdpipe[READ], (char *)&problem, sizeof( int ) );
        printf( "Dad, the square root of %d is %3.2f.\n",
                 problem, sqrt( ( double )problem ) );

      }
   }
}
```

```Output
Son, what is the square root of 1000?
Son, what is the square root of 2000?
Son, what iDad, the square root of 1000 is 31.62.
Dad, the square root of 2000 is 44.72.
s the square root of 3000?
Dad, the square root of 3000 is 54.77.
Son, what is the square root of 4000?
Dad, the square root of 4000 is 63.25.
Son, what is the square root of 5000?
Dad, the square root of 5000 is 70.71.
Son, what is the square root of 6000?
SonDad, the square root of 6000 is 77.46.
, what is the square root of 7000?
Dad, the square root of 7000 is 83.67.
Son, what is the square root of 8000?
Dad, the square root of 8000 is 89.44.
```

## Example 2

This is a basic filter application. It spawns the application crt_pipe_beeper after it creates a pipe that directs the spawned application's stdout to the filter. The filter removes ASCII 7 (beep) characters.

```C
// crt_pipe_beeper.c

#include <stdio.h>
#include <string.h>

int main()
{
   int   i;
   for(i=0;i<10;++i)
      {
         printf("This is speaker beep number %d...\n\7", i+1);
      }
   return 0;
}
```

The actual filter application:

```C
// crt_pipe_BeepFilter.C
// arguments: crt_pipe_beeper.exe

#include <windows.h>
#include <process.h>
#include <memory.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>

#define   OUT_BUFF_SIZE 512
#define   READ_FD 0
#define   WRITE_FD 1
#define   BEEP_CHAR 7

char szBuffer[OUT_BUFF_SIZE];

int Filter(char* szBuff, ULONG nSize, int nChar)
{
   char* szPos = szBuff + nSize -1;
   char* szEnd = szPos;
   int nRet = nSize;

   while (szPos > szBuff)
   {
      if (*szPos == nChar)
         {
            memmove(szPos, szPos+1, szEnd - szPos);
            --nRet;
         }
      --szPos;
   }
   return nRet;
}

int main(int argc, char** argv)
{
   int nExitCode = STILL_ACTIVE;
   if (argc >= 2)
   {
      HANDLE hProcess;
      int fdStdOut;
      int fdStdOutPipe[2];

      // Create the pipe
      if(_pipe(fdStdOutPipe, 512, O_NOINHERIT) == -1)
         return   1;

      // Duplicate stdout file descriptor (next line will close original)
      fdStdOut = _dup(_fileno(stdout));

      // Duplicate write end of pipe to stdout file descriptor
      if(_dup2(fdStdOutPipe[WRITE_FD], _fileno(stdout)) != 0)
         return   2;

      // Close original write end of pipe
      _close(fdStdOutPipe[WRITE_FD]);

      // Spawn process
      hProcess = (HANDLE)_spawnvp(P_NOWAIT, argv[1],
       (const char* const*)&argv[1]);

      // Duplicate copy of original stdout back into stdout
      if(_dup2(fdStdOut, _fileno(stdout)) != 0)
         return   3;

      // Close duplicate copy of original stdout
      _close(fdStdOut);

      if(hProcess)
      {
         int nOutRead;
         while   (nExitCode == STILL_ACTIVE)
         {
            nOutRead = _read(fdStdOutPipe[READ_FD],
             szBuffer, OUT_BUFF_SIZE);
            if(nOutRead)
            {
               nOutRead = Filter(szBuffer, nOutRead, BEEP_CHAR);
               fwrite(szBuffer, 1, nOutRead, stdout);
            }

            if(!GetExitCodeProcess(hProcess,(unsigned long*)&nExitCode))
               return 4;
         }
      }
   }
   return nExitCode;
}
```

```Output
This is speaker beep number 1...
This is speaker beep number 2...
This is speaker beep number 3...
This is speaker beep number 4...
This is speaker beep number 5...
This is speaker beep number 6...
This is speaker beep number 7...
This is speaker beep number 8...
This is speaker beep number 9...
This is speaker beep number 10...
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
