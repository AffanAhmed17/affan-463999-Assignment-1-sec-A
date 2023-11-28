#include<iostream>
#include<cstring>
using namespace std;

int main(){
/*	int a;
	cout<<"enter a positive integer:";
	cin>>a;
	cout<<"the factors of "<<a<<" are:"<<endl;
	
		for(int i=1; i<=a; i++){
			if(a % i==0){
				cout<<i<<" ,";
			}
		}
		
	int b;
	cout<<"please give a number:";
	cin>>b;
	if (10 < b <20){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	int n;
	int prime;
	cout<<"Please enter the number"<<endl;
	cin>>n;
	for(int i=n; i>=2; i-=1){
		for(int j=2; j<=i; j+=1){
			if(i%j==0 && i==j){prime = j;}
			if(i%j==0){break;}
			}
		if(prime == i){break;}
		}
	cout<<"The largest prime is: "<<prime<<endl;
	
	char n1[10];
	char n2[10];

	cout<<"Please enter the strings"<<endl;
	cin>>n1;
	cin>>n2;
	int p = strlen(n2)-1;
	char n3[p];
	if(strcmp(n1, n2)==0){
		for(int i=0; i<10; i+=1){
			n3[p]=n2[i];
			p=p-1;}	
		cout<<"The reversed string is: "<<n3<<endl;}
	else{cout<<"the strings are not the same"<<endl;}
	
    int divid;
    int divis;
    cout<<"enter dividend:";
    cin>>divid;
    cout<<"enter divisor:";
    cin>>divis;

    
    int quot = 0;

    
    while (divid >= divis) {
        divid -= divis;
        quot++;
    }

    
    cout << "Quotient: " << quot << endl;
    
     int a[] = {1, 2, 3, 4, 5};
    int size = 5;

  
   cout << "Array elements before adding more elements: ";
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }

   
    int newSize = size + 3; 
    int* newArray = new int[newSize];

   
    for (int i = 0; i < size; ++i) {
        newArray[i] = a[i];
    }

  
    newArray[size] = 6;
    newArray[size + 1] = 7;
    newArray[size + 2] = 8;

 
    cout << "Array elements after adding more elements: ";
    for (int i = 0; i < newSize; ++i) {
       cout << newArray[i] << " ";
    }
 
   
    delete[] newArray;
    
     string S,newS;
  int i,j;
  cout<<"Enter any  string:"<<endl;
  cin>>S;
  cout<<endl;
  for(i=0;i<S.length();i++){ 
  	for( j=0;j<S.length();j++){  
  	if(S[i]==S[j]){ 
	 break; }         
	} if(i==j){    
	 newS+=S[i]; } 
  } cout<<"sting without duplicate characters: "<<newS; */
  
    
	return 0;	
}
