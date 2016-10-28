   HRESULT CloseHandle(HANDLE hObject)
   {
      // Users should do any shutdown operation required here.
      // Generally, this means just closing the handle.

      if (!::CloseHandle(hObject))
      {
         // Closing the handle failed for some reason.
         return AtlHresultFromLastError();
      }

      return S_OK;
   }