// Get the interface pointer
IFileSaveDialog *saveDlgPtr = m_myFileDialogPtr->GetIFileSaveDialog();

// Make sure that it is not null
if (saveDlgPtr != NULL)
{
   //
   // Perform any interface functionality here
   //

   // Release the pointer
   saveDlgPtr->Release();
}