---
title: "Stream I-O"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.io"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "I/O routines, stream I/O"
  - "I/O [CRT], stream"
  - "stream I/O"
ms.assetid: dc7874d3-a91b-456a-9015-4748bb358217
caps.latest.revision: 15
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Stream I/O
These functions process data in different sizes and formats, from single characters to large data structures. They also provide buffering, which can improve performance. The default size of a stream buffer is 4K. These routines affect only buffers created by the run-time library routines, and have no effect on buffers created by the operating system.  
  
### Stream I/O Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[clearerr](../crt/clearerr.md), [clearerr_s](../crt/clearerr_s.md)|Clear error indicator for stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[fclose](../crt/fclose--_fcloseall.md)|Close stream|[System::IO::Stream::Close](https://msdn.microsoft.com/en-us/library/system.io.stream.close.aspx), [System::IO::BinaryReader::Close](https://msdn.microsoft.com/en-us/library/system.io.binaryreader.close.aspx), [System::IO::BinaryWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.close.aspx), [System::IO::TextReader::Close](https://msdn.microsoft.com/en-us/library/system.io.textreader.close.aspx), [System::IO::TextWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.textwriter.close.aspx), [System::IO::StringReader::Close](https://msdn.microsoft.com/en-us/library/system.io.stringreader.close.aspx), [System::IO::StringWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.stringwriter.close.aspx), [System::IO::StreamReader::Close](https://msdn.microsoft.com/en-us/library/system.io.streamreader.close.aspx), [System::IO::StreamWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.close.aspx)|  
|[_fcloseall](../crt/fclose--_fcloseall.md)|Close all open streams except `stdin`, `stdout`, and `stderr`|[System::IO::Stream::Close](https://msdn.microsoft.com/en-us/library/system.io.stream.close.aspx), [System::IO::BinaryReader::Close](https://msdn.microsoft.com/en-us/library/system.io.binaryreader.close.aspx), [System::IO::BinaryWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.close.aspx), [System::IO::TextReader::Close](https://msdn.microsoft.com/en-us/library/system.io.textreader.close.aspx), [System::IO::TextWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.textwriter.close.aspx), [System::IO::StringReader::Close](https://msdn.microsoft.com/en-us/library/system.io.stringreader.close.aspx), [System::IO::StringWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.stringwriter.close.aspx), [System::IO::StreamReader::Close](https://msdn.microsoft.com/en-us/library/system.io.streamreader.close.aspx), [System::IO::StreamWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.close.aspx)|  
|[_fdopen, wfdopen](../crt/_fdopen--_wfdopen.md)|Associate stream with file descriptor of open file|\<xref:System.IO.FileStream.#ctor*>|  
|[feof](../crt/feof.md)|Test for end of file on stream|[System::IO::FileStream::Read](https://msdn.microsoft.com/en-us/library/system.io.filestream.read.aspx)|  
|[ferror](../crt/ferror.md)|Test for error on stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[fflush](../crt/fflush.md)|Flush stream to buffer or storage device|[System::IO::FileStream::Flush](https://msdn.microsoft.com/en-us/library/2bw4h516.aspx)|  
|[fgetc, fgetwc](../crt/fgetc--fgetwc.md)|Read character from stream (function versions of `getc` and `getwc`)|[System::IO::StreamReader::Read](https://msdn.microsoft.com/en-us/library/system.io.streamreader.read.aspx)|  
|[_fgetchar, _fgetwchar](../crt/fgetc--fgetwc.md)|Read character from `stdin` (function versions of `getchar` and `getwchar`)|[System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)|  
|[fgetpos](../crt/fgetpos.md)|Get position indicator of stream|[System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)|  
|[fgets, fgetws](../crt/fgets--fgetws.md)|Read string from stream|[System::IO::StreamReader::ReadLine](https://msdn.microsoft.com/en-us/library/system.io.streamreader.readline.aspx), [System::IO::TextReader::ReadBlock](https://msdn.microsoft.com/en-us/library/system.io.textreader.readblock.aspx)|  
|[_fileno](../crt/_fileno.md)|Get file descriptor associated with stream|[System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)|  
|[_flushall](../crt/_flushall.md)|Flush all streams to buffer or storage device|[System::IO::FileStream::Flush](https://msdn.microsoft.com/en-us/library/2bw4h516.aspx), [System::IO::StreamWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.flush.aspx), [System::IO::TextWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.textwriter.flush.aspx), [System::IO::BinaryWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.flush.aspx)|  
|[fopen, _wfopen](../crt/fopen--_wfopen.md), [fopen_s, _wfopen_s](../crt/fopen_s--_wfopen_s.md)|Open stream|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx)|  
|[fprintf, _fprintf_l, fwprintf, _fwprintf_l](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md), [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../crt/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md)|Write formatted data to stream|[System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)|  
|[fputc, fputwc](../crt/fputc--fputwc.md)|Write a character to a stream (function versions of `putc` and `putwc`)|[System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)|  
|[_fputchar, _fputwchar](../crt/fputc--fputwc.md)|Write character to `stdout` (function versions of `putchar` and `putwchar`)|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)|  
|[fputs, fputws](../crt/fputs--fputws.md)|Write string to stream|[System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)|  
|[fread](../crt/fread.md)|Read unformatted data from stream|[System::IO::FileStream::Read](https://msdn.microsoft.com/en-us/library/system.io.filestream.read.aspx)|  
|[freopen, _wfreopen](../crt/freopen--_wfreopen.md), [freopen_s, _wfreopen_s](../crt/freopen_s--_wfreopen_s.md)|Reassign `FILE` stream pointer to new file or device|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx)|  
|[fscanf, fwscanf](../crt/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md), [fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](../crt/fscanf_s--_fscanf_s_l--fwscanf_s--_fwscanf_s_l.md)|Read formatted data from stream|[System::IO::StreamReader::ReadLine](https://msdn.microsoft.com/en-us/library/system.io.streamreader.readline.aspx); see also `Parse` methods, such as [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).|  
|[fseek, _fseeki64](../crt/fseek--_fseeki64.md)|Move file position to given location|[System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx), [System::IO::FileStream::Seek](https://msdn.microsoft.com/en-us/library/system.io.filestream.seek.aspx)|  
|[fsetpos](../crt/fsetpos.md)|Set position indicator of stream|[System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)|  
|[_fsopen, _wfsopen](../crt/_fsopen--_wfsopen.md)|Open stream with file sharing|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[ftell, _ftelli64](../crt/ftell--_ftelli64.md)|Get current file position|[System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)|  
|[fwrite](../crt/fwrite.md)|Write unformatted data items to stream|[System::IO::FileStream::Write](https://msdn.microsoft.com/en-us/library/system.io.filestream.write.aspx)|  
|[getc, getwc](../crt/getc--getwc.md)|Read character from stream (macro versions of `fgetc` and `fgetwc`)|[System::IO::StreamReader::Read](https://msdn.microsoft.com/en-us/library/system.io.streamreader.read.aspx)|  
|[getchar, getwchar](../crt/getc--getwc.md)|Read character from `stdin` (macro versions of `fgetchar` and `fgetwchar`)|[System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)|  
|[_getmaxstdio](../crt/_getmaxstdio.md)|Returns the number of simultaneously open files permitted at the stream I/O level.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[gets_s, _getws_s](../crt/gets_s--_getws_s.md)|Read line from `stdin`|[System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)|  
|[_getw](../crt/_getw.md)|Read binary `int` from stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[printf, _printf_l, wprintf, _wprintf_l](../crt/printf--_printf_l--wprintf--_wprintf_l.md),[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../crt/printf_s--_printf_s_l--wprintf_s--_wprintf_s_l.md)|Write formatted data to `stdout`|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)|  
|[putc, putwc](../crt/putc--putwc.md)|Write character to a stream (macro versions of `fputc` and `fputwc`)|[System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)|  
|[putchar, putwchar](../crt/putc--putwc.md)|Write character to `stdout` (macro versions of `fputchar` and `fputwchar`)|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)|  
|[puts, _putws](../crt/puts--_putws.md)|Write line to stream|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)|  
|[_putw](../crt/_putw.md)|Write binary `int` to stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[rewind](../crt/rewind.md)|Move file position to beginning of stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_rmtmp](../crt/_rmtmp.md)|Remove temporary files created by `tmpfile`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[scanf, _scanf_l, wscanf, _wscanf_l](../crt/scanf--_scanf_l--wscanf--_wscanf_l.md),[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../crt/scanf_s--_scanf_s_l--wscanf_s--_wscanf_s_l.md)|Read formatted data from `stdin`|[System::Console::ReadLine](https://msdn.microsoft.com/en-us/library/system.console.readline.aspx); see also `Parse` methods, such as [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).|  
|[setbuf](../crt/setbuf.md)|Control stream buffering|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_setmaxstdio](../crt/_setmaxstdio.md)|Set a maximum for the number of simultaneously open files at the stream I/O level.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[setvbuf](../crt/setvbuf.md)|Control stream buffering and buffer size|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_snprintf, _snwprintf](../crt/snprintf--_snprintf--_snprintf_l--_snwprintf--_snwprintf_l.md), [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](../crt/_snprintf_s--_snprintf_s_l--_snwprintf_s--_snwprintf_s_l.md)|Write formatted data of specified length to string|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_snscanf, _snwscanf](../crt/_snscanf--_snscanf_l--_snwscanf--_snwscanf_l.md), [_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l](../crt/_snscanf_s--_snscanf_s_l--_snwscanf_s--_snwscanf_s_l.md)|Read formatted data of a specified length from the standard input stream.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[sprintf, swprintf](../crt/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md), [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../crt/sprintf_s--_sprintf_s_l--swprintf_s--_swprintf_s_l.md)|Write formatted data to string|[System::String::Format](https://msdn.microsoft.com/en-us/library/system.string.format.aspx)|  
|[sscanf, swscanf](../crt/sscanf--_sscanf_l--swscanf--_swscanf_l.md), [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../crt/sscanf_s--_sscanf_s_l--swscanf_s--_swscanf_s_l.md)|Read formatted data from string|See `Parse` methods, such as [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx)|  
|[_tempnam, _wtempnam](../crt/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|Generate temporary filename in given directory|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[tmpfile](../crt/tmpfile.md), [tmpfile_s](../crt/tmpfile_s.md)|Create temporary file|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[tmpnam, _wtmpnam](../crt/_tempnam--_wtempnam--tmpnam--_wtmpnam.md), [tmpnam_s, _wtmpnam_s](../crt/tmpnam_s--_wtmpnam_s.md)|Generate temporary filename|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[ungetc, ungetwc](../crt/ungetc--ungetwc.md)|Push character back onto stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_vcprintf, _vcwprintf](../crt/_vcprintf--_vcprintf_l--_vcwprintf--_vcwprintf_l.md), [_vcprintf_s, _vcprintf_s_l, _vcwprintf_s, _vcwprintf_s_l](../crt/_vcprintf_s--_vcprintf_s_l--_vcwprintf_s--_vcwprintf_s_l.md)|Write formatted data to the console.|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)|  
|[vfprintf, vfwprintf](../crt/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md), [vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../crt/vfprintf_s--_vfprintf_s_l--vfwprintf_s--_vfwprintf_s_l.md)|Write formatted data to stream|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[vprintf, vwprintf](../crt/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md), [vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](../crt/vprintf_s--_vprintf_s_l--vwprintf_s--_vwprintf_s_l.md)|Write formatted data to `stdout`|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)|  
|[_vsnprintf, _vsnwprintf](../crt/vsnprintf--_vsnprintf--_vsnprintf_l--_vsnwprintf--_vsnwprintf_l.md), [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../crt/vsnprintf_s--_vsnprintf_s--_vsnprintf_s_l--_vsnwprintf_s--_vsnwprintf_s_l.md)|Write formatted data of specified length to buffer|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[vsprintf, vswprintf](../crt/vsprintf--_vsprintf_l--vswprintf--_vswprintf_l--__vswprintf_l.md), [vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../crt/vsprintf_s--_vsprintf_s_l--vswprintf_s--_vswprintf_s_l.md)|Write formatted data to buffer|[System::String::Format](https://msdn.microsoft.com/en-us/library/system.string.format.aspx)|  
  
 When a program begins execution, the startup code automatically opens several streams: standard input (pointed to by `stdin`), standard output (pointed to by `stdout`), and standard error (pointed to by `stderr`). These streams are directed to the console (keyboard and screen) by default. Use `freopen` to redirect `stdin`, `stdout`, or `stderr` to a disk file or a device.  
  
 Files opened using the stream routines are buffered by default. The `stdout` and `stderr` functions are flushed whenever they are full or, if you are writing to a character device, after each library call. If a program terminates abnormally, output buffers may not be flushed, resulting in loss of data. Use `fflush` or `_flushall` to ensure that the buffer associated with a specified file or all open buffers are flushed to the operating system, which can cache data before writing it to disk. The commit-to-disk feature ensures that the flushed buffer contents are not lost in the event of a system failure.  
  
 There are two ways to commit buffer contents to disk:  
  
-   Link with the file COMMODE.OBJ to set a global commit flag. The default setting of the global flag is `n`, for "no-commit."  
  
-   Set the mode flag to `c` with `fopen` or `_fdopen`.  
  
 Any file specifically opened with either the `c` or the `n` flag behaves according to the flag, regardless of the state of the global commit/no-commit flag.  
  
 If your program does not explicitly close a stream, the stream is automatically closed when the program terminates. However, you should close a stream when your program finishes with it, as the number of streams that can be open at one time is limited. See [_setmaxstdio](../crt/_setmaxstdio.md) for information on this limit.  
  
 Input can follow output directly only with an intervening call to `fflush` or to a file-positioning function (`fseek`, `fsetpos`, or `rewind`). Output can follow input without an intervening call to a file-positioning function if the input operation encounters the end of the file.  
  
## See Also  
 [Input and Output](../crt/input-and-output.md)   
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)