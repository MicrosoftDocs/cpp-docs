   CComCurrency cur(10, 5000);
   CURRENCY cy = static_cast<CURRENCY>(cur); // Note that explicit cast is not necessary
   ATLASSERT(cy.int64 == 105000);