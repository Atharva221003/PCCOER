/*      PROBLEM STATEMENT
 Write a C++ program that creates an output file, writes information to it, 
 closes the file and open it again as an input file and read the information 
 from the file.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char Give_Info[200];
  	ofstream Out_file;   //provides output operations
  	Out_file.open("Information.txt", ios::out);  //open for output operations
  	cout<<"\n\t Enter information to store it in file.(Not more than 200 characters)\n";
  	fgets(Give_Info,200,stdin);
  	Out_file<<Give_Info;
  	Out_file.close();
  
	char Get_Info[200];
  	ifstream In_file;  //provides input operations
  	In_file.open("Information.txt", ios::in);  //open for input operations
  	In_file.getline(Get_Info, 200);  //read next string from file
  	cout<<"\n\n\t Given Information is :\n";
   	cout<<Get_Info;
  	In_file.close();
  
  	return 0;
  	
  	/*A batch file is a script file.
  	It consists of a series of commands to be executed by the command-line interpreter,
  	stored in a plain text file.*/
}
