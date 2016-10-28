            // Convert a UTC time to local file time format
            CFileTime myUTC_FT, myL_FT;
            // Get system time (in UTC format)
            myUTC_FT = CFileTime::GetCurrentTime();
            // Convert to local file time
            myL_FT = myUTC_FT.UTCToLocal();         