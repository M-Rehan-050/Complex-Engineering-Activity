#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using  namespace std; 
class student{
private:
float cgpa;
public:
int semester;
string name;
void getdata();	
};

int main()
{
char op,ch,c;

cout<<"\n\n\n\t\t\t\t\t\t<<<<<<<<<<<<<<<<Welcome To Student Data Base System>>>>>>>>>>>>>>>\n\n\n________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	
	do
	{
	
	cout<<"Enter 'a' or 'A' to Add data:"<<endl;
	cout<<"Enter 'd' or 'D' to Delete data:"<<endl;
	cout<<"Enter 'u' or 'U' to Update:"<<endl;
	cout<<"Enter 'R' or 'r' to create Result Sheet of All Students:"<<endl;
	cout<<"Enter 'G' or 'g' to Generate GPA Sheet of All Students:"<<endl;
	cout<<"Enter 's' or 'S' to search Student Data :"<<endl;
	cin>>c;
	if(c=='A' or c=='a')
	{
	fstream fin,fout;	
	do
	{fin.open("text.txt",ios::in);
	fin>>size;
	fin.close();	
	int roll;
	string name;
	char opp_grade,dld_grade,la_grade,pst_grade,edc_grade,opplab_grade,edclab_grade,dldlab_grade;
	fout.open("students.csv",ios::app);
	cout<<"Enter Student Name:"<<endl;
	cin.ignore(200,'\n');
	getline(cin,name);
	cout<<"Enter roll number:"<<endl;
	cin>>roll;
	cout<<"Enter Grades of 8 Subjects:\n"<<endl;
	cout<<"Enter Your OOP Grade: ";
	cin>>opp_grade;
	cout<<"Enter Your DLD Grade: ";
	cin>>dld_grade;
	cout<<"Enter Your LA Grade: ";
	cin>>la_grade;
	cout<<"Enter Your PST Grade: ";
	cin>>pst_grade;
	cout<<"Enter Your EDC Grade: ";
	cin>>edc_grade;
	cout<<"Enter Your OOP Lab Grade: ";
	cin>>opplab_grade;
	cout<<"Enter Your EDC Lab Grade: ";
	cin>>edclab_grade;
	cout<<"Enter Your DLD Lab Grade: ";
	cin>>dldlab_grade;
	fout<<name<<","<<roll<<","<<opp_grade<<","<<dld_grade<<","<<la_grade<<","<<pst_grade<<","<<edc_grade<<","<<opplab_grade<<","<<edclab_grade<<","<<dldlab_grade<<"\n";
	size++;
	fout.close();
	fout.open("text.txt",ios::out);
	fout<<size;
	fout.close();
	cout<<"Do you want to Add another data 'Y' or 'y' and Select 'N' or 'n' For Next Choice:";
	cin>>ch;
    }
    while(ch=='Y' or ch=='y');
	}
	if(c=='D' or c=='d')
	{
	

	do
	{
		fstream fin, fout,fin1,fout1;
    	fin1.open("text.txt",ios::in);
		 fin1>>size;
    	fin1.close();
	string stname[size];
    char opp_grade[size];
    char  dld_grade[size];
    char la_grade[size];
	char pst_grade[size];
	char edc_grade[size];
	char opplab_grade[size];
	char edclab_grade[size];
    char dldlab_grade[size];
	int roll[size] ,del_roll;
	cout<<"Enter roll Number to delete: "<<endl;
	cin>>del_roll;
	string temp1,temp2,temp,line;
	int i=0,index;
	
	fin.open("students.csv",ios::in);
	getline(fin,temp1);
	getline(fin,temp2);
	while(getline(fin,line))
	{
		istringstream iss(line);
		getline(iss, stname[i],',');
			iss>>roll[i];
		getline(iss,temp,',');
		iss>>opp_grade[i];
		getline(iss,temp,',');
		iss>>dld_grade[i];
		getline(iss,temp,',');
		iss>>la_grade[i];
		getline(iss,temp,',');
		iss>>pst_grade[i];
		getline(iss,temp,',');
		iss>>edc_grade[i];
		getline(iss,temp,',');
		iss>>opplab_grade[i];
		getline(iss,temp,',');
	    iss>>edclab_grade[i];
		getline(iss,temp,',');
		iss>>dldlab_grade[i];
		i++;
	}
	for(int j=0; j<size; j++)
	{
		if(del_roll==roll[j])
		{
			index=j;
		}
	}
	size--;
	fout.open("students.csv",ios::out);
	fout<<temp1<<endl;
	fout<<temp2<<endl;
	for(int j=0; j<=size; j++)
	{
		if(j!=index)
		{
		fout<<stname[j]<<",";
		fout<<roll[j]<<",";
		fout<<opp_grade[j]<<",";
		fout<<dld_grade[j]<<",";
		fout<<la_grade[j]<<",";
		fout<<pst_grade[j]<<",";
		fout<<edc_grade[j]<<",";
		fout<<opplab_grade[j]<<",";
		fout<<edclab_grade[j]<<",";
		fout<<dldlab_grade[j]<<"\n";
	    }
	    else
	    {
	    	continue;
		}
	}fout.close();
	
	fout1.open("text.txt",ios::out);
	fout1<<size;
	fout1.close();
	cout<<"Enter 'y' or 'Y' To Delete Another Student & Any Key For Next Move: "<<endl;
	cin>>ch;
    }
    while(ch=='Y' or ch=='y');
	}
	if(c=='u' or c=='U')
	{
do
	{fstream fin,fout;
	fin.open("text.txt",ios::in);
	fin>>size;
	fin.close();
char opp_grade[size];
char  dld_grade[size];
char la_grade[size];
char pst_grade[size];
char edc_grade[size];
char opplab_grade[size];
char edclab_grade[size];
char dldlab_grade[size];
	
	string stname[size],temp1,temp2,temp,line;
	int i=0,r,index;
    int roll[size],roll1;
	string name1;
	char oppgrade,dldgrade,lagrade,pstgrade,edcgrade,opplabgrade,edclabgrade,dldlabgrade;
    fin.open("students.csv",ios::in);
	getline(fin,temp1);
	getline(fin,temp2);
	while(getline(fin,line))
	{
		istringstream iss(line);
		getline(iss,stname[i],',');
		iss>>roll[i];
		getline(iss,temp,',');
		iss>>opp_grade [i];
		getline(iss,temp,',');
		iss>>dld_grade [i];
		getline(iss,temp,',');
		iss>>la_grade[i];
		getline(iss,temp,',');
		iss>>pst_grade[i];
		getline(iss,temp,',');
		iss>>edc_grade[i];
		getline(iss,temp,',');
		iss>>opplab_grade[i];
		getline(iss,temp,',');
	    iss>>edclab_grade[i];
		getline(iss,temp,',');
		iss>>dldlab_grade[i];
		i++;
	}
	cout<<"Enter roll number to update data: "<<endl;
	cin>>r;
	for(int j=0; j<size; j++)
	{
		if(r==roll[j])
		{
			index=j;
		}
	}
	cout<<"Enter Name: "<<endl;
	cin.ignore(200,'\n');
	getline(cin,name1);
	cout<<"Enter roll number: "<<endl;
	cin>>roll1;
	cout<<"Enter Grades of 8 subjects: "<<endl;
		cout<<"Enter Your OOP Grade: ";
	cin>>oppgrade;
	cout<<"Enter Your DLD Grade: ";
	cin>>dldgrade;
	cout<<"Enter Your LA Grade: ";
	cin>>lagrade;
	cout<<"Enter Your PST Grade: ";
	cin>>pstgrade;
	cout<<"Enter Your EDC Grade: ";
	cin>>edcgrade;
	cout<<"Enter Your OOP Lab Grade: ";
	cin>>opplabgrade;
	cout<<"Enter Your EDC Lab Grade: ";
	cin>>edclabgrade;
	cout<<"Enter Your DLD Lab Grade: ";
	cin>>dldlabgrade;
	stname[index]=name1;
	roll[index]=roll1;
	opp_grade[index]=oppgrade;
	dld_grade[index]=dldgrade;
	la_grade[index]=lagrade;
	pst_grade[index]=pstgrade;
	edc_grade[index]=edcgrade;
	opplab_grade[index]=opplabgrade;
	edclab_grade[index]=edclabgrade;
	dldlab_grade[index]=dldlabgrade;
	fout.open("students.csv",ios::out);
	fout<<temp1<<endl;
	fout<<temp2<<endl;
	for(int j=0; j<size; j++)
	{
		fout<<stname[j]<<",";
		fout<<roll[j]<<",";
		fout<<opp_grade[j]<<",";
		fout<<dld_grade[j]<<",";
		fout<<la_grade[j]<<",";
		fout<<pst_grade[j]<<",";
		fout<<edc_grade[j]<<",";
		fout<<opplab_grade[j]<<",";
		fout<<edclab_grade[j]<<",";
		fout<<dldlab_grade[j]<<"\n";	
	}
	fout.close();
	fout.open("text.txt",ios::out);
	fout<<size;
	fout.close();
	cout<<"Do you want to Update another data 'Y' or 'y' and Select  'N' or 'n' For Next Choice: "<<endl;
	cin>>ch;
    }
    while(ch=='Y' or ch=='y');
	}
	if(c=='R' or c=='r')
	{
	do{	fstream fin,fout;
	fin.open("text.txt",ios::in);
	fin>>size;
	fin.close();
	int roll[size];
float gpa[size];
string stname[size];
string oppgrade[size];
string dldgrade[size];
string lagrade[size];
string pstgrade[size];
string edcgrade[size];
string opplabgrade[size];
string edclabgrade[size];
string dldlabgrade[size];
string line,temp1,temp2,temp;

	int i=0; 
	// For File Read of csv and write gpa on other file
	fin.open("students.csv",ios::in);
	if(fin.is_open())
	{
		cout<<"Report Genrated Sucessfully Sucessfully:\n";
	}
	getline(fin,temp1);
	getline(fin,temp2);

	
		while(getline(fin,line))

 	   {
		istringstream iss(line);
		
		
	getline(iss,stname[i],',');
		 iss>>roll[i];
   getline(iss,temp2,',');
   getline(iss,oppgrade[i],',');
  getline(iss,dldgrade[i],',');
   getline(iss,lagrade[i],',');
	  getline(iss,pstgrade[i],',');		
      getline(iss,edcgrade[i],',');
      getline(iss,opplabgrade[i],',');
      getline(iss,edclabgrade[i],',');
    getline(iss,dldlabgrade[i],',');
	  float sum,c1,c2,c3,c4,c5,c6,c7,c8;//for gpa calulate
	  if(oppgrade[i]=="A")
	  c1=3*4.00;
	  else if(oppgrade[i]=="B")
	  c1=3*3.5;
	   else if(oppgrade[i]=="C")
	  c1=3*2.67;
	   else if(oppgrade[i]=="D")
	  c1=3*2;
	   else 
	   c1=3*0;
	    if(dldgrade[i]=="A")
	  c2=3*4.00;
	  else if(dldgrade[i]=="B")
	  c2=3*3.5;
	  else if(dldgrade[i]=="C")
	  c2=3*2.67;
	   else if(dldgrade[i]=="D")
	  c2=3*2;
	   else
	  c2=3*0;
	     if(lagrade[i]=="A")
	  c3=3*4.00;
	  else if(lagrade[i]=="B")
	  c3=3*3.5;
	  else if(lagrade[i]=="C")
	  c3=3*2.67;
	 else  if(lagrade[i]=="D")
	  c3=3*2;
	   else
	  c3=3*0;
	    if(pstgrade[i]=="A")
	  c4=2*4.00;
	   else if(pstgrade[i]=="B")
	  c4=2*3.5;
	   else if(pstgrade[i]=="C")
	  c4=2*2.67;
	  else if(pstgrade[i]=="D")
	  c4=2*2;
	  else 
	  c4=2*0;
	     if(edcgrade[i]=="A")
	  c5=3*4.00;
	  else if(edcgrade[i]=="B")
	  c5=3*3.5;
	  else if(edcgrade[i]=="C")
	  c5=3*2.67;
	 else  if(edcgrade[i]=="D")
	  c5=3*2;
	   else
	  c5=3*0;
	  if(opplabgrade[i]=="A")
	  c6=1*4.00;
	  else if(opplabgrade[i]=="B")
	  c6=1*3.5;
	   else if(opplabgrade[i]=="C")
	  c6=1*2.67;
	   else if(oppgrade[i]=="D")
	  c6=1*2;
	   else 
	   c6=1*0;
	   if(edclabgrade[i]=="A")
	  c7=1*4.00;
	  else if(edclabgrade[i]=="B")
	  c7=1*3.5;
	   else if(edclabgrade[i]=="C")
	  c7=1*2.67;
	   else if(edclabgrade[i]=="D")
	  c7=1*2;
	   else 
	   c7=1*0;
	   if(dldlabgrade[i]=="A")
	  c8=1*4.00;
	  else if(dldlabgrade[i]=="B")
	 c8=1*3.5;
	   else if(dldlabgrade[i]=="C")
	  c8=1*2.67;
	   else if(dldlabgrade[i]=="D")
	  c8=1*2;
	   else 
	   c8=1*0;
	   sum=c1+c2+c3+c4+c5+c6+c7+c8;
	   gpa[i]=round((sum/17)*100)/100;
	   i++;
	   
	  
	  	
	}
	
	cout<<" \n\n\t\t\t\t\t\t<<<<<<<<<<Students Result sheet>>>>>\n\n";
	cout<<"\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n\n\n";
	cout<<setw(15)<<right<<"student's Name"<<setw(20)<<right<<"Roll No."<<setw(13)<<right<<"OPP Grade"<<setw(13)<<right<<"DLD Grade"<<setw(13)<<right<<"LA Grade"<<setw(13)<<right<<"PST Grade"<<setw(13)<<right<<"EDC Grade"<<setw(16)<<right<<"OOP Lab-Grade"<<setw(16)<<right<<"EDC Lab-Grade"<<setw(16)<<right<<"DLD Lab-Grade"<<setw(9)<<right<<"GPA"<<endl<<endl<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n";
	for(int i=0;i<size;i++)
	{
		cout<<setw(30)<<left<<stname[i]<<setw(10)<<left<<roll[i]<<setw(3)<<right<<oppgrade[i]<<setw(13)<<right<<dldgrade[i]<<setw(14)<<right<<lagrade[i]<<setw(12)<<right<<pstgrade[i]<<setw(15)<<right<<edcgrade[i]<<setw(14)<<right<<opplabgrade[i]<<setw(13)<<right<<edclabgrade[i]<<setw(17)<<right<<dldlabgrade[i]<<"            "<<setw(4)<<right<<gpa[i]<<endl;
	}
	fin.close();
	fout.open("text.txt",ios::out);
	fout<<size;
	fout.close();
	cout<<" Enter 'Y' or 'y' to See All Students Result sheet again & Any Key For Next Move: "<<endl;
	cin>>ch;
	}	
	while(ch=='Y' || ch=='y');		
	}
	
	if(c=='G'|| c=='g'){
	do
	{ 	fstream fin,fout;// For File Read of csv and write gpa on other file
	fin.open("text.txt",ios::in);
	fin>>size;
	fin.close();
	  int roll[size];
	 char opp_grade[size];
     char  dld_grade[size];
     char la_grade[size];
     char pst_grade[size];
     char edc_grade[size];
     char opplab_grade[size];
     char edclab_grade[size];
     char dldlab_grade[size];
     string stname[size];
    float gpa[size];
	int i=0;
	string  line,temp1,temp2,temp;
	fin.open("students.csv",ios::in);
	getline(fin,temp1);
	getline(fin,temp2);
		while(getline(fin,line))

 	   {
		istringstream iss(line);
		
		getline(iss,stname[i],',');
		iss>>roll[i];
		getline(iss,temp,',');
		iss>>opp_grade[i];
		getline(iss,temp,',');
		iss>>dld_grade[i];
		getline(iss,temp,',');
		iss>>la_grade[i];
		getline(iss,temp,',');
		iss>>pst_grade[i];
		getline(iss,temp,',');
		iss>>edc_grade[i];
		getline(iss,temp,',');
		iss>>opplab_grade[i];
		getline(iss,temp,',');
	    iss>>edclab_grade[i];
		getline(iss,temp,',');
		iss>>dldlab_grade[i];
	  float sum,c1,c2,c3,c4,c5,c6,c7,c8;//for gpa calulate
	  if(opp_grade[i]=='A')
	  c1=3*4.00;
	  else if(opp_grade[i]=='B')
	  c1=3*3.5;
	   else if(opp_grade[i]=='C')
	  c1=3*2.67;
	   else if(opp_grade[i]=='D')
	  c1=3*2;
	   else 
	   c1=3*0;
	    if(dld_grade[i]=='A')
	  c2=3*4.00;
	  else if(dld_grade[i]=='B')
	  c2=3*3.5;
	  else if(dld_grade[i]=='C')
	  c2=3*2.67;
	   else if(dld_grade[i]=='D')
	  c2=3*2;
	   else
	  c2=3*0;
	     if(la_grade[i]=='A')
	  c3=3*4.00;
	  else if(la_grade[i]=='B')
	  c3=3*3.5;
	  else if(la_grade[i]=='C')
	  c3=3*2.67;
	 else  if(la_grade[i]=='D')
	  c3=3*2;
	   else
	  c3=3*0;
	    if(pst_grade[i]=='A')
	  c4=2*4.00;
	   else if(pst_grade[i]=='B')
	  c4=2*3.5;
	   else if(pst_grade[i]=='C')
	  c4=2*2.67;
	  else if(pst_grade[i]=='D')
	  c4=2*2;
	  else 
	  c4=2*0;
	     if(edc_grade[i]=='A')
	  c5=3*4.00;
	  else if(edc_grade[i]=='B')
	  c5=3*3.5;
	  else if(edc_grade[i]=='C')
	  c5=3*2.67;
	 else  if(edc_grade[i]=='D')
	  c5=3*2;
	   else
	  c5=3*0;
	  if(opplab_grade[i]=='A')
	  c6=1*4.00;
	  else if(opplab_grade[i]=='B')
	  c6=1*3.5;
	   else if(opplab_grade[i]=='C')
	  c6=1*2.67;
	   else if(opplab_grade[i]=='D')
	  c6=1*2;
	   else 
	   c6=1*0;
	   if(edclab_grade[i]=='A')
	  c7=1*4.00;
	  else if(edclab_grade[i]=='B')
	  c7=1*3.5;
	   else if(edclab_grade[i]=='C')
	  c7=1*2.67;
	   else if(edclab_grade[i]=='D')
	  c7=1*2;
	   else 
	   c7=1*0;
	   if(dldlab_grade[i]=='A')
	  c8=1*4.00;
	  else if(dldlab_grade[i]=='B')
	 c8=1*3.5;
	   else if(dldlab_grade[i]=='C')
	  c8=1*2.67;
	   else if(dldlab_grade[i]=='D')
	  c8=1*2;
	   else 
	   c8=1*0;
	   sum=c1+c2+c3+c4+c5+c6+c7+c8;
	   gpa[i]=round((sum/17)*100)/100;
	   i++;
	   
	  	}
	
	fout.open("Result.csv",ios::out);
	if(fout.is_open())
	{
		cout<<" Report Genrated Successfully...\n";
		
	}
	else 
	{
		cout<<"Error\n";
	}
	for(int i=0;i<size;i++)
	{
	fout<<stname[i]<<","<<roll[i]<<","<<opp_grade[i]<<","<<dld_grade[i]<<","<<la_grade[i]<<","<<pst_grade[i]<<","<<edc_grade[i]<<","<<opplab_grade[i]<<","<<edclab_grade[i]<<","<<dldlab_grade[i]<<","<<gpa[i]<<endl;
	}
	fout.close();
	cout<<"Enter 'y' or 'Y' to Generate Report Or Any Key for Next Move: "<<endl;
	cin>>ch; 
	fout.open("text.txt",ios::out);
	fout<<size;
	fout.close();
	}
while(ch=='y'|| ch=='Y');

}
if(c=='s' || c=='S')
{
	do
	{fstream fin,fout;// For File Read of csv and write gpa on other file
       fin.open("text.txt",ios::in);
    	fin>>size;
	  fin.close();
	  int roll[size];
	 char opp_grade[size];
     char  dld_grade[size];
     char la_grade[size];
     char pst_grade[size];
     char edc_grade[size];
     char opplab_grade[size];
     char edclab_grade[size];
     char dldlab_grade[size];
     string stname[size];
    float gpa[size];
	int sroll, i=0,check=1;
	string  line,temp1,temp2,temp;
	
	fin.open("students.csv",ios::in);
	getline(fin,temp1);
	getline(fin,temp2);
		while(getline(fin,line))

 	   {
		istringstream iss(line);
		
		getline(iss,stname[i],',');
		iss>>roll[i];
		getline(iss,temp,',');
		iss>>opp_grade[i];
		getline(iss,temp,',');
		iss>>dld_grade[i];
		getline(iss,temp,',');
		iss>>la_grade[i];
		getline(iss,temp,',');
		iss>>pst_grade[i];
		getline(iss,temp,',');
		iss>>edc_grade[i];
		getline(iss,temp,',');
		iss>>opplab_grade[i];
		getline(iss,temp,',');
	    iss>>edclab_grade[i];
		getline(iss,temp,',');
		iss>>dldlab_grade[i];
	  float sum,c1,c2,c3,c4,c5,c6,c7,c8;//for gpa calulate
	  if(opp_grade[i]=='A')
	  c1=3*4.00;
	  else if(opp_grade[i]=='B')
	  c1=3*3.5;
	   else if(opp_grade[i]=='C')
	  c1=3*2.67;
	   else if(opp_grade[i]=='D')
	  c1=3*2;
	   else 
	   c1=3*0;
	    if(dld_grade[i]=='A')
	  c2=3*4.00;
	  else if(dld_grade[i]=='B')
	  c2=3*3.5;
	  else if(dld_grade[i]=='C')
	  c2=3*2.67;
	   else if(dld_grade[i]=='D')
	  c2=3*2;
	   else
	  c2=3*0;
	     if(la_grade[i]=='A')
	  c3=3*4.00;
	  else if(la_grade[i]=='B')
	  c3=3*3.5;
	  else if(la_grade[i]=='C')
	  c3=3*2.67;
	 else  if(la_grade[i]=='D')
	  c3=3*2;
	   else
	  c3=3*0;
	    if(pst_grade[i]=='A')
	  c4=2*4.00;
	   else if(pst_grade[i]=='B')
	  c4=2*3.5;
	   else if(pst_grade[i]=='C')
	  c4=2*2.67;
	  else if(pst_grade[i]=='D')
	  c4=2*2;
	  else 
	  c4=2*0;
	     if(edc_grade[i]=='A')
	  c5=3*4.00;
	  else if(edc_grade[i]=='B')
	  c5=3*3.5;
	  else if(edc_grade[i]=='C')
	  c5=3*2.67;
	 else  if(edc_grade[i]=='D')
	  c5=3*2;
	   else
	  c5=3*0;
	  if(opplab_grade[i]=='A')
	  c6=1*4.00;
	  else if(opplab_grade[i]=='B')
	  c6=1*3.5;
	   else if(opplab_grade[i]=='C')
	  c6=1*2.67;
	   else if(opplab_grade[i]=='D')
	  c6=1*2;
	   else 
	   c6=1*0;
	   if(edclab_grade[i]=='A')
	  c7=1*4.00;
	  else if(edclab_grade[i]=='B')
	  c7=1*3.5;
	   else if(edclab_grade[i]=='C')
	  c7=1*2.67;
	   else if(edclab_grade[i]=='D')
	  c7=1*2;
	   else 
	   c7=1*0;
	   if(dldlab_grade[i]=='A')
	  c8=1*4.00;
	  else if(dldlab_grade[i]=='B')
	 c8=1*3.5;
	   else if(dldlab_grade[i]=='C')
	  c8=1*2.67;
	   else if(dldlab_grade[i]=='D')
	  c8=1*2;
	   else 
	   c8=1*0;
	   sum=c1+c2+c3+c4+c5+c6+c7+c8;
	   gpa[i]=round((sum/17)*100)/100;
	   i++;
	   
	  	}
	  	
	  	cout<<"\n Enter Roll No. to Search Student Report:\n";
	  	cin>>sroll;
	  	for(int j=0;j<size;j++){
	  	if(sroll==roll[j])
		  {
		  cout<<setw(15)<<right<<"student's Name"<<setw(20)<<right<<"Roll No."<<setw(13)<<right<<"OPP Grade"<<setw(13)<<right<<"DLD Grade"<<setw(13)<<right<<"LA Grade"<<setw(13)<<right<<"PST Grade"<<setw(13)<<right<<"EDC Grade"<<setw(16)<<right<<"OPP Lab-grade"<<setw(16)<<right<<"EDC Lab-Grade"<<setw(16)<<right<<"DLD Lab-Grade"<<setw(9)<<right<<"GPA"<<endl<<endl<<endl;
		
		  cout<<" "<<setw(28)<<left<<stname[j]<<setw(10)<<left<<roll[j]<<setw(3)<<right<<opp_grade[j]<<setw(13)<<right<<dld_grade[j]<<setw(14)<<right<<la_grade[j]<<setw(12)<<right<<pst_grade[j]<<setw(15)<<right<<edc_grade[j]<<setw(14)<<right<<opplab_grade[j]<<setw(13)<<right<<edclab_grade[j]<<setw(17)<<right<<dldlab_grade[j]<<"            "<<setw(4)<<right<<gpa[j]<<endl;
	     check=0;
	      break;
	       }
	    
		}
		if(check==1)
		{
	    cout<<" \n\nYour Entered Roll No. Report is Not Found \n\n";	
		}	
		cout<<"\n\nEnter 's' or 'S' to search Student Data Again or Press Any Key to Next Move: \n";
		cin>>ch;
		fout.open("text.txt",ios::out);
	fout<<size;
	fout.close();		
	  		}
while(ch=='S' || ch=='s');
		
}

	cout<<"\nDo you want to run Program again For again 'Y' or 'y' and Any Key to End Program:";
	cin>>op;
    }
    while(op=='Y' or op=='y');
    

} 




















