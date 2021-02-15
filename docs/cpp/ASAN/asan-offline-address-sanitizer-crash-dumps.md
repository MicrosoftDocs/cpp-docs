# Offline Address Sanitizer crash dumps

## Enable Cloud and Distributed testing

We've made it very simple to store an Address Sanitizer runtime error in a new type of crash dump file.This functionality is simply enabled with an environment variable.

  `set ASAN_SAVE_DUMPS="MyFileName.dmpx"`

## How it works

Address Sanitizer exceptions are thrown from inside the runtime, due to many [error types](#errors) detected at runtime. When run from the command line the Address Sanitizer runtime produces text output with error information. When run from the Visual Studio IDE the debugger displays the error information.

Upon error, your application will produce MyFileName.dmpx which is a [dump file](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) that can be opened and debugged using Visual Studio.

**Note** that like all other dump files, [debugging symbols](https://docs.microsoft.com/en-us/windows/win32/dxtecharts/debugging-with-symbols) must be available and must match the version of the source compiled.

## Example

## Command line build and run

## Viewing in Visual Studio

