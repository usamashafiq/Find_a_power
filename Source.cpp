#include<iostream>
#include<conio.h>
using namespace std;
int power(int, int =2);
void main() {
	int a,p=0,q;
	char c;
	cout << "Enter a number"<<endl;
	cin >> a;
	cout << "you want find a power>2    ans in (Y/N) " << endl;
	cin >> c;
	if (c == 'y' || c == 'Y') {
		cout << "Enter a power " << endl;
		cin >> q;
		cout<<power(a, q);
	}
	else {
		p = power(a);
		cout << endl << p << endl;
	}
	_getch();
}
int power(int a, int b) {

	int ans =1;
	for (int i = 1; i <= b; i++) {
		ans *= a;
	}
	return ans;





}
