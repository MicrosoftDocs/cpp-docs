   CComCurrency cur1, cur2(10, 5000);
   CURRENCY cy;

   // Copying one object to another 
   cur1 = cur2;

   // Using the CURRENCY data type
   cy.int64 = 105000;
   cur1 = cy;

   ATLASSERT(cur1 == cur2);