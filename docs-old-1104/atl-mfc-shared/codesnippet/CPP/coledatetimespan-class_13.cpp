   // if the person is not still in school, set days to graduation to null
   if (!m_bStillInSchool || m_dtDateOfGraduation.GetStatus() == COleDateTime::null)
      m_dtsDaysToGraduation.SetStatus(COleDateTimeSpan::null);   