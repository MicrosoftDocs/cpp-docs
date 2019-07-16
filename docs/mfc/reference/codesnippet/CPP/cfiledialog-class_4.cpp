// Get the interface pointer
IFileDialogCustomize *customDlgPtr = m_myFileDialogPtr->GetIFileDialogCustomize();

// Make sure that it is not null
if (customDlgPtr != NULL)
{
   //
   // Perform any interface functionality here
   //

   // Release the pointer
   customDlgPtr->Release();
}