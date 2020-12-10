---
description: "Learn more about: Low-Level I/O"
title: "Low-Level I/O"
ms.date: "11/04/2016"
helpviewer_keywords: ["I/O [CRT], low-level", "I/O [CRT], functions", "low-level I/O routines", "file handles [C++]", "file handles [C++], I/O functions"]
ms.assetid: 53e11bdd-6720-481c-8b2b-3a3a569ed534
---
# Low-Level I/O

These functions invoke the operating system directly for lower-level operation than that provided by stream I/O. Low-level input and output calls do not buffer or format data.

Low-level routines can access the standard streams opened at program startup using the following predefined file descriptors.

|Stream|File Descriptor|
|------------|---------------------|
|**stdin**|0|
|**stdout**|1|
|**stderr**|2|

Low-level I/O routines set the [errno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) global variable when an error occurs. You must include STDIO.H when you use low-level functions only if your program requires a constant that is defined in STDIO.H, such as the end-of-file indicator (**EOF**).

## Low-Level I/O Functions

|Function|Use|
|--------------|---------|
|[_close](../c-runtime-library/reference/close.md)|Close file|
|[_commit](../c-runtime-library/reference/commit.md)|Flush file to disk|
|[_creat, _wcreat](../c-runtime-library/reference/creat-wcreat.md)|Create file|
|[_dup](../c-runtime-library/reference/dup-dup2.md)|Return next available file descriptor for given file|
|[_dup2](../c-runtime-library/reference/dup-dup2.md)|Create second descriptor for given file|
|[_eof](../c-runtime-library/reference/eof.md)|Test for end of file|
|[_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)|Reposition file pointer to given location|
|[_open, _wopen](../c-runtime-library/reference/open-wopen.md)|Open file|
|[_read](../c-runtime-library/reference/read.md)|Read data from file|
|[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md), [_sopen_s, _wsopen_s](../c-runtime-library/reference/sopen-s-wsopen-s.md)|Open file for file sharing|
|[_tell, _telli64](../c-runtime-library/reference/tell-telli64.md)|Get current file-pointer position|
|[_umask](../c-runtime-library/reference/umask.md), [_umask_s](../c-runtime-library/reference/umask-s.md)|Set file-permission mask|
|[_write](../c-runtime-library/reference/write.md)|Write data to file|

**_dup** and **_dup2** are typically used to associate the predefined file descriptors with different files.

## See also

[Input and Output](../c-runtime-library/input-and-output.md)<br/>
[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
[System Calls](../c-runtime-library/system-calls.md)<br/>
