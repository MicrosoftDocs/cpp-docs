---
title: "MSVC Linker options"
description: "A list of the options supported by the Microsoft LINK linker."
ms.date: 08/25/2023
f1_keywords: ["link"]
helpviewer_keywords: ["linker [C++]", "linker [C++], options listed", "libraries [C++], linking to COFF", "LINK tool [C++], linker options"]
---
# Linker options

LINK.exe links Common Object File Format (COFF) object files and libraries to create an executable (EXE) file or a dynamic-link library (DLL).

The following table lists options for LINK.exe. For more information about LINK, see:

- [Compiler-controlled LINK options](compiler-controlled-link-options.md)
- [LINK input files](link-input-files.md)
- [LINK output](link-output.md)
- [Reserved words](reserved-words.md)

On the command line, linker options aren't case-sensitive; for example, `/base` and `/BASE` mean the same thing. For details on how to specify each option on the command line or in Visual Studio, see the documentation for that option.

You can use the [`comment`](../../preprocessor/comment-c-cpp.md) pragma to specify some linker options.

## Linker options listed alphabetically

| Option | Purpose |
|--|--|
| [`@`](at-specify-a-linker-response-file.md) | Specifies a response file. |
| [`/ALIGN`](align-section-alignment.md) | Specifies the alignment of each section. |
| [`/ALLOWBIND`](allowbind-prevent-dll-binding.md) | Specifies that a DLL can't be bound. |
| [`/ALLOWISOLATION`](allowisolation-manifest-lookup.md) | Specifies behavior for manifest lookup. |
| [`/APPCONTAINER`](appcontainer-windows-store-app.md) | Specifies whether the app must run within an appcontainer process environment. |
| [`/ASSEMBLYDEBUG`](assemblydebug-add-debuggableattribute.md) | Adds the <xref:System.Diagnostics.DebuggableAttribute> to a managed image. |
| [`/ASSEMBLYLINKRESOURCE`](assemblylinkresource-link-to-dotnet-framework-resource.md) | Creates a link to a managed resource. |
| [`/ASSEMBLYMODULE`](assemblymodule-add-a-msil-module-to-the-assembly.md) | Specifies that a Microsoft intermediate language (MSIL) module should be imported into the assembly. |
| [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md) | Embeds a managed resource file in an assembly. |
| [`/BASE`](base-base-address.md) | Sets a base address for the program. |
| [`/CETCOMPAT`](cetcompat.md) | Marks the binary as CET Shadow Stack compatible. |
| [`/CGTHREADS`](cgthreads-compiler-threads.md) | Sets number of cl.exe threads to use for optimization and code generation when link-time code generation is specified. |
| [`/CLRIMAGETYPE`](clrimagetype-specify-type-of-clr-image.md) | Sets the type (IJW, pure, or safe) of a CLR image. |
| [`/CLRSUPPORTLASTERROR`](clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md) | Preserves the last error code of functions that are called through the P/Invoke mechanism. |
| [`/CLRTHREADATTRIBUTE`](clrthreadattribute-set-clr-thread-attribute.md) | Specifies the threading attribute to apply to the entry point of your CLR program. |
| [`/CLRUNMANAGEDCODECHECK`](clrunmanagedcodecheck-add-suppressunmanagedcodesecurityattribute.md) | Specifies whether the linker applies the `SuppressUnmanagedCodeSecurity` attribute to linker-generated P/Invoke stubs that call from managed code into native DLLs. |
| [`/DEBUG`](debug-generate-debug-info.md) | Creates debugging information. |
| [`/DEBUGTYPE`](debugtype-debug-info-options.md) | Specifies which data to include in debugging information. |
| [`/DEF`](def-specify-module-definition-file.md) | Passes a module-definition (.def) file to the linker. |
| [`/DEFAULTLIB`](defaultlib-specify-default-library.md) | Searches the specified library when external references are resolved. |
| [`/DELAY`](delay-delay-load-import-settings.md) | Controls the delayed loading of DLLs. |
| [`/DELAYLOAD`](delayload-delay-load-import.md) | Causes the delayed loading of the specified DLL. |
| [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md) | Partially signs an assembly. |
| [`/DEPENDENTLOADFLAG`](dependentloadflag.md) | Sets default flags on dependent DLL loads. |
| [`/DLL`](dll-build-a-dll.md) | Builds a DLL. |
| [`/DRIVER`](driver-windows-nt-kernel-mode-driver.md) | Creates a kernel mode driver. |
| [`/DYNAMICBASE`](dynamicbase-use-address-space-layout-randomization.md) | Specifies whether to generate an executable image that's rebased at load time by using the address space layout randomization (ASLR) feature. |
| [`/ENTRY`](entry-entry-point-symbol.md) | Sets the starting address. |
| [`/ERRORREPORT`](errorreport-report-internal-linker-errors.md) | Deprecated. Error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings. |
| [`/EXPORT`](export-exports-a-function.md) | Exports a function. |
| [`/FILEALIGN`](filealign.md) | Aligns sections within the output file on multiples of a specified value. |
| [`/FIXED`](fixed-fixed-base-address.md) | Creates a program that can be loaded only at its preferred base address. |
| [`/FORCE`](force-force-file-output.md) | Forces a link to complete even with unresolved symbols or symbols defined more than once. |
| [`/FUNCTIONPADMIN`](functionpadmin-create-hotpatchable-image.md) | Creates an image that can be hot patched. |
| [`/GENPROFILE`, `/FASTGENPROFILE`](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) | Both of these options specify generation of a *`.pgd`* file by the linker to support profile-guided optimization (PGO). /GENPROFILE and /FASTGENPROFILE use different default parameters. |
| [`/GUARD`](guard-enable-guard-checks.md) | Enables Control Flow Guard protection. |
| [`/HEAP`](heap-set-heap-size.md) | Sets the size of the heap, in bytes. |
| [`/HIGHENTROPYVA`](highentropyva-support-64-bit-aslr.md) | Specifies support for high-entropy 64-bit address space layout randomization (ASLR). |
| [`/IDLOUT`](idlout-name-midl-output-files.md) | Specifies the name of the *`.idl`* file and other MIDL output files. |
| [`/IGNORE`](ignore-ignore-specific-warnings.md) | Suppresses output of specified linker warnings. |
| [`/IGNOREIDL`](ignoreidl-don-t-process-attributes-into-midl.md) | Prevents the processing of attribute information into an *`.idl`* file. |
| [`/ILK`](ilk-name-incremental-database-file.md) | Overrides the default incremental database file name. |
| [`/IMPLIB`](implib-name-import-library.md) | Overrides the default import library name. |
| [`/INCLUDE`](include-force-symbol-references.md) | Forces symbol references. |
| [`/INCREMENTAL`](incremental-link-incrementally.md) | Controls incremental linking. |
| [`/INFERASANLIBS`](inferasanlibs.md) | Uses inferred sanitizer libraries. |
| [`/INTEGRITYCHECK`](integritycheck-require-signature-check.md) | Specifies that the module requires a signature check at load time. |
| [`/KERNEL`](link-code-for-kernel-mode.md) | Create a kernel mode binary. |
| [`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md) | Specifies a key container to sign an assembly. |
| [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) | Specifies a key or key pair to sign an assembly. |
| [`/LARGEADDRESSAWARE`](largeaddressaware-handle-large-addresses.md) | Tells the compiler that the application supports addresses larger than 2 gigabytes |
| [`/LIBPATH`](libpath-additional-libpath.md) | Specifies a path to search before the environmental library path. |
| [`/LINKREPRO`](linkrepro.md) | Specifies a path to generate link repro artifacts in. |
| [`/LINKREPROTARGET`](linkreprotarget.md) | Generates a link repro only when producing the specified target.<sup>16.1</sup> |
| [`/LTCG`](ltcg-link-time-code-generation.md) | Specifies link-time code generation. |
| [`/MACHINE`](machine-specify-target-platform.md) | Specifies the target platform. |
| [`/MANIFEST`](manifest-create-side-by-side-assembly-manifest.md) | Creates a side-by-side manifest file and optionally embeds it in the binary. |
| [`/MANIFESTDEPENDENCY`](manifestdependency-specify-manifest-dependencies.md) | Specifies a \<dependentAssembly> section in the manifest file. |
| [`/MANIFESTFILE`](manifestfile-name-manifest-file.md) | Changes the default name of the manifest file. |
| [`/MANIFESTINPUT`](manifestinput-specify-manifest-input.md) | Specifies a manifest input file for the linker to process and embed in the binary. You can use this option multiple times to specify more than one manifest input file. |
| [`/MANIFESTUAC`](manifestuac-embeds-uac-information-in-manifest.md) | Specifies whether User Account Control (UAC) information is embedded in the program manifest. |
| [`/MAP`](map-generate-mapfile.md) | Creates a mapfile. |
| [`/MAPINFO`](mapinfo-include-information-in-mapfile.md) | Includes the specified information in the mapfile. |
| [`/MERGE`](merge-combine-sections.md) | Combines sections. |
| [`/MIDL`](midl-specify-midl-command-line-options.md) | Specifies MIDL command-line options. |
| [`/NATVIS`](natvis-add-natvis-to-pdb.md) | Adds debugger visualizers from a Natvis file to the program database (PDB). |
| [`/NOASSEMBLY`](noassembly-create-a-msil-module.md) | Suppresses the creation of a .NET Framework assembly. |
| [`/NODEFAULTLIB`](nodefaultlib-ignore-libraries.md) | Ignores all (or the specified) default libraries when external references are resolved. |
| [`/NOENTRY`](noentry-no-entry-point.md) | Creates a resource-only DLL. |
| [`/NOLOGO`](nologo-suppress-startup-banner-linker.md) | Suppresses the startup banner. |
| [`/NXCOMPAT`](nxcompat-compatible-with-data-execution-prevention.md) | Marks an executable as verified to be compatible with the Windows Data Execution Prevention feature. |
| [`/OPT`](opt-optimizations.md) | Controls LINK optimizations. |
| [`/ORDER`](order-put-functions-in-order.md) | Places COMDATs into the image in a predetermined order. |
| [`/OUT`](out-output-file-name.md) | Specifies the output file name. |
| [`/PDB`](pdb-use-program-database.md) | Creates a PDB file. |
| [`/PDBALTPATH`](pdbaltpath-use-alternate-pdb-path.md) | Uses an alternate location to save a PDB file. |
| [`/PDBSTRIPPED`](pdbstripped-strip-private-symbols.md) | Creates a PDB file that has no private symbols. |
| [`/PGD`](pgd-specify-database-for-profile-guided-optimizations.md) | Specifies a *`.pgd`* file for profile-guided optimizations. |
| [`/POGOSAFEMODE`](pogosafemode-linker-option.md) | **Obsolete** Creates a thread-safe PGO instrumented build. |
| [`/PROFILE`](profile-performance-tools-profiler.md) | Produces an output file that can be used with the Performance Tools profiler. |
| [`/RELEASE`](release-set-the-checksum.md) | Sets the Checksum in the *`.exe`* header. |
| [`/SAFESEH`](safeseh-image-has-safe-exception-handlers.md) | Specifies that the image will contain a table of safe exception handlers. |
| [`/SECTION`](section-specify-section-attributes.md) | Overrides the attributes of a section. |
| [`/SOURCELINK`](sourcelink.md) | Specifies a SourceLink file to add to the PDB. |
| [`/STACK`](stack-stack-allocations.md) | Sets the size of the stack in bytes. |
| [`/STUB`](stub-ms-dos-stub-file-name.md) | Attaches an MS-DOS stub program to a Win32 program. |
| [`/SUBSYSTEM`](subsystem-specify-subsystem.md) | Tells the operating system how to run the *`.exe`* file. |
| [`/SWAPRUN`](swaprun-load-linker-output-to-swap-file.md) | Tells the operating system to copy the linker output to a swap file before it's run. |
| [`/TIME`](time-linker-time-information.md) | Output linker pass timing information. |
| [`/TLBID`](tlbid-specify-resource-id-for-typelib.md) | Specifies the resource ID of the linker-generated type library. |
| [`/TLBOUT`](tlbout-name-dot-tlb-file.md) | Specifies the name of the *`.tlb`* file and other MIDL output files. |
| [`/TSAWARE`](tsaware-create-terminal-server-aware-application.md) | Creates an application that is designed specifically to run under Terminal Server. |
| [`/USEPROFILE`](useprofile.md) | Uses profile-guided optimization training data to create an optimized image. |
| [`/VERBOSE`](verbose-print-progress-messages.md) | Prints linker progress messages. |
| [`/VERSION`](version-version-information.md) | Assigns a version number. |
| [`/WHOLEARCHIVE`](wholearchive-include-all-library-object-files.md) | Includes every object file from specified static libraries. |
| [`/WINMD`](winmd-generate-windows-metadata.md) | Enables generation of a Windows Runtime Metadata file. |
| [`/WINMDFILE`](winmdfile-specify-winmd-file.md) | Specifies the file name for the Windows Runtime Metadata (winmd) output file that's generated by the [`/WINMD`](winmd-generate-windows-metadata.md) linker option. |
| [`/WINMDKEYFILE`](winmdkeyfile-specify-winmd-key-file.md) | Specifies a key or key pair to sign a Windows Runtime Metadata file. |
| [`/WINMDKEYCONTAINER`](winmdkeycontainer-specify-key-container.md) | Specifies a key container to sign a Windows Metadata file. |
| [`/WINMDDELAYSIGN`](winmddelaysign-partially-sign-a-winmd.md) | Partially signs a Windows Runtime Metadata (*`.winmd`*) file by placing the public key in the winmd file. |
| [`/WX`](wx-treat-linker-warnings-as-errors.md) | Treats linker warnings as errors. |

<sup>16.1</sup> This option is available starting in Visual Studio 2019 version 16.1.

## See also

[C/C++ building reference](c-cpp-building-reference.md)\
[MSVC linker reference](linking.md)
