#include <iostream>

using namespace std;
int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b) {
	if (b == 0)
		cout << "\n B sai vui long nhap lai";
	else
	{
		return a / b;
	}
}
int hieu(int a, int b) {
	return a - b;
}
int tong(int a, int b) {
	return a + b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap so thu nhat: ";
	cin>>a;
	cout<<"Nhap so thu hai: ";
	cin>>b;
	cout<<a<<" + "<<b<<" = "<<tong(a+b)<<endl;
	cout<<a<<" - "<<b<<" = "<<hieu(a+b)<<endl;
	cout<<a<<" * "<<b<<" = "<<tich(a+b)<<endl;
	cout<<a<<" / "<<b<<" = "<<thuong(a+b)<<endl;
	system("pause");
	return 0;
}