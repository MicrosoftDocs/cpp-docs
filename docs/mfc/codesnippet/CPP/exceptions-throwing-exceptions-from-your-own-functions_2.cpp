#define WAVE_ERROR -5
   {
   // This Win32 API returns 0 if the sound cannot be played.
   // Throw an integer constant if it fails.
   if (!PlaySound(_T("SIREN.WAV"), NULL, SND_ASYNC))
      throw WAVE_ERROR;
   }