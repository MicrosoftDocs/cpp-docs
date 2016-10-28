            // Test for one time less than another
            // Declare the CFileType objects
            CFileTime myFT1, myFT2;

            // Obtain the first time value
            myFT1 = CFileTime::GetCurrentTime();

            // Pause for a moment...
            Sleep(1000);

            // Obtain the second time value
            myFT2 = CFileTime::GetCurrentTime();

            // Perform the comparison
            if (myFT1 < myFT2)
               _tprintf_s(_T("Time is going in the correct direction.\n"));
            else
               _tprintf_s(_T("Oh dear. Time is going backwards.\n"));