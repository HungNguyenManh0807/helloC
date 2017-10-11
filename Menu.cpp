#include <iostream>
using namespace std;
int main(int argc, char** argv)//int main() {}
{
	int Menu ;
	for(Menu =1 ; Menu =1;){
	//do {
	cout<<"Menu"<<endl;
	cout<< " 1. Mon trung luoc." <<endl;
	cout<< " 2. Mon rau muong luoc." <<endl;
	cout<< " 3. Mon thit kho tau." <<endl;
	cout<< " 4. Mon ca qua hap bau." <<endl;
	cout<< " 5. Mon khoai tay chien." <<endl;
	cout<<"----------------------------------------"<<endl;

		int Monan;
		cout<<"Moi ban chon mon an bang cach nhap 1 so: ";
		cin>>Monan;
		switch(Monan){
			case 1:
			cout<< "Ban chon mon trung luoc!" <<endl;
			break;
			case 2:
			cout<< "Ban chon mon rau muong luoc!" <<endl;
			break;
			case 3:
			cout<< "Ban chon mon thit kho tau!" <<endl;
			break;
			default : 
			cout<< "Mon ban chon khong co trong menu!\nMoi ban chon lai!" <<endl;
			break;
			case 4:
			cout<< "Ban chon mon Ca qua hap bau!" <<endl;
			break;
			case 5:
			cout<< "Ban chon mon khoai tay chien!" <<endl;
			break;
		}
		
		cout<<"+++++++++++++"<<endl;
	//}while(Menu = 1);
		cout<< endl;
		}
	return 0;
}

