#include <iostream>
using namespace std;

//template class with two attributes and two methods
template <class T1>			//making a class template
class Test1 {				//name the class
	T1 first, second;		//two attributes
public:						//public methods
	Test1(T1 a, T1 b) {		//setter method
		first = a;			//first attribute
		second = b;			//second attribute
	}
	T1 bigger();			//return the bigger method reserve space
	double average();		//return the average method reseve space
};


template <class T1>			//template return bigger value
T1 Test1<T1>::bigger() {	//part of Test1 class with T1 type
	return (first > second ? first : second);	//returns larger value
}

template <class T1>				//template return bigger value
double Test1<T1>::average() {	//part of Test1 class with T1 type
	return ((first + second) / 2);//returns average value
}

template <typename T>			//template method for printing 1 item
void printer(T t)				//printer method
{
	cout << t << endl;			//what printer method does
}

template <typename T, typename ...U>	//template method for printing multiple items
void printer(T t, U ...u)
{
	cout << t;							//what printer method does
	printer(u...);						//to print out multiple items
}


int main() {

	Test1 <int> bo(69, 105);			//int data set
	cout << "int data type: " << bo.bigger() << endl;	//run bigger method  without printer method template
	double averageValInt = bo.average();		//run average method, store  in variable
	printer("int data type: ", averageValInt);	//use printer method to display average value

	Test1 <double> boo(69.5, 105.5);	//double data set
	double biggerValDbl = boo.bigger();	//run bigger method, store  in variable
	printer("double data type: ", biggerValDbl);
	cout << "double data type: " << boo.average() << endl;	//run bigger method  without printer method template
}