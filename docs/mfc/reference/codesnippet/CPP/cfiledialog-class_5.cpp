        // Get the interface pointer
        IFileOpenDialog * openDlgPtr = m_myFileDialogPtr->GetIFileOpenDialog();

        // Make sure that it is not null
        if ( openDlgPtr != NULL )
        {
            //
            // Perform any interface functionality here
            //

            // Release the pointer
            openDlgPtr->Release();
        }