      newstate.Checkpoint();
      if (diffstate.Difference(oldstate, newstate))
      {
         TRACE(_T("Memory leaked\n"));
         diffstate.DumpStatistics();
      }