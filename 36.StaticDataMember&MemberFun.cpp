
	// static data member and static member function
#include<iostream>
using namespace std;
class Item
{
	int ic;
	float ip;
	static float tot;//total chi ji value ahe ti delete nhi hou tashich rahavi mhnun  static use kel,tyachi memory destroy nhi hou mhnun
    public:
	void in()
	{
		cout<<endl<<"Enter the code and price: ";
		cin>>ic>>ip;
		tot=tot+ip;
	}
	void out()
	{
		cout<<endl<<"Item Code: "<<ic<<"\t Price: "<<ip;
	}
	void showtot()
	{
		cout<<"\n Total Bill: "<<tot;
	}
};
float Item::tot;//syntax ahe static ch <dtype classname ::variable name;>
int main()
{
	Item i1, i2, i3;

	i1.in();
	i2.in();
	i3.in();

	i1.out();
	i2.out();
	i3.out();

	i1.showtot();	// i_.showtot();

	return 0;
}
