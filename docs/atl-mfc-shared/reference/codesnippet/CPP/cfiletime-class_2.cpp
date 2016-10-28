            // Calculate the difference between two times
            CFileTime myFT1, myFT2;
            CFileTimeSpan myFTS;

            // Get the first time
            myFT1 = CFileTime::GetCurrentTime();

            // Pause for a moment
            UINT randVal;
            rand_s(&randVal);
            Sleep(randVal % 10000);

            // Get the second time
            myFT2 = CFileTime::GetCurrentTime();

            // Calculate the time difference
            myFTS = myFT2 - myFT1;

            // Measure the difference
            if (myFTS.GetTimeSpan() < CFileTime::Minute)
               printf_s("Less than a minute passed\n");
            else
               printf_s("A minute or more passed\n");

            if (myFTS.GetTimeSpan() < CFileTime::Second)
               printf_s("Less than a second passed\n");
            else
               printf_s("A second or more passed\n");

            if (myFTS.GetTimeSpan() < CFileTime::Millisecond)
               printf_s("Less than a millisecond passed\n");
            else
               printf_s("A millisecond or more passed\n");