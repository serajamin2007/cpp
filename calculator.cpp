#include <iostream>
using namespace std;
class Calculator {
public:
	int A, B;
    void input() {
        cout << "Enter First Number: ";
        cin >> A; 
        cout << "Enter Second Number: ";
        cin >> B;
    }
    int add() {
        return A + B;
    }
    int sub();
    /*{
        return A - B;
    }*/
    int mul() {
        return A * B;
    }
    int div() {
        if (B == 0)
	{
            cout << "Divison By Zero" << endl;
        }
        else {
            return A / B;
        }
    }
};
int Calculator :: sub()
{
	return A - B;
}
int main()
{
    int choice;
    Calculator obj;
    cout << "1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
	    obj.input();
	    cout << "Result: " << obj.add() << endl;
	    break;
	case 2:
	    obj.input();
	    cout << "Result: " << obj.sub() << endl;
	    break;
	case 3:
	    obj.input();
	    cout << "Result: " << obj.mul() << endl;
	    break;
	case 4:
	    obj.input();
	    cout << "Result: " << obj.div() << endl;
	    break;
	}
    return 0;
}
