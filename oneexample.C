{ 
   TDatime da1(2008,02,28,15,52,00); 
   TDatime da2(2008,02,28,15,53,00); 

   double x[2],y[2]; 

   y[0] = 1.; 
   y[1] = 2.; 
   x[0] = da1.Convert(); 
   x[1] = da2.Convert(); 

   TGraph mgr(2,x,y); 
   mgr.SetMarkerStyle(20); 

   mgr.Draw("ap"); 
   mgr.GetXaxis()->SetTimeDisplay(1); 
   mgr.GetXaxis()->SetNdivisions(-503); 
   mgr.GetXaxis()->SetTimeFormat("%Y-%m-%d %H:%M"); 
   mgr.GetXaxis()->SetTimeOffset(0,"gmt"); 
} 
