   // set to 35.0050
   COleCurrency cur1(35, 50);
   COleCurrency cur2;

   // operator= copies COleCurrency types
   cur2 = cur1;
   ASSERT(cur1 == cur2);

   // can be used to assign a CURRENCY type, as well
   CURRENCY cy;
   cy.Hi = 0;
   cy.Lo = 350050;
   cy.int64 = 350050;

   // perform assignment
   COleCurrency cur3;
   cur3 = cy;
   ASSERT(cur3 == cur1);