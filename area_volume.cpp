#include <iostream>
using namespace std;
class Measure {
    int height, length, width;
public:
    void input(int l,int w,int h) {
        length = l;
	width = w;
	height = h;
    }
    int area() {
        return 2*((length*width)+(width*height)+(height*length));
    }
    int volume() {
        return length*width*height;
    }
    
};
int main()
{
    int choice;
    int l, w, h;
    Measure obj;
    cout << "1.Area\n"<<"2.Volume\n";
	cin >> choice;
	cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
	cout << "Enter height: ";
        cin >> h;
	switch (choice)
	{
	case 1:
	    obj.input(l,w,h);
	    cout << "Result: " << obj.area() << endl;
	    break;
	case 2:
	    obj.input(l,w,h);
	    cout << "Result: " << obj.volume() << endl;
	    break;
	}
    return 0;
}
