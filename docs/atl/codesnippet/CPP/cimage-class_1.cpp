   // Get a CDC for the image
   CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

   // Use pDC here
   pDC->Rectangle(0, 40, 100, 50);

   m_myImage.ReleaseDC();