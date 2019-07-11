// Display the Windows Print dialog box with "All" radio button 
// initially selected. All other radio buttons are disabled.
CPrintDialog dlg1(FALSE);

// Display the Windows Print dialog box with Collate check box checked.  
CPrintDialog dlg2(FALSE, PD_ALLPAGES | PD_COLLATE | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE);

// Display the Windows Print dialog box with "Selection" radio
// button initially selected. "All" radio button is enabled
// but "Pages" radio button is disabled.
CPrintDialog dlg3(FALSE, PD_SELECTION | PD_USEDEVMODECOPIES);