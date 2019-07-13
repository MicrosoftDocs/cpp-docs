// Header File: HELPIDS.H
//
// This example header file is #include'd twice:
// (1) It is #include'd by the .CPP file that passes the DWORD
//     context i.d. to CWinApp::WinHelp.
// (2) It is #include'd in the [MAP] section of the .HPJ file,
//     to associate the help context string "HID_MYTOPIC" with
//     the help context numeric i.d., 101.
// The help context string "HID_MYTOPIC" is what identifies the
// help topic in the help .RTF source file, in the "#" footnote:
//     # HID_MYTOPIC
//
// Note, it is not necessary to manage help context id's this way
// for help topics associated with command id's and user interface
// id's defined in your RESOURCE.H file; you should use the MAKEHM
// tool via the custom build rule on your resource.h file to produce
// a help map (.HM) file for these id's.  It is necessary to manage
// help context id's as illustrated here only for help topics not
// associated with command id's or user interface id's.

#define HID_MYTOPIC 101

// Show the custom help topic that has the context string
// "HID_MYTOPIC" in the help .RTF file, and which is mapped
// to the DWORD i.d. HID_MYTOPIC in the above HELPIDS.H file.
AfxGetApp()->WinHelp(HID_MYTOPIC);

// The following is one line of code in the help map (.HM)
// file produced by the MAKEHM tool, which is called by the custom
// build rule on the resource.h file.  The MAKEHM tool reads the
// following #define in the application's RESOURCE.H file:
#define ID_MYCOMMAND 0x08004
// and adds a help id offset value of 0x10000 to create the
// help context DWORD value 0x18004:
// HID_MYCOMMAND                           0x18004
// See MFC Tech Note 28 for more information on help id offset values.

// Rarely will you need to directly call WinHelp yourself
// with the help context i.d. for a command or user interface
// object. The framework will call WinHelp automatically when
// the user, for example, hits F1 when the focus is on a
// My Command menu item. However, if you do want to directly
// call WinHelp for the help topic associated with the command,
// here is how you would do it:

AfxGetApp()->WinHelp(0x10000 + ID_MYCOMMAND);