---
description: "Learn more about: Stream I/O"
title: "Stream I/O"
ms.date: "11/04/2016"
helpviewer_keywords: ["I/O routines, stream I/O", "I/O [CRT], stream", "stream I/O"]
ms.assetid: dc7874d3-a91b-456a-9015-4748bb358217
---
# Stream I/O

These functions process data in different sizes and formats, from single characters to large data structures. They also provide buffering, which can improve performance. The default size of a stream buffer is 4K. These routines affect only buffers created by the run-time library routines, and have no effect on buffers created by the operating system.

## Stream I/O Routines

|Routine|Use|
|-------------|---------|
|[clearerr](../c-runtime-library/reference/clearerr.md), [clearerr_s](../c-runtime-library/reference/clearerr-s.md)|Clear error indicator for stream|
|[fclose](../c-runtime-library/reference/fclose-fcloseall.md)|Close stream|
|[_fcloseall](../c-runtime-library/reference/fclose-fcloseall.md)|Close all open streams except **stdin**, **stdout**, and **stderr**|
|[_fdopen, wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)|Associate stream with file descriptor of open file|
|[feof](../c-runtime-library/reference/feof.md)|Test for end of file on stream|
|[ferror](../c-runtime-library/reference/ferror.md)|Test for error on stream|
|[fflush](../c-runtime-library/reference/fflush.md)|Flush stream to buffer or storage device|
|[fgetc, fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md)|Read character from stream (function versions of **getc** and **getwc**)|
|[_fgetchar, _fgetwchar](../c-runtime-library/reference/fgetc-fgetwc.md)|Read character from **stdin** (function versions of **getchar** and **getwchar**)|
|[fgetpos](../c-runtime-library/reference/fgetpos.md)|Get position indicator of stream|
|[fgets, fgetws](../c-runtime-library/reference/fgets-fgetws.md)|Read string from stream|
|[_fileno](../c-runtime-library/reference/fileno.md)|Get file descriptor associated with stream|
|[_flushall](../c-runtime-library/reference/flushall.md)|Flush all streams to buffer or storage device|
|[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md)|Open stream|
|[fprintf, _fprintf_l, fwprintf, _fwprintf_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)|Write formatted data to stream|
|[fputc, fputwc](../c-runtime-library/reference/fputc-fputwc.md)|Write a character to a stream (function versions of **putc** and **putwc**)|
|[_fputchar, _fputwchar](../c-runtime-library/reference/fputc-fputwc.md)|Write character to **stdout** (function versions of **putchar** and **putwchar**)|
|[fputs, fputws](../c-runtime-library/reference/fputs-fputws.md)|Write string to stream|
|[fread](../c-runtime-library/reference/fread.md)|Read unformatted data from stream|
|[freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen_s, _wfreopen_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md)|Reassign **FILE** stream pointer to new file or device|
|[fscanf, fwscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](../c-runtime-library/reference/fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)|Read formatted data from stream|
|[fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)|Move file position to given location|
|[fsetpos](../c-runtime-library/reference/fsetpos.md)|Set position indicator of stream|
|[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)|Open stream with file sharing|
|[ftell, _ftelli64](../c-runtime-library/reference/ftell-ftelli64.md)|Get current file position|
|[fwrite](../c-runtime-library/reference/fwrite.md)|Write unformatted data items to stream|
|[getc, getwc](../c-runtime-library/reference/getc-getwc.md)|Read character from stream (macro versions of **fgetc** and **fgetwc**)|
|[getchar, getwchar](../c-runtime-library/reference/getc-getwc.md)|Read character from **stdin** (macro versions of **fgetchar** and **fgetwchar**)|
|[_getmaxstdio](../c-runtime-library/reference/getmaxstdio.md)|Returns the number of simultaneously open files permitted at the stream I/O level.|
|[gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md)|Read line from **stdin**|
|[_getw](../c-runtime-library/reference/getw.md)|Read binary **`int`** from stream|
|[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md),[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|Write formatted data to **stdout**|
|[putc, putwc](../c-runtime-library/reference/putc-putwc.md)|Write character to a stream (macro versions of **fputc** and **fputwc**)|
|[putchar, putwchar](../c-runtime-library/reference/putc-putwc.md)|Write character to **stdout** (macro versions of **fputchar** and **fputwchar**)|
|[puts, _putws](../c-runtime-library/reference/puts-putws.md)|Write line to stream|
|[_putw](../c-runtime-library/reference/putw.md)|Write binary **`int`** to stream|
|[rewind](../c-runtime-library/reference/rewind.md)|Move file position to beginning of stream|
|[_rmtmp](../c-runtime-library/reference/rmtmp.md)|Remove temporary files created by **tmpfile**|
|[scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md),[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)|Read formatted data from **stdin**|
|[setbuf](../c-runtime-library/reference/setbuf.md)|Control stream buffering|
|[_setmaxstdio](../c-runtime-library/reference/setmaxstdio.md)|Set a maximum for the number of simultaneously open files at the stream I/O level.|
|[setvbuf](../c-runtime-library/reference/setvbuf.md)|Control stream buffering and buffer size|
|[_snprintf, _snwprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md), [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](../c-runtime-library/reference/snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md)|Write formatted data of specified length to string|
|[_snscanf, _snwscanf](../c-runtime-library/reference/snscanf-snscanf-l-snwscanf-snwscanf-l.md), [_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l](../c-runtime-library/reference/snscanf-s-snscanf-s-l-snwscanf-s-snwscanf-s-l.md)|Read formatted data of a specified length from the standard input stream.|
|[sprintf, swprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)|Write formatted data to string|
|[sscanf, swscanf](../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md), [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../c-runtime-library/reference/sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)|Read formatted data from string|
|[_tempnam, _wtempnam](../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|Generate temporary filename in given directory|
|[tmpfile](../c-runtime-library/reference/tmpfile.md), [tmpfile_s](../c-runtime-library/reference/tmpfile-s.md)|Create temporary file|
|[tmpnam, _wtmpnam](../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md), [tmpnam_s, _wtmpnam_s](../c-runtime-library/reference/tmpnam-s-wtmpnam-s.md)|Generate temporary filename|
|[ungetc, ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md)|Push character back onto stream|
|[_vcprintf, _vcwprintf](../c-runtime-library/reference/vcprintf-vcprintf-l-vcwprintf-vcwprintf-l.md), [_vcprintf_s, _vcprintf_s_l, _vcwprintf_s, _vcwprintf_s_l](../c-runtime-library/reference/vcprintf-s-vcprintf-s-l-vcwprintf-s-vcwprintf-s-l.md)|Write formatted data to the console.|
|[vfprintf, vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), [vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../c-runtime-library/reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)|Write formatted data to stream|
|[vprintf, vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md), [vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](../c-runtime-library/reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md)|Write formatted data to **stdout**|
|[_vsnprintf, _vsnwprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md), [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md)|Write formatted data of specified length to buffer|
|[vsprintf, vswprintf](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md), [vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)|Write formatted data to buffer|

When a program begins execution, the startup code automatically opens several streams: standard input (pointed to by **stdin**), standard output (pointed to by **stdout**), and standard error (pointed to by **stderr**). These streams are directed to the console (keyboard and screen) by default. Use **freopen** to redirect **stdin**, **stdout**, or **stderr** to a disk file or a device.

Files opened using the stream routines are buffered by default. The **stdout** and **stderr** functions are flushed whenever they are full or, if you are writing to a character device, after each library call. If a program terminates abnormally, output buffers may not be flushed, resulting in loss of data. Use **fflush** or **_flushall** to ensure that the buffer associated with a specified file or all open buffers are flushed to the operating system, which can cache data before writing it to disk. The commit-to-disk feature ensures that the flushed buffer contents are not lost in the event of a system failure.

There are two ways to commit buffer contents to disk:

- Link with the file COMMODE.OBJ to set a global commit flag. The default setting of the global flag is **n**, for "no-commit."

- Set the mode flag to **c** with **fopen** or **_fdopen**.

Any file specifically opened with either the **c** or the **n** flag behaves according to the flag, regardless of the state of the global commit/no-commit flag.

If your program does not explicitly close a stream, the stream is automatically closed when the program terminates. However, you should close a stream when your program finishes with it, as the number of streams that can be open at one time is limited. See [_setmaxstdio](../c-runtime-library/reference/setmaxstdio.md) for information on this limit.

Input can follow output directly only with an intervening call to **fflush** or to a file-positioning function (**fseek**, **fsetpos**, or **rewind**). Output can follow input without an intervening call to a file-positioning function if the input operation encounters the end of the file.

## See also

[Input and Output](../c-runtime-library/input-and-output.md)<br/>
[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
