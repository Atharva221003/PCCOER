#include<iostream>
#include<algorithm>
using namespace std;

class person {
	public:
		string name;
		string dob;
		long mob;
		
		void getdata() {
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter Date of birth: "<<endl;
			cin>>dob;
			cout<<"Enter Mobile number: "<<endl;
			cin>>mob;
		}
			
		void displaydata() {
			cout<<"Name: "<<name<<endl;
			cout<<"DOB: "<<dob<<endl;
			cout<<"Mob no.: "<<mob<<endl;
		}
};

bool compare(const person &p, const person &q) {
	return p.name < q.name;
}

int main() {
	int n;
	cout<<"Enter total no. of records: ";
	cin>>n;
	string z[n];
	person a[n];
	for(int i=0; i<n; i++) {
		a[i].getdata();
    }
   
    cout<<"\tSorted data"<<endl;
    sort(a, a+n, compare);
    for(int i=0;i<n;i++) {
        a[i].displaydata();
    }
    cout<<endl;
    
    string nm;
    cout<<"Enter the name to search: ";
    cin>>nm;
    for(int i=0;i<n;i++) {
        z[i]=a[i].name;
    }
    
    if(binary_search(z, z+n, nm)) {
        cout<<"\tRecord found\n";
    }
    else
    	cout<<"\tRecord not found\n";
}
