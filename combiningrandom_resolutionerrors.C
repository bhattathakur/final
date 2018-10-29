{
  gROOT->Reset();
  //Defining different files stored in different dirctories
  char * bkg0data="bkg0/DATA/bkg0randomdata.dat";
  char * bkg01data="bkg001/DATA/bkg001randomdata.dat";
  char * bkg2data="bkg2/DATA/bkg2randomdata.dat";
  char * bkg3data="bkg3/DATA/bkg3randomdata.dat";
  char * bkg4data="bkg4/DATA/bkg4randomdata.dat";

  //file for output
  char * combineddata ="combined_error_data";

  //file for storing new sets of combined data
  ofstream outputfile(combineddata); //has two data in a row sigma and error in sigma
  double sigmaa, errorsigma;
  
  cout<<"####################################################################"<<endl;
  cout<<endl;
  //Opening the files
  //first file
  ifstream bkg0file(bkg0data);
  if(bkg0file.is_open())
    {
	cout<<"successfully opened the file "<<bkg0data<<endl;
	while(1)
	  {
	    bkg0file>>sigmaa>>errorsigma;
	    if(!bkg0file.good())break;
	    if(outputfile.is_open())
		{
		  cout<<"successfully opened the file "<<combineddata<<endl;
		  outputfile<<sigmaa<<setw(10)<<errorsigma<<endl;
		  cout<<sigmaa<<'\t'<<errorsigma<<endl;
		  cout<<"successfully stored the data in the file "<<combineddata<<endl;
		}
	    else
		{
		  cout<<"failed to open the file "<<combineddata<<endl;
		  return 0;
		}
	  }
    }
  else
    {
	cout<<"failed to open the file "<<bkg0data<<endl;
	return 0;
    }
  cout<<endl;
  cout<<"####################################################################"<<endl;
  cout<<endl;
  //second file
  //Opening the files
  ifstream bkg01file(bkg01data);
  if(bkg01file.is_open())
    {
	cout<<"successfully opened the file "<<bkg01data<<endl;
	while(1)
	  {
	    bkg01file>>sigmaa>>errorsigma;
	    if(!bkg01file.good())break;
	    if(outputfile.is_open())
		{
		  cout<<"successfully opened the file "<<combineddata<<endl;
		  outputfile<<sigmaa<<setw(10)<<errorsigma<<endl;
		  cout<<sigmaa<<'\t'<<errorsigma<<endl;
		  cout<<"successfully stored the data in the file "<<combineddata<<endl;
		}
	    else
		{
		  cout<<"failed to open the file "<<combineddata<<endl;
		  return 0;
		}
	  }
    }
  else
    {
	cout<<"failed to open the file "<<bkg01data<<endl;
	return 0;
    }
  cout<<endl;
  cout<<"####################################################################"<<endl;
  cout<<endl;
  //Third file
  //Opening the files
  ifstream bkg2file(bkg2data);
  if(bkg2file.is_open())
    {
	cout<<"successfully opened the file "<<bkg2data<<endl;
	while(1)
	  {
	    bkg2file>>sigmaa>>errorsigma;
	    if(!bkg2file.good())break;
	    if(outputfile.is_open())
		{
		  cout<<"successfully opened the file "<<combineddata<<endl;
		  outputfile<<sigmaa<<setw(10)<<errorsigma<<endl;
		  cout<<sigmaa<<'\t'<<errorsigma<<endl;
		  cout<<"successfully stored the data in the file "<<combineddata<<endl;
		}
	    else
		{
		  cout<<"failed to open the file "<<combineddata<<endl;
		  return 0;
		}
	  }
    }
  else
    {
	cout<<"failed to open the file "<<bkg2data<<endl;
	return 0;
    }
  cout<<endl;
  cout<<"####################################################################"<<endl;
  cout<<endl;
  //Fourth file
   //Opening the files
  ifstream bkg3file(bkg3data);
  if(bkg3file.is_open())
    {
	cout<<"successfully opened the file "<<bkg3data<<endl;
	while(1)
	  {
	    bkg3file>>sigmaa>>errorsigma;
	    if(!bkg3file.good())break;
	    if(outputfile.is_open())
		{
		  cout<<"successfully opened the file "<<combineddata<<endl;
		  outputfile<<sigmaa<<setw(10)<<errorsigma<<endl;
		  cout<<sigmaa<<'\t'<<errorsigma<<endl;
		  cout<<"successfully stored the data in the file "<<combineddata<<endl;
		}
	    else
		{
		  cout<<"failed to open the file "<<combineddata<<endl;
		  return 0;
		}
	  }
    }
  else
    {
	cout<<"failed to open the file "<<bkg3data<<endl;
	return 0;
    }
  cout<<endl;
  cout<<"####################################################################"<<endl;
  cout<<endl;
  //Fifth file
   //Opening the files
  ifstream bkg4file(bkg4data);
  if(bkg4file.is_open())
    {
	cout<<"successfully opened the file "<<bkg4data<<endl;
	while(1)
	  {
	    bkg4file>>sigmaa>>errorsigma;
	    if(!bkg4file.good())break;
	    if(outputfile.is_open())
		{
		  cout<<"successfully opened the file "<<combineddata<<endl;
		  outputfile<<sigmaa<<setw(10)<<errorsigma<<endl;
		  cout<<sigmaa<<'\t'<<errorsigma<<endl;
		  cout<<"successfully stored the data in the file "<<combineddata<<endl;
		}
	    else
		{
		  cout<<"failed to open the file "<<combineddata<<endl;
		  return 0;
		}
	  }
    }
  else
    {
	cout<<"failed to open the file "<<bkg4data<<endl;
	return 0;
    }

}
